// 函数: sub_4daef0
// 地址: 0x4daef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ecx
uint32_t var_4 = ecx
char* ecx_1 = *arg2

if (&ecx_1[4] u> arg2[1])
    arg1.b = 0
    return arg1

uint32_t eax_6 = ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
*arg2 = &ecx_1[4]
*arg1 = eax_6
char* ecx_3 = *arg2

if (&ecx_3[4] u<= arg2[1])
    uint32_t ecx_4 = zx.d(*ecx_3)
    uint32_t eax_12 = ((zx.d(ecx_3[3]) << 8 | zx.d(ecx_3[2])) << 8 | zx.d(ecx_3[1])) << 8
    *arg2 = &ecx_3[4]
    arg1[1] = fconvert.s(fconvert.t(eax_12 | ecx_4))
    int32_t ecx_5
    eax_6, ecx_5 = sub_40ff40(ecx_4, arg2, &arg1[2])
    
    if (eax_6.b != 0 && sub_40ff40(ecx_5, arg2, &arg1[3]).b != 0)
        int32_t ecx_7
        eax_6, ecx_7 = sub_40ff40(&arg1[4], arg2, &arg1[4])
        
        if (eax_6.b != 0)
            return sub_40ff40(ecx_7, arg2, &arg1[5]) != 0

eax_6.b = 0
return eax_6
