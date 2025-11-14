// 函数: sub_57a8c0
// 地址: 0x57a8c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(arg5)
int32_t ecx_1 = *(arg1 + 0x50) - *(arg1 + 0x4c)
int32_t i = 0

if (ecx_1 s/ 0x78 s> 0)
    int32_t ebx_1 = 0
    
    do
        float* eax_4 = *(arg1 + 0x4c)
        long double x87_r7_2 = fconvert.t(fconvert.s(x87_r7 * x87_r7))
        int32_t edx_3 = *(eax_4 + ebx_1 + 0xc)
        float var_14 = fconvert.s(fconvert.t(*(eax_4 + ebx_1)))
        void* eax_5 = eax_4 + ebx_1
        float var_10_1 = fconvert.s(fconvert.t(*(eax_5 + 4)))
        float var_c_1 = fconvert.s(fconvert.t(*(arg1 + 0x5c))
            - fconvert.t(fconvert.s(float.t(neg.d(edx_3)) * x87_r7_2)))
        sub_57af90(ecx_1, &var_14, eax_5 + 0x10, 
            fconvert.s(fconvert.t(fconvert.s(x87_r7_2 * float.t(*(eax_5 + 0x70))))), 
            fconvert.s(fconvert.t(fconvert.s(float.t(*(eax_5 + 0x74)) * x87_r7_2))))
        ecx_1 = *(arg1 + 0x50) - *(arg1 + 0x4c)
        i += 1
        ebx_1 += 0x78
    while (i s< ecx_1 s/ 0x78)

bool eax_11
int32_t ecx_3
eax_11, ecx_3 = sub_57b700(arg1)

if (eax_11 != 0)
    int32_t var_2c_2 = ecx_3
    (*(*arg2 + 0x48))(fconvert.s(float.t(1)))
    
    if (sub_57b4c0(arg3, arg2, arg1) != 0)
        return sub_57b800(arg4, arg1, arg2) != 0

return false
