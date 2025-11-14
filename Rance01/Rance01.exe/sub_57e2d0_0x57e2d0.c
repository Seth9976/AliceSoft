// 函数: sub_57e2d0
// 地址: 0x57e2d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg4 + 8))(0, arg2)
char* edi = (*(*arg5 + 8))(0, arg6)
char* ebp = (*(*arg7 + 8))(0, arg8)
int32_t* eax_9 = (*(*arg4 + 0x1c))() - arg9 * 4
int32_t eax_12 = (*(*arg5 + 0x1c))() - arg9 * 4
int32_t eax_15 = (*(*arg7 + 0x1c))() - arg9 * 4
int32_t* result = arg10

if (result s> 0)
    arg5 = result
    int32_t* i
    
    do
        uint32_t edx_6 = zx.d(arg11)
        int32_t ebx_1 = *(arg3 + 4)
        int32_t ecx_15 = *(ebx_1 + (edx_6 << 2))
        int32_t edx_7 = *(ebx_1 + ((0xff - edx_6) << 2))
        
        if (arg9 s<= 0)
            result = 1
        else
            arg4 = arg9
            int32_t* j
            
            do
                esi += 4
                *(esi - 4) = *(zx.d(*edi) + ecx_15) + *(zx.d(*ebp) + edx_7)
                char eax_22 = *(zx.d(ebp[1]) + edx_7) + *(zx.d(edi[1]) + ecx_15)
                edi = &edi[4]
                *(esi - 3) = eax_22
                char eax_24 = *(zx.d(ebp[2]) + edx_7) + *(zx.d(edi[0xfffffffe]) + ecx_15)
                ebp = &ebp[4]
                *(esi - 2) = eax_24
                result = 1
                j = arg4
                arg4 -= 1
            while (j != 1)
        
        esi += eax_9
        edi = &edi[eax_12]
        ebp = &ebp[eax_15]
        arg11.d += 1
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
