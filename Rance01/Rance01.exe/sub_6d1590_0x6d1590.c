// 函数: sub_6d1590
// 地址: 0x6d1590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1
void* ecx = arg2
int32_t edi = arg3
int32_t ebp = arg4
int32_t esi = arg5
void* result = nullptr
void* result_1 = nullptr
void* i_2

if (ebp s<= esi)
    i_2 = nullptr
    
    while (true)
        int32_t ebx_1 = sx.d(*(edi + (*((ebp << 2) + &data_79aee0) << 1)))
        
        if (ebx_1 != 0)
            int32_t var_14_1
            int32_t ebx_2
            
            if (ebx_1 s< 0)
                ebx_2 = neg.d(ebx_1) s>> arg6
                var_14_1 = ebx_2 ^ 0xffffffff
            else
                ebx_2 = ebx_1 s>> arg6
                var_14_1 = ebx_2
            
            if (ebx_2 != 0)
                sub_6d0f30(arg1, arg2)
                void* i = i_2
                
                if (i s> 0xf)
                    do
                        sub_6d10b0(arg1, arg2, &i_2)
                        i = i_2
                    while (i s> 0xf)
                    
                    esi = arg5
                    edi = arg3
                
                int32_t edx_2 = 1
                int32_t i_1 = ebx_2 s>> 1
                int32_t var_18_1 = 1
                
                if (i_1 != 0)
                    do
                        edx_2 += 1
                        i_1 s>>= 1
                    while (i_1 != 0)
                    
                    var_18_1 = edx_2
                
                int32_t eax_2 = (i << 4) + var_18_1
                uint32_t edx_3 = zx.d(*(arg2 + (eax_2 << 1) + 0x408))
                int32_t eax_3 = *(arg2 + (eax_2 << 2) + 8)
                
                if (arg1[0xf] != 0)
                    result = sub_6d0080(arg1, edx_3, eax_3)
                else
                    result = sub_6cffa0(arg1, edx_3, eax_3)
                
                if (result != 0)
                    return result
                
                if (arg1[0xf] != 0)
                    result = sub_6d0080(arg1, var_14_1, var_18_1)
                else
                    result = sub_6cffa0(arg1, var_14_1, var_18_1)
                
                if (result != 0)
                    return result
                
                result = nullptr
                result_1 = nullptr
            else
                result += 1
                result_1 = result
        else
            result += 1
            result_1 = result
        
        ebp += 1
        
        if (ebp s> esi)
            break
        
        i_2 = result_1
    
    ecx = arg2
    ebx = arg1

if (result s> 0)
    result = ebx[0xa] + 1
    ebx[0xa] = result
    
    if (result == 0x7fff)
        i_2 = result_1
        return sub_6d0f30(ebx, ecx)

return result
