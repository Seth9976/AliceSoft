// 函数: sub_4ffc70
// 地址: 0x4ffc70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = arg2
int32_t i = (arg1 - result) s>> 2

if (i s> 0)
    void* ebp_1 = *arg3
    
    do
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(i)
        int32_t edx_2 = *(ebp_1 + 0x1c)
        int32_t i_1 = (eax_4 - edx_1) s>> 1
        void* esi_1 = *(result + (i_1 << 2))
        int32_t ecx_1 = *(esi_1 + 0x1c)
        
        if (edx_2 s< ecx_1)
            i = i_1
        else if (edx_2 s> ecx_1)
            result = result + (i_1 << 2) + 4
            i += 0xffffffff - i_1
        else
            int32_t ecx_2 = *(ebp_1 + 0x20)
            int32_t edx_3 = *(esi_1 + 0x20)
            
            if (ecx_2 s< edx_3)
                i = i_1
            else if (ecx_2 s> edx_3)
                result = result + (i_1 << 2) + 4
                i += 0xffffffff - i_1
            else
                ecx_2.b = *(ebp_1 + 0x7b)
                edx_3.b = *(esi_1 + 0x7b)
                
                if (ecx_2.b u< edx_3.b)
                    i = i_1
                else if (ecx_2.b u> edx_3.b)
                    result = result + (i_1 << 2) + 4
                    i += 0xffffffff - i_1
                else
                    ecx_2.b = *(ebp_1 + 0x26)
                    
                    if (ecx_2.b u< *(esi_1 + 0x26))
                        i = i_1
                    else
                        result = result + (i_1 << 2) + 4
                        i += 0xffffffff - i_1
    while (i s> 0)

return result
