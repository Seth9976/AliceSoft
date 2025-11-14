// 函数: sub_5073c0
// 地址: 0x5073c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx = *arg2

if (&ecx[4] u> arg2[1])
    arg1.b = 0
    return arg1

uint32_t eax_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*arg2 = &ecx[4]
*arg1 = fconvert.s(fconvert.t(eax_6))
char* ecx_2 = *arg2

if (&ecx_2[4] u> arg2[1])
    eax_6.b = 0
    return eax_6

uint32_t ecx_3 = zx.d(*ecx_2)
uint32_t eax_13 = ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | ecx_3
*arg2 = &ecx_2[4]
arg1[1] = fconvert.s(fconvert.t(eax_13))
return sub_40ff40(ecx_3, arg2, &arg1[2]) != 0
