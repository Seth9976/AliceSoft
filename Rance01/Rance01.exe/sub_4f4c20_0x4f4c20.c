// 函数: sub_4f4c20
// 地址: 0x4f4c20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx = *arg2

if (&ecx[4] u> arg2[1])
    arg1.b = 0
    return arg1

uint32_t __saved_ecx = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*arg2 = &ecx[4]
arg1[3] = fconvert.s(fconvert.t(__saved_ecx))
char* ecx_2 = *arg2
uint32_t eax_6

if (&ecx_2[4] u<= arg2[1])
    uint32_t ecx_3 = zx.d(*ecx_2)
    uint32_t eax_12 = ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8
    *arg2 = &ecx_2[4]
    *arg1 = fconvert.s(fconvert.t(eax_12 | ecx_3))
    int32_t ecx_4
    eax_6, ecx_4 = sub_40ff40(ecx_3, arg2, &arg1[1])
    
    if (eax_6.b != 0)
        return sub_40ff40(ecx_4, arg2, &arg1[2]) != 0

eax_6.b = 0
return eax_6
