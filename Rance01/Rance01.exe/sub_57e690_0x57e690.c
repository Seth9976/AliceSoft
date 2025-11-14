// 函数: sub_57e690
// 地址: 0x57e690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg4 + 8))(arg2, 0)
char* edi = (*(*arg5 + 8))(arg6, 0)
char* ebp = (*(*arg7 + 8))(arg8, 0)
int32_t eax_9 = (*(*arg4 + 0x1c))() - arg9 * 4
int32_t eax_12 = (*(*arg5 + 0x1c))() - arg9 * 4
int32_t* result = (*(*arg7 + 0x1c))() - arg9 * 4
arg7 = result

if (arg10 s> 0)
    arg5 = arg10
    int32_t* i
    
    do
        void* ecx_16 = nullptr
        arg4 = nullptr
        
        if (arg9 s> 0)
            do
                result.b = arg11
                result.b += ecx_16.b
                int32_t edx_6 = *(arg3 + 4)
                uint32_t eax_15 = zx.d(result.b)
                int32_t ecx_18 = *(edx_6 + (eax_15 << 2))
                int32_t eax_16 = *(edx_6 + ((0xff - eax_15) << 2))
                esi += 4
                *(esi - 4) = *(zx.d(*edi) + ecx_18) + *(zx.d(*ebp) + eax_16)
                char edx_10 = *(zx.d(ebp[1]) + eax_16) + *(zx.d(edi[1]) + ecx_18)
                edi = &edi[4]
                *(esi - 3) = edx_10
                result.b = *(zx.d(ebp[2]) + eax_16) + *(zx.d(edi[0xfffffffe]) + ecx_18)
                ecx_16 = arg4 + 1
                *(esi - 2) = result.b
                ebp = &ebp[4]
                arg4 = ecx_16
            while (ecx_16 s< arg9)
            
            result = arg7
        
        esi += eax_9
        edi = &edi[eax_12]
        ebp += result
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
