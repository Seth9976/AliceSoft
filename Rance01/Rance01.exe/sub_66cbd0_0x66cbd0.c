// 函数: sub_66cbd0
// 地址: 0x66cbd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 != 0)
    int32_t eax_1 = *(arg1 + 8)
    
    if ((*(arg1 + 0xc) - eax_1) s>> 2 s>= arg2)
        void* ecx_3 = *(eax_1 + (arg2 << 2) - 4)
        
        if (ecx_3 != 0)
            int32_t eax_2 = *(ecx_3 + 8)
            
            if (eax_2 == 4)
                int32_t* ecx_4 = *(ecx_3 + 0x5c)
                return (ecx_4[1] - *ecx_4) s>> 2
            
            if (eax_2 == 5)
                return (*(ecx_3 + 0x70) - *(ecx_3 + 0x6c)) s>> 2

return 0
