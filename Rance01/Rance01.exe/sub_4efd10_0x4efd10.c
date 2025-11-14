// 函数: sub_4efd10
// 地址: 0x4efd10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(3.40282347e+38f)
void* i = *(arg1 + 4)
*arg3 = fconvert.s(x87_r7)
long double x87_r6 = fconvert.t(-3.40282347e+38f)
float* result = *(arg1 + 8)
float* ebx = arg5
*arg4 = fconvert.s(x87_r6)
arg5 = result
*arg2 = fconvert.s(x87_r6)
*ebx = fconvert.s(x87_r7)

for (; i != result; i += 0x68)
    float* ecx_1 = *(i + 4)
    int32_t esi_1 = *(i + 8)
    
    if (ecx_1 != esi_1)
        do
            long double x87_r7_1 = fconvert.t(*ecx_1)
            long double x87_r6_1 = fconvert.t(*arg3)
            x87_r6_1 - x87_r7_1
            float* eax
            eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
            
            if ((eax:1.b & 0x41) == 0)
                *arg3 = fconvert.s(fconvert.t(*ecx_1))
            
            long double x87_r7_3 = fconvert.t(*ecx_1)
            long double x87_r6_2 = fconvert.t(*arg4)
            x87_r6_2 - x87_r7_3
            eax.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                *arg4 = fconvert.s(fconvert.t(*ecx_1))
            
            long double x87_r7_5 = fconvert.t(ecx_1[2])
            long double x87_r6_3 = fconvert.t(*ebx)
            x87_r6_3 - x87_r7_5
            eax.w = (x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe
            
            if ((eax:1.b & 0x41) == 0)
                *ebx = fconvert.s(fconvert.t(ecx_1[2]))
            
            long double x87_r7_7 = fconvert.t(ecx_1[2])
            long double x87_r6_4 = fconvert.t(*arg2)
            x87_r6_4 - x87_r7_7
            eax.w = (x87_r6_4 < x87_r7_7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, x87_r7_7) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_7 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                *arg2 = fconvert.s(fconvert.t(ecx_1[2]))
            
            ecx_1 = &ecx_1[3]
        while (ecx_1 != esi_1)
        
        result = arg5

return result
