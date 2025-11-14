// 函数: sub_442110
// 地址: 0x442110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg12
char* esi = (*(*arg1 + 8))(arg2, arg3)
void* var_8 = (*(*arg4 + 8))(arg5, arg6)
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
                int32_t* ecx_16 = var_8
                int32_t edx_13 = *ecx_16
                arg8.b = *(((zx.d(edx_13.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b) + edi)
                int32_t eax_26 = ((zx.d(arg8:2.b) * zx.d(ecx_11)) s>> 8) + zx.d(arg10:3.b)
                arg8:1.b = *(((zx.d(edx_13:1.b) * zx.d(arg12:3.b)) s>> 8) + zx.d(arg11:3.b) + edi)
                int32_t eax_28 = zx.d(arg8.b) * arg9
                arg8:2.b = *(eax_26 + edi)
                *esi = *(zx.d(*esi) + (eax_28 s>> 8) + edi)
                esi[1] = *(zx.d(esi[1]) + ((zx.d(arg8:1.b) * arg9) s>> 8) + edi)
                esi[2] = *(zx.d(esi[2]) + ((zx.d(arg8:2.b) * arg9) s>> 8) + edi)
                esi = &esi[4]
                j = j_1
                j_1 -= 1
                var_8 = &ecx_16[1]
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_9]
        var_8 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
