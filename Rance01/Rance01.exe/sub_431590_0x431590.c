// 函数: sub_431590
// 地址: 0x431590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1
int32_t result = *(arg1 + 0x40)
int32_t esi = *(result + 0x70)
*(result + 0xf4) = 1

if (esi != 0)
    int32_t* edi_1 = *(esi + 0x1c)
    int32_t* ebx_1 = *(esi + 0x20)
    
    if (edi_1 != 0 && ebx_1 != 0)
        sub_42fd90(esi)
        *(esi + 0x1c) = edi_1
        (**edi_1)()
        *(esi + 0x20) = ebx_1
        (**ebx_1)()
        return sub_42fee0(esi)

return result
