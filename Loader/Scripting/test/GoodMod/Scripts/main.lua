-- GoodMod: exercises the proposed API against the mock reflection. Check(cond, msg) is a harness-only helper.

-- sandbox / require ---------------------------------------------------------------------------------------------------
local util = require("util")
Check(util.Double(21) == 42, "require() loads Scripts/util.lua")
Check(require("util") == util, "require() caches modules")
Check(not pcall(require, "../evil"), "require() rejects paths outside Scripts/")
Check(package == nil and io == nil, "package and io libraries are not available")
Check(os.execute == nil and os.remove == nil and os.time ~= nil, "os is reduced to time/clock/date")
Check(dofile == nil and loadfile == nil, "dofile/loadfile removed")
local chunk, loadErr = load(string.dump(function() end))
Check(chunk == nil and tostring(loadErr):find("binary") ~= nil, "load() rejects bytecode: " .. tostring(loadErr))
Check(load("return 1 + 1")() == 2, "load() still accepts text chunks")
Check(Mod.Name == "GoodMod", "Mod.Name")

-- objects -------------------------------------------------------------------------------------------------------------
local player = FindObject("BP_BaseCharacter_C_0")
Check(player ~= nil and player:IsValid(), "FindObject finds the player")
Check(player:GetName() == "BP_BaseCharacter_C_0", "GetName")
Check(player:GetClass() == "BP_BaseCharacter_C", "GetClass")
Check(player:GetFullName() == "BP_BaseCharacter_C BP_BaseCharacter_C_0", "GetFullName")
Check(player:IsA("Actor") and player:IsA("BP_BaseCharacter_C") and not player:IsA("Nope"), "IsA walks the super chain")
Check(tostring(player) == "UObject(BP_BaseCharacter_C_0 : BP_BaseCharacter_C)", "tostring: " .. tostring(player))
Check(FindFirstOf("BP_BaseCharacter_C") == player, "FindFirstOf + __eq")
local characters = #FindAllOf("BP_BaseCharacter_C") -- 2 on the first run, 1 after the harness destroyed the npc
Check(characters >= 1 and #FindAllOf("Actor") == characters + 1, "FindAllOf includes subclasses")
Check(FindFirstOf("NotLoadedYet_C") == nil and #FindAllOf("NotLoadedYet_C") == 0, "unknown class -> nil / empty table")
local npc = FindObject("BP_BaseCharacter_C_1")
local plainActor = FindObject("Actor_0")

-- properties by name (reflection) -------------------------------------------------------------------------------------
Check(math.type(player.Health) == "float", "read float property declared in the super class") -- 100 on the first run, 75.5 after a reload
player.Health = 75.5
Check(player.Health == 75.5, "write float")
player.Gold = 10
Check(player.Gold == 10 and math.type(player.Gold) == "integer", "int property is a Lua integer")
player.Id = 9007199254740993
Check(player.Id == 9007199254740993, "int64 keeps full precision (2^53 + 1)")
player.Stamina = 0.25
Check(player.Stamina == 0.25, "double")
player.bHidden = true
player.bCanTick = false
Check(player.bHidden == true and player.bCanTick == false, "bitfield bools")
player.bCanTick = true
Check(player.bHidden == true and player.bCanTick == true, "bitfield bools share a byte without clobbering each other")
player.Tag = "Hero"
Check(player.Tag == "Hero", "FName write/read")
player.DisplayName = "Ünïcode Player"
Check(player.DisplayName == "Ünïcode Player", "FString UTF-8 <-> UTF-16 roundtrip")
player.Friend = npc
Check(player.Friend == npc, "object property write/read")
player.Friend = plainActor
Check(player.Friend == plainActor, "object property accepts a subclass-compatible object")
player.Friend = nil
Check(player.Friend == nil, "object property nil")

local function errorOf(fn)
    local ok, err = pcall(fn)
    return (not ok) and tostring(err) or nil
end
local e
e = errorOf(function() player.Companion = plainActor end)
Check(e and e:find("expects a BP_BaseCharacter_C, got a Actor", 1, true), "object property is class-checked: " .. tostring(e))
e = errorOf(function() player.Gold = "lots" end)
Check(e and e:find("IntProperty expects an integer, got string", 1, true), "type error: " .. tostring(e))
e = errorOf(function() player.Gold = 1.5 end)
Check(e and e:find("expects an integer", 1, true), "fractional number refused for int: " .. tostring(e))
e = errorOf(function() player.Gold = 2 ^ 40 end)
Check(e and e:find("out of range", 1, true), "int32 range check: " .. tostring(e))
e = errorOf(function() player.bHidden = 1 end)
Check(e and e:find("expects a boolean", 1, true), "bool type check: " .. tostring(e))
e = errorOf(function() return player.DoesNotExist end)
Check(e and e:find("has no property or function 'DoesNotExist'", 1, true), "unknown name is an error: " .. tostring(e))
e = errorOf(function() player.DoesNotExist = 1 end)
Check(e and e:find("has no property 'DoesNotExist'", 1, true), "unknown property write is an error: " .. tostring(e))
Check(player:Has("Gold") and player:Has("AddGold") and not player:Has("DoesNotExist"), "Has()")
Check(player:GetPropertyType("Stamina") == "DoubleProperty", "GetPropertyType")

-- UFunction calls via ProcessEvent ------------------------------------------------------------------------------------
Check(player:AddGold(5) == 15, "method call returns the return value")
Check(player:Call("AddGold", 5) == 20, "explicit :Call form")
local ok, greeting = player:GetGreeting("Hello")
Check(ok == true and greeting == "Hello, Ünïcode Player", "return value first, then out params: " .. tostring(greeting))
Check(player:GetHealth() == 75.5, "function declared in the super class")
e = errorOf(function() return player:AddGold() end)
Check(e and e:find("AddGold expects 1 argument(s) (Amount: IntProperty), got 0", 1, true), "argument count validated: " .. tostring(e))
e = errorOf(function() return player:AddGold(1, 2) end)
Check(e and e:find("got 2", 1, true), "extra arguments refused: " .. tostring(e))
e = errorOf(function() return player:AddGold("x") end)
Check(e and e:find("AddGold argument 1: Amount: IntProperty expects an integer, got string", 1, true), "argument type validated: " .. tostring(e))
e = errorOf(function() return player:BrokenLayout(1) end)
Check(e and e:find("parameter layout mismatch", 1, true), "layout validated against ParamsSize: " .. tostring(e))
e = errorOf(function() return player.AddGold(5) end)
Check(e and e:find("call it as a method", 1, true), "obj.Func() instead of obj:Func() explained: " .. tostring(e))
Check(player.Gold == 20, "failed calls did not run the function")

-- hooks ---------------------------------------------------------------------------------------------------------------
hookCalls = 0
postCalls = 0
Hooks.Register("BP_BaseCharacter_C:ReceiveTick",
    function(self, params)
        hookCalls = hookCalls + 1
        Check(self == player, "hook self is the context object")
        params.DeltaSeconds = params.DeltaSeconds * 2 -- pre hook may change inputs
    end,
    function(self, params, ret)
        postCalls = postCalls + 1
        Check(ret == nil, "no return value -> nil")
    end)

local lastAddGold, leakedParams
local addGoldHook = Hooks.Register("BP_BaseCharacter_C:AddGold", nil, function(self, params, ret)
    lastAddGold = ret
    Check(params.Amount == 1, "post hook reads input params by name")
    leakedParams = params
end)
Check(player:AddGold(1) == 21 and lastAddGold == 21, "post hook sees the return value of a Lua-initiated call")
e = errorOf(function() return leakedParams.Amount end)
Check(e and e:find("outside of their hook callback", 1, true), "params view dies after the callback: " .. tostring(e))
Check(Hooks.Unregister(addGoldHook) == true, "Unregister")
Hooks.Register("BP_BaseCharacter_C:AddGold", nil, function() end) -- keep 2 hooks registered for the harness count
e = errorOf(function() Hooks.Register("BP_BaseCharacter_C:Nope", function() end) end)
Check(e and e:find("not found", 1, true), "hooking a missing UFunction is an error: " .. tostring(e))

-- game thread, events -------------------------------------------------------------------------------------------------
local order = {}
GameThread.Run(function() order[#order + 1] = "task" end)
order[#order + 1] = "main"

local tick = 0
Events.OnTick(function(dt)
    tick = tick + 1
    if tick == 1 then
        Check(order[1] == "main" and order[2] == "task", "GameThread.Run runs on the next tick, never inline")
        Check(GameThread.IsInGameThread(), "callbacks run on the game thread")
        Check(math.abs(dt - 0.016) < 1e-6, "OnTick gets the delta time")
    elseif tick == 2 then
        Check(hookCalls == 1, "hook ran for the game-thread call only (off-thread call skipped): " .. hookCalls)
        Check(postCalls == 1, "post hook ran once: " .. postCalls)
        Check(not npc:IsValid(), "handle to a destroyed object is invalid")
        local err = errorOf(function() return npc.Gold end)
        Check(err and err:find("no longer valid", 1, true), "access through a dead handle is a Lua error: " .. tostring(err))
        Check(tostring(npc) == "UObject(invalid)", "tostring of a dead handle")
    end
end)

Log.Info("main.lua done, player {} has {} gold", player:GetName(), player.Gold)
