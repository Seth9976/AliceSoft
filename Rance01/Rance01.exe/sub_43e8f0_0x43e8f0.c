// 函数: sub_43e8f0
// 地址: 0x43e8f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ebx = arg10
int32_t edi = *arg11
char* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t* var_8 = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_9 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg4 + 0x1c))() - arg7 * 4
arg1:3.b = ebx[8]
char ecx_11 = *ebx
arg10:3.b = ebx[4]
char edx_7 = ebx[0xc]
arg4:3.b = arg9[8]
arg11:3.b = arg9[4]
char ecx_13 = arg9[0xc]
int32_t result_1 = result
arg9:3.b = *arg9

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        if (arg7 s> 0)
            int32_t j_1 = arg7
            int32_t j
            
            do
                int32_t edx_15 = *var_8
                arg8:1.b = *(((zx.d(edx_15:1.b) * zx.d(arg10:3.b)) s>> 8) + zx.d(arg11:3.b) + edi)
                int32_t eax_19
                eax_19.b = *(((zx.d(edx_15.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b) + edi)
                int32_t ecx_26 = zx.d(arg8:3.b) * zx.d(edx_7)
                arg8:2.b = *(((zx.d(edx_15:2.b) * zx.d(ecx_11)) s>> 8) + zx.d(arg9:3.b) + edi)
                char edx_17 = *esi
                uint32_t ecx_29 = zx.d(*((ecx_26 s>> 8) + zx.d(ecx_13) + edi))
                *esi = (((zx.d(eax_19.b) - zx.d(edx_17)) * ecx_29) s>> 8).b + edx_17
                char eax_23 = esi[1]
                char edx_21 = (((zx.d(arg8:1.b) - zx.d(eax_23)) * ecx_29) s>> 8).b + eax_23
                eax_23 = esi[2]
                var_8 = &var_8[1]
                esi[1] = edx_21
                esi[2] = (((zx.d(arg8:2.b) - zx.d(eax_23)) * ecx_29) s>> 8).b + eax_23
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
