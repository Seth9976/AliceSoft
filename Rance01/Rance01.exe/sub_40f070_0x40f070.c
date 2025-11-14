// 函数: sub_40f070
// 地址: 0x40f070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
void* eax = data_797d38
int32_t ebx_2 = (*(eax + 0x14) - *(eax + 0x10)) s>> 2
void* var_4 = nullptr

if (ebx_2 s> 0)
    int32_t* ebp_1 = *(eax + 0x10)
    
    do
        char* eax_1 = arg1
        void* ecx_1 = *ebp_1
        char i
        
        do
            i = *eax_1
            eax_1 = &eax_1[1]
        while (i != 0)
        void* eax_2 = eax_1 - &eax_1[1]
        void* esi_2 = *(ecx_1 + 0x14)
        void* eax_3 = esi_2
        
        if (esi_2 u>= eax_2)
            eax_3 = eax_2
        
        void* edx
        
        if (*(ecx_1 + 0x18) u< 0x10)
            edx = ecx_1 + 4
        else
            edx = *(ecx_1 + 4)
        
        if (sub_402320(eax_3, edx, arg1, eax_3) == 0 && esi_2 u>= eax_2)
            int32_t eax_4
            eax_4.b = esi_2 != eax_2
            
            if (eax_4 == 0)
                eax_4.b = 1
                return eax_4
        
        eax = var_4 + 1
        ebp_1 = &ebp_1[1]
        var_4 = eax
    while (eax s< ebx_2)

eax.b = 0
return eax
