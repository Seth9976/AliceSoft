// 函数: sub_657c70
// 地址: 0x657c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg5

if (arg3[8].b == 0 || arg1 == 0 || arg2 == 0 || arg3[4] u<= 0 || arg3[5] u<= 0)
    arg2.b = 0
    return 

arg5 = arg1

if (arg1 u>= arg6)
    arg5 = arg6

int32_t var_14

if (arg2 u>= arg7)
    var_14 = arg7
    arg2 = arg7
else
    var_14 = arg2

long double x87_r7 = float.t(arg6)
char* ecx_2 = *arg3

if (arg6 s< 0)
    x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)

long double x87_r6 = float.t(arg5)

if (arg5 s< 0)
    x87_r6 = x87_r6 + fconvert.t(4.2949673e+09f)

long double x87_r7_2 = float.t(arg7)

if (arg7 s< 0)
    x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)

long double x87_r6_1 = float.t(arg2)

if (arg2 s< 0)
    x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)

char* var_4_2 = ecx_2
int32_t var_18 = 0

if (arg2 s> 0)
    do
        int32_t ebp_1 = 0
        void* var_10_1 = esi
        char* ebx_2 = ecx_2
        arg6 = 0
        
        if (arg5 s> 0)
            do
                *esi = *ecx_2
                int32_t edx_1
                edx_1.b = ecx_2[1]
                *(esi + 1) = edx_1.b
                *(esi + 2) = ecx_2[2]
                esi += 4
                ecx_2 = (sub_70c710(float.t(arg6) * fconvert.t(fconvert.s(x87_r7 / x87_r6))) + 1)
                    * arg3[7] + ebx_2
                
                if (ecx_2 - ebx_2 s>= arg3[6])
                    break
                
                ebp_1 += 1
                arg6 = ebp_1
            while (ebp_1 s< arg5)
        
        esi = var_10_1 + (((arg1 << 2) + 0xc) & 0xfffffff0)
        long double x87_r5_4 = float.t(var_18) * fconvert.t(fconvert.s(x87_r7_2 / x87_r6_1))
        int32_t eax_3 = sub_70c710(x87_r5_4)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg4)
        arg6.w = temp0_1
        ecx_2 = (eax_3 + 1) * arg3[6] + var_4_2
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16((zx.d(arg6.w) | 0xc00).w)
        int32_t var_10_2
        var_10_2.q = int.q(x87_r5_4)
        int16_t x87status_3
        arg4, x87status_3 = __fldcw_memmem16(arg6.w)
        
        if (var_10_2 u>= arg7)
            break
        
        arg2 = var_18 + 1
        var_18 = arg2
    while (arg2 s< var_14)

arg2.b = 1
