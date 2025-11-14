// 函数: sub_4d9770
// 地址: 0x4d9770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_4d9970(arg1)

if (arg3 != 2)
    *(arg1 + 0x120) = 0
else
    *(arg1 + 0x120) = 1

if (sub_4cccb0(arg1 + 0x18, arg2, arg5) != 0
        && sub_4cdf30(arg1 + 0x28, arg2, arg1 + 0x18, *(arg1 + 0x120)) != 0)
    sub_4ce430(arg1 + 0x28, arg1 + 0x38)
    sub_51d0c0(*(*(arg1 + 0x4c) + 4))
    void* eax_3 = *(arg1 + 0x4c)
    *(eax_3 + 4) = eax_3
    int32_t* eax_4 = *(arg1 + 0x4c)
    *eax_4 = eax_4
    void* eax_5 = *(arg1 + 0x4c)
    *(eax_5 + 8) = eax_5
    *(arg1 + 0x50) = 0
    int32_t eax_8 = (arg2[0x11] - arg2[0x10]) s>> 6
    *(arg1 + 0x10c) = eax_8
    sub_4c8660(eax_8, arg1 + 0x124)
    long double x87_r7 = float.t(1)
    int32_t edx_1 = *(arg1 + 0x128)
    float var_40 = fconvert.s(x87_r7)
    long double x87_r6 = float.t(0)
    int32_t eax_9 = *(arg1 + 0x124)
    float var_3c = fconvert.s(x87_r6)
    float var_38 = fconvert.s(x87_r6)
    float var_34 = fconvert.s(x87_r6)
    float var_30 = fconvert.s(x87_r6)
    float var_28 = fconvert.s(x87_r6)
    float var_24 = fconvert.s(x87_r6)
    float var_20 = fconvert.s(x87_r6)
    float var_1c = fconvert.s(x87_r6)
    float var_14 = fconvert.s(x87_r6)
    float var_10 = fconvert.s(x87_r6)
    float var_c = fconvert.s(x87_r6)
    float var_8 = fconvert.s(x87_r6)
    float var_2c = fconvert.s(x87_r7)
    float var_18 = fconvert.s(x87_r7)
    float var_4 = fconvert.s(x87_r7)
    
    while (eax_9 != edx_1)
        int32_t edi_5 = eax_9
        eax_9 += 0x40
        __builtin_memcpy(edi_5, &var_40, 0x40)
    
    *(arg1 + 0x134) = sub_4ceea0(arg1 + 0x28)
    *(arg1 + 0x135) = sub_4ccef0(arg1 + 0x18)
    *(arg1 + 0x10) = arg2
    *(arg1 + 0x14) = arg3
    *(arg1 + 0x139) = arg4
    EnterCriticalSection(arg2[1])
    *arg2 += 1
    LeaveCriticalSection(arg2[1])
    int32_t result
    result.b = 1
    return result

return 0
