// 函数: sub_576120
// 地址: 0x576120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 1, arg1)

if (hProcess == 0)
    hProcess.b = 1
    return hProcess

uint32_t exitCode
BOOL eax = GetExitCodeProcess(hProcess, &exitCode)

if (eax == 1)
    while (exitCode == 0x103)
        MSG msg
        
        if (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE) != 0)
            TranslateMessage(&msg)
            DispatchMessageA(&msg)
        
        eax = GetExitCodeProcess(hProcess, &exitCode)
        
        if (eax != 1)
            break

eax.b = eax == 1
return eax
