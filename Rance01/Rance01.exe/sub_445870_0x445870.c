// 函数: sub_445870
// 地址: 0x445870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg3 + 8))(arg4, arg2)
char* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t* eax_7 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg5 + 0x1c))() - arg8 * 4

if (arg9 s> 0)
    arg3 = arg9
    int32_t* i
    
    do
        int32_t j_1 = arg8
        
        if (j_1 s> 0)
            int32_t j
            
            do
                uint32_t ebx_2 = zx.d(*(esi + 1))
                *esi = ((zx.d(*edi) * zx.d(*esi)) s>> 8).b
                uint32_t ebx_3 = zx.d(*(esi + 2))
                *(esi + 1) = ((zx.d(edi[1]) * ebx_2) s>> 8).b
                *(esi + 2) = ((zx.d(edi[2]) * ebx_3) s>> 8).b
                esi += 4
                edi = &edi[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        esi += eax_7
        edi = &edi[result]
        i = arg3
        arg3 -= 1
    while (i != 1)

return result
