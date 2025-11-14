// 函数: sub_441dc0
// 地址: 0x441dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg1
char* esi = (*(*arg2 + 8))(arg3, arg4)
char* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t result_1 = result

if (arg9 s> 0)
    arg5 = arg9
    int32_t* i
    
    do
        if (arg8 s> 0)
            arg2 = arg8
            int32_t* j
            
            do
                int32_t edx_9
                edx_9.b = *(zx.d(*esi) + ((zx.d(*edi) * arg10) s>> 8) + ebx)
                *esi = edx_9.b
                int32_t eax_15
                eax_15.b = *(zx.d(esi[1]) + ((zx.d(edi[1]) * arg10) s>> 8) + ebx)
                esi[1] = eax_15.b
                int32_t ecx_13
                ecx_13.b = *(zx.d(esi[2]) + ((zx.d(edi[2]) * arg10) s>> 8) + ebx)
                esi[2] = ecx_13.b
                esi = &esi[4]
                edi = &edi[4]
                j = arg2
                arg2 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_8]
        edi = &edi[result]
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
