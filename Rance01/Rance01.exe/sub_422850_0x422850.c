// 函数: sub_422850
// 地址: 0x422850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* lpModuleName = arg1
sub_401180(arg2, 0xffffffff, lpModuleName, 0)

if (sub_402680("MainSystem", lpModuleName) == 0 && sub_402680("SurfaceFactory", lpModuleName) == 0
        && sub_402680("Math", lpModuleName) == 0
        && sub_402680("MarmotModelEngine", lpModuleName) == 0
        && sub_402680("ALDLoader", lpModuleName) == 0
        && sub_402680("FileOperation", lpModuleName) == 0 && sub_402680("Graph", lpModuleName) == 0
        && sub_402680("DecodeCG", lpModuleName) == 0 && sub_402680("DecodeOGG", lpModuleName) == 0
        && sub_402680("EncodeCG", lpModuleName) == 0 && sub_402680("XXILoader", lpModuleName) == 0
        && sub_402680("IbisInputEngine", lpModuleName) == 0
        && sub_402680("DrawPluginManager", lpModuleName) == 0
        && sub_402680("DrawGraph", lpModuleName) == 0
        && sub_402680("ViewTransition", lpModuleName) == 0
        && sub_402680("VSFile", lpModuleName) == 0
        && sub_402680("SystemService", lpModuleName) == 0
        && sub_402680("PassRegister", lpModuleName) == 0
        && sub_402680("CommonSystemData", lpModuleName) == 0
        && sub_402680("InputString", lpModuleName) == 0
        && sub_402680("OutputLog", lpModuleName) == 0 && sub_402680("MsgSkip", lpModuleName) == 0
        && sub_402680("KiwiSoundEngine", lpModuleName) == 0
        && sub_402680("CrayfishLogViewer", lpModuleName) == 0
        && sub_402680("AFALoader", lpModuleName) == 0
        && sub_402680("AnteaterADVEngine", lpModuleName) == 0
        && sub_402680("DecodeAFF", lpModuleName) == 0
        && sub_402680("ChipmunkSpriteEngine", lpModuleName) == 0
        && sub_402680("GUIEngine", lpModuleName) == 0
        && sub_402680("AFAFactory", lpModuleName) == 0
        && sub_402680("MainEXFile", lpModuleName) == 0
        && sub_402680("InstallInfo", lpModuleName) == 0
        && sub_402680("FileDialog", lpModuleName) == 0
        && sub_402680("SealEngine", lpModuleName) == 0
        && sub_402680("HTTPDownloader", lpModuleName) == 0
        && sub_402680("Clipboard", lpModuleName) == 0)
    if (lpModuleName[5] u>= 0x10)
        lpModuleName = *lpModuleName
    
    HMODULE result = GetModuleHandleA(lpModuleName)
    arg2[7] = result
    result.b = result != 0
    return result

return 1
