// 函数: sub_6d1110
// 地址: 0x6d1110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = sx.q(arg1)
void* eax_2 = (eax ^ edx) - edx

if (eax_2 s>= 0x100)
    return sx.d(*((eax_2 s>> 8) + 0x79b560)) + 8

return sx.d(*(eax_2 + 0x79b560))
