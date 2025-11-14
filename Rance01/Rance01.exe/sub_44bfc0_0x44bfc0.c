// 函数: sub_44bfc0
// 地址: 0x44bfc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg13[8]
int32_t edi = *arg13
char* esi = (*(*arg3 + 8))(arg4, arg2)
int32_t* var_8 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_9 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg5 + 0x1c))() - arg8 * 4
arg3:3.b = arg12[8]
char ecx_11 = *arg12
arg13:3.b = arg12[4]
arg5:3.b = arg11[8]
char edx_8 = arg11[4]
arg11:3.b = *arg11
int32_t result_1 = result
arg12:3.b = edx_8

if (arg9 s> 0)
    int32_t i_1 = arg9
    int32_t i
    
    do
        if (arg8 s> 0)
            int32_t j_1 = arg8
            int32_t j
            
            do
                int32_t edx_12 = *var_8
                arg9:1.b = *(((zx.d(edx_12:1.b) * zx.d(arg13:3.b)) s>> 8) + zx.d(arg12:3.b) + edi)
                int32_t eax_18
                eax_18.b = *(((zx.d(edx_12.b) * zx.d(arg3:3.b)) s>> 8) + zx.d(arg5:3.b) + edi)
                int32_t ecx_24
                ecx_24.b = *esi
                arg9:2.b = *(((zx.d(edx_12:2.b) * zx.d(ecx_11)) s>> 8) + zx.d(arg11:3.b) + edi)
                uint32_t eax_20
                eax_20.b = esi[1]
                *esi = (((zx.d(*(zx.d(eax_18.b) + (zx.d(ecx_24.b) << 8) + ebx)) - zx.d(ecx_24.b))
                    * arg10) s>> 8).b + ecx_24.b
                char edx_26 = (((zx.d(*(zx.d(arg9:1.b) + (zx.d(eax_20.b) << 8) + ebx))
                    - zx.d(eax_20.b)) * arg10) s>> 8).b + eax_20.b
                eax_20.b = esi[2]
                esi[1] = edx_26
                var_8 = &var_8[1]
                esi[2] = (((zx.d(*(zx.d(arg9:2.b) + (zx.d(eax_20.b) << 8) + ebx)) - zx.d(eax_20.b))
                    * arg10) s>> 8).b + eax_20.b
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
