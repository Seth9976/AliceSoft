// 函数: sub_528590
// 地址: 0x528590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
int32_t arg_4
int32_t ecx = arg_4

if (ecx s>= 0)
    void* eax = data_797d4c
    
    if (ecx s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        void* esi_1 = *(*(eax + 0x40) + (ecx << 2))
        
        if (esi_1 != 0)
            arg_4 = arg4
            
            if (arg4 s>= 0 && arg4 s< 3)
                sub_42e070(esi_1 + 0x15c, &var_4, &arg_4)
                int32_t* eax_4 = var_4
                
                if (eax_4 != *(esi_1 + 0x160))
                    return eax_4[4]

return 0
