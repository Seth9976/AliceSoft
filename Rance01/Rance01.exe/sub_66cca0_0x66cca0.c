// 函数: sub_66cca0
// 地址: 0x66cca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = arg2

if (esi == 0)
    return 0

arg2 = 0
uint32_t eax_2 = zx.d(sub_66a3f0(arg3, arg1 + 8, esi, arg4, &arg2))
int32_t eax_3 = neg.d(eax_2)
return sbb.d(eax_3, eax_3, eax_2 != 0) & arg2
