// 函数: sub_44a780
// 地址: 0x44a780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t ebx = *(arg1 + 0x20)
char* esi = (*(*arg2 + 8))(arg3, arg4)
char* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg5 + 0x1c))() - arg8 * 4

if (arg9 s> 0)
    arg5 = arg9
    int32_t* i
    
    do
        if (arg8 s> 0)
            arg2 = arg8
            int32_t* j
            
            do
                *esi = *(zx.d(*edi) + (zx.d(*esi) << 8) + ebx)
                int32_t edx_8
                edx_8.b = *((zx.d(esi[1]) << 8) + zx.d(edi[1]) + ebx)
                uint32_t ecx_19 = zx.d(esi[2])
                esi[1] = edx_8.b
                esi[2] = *(zx.d(edi[2]) + (ecx_19 << 8) + ebx)
                esi = &esi[4]
                edi = &edi[4]
                j = arg2
                arg2 -= 1
            while (j != 1)
        
        esi = &esi[eax_8]
        edi = &edi[result]
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
