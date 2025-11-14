// 函数: sub_5299a0
// 地址: 0x5299a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_3 = arg1
void* eax

if (ecx_3 s>= 0)
    eax = data_797d4c
    
    if (ecx_3 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        void* esi_1 = *(*(eax + 0x40) + (ecx_3 << 2))
        
        if (esi_1 != 0)
            int32_t edx_5 = *(*arg2 + 0x18)
            arg1 = 0x100
            int32_t eax_1
            
            if (edx_5(&arg1, 1).b != 0)
                eax_1 = (*(*arg2 + 0x10))(0)
                int32_t* ecx_2 = *(esi_1 + 0x1f8)
                
                if (ecx_2 != 0)
                    return sub_509a00(ecx_2, eax_1)
            
            eax_1.b = 0
            return eax_1

eax.b = 0
return eax
