// 函数: sub_4b8190
// 地址: 0x4b8190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ebx = *(arg1 + 0x70) + arg4 * 0x18
void* eax_3 = ebx[3] i* 0x2c + *(arg1 + 0x60)
int32_t ecx_2 = (*(eax_3 + 0x10) - *(eax_3 + 0xc)) s>> 2
float var_24

if (ecx_2 == 1)
    float* eax_6 = (**(eax_3 + 0xc) << 6) + *arg2
    var_24 = fconvert.s(fconvert.t(eax_6[4]) * fconvert.t(ebx[1])
        + fconvert.t(*ebx) * fconvert.t(*eax_6) + fconvert.t(eax_6[8]) * fconvert.t(ebx[2]))
    float var_20_1 = fconvert.s(fconvert.t(eax_6[1]) * fconvert.t(*ebx)
        + fconvert.t(eax_6[5]) * fconvert.t(ebx[1]) + fconvert.t(eax_6[9]) * fconvert.t(ebx[2]))
    float var_1c_1 = fconvert.s(fconvert.t(eax_6[2]) * fconvert.t(*ebx)
        + fconvert.t(eax_6[6]) * fconvert.t(ebx[1]) + fconvert.t(eax_6[0xa]) * fconvert.t(ebx[2]))
    sub_51e2a0(&var_24, arg3)
    return arg3

long double x87_r7_12 = float.t(0)
float var_30 = fconvert.s(x87_r7_12)
float var_2c = fconvert.s(x87_r7_12)
float var_28 = fconvert.s(x87_r7_12)

if (ecx_2 s> 0)
    float* ebp_1 = *(eax_3 + 0x1c)
    int32_t edx = *arg2
    int32_t* eax_9 = *(eax_3 + 0xc) - ebp_1
    int32_t* var_3c_1 = eax_9
    arg4 = ecx_2
    
    while (true)
        float* eax_12 = (*(eax_9 + ebp_1) << 6) + edx
        float var_18 = fconvert.s(fconvert.t(eax_12[4]) * fconvert.t(ebx[1])
            + fconvert.t(*ebx) * fconvert.t(*eax_12) + fconvert.t(eax_12[8]) * fconvert.t(ebx[2]))
        float var_14_1 = fconvert.s(fconvert.t(eax_12[1]) * fconvert.t(*ebx)
            + fconvert.t(eax_12[5]) * fconvert.t(ebx[1])
            + fconvert.t(eax_12[9]) * fconvert.t(ebx[2]))
        float var_10_1 = fconvert.s(fconvert.t(eax_12[2]) * fconvert.t(*ebx)
            + fconvert.t(eax_12[6]) * fconvert.t(ebx[1])
            + fconvert.t(eax_12[0xa]) * fconvert.t(ebx[2]))
        float var_c
        sub_51e2a0(&var_18, &var_c)
        long double x87_r7_25 = fconvert.t(*ebp_1)
        ebp_1 = &ebp_1[1]
        int32_t temp1_1 = arg4
        arg4 -= 1
        long double x87_r6_25 = fconvert.t(fconvert.s(x87_r7_25))
        var_24 = fconvert.s(fconvert.t(var_c) * x87_r6_25)
        float var_8
        float var_20_2 = fconvert.s(fconvert.t(var_8) * x87_r6_25)
        float var_4
        float var_1c_2 = fconvert.s(x87_r6_25 * fconvert.t(var_4))
        var_30 = fconvert.s(fconvert.t(var_24) + fconvert.t(var_30))
        var_2c = fconvert.s(fconvert.t(var_20_2) + fconvert.t(var_2c))
        var_28 = fconvert.s(fconvert.t(var_1c_2) + fconvert.t(var_28))
        
        if (temp1_1 == 1)
            break
        
        eax_9 = var_3c_1

sub_51e2a0(&var_30, arg3)
return arg3
