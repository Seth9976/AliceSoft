// 函数: sub_446da0
// 地址: 0x446da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg12
char* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t* var_8 = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_9 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg4 + 0x1c))() - arg7 * 4
arg1:3.b = arg11[8]
char ecx_11 = *arg11
arg12:3.b = arg11[4]
arg4:3.b = arg10[8]
char edx_9 = arg10[4]
arg10:3.b = *arg10
int32_t result_1 = result
arg11:3.b = edx_9

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        if (arg7 s> 0)
            int32_t j_1 = arg7
            int32_t j
            
            do
                int32_t edx_13 = *var_8
                int32_t eax_18
                eax_18.b = *(((zx.d(edx_13.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b) + edi)
                arg8:1.b = *(((zx.d(edx_13:1.b) * zx.d(arg12:3.b)) s>> 8) + zx.d(arg11:3.b) + edi)
                int32_t ecx_24
                ecx_24.b = *esi
                arg8:2.b = *(((zx.d(edx_13:2.b) * zx.d(ecx_11)) s>> 8) + zx.d(arg10:3.b) + edi)
                uint32_t edx_16 = zx.d(ecx_24.b)
                char eax_24 =
                    (((((zx.d(eax_18.b) * edx_16) s>> 8) - edx_16) * arg9) s>> 8).b + ecx_24.b
                ecx_24.b = esi[1]
                *esi = eax_24
                uint32_t edx_17 = zx.d(ecx_24.b)
                char eax_30 =
                    (((((zx.d(arg8:1.b) * edx_17) s>> 8) - edx_17) * arg9) s>> 8).b + ecx_24.b
                ecx_24.b = esi[2]
                esi[1] = eax_30
                uint32_t edx_18 = zx.d(ecx_24.b)
                var_8 = &var_8[1]
                esi[2] = (((((zx.d(arg8:2.b) * edx_18) s>> 8) - edx_18) * arg9) s>> 8).b + ecx_24.b
                esi = &esi[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_9]
        var_8 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
