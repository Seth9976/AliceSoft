// 函数: sub_422af0
// 地址: 0x422af0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* lpProcName = arg1

if (sub_402680("Math", arg3) != 0)
    return sub_5954a0(lpProcName) __tailcall

if (sub_402680("MarmotModelEngine", arg3) != 0)
    if (sub_402680("GetInterface", lpProcName) == 0)
        uint32_t eax_7 = zx.d(sub_402680("Update", lpProcName))
        int32_t eax_8 = neg.d(eax_7)
        return sbb.d(eax_8, eax_8, eax_7 != 0) & sub_595d50
    
    return sub_595d30

if (sub_402680("FileOperation", arg3) != 0)
    return sub_5965f0(lpProcName) __tailcall

if (sub_402680("IbisInputEngine", arg3) != 0)
    return sub_4264d0(lpProcName) __tailcall

if (sub_402680("DrawPluginManager", arg3) != 0)
    if (sub_402680("Load", lpProcName) == 0)
        uint32_t eax_21 = zx.d(sub_402680("IsLoad", lpProcName))
        int32_t eax_22 = neg.d(eax_21)
        return sbb.d(eax_22, eax_22, eax_21 != 0) & sub_40fe80
    
    return sub_40fe60

if (sub_402680("DrawGraph", arg3) != 0)
    return sub_40ec40(lpProcName) __tailcall

if (sub_402680("AnteaterADVEngine", arg3) != 0)
    return sub_5979f0(lpProcName) __tailcall

if (sub_402680("VSFile", arg3) != 0)
    return sub_5caa40(lpProcName) __tailcall

if (sub_402680("SystemService", arg3) != 0)
    return sub_5cb5b0(lpProcName) __tailcall

if (sub_402680("PassRegister", arg3) != 0)
    return sub_5cdee0(lpProcName) __tailcall

if (sub_402680("CommonSystemData", arg3) != 0)
    return sub_5d11f0(lpProcName) __tailcall

if (sub_402680("InputString", arg3) != 0)
    return sub_5d1680(lpProcName) __tailcall

if (sub_402680("OutputLog", arg3) != 0)
    return sub_427c30(lpProcName) __tailcall

if (sub_402680("MsgSkip", arg3) != 0)
    if (sub_402680("SetFlag", lpProcName) == 0)
        uint32_t eax_53 = zx.d(sub_402680("GetFlag", lpProcName))
        int32_t eax_54 = neg.d(eax_53)
        return sbb.d(eax_54, eax_54, eax_53 != 0) & sub_5d2180
    
    return sub_5d2130

if (sub_402680("KiwiSoundEngine", arg3) != 0)
    return sub_5d9c80(lpProcName) __tailcall

if (sub_402680("CrayfishLogViewer", arg3) != 0)
    return sub_5dc5f0(lpProcName) __tailcall

if (sub_402680("ChipmunkSpriteEngine", arg3) != 0)
    return sub_4073d0(lpProcName) __tailcall

if (sub_402680("GUIEngine", arg3) != 0)
    return sub_699aa0(lpProcName) __tailcall

if (sub_402680("AFAFactory", arg3) != 0)
    return sub_402470(lpProcName) __tailcall

if (sub_402680("MainEXFile", arg3) != 0)
    return sub_674930(lpProcName) __tailcall

if (sub_402680("InstallInfo", arg3) != 0)
    uint32_t eax_77 = zx.d(sub_402680("IsInstalledGame", lpProcName))
    int32_t eax_78 = neg.d(eax_77)
    return sbb.d(eax_78, eax_78, eax_77 != 0) & sub_4269c0

if (sub_402680("FileDialog", arg3) != 0)
    if (sub_402680("OpenLoadDialog", lpProcName) == 0)
        uint32_t eax_85 = zx.d(sub_402680("OpenSaveDialog", lpProcName))
        int32_t eax_86 = neg.d(eax_85)
        return sbb.d(eax_86, eax_86, eax_85 != 0) & sub_65fb90
    
    return sub_65f5c0

if (sub_402680("SealEngine", arg3) != 0)
    return sub_520ef0(lpProcName) __tailcall

if (sub_402680("HTTPDownloader", arg3) != 0)
    return sub_424b10(lpProcName) __tailcall

if (sub_402680("Clipboard", arg3) != 0)
    if (sub_402680("SetText", lpProcName) == 0)
        uint32_t eax_99 = zx.d(sub_402680("GetText", lpProcName))
        int32_t eax_100 = neg.d(eax_99)
        return sbb.d(eax_100, eax_100, eax_99 != 0) & sub_40d570
    
    return sub_40d4f0

HMODULE hModule = arg3[7]

if (hModule == 0)
    return 0

if (lpProcName[5] u>= 0x10)
    lpProcName = *lpProcName

return GetProcAddress(hModule, lpProcName)
