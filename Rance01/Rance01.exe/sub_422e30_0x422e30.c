// 函数: sub_422e30
// 地址: 0x422e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("Math", arg1) != 0)
    return sub_427690

if (sub_402680("MarmotModelEngine", arg1) != 0)
    return sub_427630

if (sub_402680("FileOperation", arg1) != 0)
    return sub_586bd0

if (sub_402680("IbisInputEngine", arg1) != 0)
    return sub_426310

if (sub_402680("DrawPluginManager", arg1) != 0)
    return sub_40fd70

if (sub_402680("DrawGraph", arg1) != 0)
    return sub_40ea60

if (sub_402680("AnteaterADVEngine", arg1) != 0)
    return sub_4065f0

if (sub_402680("VSFile", arg1) != 0)
    return sub_586940

if (sub_402680("SystemService", arg1) != 0)
    return sub_570670

if (sub_402680("PassRegister", arg1) != 0)
    return sub_434790

if (sub_402680("CommonSystemData", arg1) != 0)
    return sub_40d600

if (sub_402680("InputString", arg1) != 0)
    return sub_4268c0

if (sub_402680("OutputLog", arg1) != 0)
    return sub_427b60

if (sub_402680("MsgSkip", arg1) != 0)
    return sub_427b20

if (sub_402680("KiwiSoundEngine", arg1) != 0)
    return sub_594e20

if (sub_402680("CrayfishLogViewer", arg1) != 0)
    return sub_586aa0

if (sub_402680("ChipmunkSpriteEngine", arg1) != 0)
    return sub_406e20

if (sub_402680("GUIEngine", arg1) != 0)
    return sub_41ea50

if (sub_402680("AFAFactory", arg1) != 0)
    return sub_402190

if (sub_402680("MainEXFile", arg1) != 0)
    return sub_426fa0

if (sub_402680("InstallInfo", arg1) != 0)
    return sub_426990

if (sub_402680("FileDialog", arg1) != 0)
    return sub_586b60

if (sub_402680("SealEngine", arg1) != 0)
    return sub_51e470

if (sub_402680("HTTPDownloader", arg1) != 0)
    return sub_4249a0

uint32_t eax_49 = zx.d(sub_402680("Clipboard", arg1))
int32_t eax_50 = neg.d(eax_49)
return sbb.d(eax_50, eax_50, eax_49 != 0) & sub_40d470
