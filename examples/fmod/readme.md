# Which library do I link?

If you want to use fmodex.dll:

Visual Studio users             - fmodex_vc.lib.
Metrowerks Codewarrior users    - fmodex_vc.lib.
Borland users                   - fmodex_bc.lib.
LCC-Win32 users                 - fmodex_lcc.lib.
Dev-C++, MinGW and CygWin users - libfmodex.a.

If you want to use fmodexL.dll: (same as fmodex.dll but with debug logging enabled)

Visual Studio users             - fmodexL_vc.lib.
Metrowerks Codewarrior users    - fmodexL_vc.lib.
Borland users                   - fmodexL_bc.lib.
LCC-Win32 users                 - fmodexL_lcc.lib.
Dev-C++, MinGW and CygWin users - libfmodexL.a.

If you want to use fmodex64.dll: (same as fmodex.dll but for 64bit machines)

Visual Studio users             - fmodex64_vc.lib.

If you want to use fmodexL64.dll: (same as fmodex64.dll but with debug logging enabled)

Visual Studio users             - fmodexL64_vc.lib.

No other compilers are supported for 64bit libraries.