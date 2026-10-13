# Third-Party Licenses and Attribution

MDML itself is licensed under the GNU LGPL v2.1 (see `LICENSE`). It includes or builds on the third-party components listed below. Each keeps its own license and copyright; the notices are reproduced here as required by those licenses.

Where a vendored folder does not contain the license file, this document says so and records the upstream license under "Follow-ups" at the end. No license text was fetched from the web for this document; the texts below are copied from files in this repository.

Contents:

1. spdlog (and bundled fmt)
2. Dear ImGui (and backends, bundled stb, ProggyClean font)
3. MinHook (and HDE)
4. GLM
5. Feather INI Parser
6. nlohmann/json
7. ImGuiColorTextEdit
8. Dumper-7 (attribution)
9. UnrealModLoader (project origin)
10. UE4SS (design inspiration only)
11. Follow-ups

---

## 1. spdlog (with bundled fmt)

- Location: `Dependencies/spdlog/spdlog`
- Upstream: https://github.com/gabime/spdlog
- Version: 1.8.5 (`spdlog/version.h`), bundled fmt 8.0.0 (`spdlog/fmt/bundled`)
- License: MIT (spdlog); fmt is also MIT (https://github.com/fmtlib/fmt, Copyright (c) 2012 - present, Victor Zverovich, per the bundled `core.h` header)
- License file in vendor folder: yes for spdlog (`Dependencies/spdlog/spdlog/LICENSE`); the fmt license file is not in the vendor folder (see Follow-ups)

```
The MIT License (MIT)

Copyright (c) 2016 Gabi Melman.                                       

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

-- NOTE: Third party dependency used by this software --
This software depends on the fmt lib (MIT License),
and users must comply to its license: https://github.com/fmtlib/fmt/blob/master/LICENSE.rst
```

## 2. Dear ImGui (docking branch) and backends

- Location: `Dependencies/ImGui/imgui`
- Upstream: https://github.com/ocornut/imgui
- Version: 1.89.2 WIP, docking branch snapshot (`IMGUI_VERSION_NUM 18916`). Includes the `imgui_impl_dx11` and `imgui_impl_win32` backends.
- License: MIT, Copyright (c) Omar Cornut (the vendored sources point to `LICENSE.txt` for the "standard MIT License")
- License file in vendor folder: **missing** (see Follow-ups)
- Local modification: `imgui.h` defines `IMGUI_API` as `LOADER_API` so the loader DLL can export ImGui.
- Bundled with Dear ImGui:
  - `imstb_rectpack.h`, `imstb_textedit.h`, `imstb_truetype.h`: stb libraries by Sean Barrett and contributors, public domain / MIT dual license. The license text is embedded at the end of each file.
  - ProggyClean font data embedded in `imgui_draw.cpp`: Copyright (c) 2004, 2005 Tristan Grimmer, MIT license (see the comment in `imgui_draw.cpp`).

## 3. MinHook (with HDE)

- Location: `Dependencies/MinHook`
- Upstream: https://github.com/TsudaKageyu/minhook
- Version: v1.3.4, tag `c3fcafdc10146beb5919319d0683e44e3c30d537` (`VENDORED.txt`)
- License: BSD-2-Clause (MinHook), plus the BSD-licensed Hacker Disassembler Engine (HDE32/HDE64, Vyacheslav Patkov)
- License file in vendor folder: yes (`Dependencies/MinHook/LICENSE.txt`)

```
MinHook - The Minimalistic API Hooking Library for x64/x86
Copyright (C) 2009-2017 Tsuda Kageyu.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

 1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER
OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

================================================================================
Portions of this software are Copyright (c) 2008-2009, Vyacheslav Patkov.
================================================================================
Hacker Disassembler Engine 32 C
Copyright (c) 2008-2009, Vyacheslav Patkov.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

 1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

-------------------------------------------------------------------------------
Hacker Disassembler Engine 64 C
Copyright (c) 2008-2009, Vyacheslav Patkov.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

 1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```

Authors (`AUTHORS.txt`):

```
Tsuda Kageyu <tsuda.kageyu@gmail.com>
 Creator, maintainer

Michael Maltsev <leahcimmar@gmail.com>
 Added "Queue" functions. A lot of bug fixes.

Andrey Unis <uniskz@gmail.com>
 Rewrote the hook engine in plain C.
```

## 4. GLM (OpenGL Mathematics)

- Location: `Dependencies/glm/glm`
- Upstream: https://github.com/g-truc/glm
- Version: "0.9.9.9" (`GLM_VERSION_MESSAGE`, a master snapshot between the 0.9.9.8 tag and 1.0.0)
- License: MIT / "Happy Bunny" dual license (Copyright (c) G-Truc Creation). Per the library review (`docs/reports/libraries.md`) this was not verified against a local file.
- License file in vendor folder: **missing** (upstream `copying.txt`, see Follow-ups)

## 5. Feather INI Parser

- Location: `Dependencies/INI/INI.h`
- Upstream: https://github.com/Turbine1991/cpp-feather-ini-parser (original site http://code.google.com/p/feather-ini-parser). The maintained fork `c-ridgway/cpp-feather-ini-parser` lists MIT.
- Version: 2.0 (header banner "Feather INI Parser - 2.0"), written by Turbine1991
- License: no standard license. The header states: "You are free to use this however you wish."
- License file in vendor folder: none (see Follow-ups)

## 6. nlohmann/json

- Location: `Dependencies/nlohmann-json/JSON.h`
- Upstream: https://github.com/nlohmann/json
- Version: 3.11.3 macros (`NLOHMANN_JSON_VERSION`), a develop-branch snapshot with the header "SPDX-FileCopyrightText: 2013 - 2025 Niels Lohmann"; exact commit unknown
- License: MIT (`SPDX-License-Identifier: MIT` in the header). Copyright (c) 2013-2025 Niels Lohmann
- License file in vendor folder: **missing** (the single header carries only the SPDX identifier; see Follow-ups)

## 7. ImGuiColorTextEdit

- Location: `Dependencies/ImGuiColorTextEdit`
- Upstream: https://github.com/BalazsJako/ImGuiColorTextEdit
- Version: master at commit `0a88824f` (2019-06-15), with local patches (`LOADER_API` export, an INI language definition, a window flag change, and an include change)
- License: MIT
- License file in vendor folder: yes (`Dependencies/ImGuiColorTextEdit/LICENSE`)

```
MIT License

Copyright (c) 2017 BalazsJako

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

## 8. Dumper-7 (attribution)

Dumper-7 is an Unreal Engine SDK generator / dumper by **Encryqed** and **Fischsalat** (and contributors).

- Upstream: https://github.com/Encryqed/Dumper-7
- Planned location: `Dependencies/Dumper-7` (vendored by a separate work package; this section covers it in advance)
- License: the repository has no license file. The maintainer (Fischsalat) stated in [issue #416](https://github.com/Encryqed/Dumper-7/issues/416): "Usage of the Dumper-7 code for your open source project with proper attribution is not an issue at all." Rights are otherwise retained by the authors (see issue #492). Commercial use is only by arrangement with the authors.
- MDML is open source and non-commercial, and uses Dumper-7 under that permission. Any file that adapts Dumper-7 code carries an attribution header, and Dumper-7 is credited in `README.md` and in this file.
- Do not remove or alter the authors' copyright headers in files under `Dependencies/Dumper-7`.

## 9. UnrealModLoader (project origin)

MDML is a fork of the Unreal Engine Mod Loader by Russell J (https://github.com/RussellJerome/UnrealModLoader), licensed under the GNU LGPL v2.1 (the `LICENSE` file at the repository root).

## 10. UE4SS (design inspiration only)

UE4SS (https://github.com/UE4SS-RE/RE-UE4SS, MIT License, Copyright (c) Narknon and contributors) is used as design inspiration and as a reference for reverse engineering. No UE4SS code is included in MDML. If UE4SS code is ever adapted, its MIT notice must be added to this file.

---

## 11. Follow-ups

License files missing from the vendor folders. Upstream licenses are listed for each; add the upstream license file to the folder (or its text to this document) when it is next convenient:

| Component | Folder | Upstream license | Action |
|---|---|---|---|
| Dear ImGui | `Dependencies/ImGui/imgui` | MIT (Omar Cornut) | Add upstream `LICENSE.txt` (the planned ImGui upgrade to `v1.92.9b-docking` should bring it) |
| fmt (bundled with spdlog) | `Dependencies/spdlog/spdlog/fmt/bundled` | MIT (Victor Zverovich and fmt contributors) | Add upstream `LICENSE` (the spdlog 1.17 upgrade bundles fmt 12.1) |
| GLM | `Dependencies/glm` | MIT / Happy Bunny (G-Truc) | Add upstream `copying.txt` |
| nlohmann/json | `Dependencies/nlohmann-json/JSON.h` | MIT | Add upstream `LICENSE.MIT` and bump to 3.12 (already moved to `Dependencies/nlohmann-json/`) |
| Feather INI Parser | `Dependencies/INI` | No standard license ("free to use however you wish"); the c-ridgway fork lists MIT | Owner decision: keep, or replace with mINI (MIT) as proposed in the library review |
| Dumper-7 | `Dependencies/Dumper-7` | No license file; permission by maintainer statement (issue #416) | Keep the attribution headers; consider asking upstream to add an explicit license |

Other notes:

- Update the version numbers here whenever a library is upgraded (planned: ImGui 1.92.9b, spdlog 1.17, nlohmann/json 3.12, upstream TextEditor, possibly a MinHook replacement).
- The repository `LICENSE` file has no copyright holder line.
