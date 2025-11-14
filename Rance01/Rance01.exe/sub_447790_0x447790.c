// 函数: sub_447790
// 地址: 0x447790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg15
void* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t* var_4 = (*(*arg4 + 8))(arg5, arg6)
void* var_8 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_11 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_14 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg9 + 0x1c))() - arg7 * 4
arg1:3.b = arg14[8]
char edx_10 = arg14[4]
arg14:3.b = *arg14
arg9:3.b = edx_10
arg4:3.b = arg13[8]
char edx_12 = arg13[4]
arg13:3.b = *arg13
int32_t result_1 = result
arg15:3.b = edx_12

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        if (arg7 s> 0)
            int32_t j_1 = arg7
            int32_t j
            
            do
                int32_t edx_16 = *var_4
                int32_t* ebx
                ebx.b = *(((zx.d(edx_16.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b) + edi)
                arg8:1.b = *(((zx.d(edx_16:1.b) * zx.d(arg9:3.b)) s>> 8) + zx.d(arg15:3.b) + edi)
                int32_t ecx_26
                ecx_26.b = *(((zx.d(edx_16:2.b) * zx.d(arg14:3.b)) s>> 8) + zx.d(arg13:3.b) + edi)
                arg8:2.b = ecx_26.b
                void* edx_18
                edx_18.b = *esi
                uint32_t eax_28 = zx.d(edx_18.b)
                int32_t ebx_4 = ((zx.d(ebx.b) * eax_28) s>> 8) - eax_28
                eax_28.b = *(esi + 1)
                int32_t ecx_29 = (zx.d(*(var_8 + 3)) * arg12) s>> 8
                *esi = ((ebx_4 * ecx_29) s>> 8).b + edx_18.b
                uint32_t edx_19 = zx.d(eax_28.b)
                char ebx_12 =
                    (((((zx.d(arg8:1.b) * edx_19) s>> 8) - edx_19) * ecx_29) s>> 8).b + eax_28.b
                eax_28.b = *(esi + 2)
                *(esi + 1) = ebx_12
                uint32_t edx_20 = zx.d(eax_28.b)
                ebx.b = (((((zx.d(arg8:2.b) * edx_20) s>> 8) - edx_20) * ecx_29) s>> 8).b + eax_28.b
                var_4 = &var_4[1]
                var_8 += 4
                *(esi + 2) = ebx.b
                esi += 4
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi += eax_11
        var_4 += eax_14
        var_8 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
