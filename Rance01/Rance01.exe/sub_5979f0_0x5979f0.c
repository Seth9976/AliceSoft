// 函数: sub_5979f0
// 地址: 0x5979f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("ADVLogList_Clear", arg1) != 0)
    return sub_597ba0

if (sub_402680("ADVLogList_AddText", arg1) != 0)
    return sub_597bc0

if (sub_402680("ADVLogList_AddNewLine", arg1) != 0)
    return sub_597c80

if (sub_402680("ADVLogList_AddNewPage", arg1) != 0)
    return sub_597d10

if (sub_402680("ADVLogList_AddVoice", arg1) != 0)
    return sub_597d20

if (sub_402680("ADVLogList_SetEnable", arg1) != 0)
    return sub_597d50

if (sub_402680("ADVLogList_IsEnable", arg1) != 0)
    return sub_597d60

if (sub_402680("ADVLogList_GetNumofADVLog", arg1) != 0)
    return sub_597d70

if (sub_402680("ADVLogList_GetNumofADVLogText", arg1) != 0)
    return sub_597dc0

if (sub_402680("ADVLogList_GetADVLogText", arg1) != 0)
    return sub_597dd0

if (sub_402680("ADVLogList_GetNumofADVLogVoice", arg1) != 0)
    return sub_597e10

if (sub_402680("ADVLogList_GetADVLogVoice", arg1) != 0)
    return sub_597e30

if (sub_402680("ADVLogList_Save", arg1) != 0)
    return sub_597e60

if (sub_402680("ADVLogList_Load", arg1) != 0)
    return sub_597e80

if (sub_402680("ADVSceneKeeper_AddADVScene", arg1) != 0)
    return sub_597ea0

if (sub_402680("ADVSceneKeeper_GetNumofADVScene", arg1) != 0)
    return sub_597ec0

if (sub_402680("ADVSceneKeeper_GetADVScene", arg1) != 0)
    return sub_597ed0

if (sub_402680("ADVSceneKeeper_Clear", arg1) != 0)
    return sub_597ef0

if (sub_402680("ADVSceneKeeper_Save", arg1) != 0)
    return sub_597f10

uint32_t eax_39 = zx.d(sub_402680("ADVSceneKeeper_Load", arg1))
int32_t eax_40 = neg.d(eax_39)
return sbb.d(eax_40, eax_40, eax_39 != 0) & sub_597f30
