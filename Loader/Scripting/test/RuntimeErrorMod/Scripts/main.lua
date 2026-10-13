-- Errors on every tick: the runtime must log each error with a traceback, fault the mod after 3 errors and stop
-- calling it, while the other mods keep running.
Events.OnTick(function()
    local nothing = nil
    return nothing.boom
end)
Log.Info("RuntimeErrorMod loaded")
