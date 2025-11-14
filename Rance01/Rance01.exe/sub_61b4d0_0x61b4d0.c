// 函数: sub_61b4d0
// 地址: 0x61b4d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
int32_t i_1 = 0

if (((*(arg1 + 0x2c) - *(arg1 + 0x28)) & 0xfffffffc) s> 0)
    int32_t i
    
    do
        int32_t ecx = *(arg1 + 0x28)
        int32_t ebx_1 = arg2[4]
        void** eax_3 = *(ecx + (i_1 << 2)) + 0xc
        int32_t* ecx_1
        
        if (arg2[5] u< 0x10)
            ecx_1 = arg2
        else
            ecx_1 = *arg2
        
        int32_t esi_1 = eax_3[4]
        int32_t edx_2 = esi_1
        
        if (esi_1 u>= ebx_1)
            edx_2 = ebx_1
        
        if (eax_3[5] u>= 0x10)
            eax_3 = *eax_3
        
        if (sub_402320(eax_3, eax_3, ecx_1, edx_2) == 0 && esi_1 u>= ebx_1)
            int32_t eax_4
            eax_4.b = esi_1 != ebx_1
            
            if (eax_4 == 0)
                return *(*(var_4 + 0x28) + (i_1 << 2))
        
        *(ecx + (i_1 << 2))
        int32_t result = sub_61b4d0(arg2)
        
        if (result != 0)
            return result
        
        arg1 = var_4
        i = i_1 + 1
        i_1 = i
    while (i s< (*(arg1 + 0x2c) - *(arg1 + 0x28)) s>> 2)

return 0
