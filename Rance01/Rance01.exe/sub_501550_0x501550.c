// 函数: sub_501550
// 地址: 0x501550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
void arg_4
sub_42e070(arg2, &var_4, &arg_4)
int32_t* eax_1 = var_4

if (eax_1 != *(arg2 + 4))
    void* const eax_2 = eax_1[4]
    
    if (eax_2 != 0)
        int32_t ecx_3 = (*(eax_2 + 0x50) - *(eax_2 + 0x4c)) s>> 2
        
        if (ecx_3 s<= 0)
            return eax_2
        
        if (arg3 s>= 0 && arg3 s< ecx_3)
            int32_t edx_2 = *(*(eax_2 + 0x4c) + (arg3 << 2))
            
            if (edx_2 != 0)
                return edx_2
        
        if (ecx_3 s>= 1 && ecx_3 s> 0)
            return **(eax_2 + 0x4c)

return nullptr
