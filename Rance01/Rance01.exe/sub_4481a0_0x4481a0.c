// 函数: sub_4481a0
// 地址: 0x4481a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ebx = arg10
int32_t edi = *arg11
void* esi = (*(*arg1 + 8))(arg2, arg3)
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
                ebx.b = (((zx.d(edx_15.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b))[edi]
                arg8:1.b = *(((zx.d(edx_15:1.b) * zx.d(arg10:3.b)) s>> 8) + zx.d(arg11:3.b) + edi)
                int32_t ecx_20
                ecx_20.b = (((zx.d(edx_15:2.b) * zx.d(ecx_11)) s>> 8) + zx.d(arg9:3.b))[edi]
                int32_t edx_20 = ((zx.d(arg8:3.b) * zx.d(edx_7)) s>> 8) + zx.d(ecx_13)
                arg8:2.b = ecx_20.b
                uint32_t ecx_21 = zx.d(*(edx_20 + edi))
                edx_20.b = *esi
                uint32_t eax_24 = zx.d(edx_20.b)
                int32_t ebx_4 = ((zx.d(ebx.b) * eax_24) s>> 8) - eax_24
                eax_24.b = *(esi + 1)
                *esi = ((ebx_4 * ecx_21) s>> 8).b + edx_20.b
                uint32_t edx_21 = zx.d(eax_24.b)
                char ebx_12 =
                    (((((zx.d(arg8:1.b) * edx_21) s>> 8) - edx_21) * ecx_21) s>> 8).b + eax_24.b
                eax_24.b = *(esi + 2)
                *(esi + 1) = ebx_12
                uint32_t edx_22 = zx.d(eax_24.b)
                var_8 = &var_8[1]
                ebx.b = (((((zx.d(arg8:2.b) * edx_22) s>> 8) - edx_22) * ecx_21) s>> 8).b + eax_24.b
                *(esi + 2) = ebx.b
                esi += 4
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi += eax_9
        var_8 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
