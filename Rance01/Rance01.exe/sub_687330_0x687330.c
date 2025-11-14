// 函数: sub_687330
// 地址: 0x687330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0 || *(arg1 + 0x38) - *(arg1 + 0x3c) s<= 0)
    return 0

int32_t ecx_2 = *(arg1 + 0x34)
int32_t eax_4 = *(arg1 + 0x30)
int32_t edi = *(arg1 + 0x28)
struct guiengine::CGUIModel::guiengine::CGUIButtonModel::VTable** eax_5 = sub_414610(*(arg2 + 0x1c))
sub_675df0(eax_5, arg1 + 0xa0)

if (sub_699780(&eax_5[0x22]) != 0)
    return sub_699840(&eax_5[0x22])

int32_t eax_8 =
    sub_70c710(float.t(edi - ecx_2 - eax_4) / float.t(*(arg1 + 0x38)) * float.t(*(arg1 + 0x3c)))
int32_t ecx_5 = *(arg2 + 0x24)

if (eax_8 s>= ecx_5)
    return eax_8

return ecx_5
