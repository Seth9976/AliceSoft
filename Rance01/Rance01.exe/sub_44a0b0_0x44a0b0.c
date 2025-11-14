// 函数: sub_44a0b0
// 地址: 0x44a0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg15
void* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t* var_8 = (*(*arg4 + 8))(arg5, arg6)
void* var_c = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg9 + 0x1c))() - arg7 * 4
arg1:3.b = arg14[8]
arg9:3.b = arg14[4]
char edx_10 = arg14[0xc]
arg15:3.b = *arg14
arg4:3.b = arg13[8]
arg14:3.b = arg13[4]
char ecx_18 = arg13[0xc]
int32_t result_1 = result
arg13:3.b = *arg13

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        if (arg7 s> 0)
            int32_t j_1 = arg7
            int32_t j
            
            do
                int32_t edx_18 = *var_8
                char* ebx
                ebx.b = (((zx.d(edx_18.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b))[edi]
                arg8:1.b = *(((zx.d(edx_18:1.b) * zx.d(arg9:3.b)) s>> 8) + zx.d(arg14:3.b) + edi)
                int32_t ecx_25
                ecx_25.b = (((zx.d(edx_18:2.b) * zx.d(arg15:3.b)) s>> 8) + zx.d(arg13:3.b))[edi]
                uint32_t edx_24 =
                    zx.d(*(((zx.d(arg8:3.b) * zx.d(edx_10)) s>> 8) + zx.d(ecx_18) + edi))
                arg8:2.b = ecx_25.b
                int32_t ecx_28 = zx.d(*(var_c + 3)) * edx_24
                edx_24.b = *esi
                uint32_t eax_30 = zx.d(edx_24.b)
                int32_t ebx_4 = ((zx.d(ebx.b) * eax_30) s>> 8) - eax_30
                eax_30.b = *(esi + 1)
                int32_t ecx_30 = (ecx_28 * arg12) s>> 0x10
                *esi = ((ebx_4 * ecx_30) s>> 8).b + edx_24.b
                uint32_t edx_25 = zx.d(eax_30.b)
                char ebx_12 =
                    (((((zx.d(arg8:1.b) * edx_25) s>> 8) - edx_25) * ecx_30) s>> 8).b + eax_30.b
                eax_30.b = *(esi + 2)
                *(esi + 1) = ebx_12
                uint32_t edx_26 = zx.d(eax_30.b)
                ebx.b = (((((zx.d(arg8:2.b) * edx_26) s>> 8) - edx_26) * ecx_30) s>> 8).b + eax_30.b
                var_8 = &var_8[1]
                var_c += 4
                *(esi + 2) = ebx.b
                esi += 4
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi += eax_12
        var_8 += eax_15
        var_c += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
