// 函数: sub_440f50
// 地址: 0x440f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg11
char* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t* ebx = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_9 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg4 + 0x1c))() - arg7 * 4
arg1:3.b = arg10[8]
char ecx_11 = *arg10
arg11:3.b = arg10[4]
arg4:3.b = arg9[8]
char edx_9 = arg9[4]
arg9:3.b = *arg9
int32_t result_1 = result
arg10:3.b = edx_9

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        if (arg7 s> 0)
            int32_t j_1 = arg7
            int32_t j
            
            do
                int32_t ecx_16 = *ebx
                arg8 = ecx_16
                ecx_16.b = *(((zx.d(ecx_16.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b) + edi)
                int32_t eax_20 = zx.d(arg8:2.b) * zx.d(ecx_11)
                arg8:1.b = *(((zx.d(arg8:1.b) * zx.d(arg11:3.b)) s>> 8) + zx.d(arg10:3.b) + edi)
                int32_t eax_22
                eax_22.b = *((eax_20 s>> 8) + zx.d(arg9:3.b) + edi)
                *esi = *(zx.d(*esi) + zx.d(ecx_16.b) + edi)
                uint32_t ecx_21 = zx.d(esi[2])
                esi[1] = *(zx.d(esi[1]) + zx.d(arg8:1.b) + edi)
                esi[2] = *(ecx_21 + zx.d(eax_22.b) + edi)
                esi = &esi[4]
                ebx = &ebx[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_9]
        ebx += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
