// 函数: sub_57b700
// 地址: 0x57b700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_1 = (*(**(arg1 + 0x60) + 0x14))()

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

void* i = *(arg1 + 0x4c)
float var_8
float var_4

if (i != *(arg1 + 0x50))
    float* ecx = i + 0x24
    
    do
        i += 0x78
        float var_8_1 = fconvert.s(fconvert.t(ecx[-1]))
        eax_1 += 0x48
        long double x87_r7_2 = fconvert.t(*ecx)
        ecx = &ecx[0x1e]
        *(eax_1 - 0x48) = fconvert.s(fconvert.t(ecx[-0x20]))
        *(eax_1 - 0x44) = fconvert.s(fconvert.t(var_8_1))
        *(eax_1 - 0x40) = fconvert.s(fconvert.t(fconvert.s(x87_r7_2)))
        *(eax_1 - 0x3c) = 0xffffffff
        float var_4_2 = fconvert.s(fconvert.t(ecx[-0x1c]))
        *(eax_1 - 0x38) = fconvert.s(fconvert.t(ecx[-0x1d]))
        *(eax_1 - 0x34) = fconvert.s(fconvert.t(var_4_2))
        float var_8_2 = fconvert.s(fconvert.t(ecx[-0x17]))
        float var_4_3 = fconvert.s(fconvert.t(ecx[-0x16]))
        *(eax_1 - 0x30) = fconvert.s(fconvert.t(ecx[-0x18]))
        *(eax_1 - 0x2c) = fconvert.s(fconvert.t(var_8_2))
        *(eax_1 - 0x28) = fconvert.s(fconvert.t(var_4_3))
        *(eax_1 - 0x24) = 0xffffffff
        float var_4_4 = fconvert.s(fconvert.t(ecx[-0x14]))
        *(eax_1 - 0x20) = fconvert.s(fconvert.t(ecx[-0x15]))
        *(eax_1 - 0x1c) = fconvert.s(fconvert.t(var_4_4))
        var_8 = fconvert.s(fconvert.t(ecx[-0xf]))
        float var_4_5 = fconvert.s(fconvert.t(ecx[-0xe]))
        *(eax_1 - 0x18) = fconvert.s(fconvert.t(ecx[-0x10]))
        *(eax_1 - 0x14) = fconvert.s(fconvert.t(var_8))
        *(eax_1 - 0x10) = fconvert.s(fconvert.t(var_4_5))
        *(eax_1 - 0xc) = 0xffffffff
        var_4 = fconvert.s(fconvert.t(ecx[-0xc]))
        *(eax_1 - 8) = fconvert.s(fconvert.t(ecx[-0xd]))
        *(eax_1 - 4) = fconvert.s(fconvert.t(var_4))
    while (i != *(arg1 + 0x50))

(*(**(arg1 + 0x60) + 0x18))(var_8, var_4)
int32_t eax_3
eax_3.b = 1
return eax_3
