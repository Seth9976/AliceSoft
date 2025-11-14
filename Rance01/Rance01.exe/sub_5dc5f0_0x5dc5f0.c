// 函数: sub_5dc5f0
// 地址: 0x5dc5f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("OpenViewer", arg1) != 0)
    return j_sub_5da5a0

if (sub_402680("CloseViewer", arg1) != 0)
    return sub_5dc6a0

if (sub_402680("IsOpenedViewer", arg1) != 0)
    return sub_5dc6d0

if (sub_402680("SetWindowTitleName", arg1) != 0)
    return sub_5dc6f0

if (sub_402680("AddText", arg1) != 0)
    return sub_5dc800

if (sub_402680("ClearText", arg1) != 0)
    return j_sub_5da690

uint32_t eax_13 = zx.d(sub_402680("SetSaveFolderName", arg1))
int32_t eax_14 = neg.d(eax_13)
return sbb.d(eax_14, eax_14, eax_13 != 0) & sub_5dc8e0
