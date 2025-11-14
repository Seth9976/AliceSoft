// 函数: sub_4b2ff0
// 地址: 0x4b2ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
sub_4b31a0(ebp)
int32_t* eax

for (int32_t* i = *(ebp + 0x44); i != *(ebp + 0x48); i = &i[1])
    int32_t* esi_1 = *(*i + 8)
    enum MESSAGEBOX_RESULT eax_10
    
    if (esi_1 == 0)
        eax_10.b = 0
        return eax_10
    
    void* eax_2 = (*(*arg2 + 0x3c))(esi_1, 1)
    arg1 = eax_2
    
    if (eax_2 == 0)
        int32_t var_1c_2 = (*(*esi_1 + 0x10))((*(*esi_1 + 0x14))())
        sub_51ddc0(0x756680)
        eax_10.b = 0
        return eax_10
    
    int32_t eax_3 = *(ebp + 0x58)
    int32_t ecx_2
    
    if (&arg1 u< eax_3)
        ecx_2 = *(ebp + 0x54)
    
    if (&arg1 u>= eax_3 || ecx_2 u> &arg1)
        if (eax_3 == *(ebp + 0x5c))
            sub_4307a0(ebp + 0x54)
        
        eax = *(ebp + 0x58)
        
        if (eax != 0)
            *eax = eax_2
    else
        if (eax_3 == *(ebp + 0x5c))
            sub_4307a0(ebp + 0x54)
        
        eax = *(ebp + 0x58)
        
        if (eax != 0)
            *eax = *(*(ebp + 0x54) + ((&arg1 - ecx_2) s>> 2 << 2))
    
    *(ebp + 0x58) += 4

eax.b = 1
return eax
