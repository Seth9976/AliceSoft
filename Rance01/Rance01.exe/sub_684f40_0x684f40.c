// 函数: sub_684f40
// 地址: 0x684f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 != 0)
    arg2 *= *(arg1 + 0xc)

*(arg1 + 0x10) += arg2
int32_t edi = *(arg1 + 0x10)
int32_t eax = sub_433930(arg1 + 0x28, edi, arg1 + 0x48)
int32_t eax_2 = sub_433930(arg1 + 0x18, edi, arg1 + 0x38)
void* ecx_3 = *(data_797d2c + 0x30)
*(ecx_3 + 0x27c) = eax_2
*(ecx_3 + 0x280) = eax
return sub_5efea0(arg1 + 0x68, *(arg1 + 0x10))
