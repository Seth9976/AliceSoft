// 函数: sub_44aa80
// 地址: 0x44aa80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg12[8]
int32_t edi = *arg12
char* esi = (*(*arg3 + 8))(arg4, arg2)
void* var_8 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_9 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg5 + 0x1c))() - arg8 * 4
arg3:3.b = arg11[8]
char ecx_11 = *arg11
arg12:3.b = arg11[4]
arg5:3.b = arg10[8]
char edx_8 = arg10[4]
arg10:3.b = *arg10
int32_t result_1 = result
arg11:3.b = edx_8

if (arg9 s> 0)
    int32_t i_1 = arg9
    int32_t i
    
    do
        if (arg8 s> 0)
            int32_t j_1 = arg8
            int32_t j
            
            do
                int32_t* ecx_16 = var_8
                int32_t edx_12 = *ecx_16
                arg9.b = *(((zx.d(edx_12.b) * zx.d(arg3:3.b)) s>> 8) + zx.d(arg5:3.b) + edi)
                int32_t eax_26 = ((zx.d(arg9:2.b) * zx.d(ecx_11)) s>> 8) + zx.d(arg10:3.b)
                arg9:1.b = *(((zx.d(edx_12:1.b) * zx.d(arg12:3.b)) s>> 8) + zx.d(arg11:3.b) + edi)
                arg9:2.b = *(eax_26 + edi)
                uint32_t edx_17 = zx.d(esi[1])
                *esi = *(zx.d(arg9.b) + (zx.d(*esi) << 8) + ebx)
                uint32_t eax_32 = zx.d(esi[2])
                esi[1] = *(zx.d(arg9:1.b) + (edx_17 << 8) + ebx)
                esi[2] = *(zx.d(arg9:2.b) + (eax_32 << 8) + ebx)
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
