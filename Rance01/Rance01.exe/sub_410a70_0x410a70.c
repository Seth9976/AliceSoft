// 函数: sub_410a70
// 地址: 0x410a70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
void* esi = (*(*arg2 + 8))(arg3, arg4)
char* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t ebx_3 = arg8 * 4
int32_t eax_7 = (*(*arg2 + 0x1c))() - ebx_3
int32_t eax_9 = (*(*arg5 + 0x1c))()
int32_t edx_5 = *(arg1 + 4)
int32_t ecx_7 = *(edx_5 + ((0xff - arg10) << 2))
int32_t edx_6 = *(edx_5 + (arg10 << 2))
int32_t* result = arg9

if (result s> 0)
    arg4 = result
    int32_t* i
    
    do
        result = arg8
        
        if (result s> 0)
            arg2 = result
            int32_t* j
            
            do
                uint32_t ebx_5 = zx.d(*(esi + 1))
                *esi = *(zx.d(*edi) + edx_6) + *(zx.d(*esi) + ecx_7)
                uint32_t ebx_6 = zx.d(*(esi + 2))
                *(esi + 1) = *(zx.d(edi[1]) + edx_6) + *(ebx_5 + ecx_7)
                result.b = *(zx.d(edi[2]) + edx_6) + *(ebx_6 + ecx_7)
                *(esi + 2) = result.b
                esi += 4
                edi = &edi[4]
                j = arg2
                arg2 -= 1
            while (j != 1)
        
        esi += eax_7
        edi = &edi[eax_9 - ebx_3]
        i = arg4
        arg4 -= 1
    while (i != 1)

return result
