// 函数: sub_4b1b50
// 地址: 0x4b1b50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
sub_4b1590(ebp)
int32_t* eax

for (int32_t* i = *ebp; i != ebp[1]; i = &i[1])
    if (*i != 0)
        int32_t* eax_5 = (*(*arg2 + 0x2c))()
        arg1 = eax_5
        
        if (eax_5 == 0)
            eax_5.b = 0
            return eax_5
        
        int32_t eax_6 = *i
        int32_t ecx_4 = *(eax_6 + 0x38)
        int32_t* esi_1
        
        if (ecx_4 + *(eax_6 + 0x34) s< 0 || ecx_4 + *(eax_6 + 0x34) s<= 0)
            esi_1 = *(eax_6 + 8)
        else
            esi_1 = *(eax_6 + 0xc)
        
        void* eax_7 = *eax_5
        
        if (esi_1 == 0)
            goto label_4b1c65
        
        if ((*(eax_7 + 8))(esi_1, 0) == 0)
            int32_t var_1c_2 = (*(*esi_1 + 0x10))((*(*esi_1 + 0x14))())
            sub_51ddc0(0x756780)
            eax_7 = *eax_5
        label_4b1c65:
            (*(eax_7 + 4))()
            eax_5.b = 0
            return eax_5
        
        sub_61b5a0(&arg1, &ebp[0xc])
    else
        int32_t eax_1 = ebp[0xd]
        arg1 = nullptr
        int32_t ecx_1
        
        if (&arg1 u< eax_1)
            ecx_1 = ebp[0xc]
        
        if (&arg1 u>= eax_1 || ecx_1 u> &arg1)
            if (eax_1 == ebp[0xe])
                sub_4307a0(&ebp[0xc])
            
            eax = ebp[0xd]
            
            if (eax != 0)
                *eax = 0
            
            ebp[0xd] += 4
        else
            if (eax_1 == ebp[0xe])
                sub_4307a0(&ebp[0xc])
            
            eax = ebp[0xd]
            
            if (eax != 0)
                *eax = *(ebp[0xc] + ((&arg1 - ecx_1) s>> 2 << 2))
            
            ebp[0xd] += 4

eax.b = 1
return eax
