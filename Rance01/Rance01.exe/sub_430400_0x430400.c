// 函数: sub_430400
// 地址: 0x430400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x5c) != 0)
    return 

for (int32_t* i = *(arg1 + 0x34); i != *(arg1 + 0x38); i = &i[1])
    void* edi_1 = *i
    int32_t var_c = arg2
    char var_e = 0
    char var_d = 0
    sub_431980(edi_1, &var_c, &var_e, &var_d)
    
    if (var_e != 0)
        char* eax = *(arg1 + 0x1c)
        int32_t ecx_2 = var_c
        int32_t var_8 = ecx_2
        
        if (eax != 0)
            *(arg1 + 0x54) = 1
            void* eax_2 = *(eax + 0x24)
            int32_t eax_3
            
            if (eax_2 != 0)
                eax_3 = *(eax_2 + 0x18)
            else
                eax_3 = 0xffffffff
            
            var_c = eax_3
            int32_t var_4 = 0
            eax = &var_c
            
            if (eax_3 s>= ecx_2)
                eax = &var_8
            
            if (*eax s<= 0)
                eax = &var_4
            
            *(arg1 + 0x58) = *eax
            *(arg1 + 0x5c) = 0
    else if (var_d != 0)
        *(arg1 + 0x5c) = 1
