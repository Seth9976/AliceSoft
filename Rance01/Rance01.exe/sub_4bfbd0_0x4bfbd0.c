// 函数: sub_4bfbd0
// 地址: 0x4bfbd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax

if (*(arg1 + 0x3c) != 0)
    int32_t* ecx_1 = *(arg1 + 0xc)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        *(arg1 + 0xc) = 0
    
    int32_t* ecx_2 = *(arg1 + 8)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))()
        *(arg1 + 8) = 0
    
    int32_t var_10_1 = arg3
    eax = sub_50b8d0(*(arg1 + 0x3c), arg2)
    *(arg1 + 8) = eax
    
    if (eax != 0 && sub_4bfef0(arg1, eax).b != 0)
        if (sub_4c0480(*(arg1 + 8)) == 0)
            int32_t* eax_5
            
            if (arg2[5] u< 0x10)
                eax_5 = arg2
            else
                eax_5 = *arg2
            
            int32_t* var_10_3 = eax_5
            sub_51ddc0(0x756384)
        
        *(arg1 + 0x10) = 1
        sub_401180(arg1 + 0x14, 0xffffffff, arg2, 0)
        sub_4c0520(arg1)
        int32_t (* eax_6)[0x101]
        eax_6.b = 1
        return eax_6

eax.b = 0
return eax
