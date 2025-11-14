// 函数: sub_5637b0
// 地址: 0x5637b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

COMPOSITIONFORM compForm
int32_t eax_1 = data_78c474 ^ &compForm
compForm.dwStyle = 2
compForm.ptCurrentPos.x = sub_70c710(fconvert.t(*(arg1 + 0x3c)) * float.t(arg2)) + *(arg1 + 0x34)
compForm.ptCurrentPos.y = sub_70c710(fconvert.t(*(arg1 + 0x40)) * float.t(arg3)) + *(arg1 + 0x38)
HIMC eax_7 = ImmGetContext(*(arg1 + 0x78))
ImmSetCompositionWindow(eax_7, &compForm)
ImmReleaseContext(*(arg1 + 0x78), eax_7)
*(arg1 + 0x74) = arg3
*(arg1 + 0x70) = arg2
*(arg1 + 0x6c) = 1
sub_6b4885(eax_1 ^ &compForm)
return arg2
