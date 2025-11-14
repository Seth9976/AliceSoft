// 函数: sub_582a00
// 地址: 0x582a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(***(arg1 + 4) + 0x10))(*(arg1 + 0xc), 0, 0, arg4, 0, 0, *(arg1 + 0x14), *(arg1 + 0x18))
void* ebx = ***(arg1 + 4)
int32_t eax_4 = sub_70c710(fconvert.t(arg5) * fconvert.t(255.0))
(*(ebx + 0x18))(*(arg1 + 0xc), 0, 0, arg3, 0, 0, *(arg1 + 0x14), *(arg1 + 0x18), eax_4)
int32_t edi_1 = sub_70c710(fconvert.t(arg5) * fconvert.t(48.0))

if (edi_1 s> 0x18)
    edi_1 = 0x30 - edi_1

(*(***(arg1 + 4) + 0x54))(*(arg1 + 0x10), 0, 0, *(arg1 + 0xc), 0, 0, *(arg1 + 0x14), 
    *(arg1 + 0x18), edi_1)
(*(***(arg1 + 4) + 0x58))(arg2, 0, 0, *(arg1 + 0x10), 0, 0, *(arg1 + 0x14), *(arg1 + 0x18), edi_1)
int32_t result
result.b = 1
return result
