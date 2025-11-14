// 函数: sub_4bfc80
// 地址: 0x4bfc80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2
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
    
    arg2.b = 0
    eax = sub_50bb70(ebp, *(arg1 + 0x3c), &arg2)
    *(arg1 + 8) = eax
    
    if (eax != 0 && sub_4bfef0(arg1, eax).b != 0)
        if (sub_4c0480(*(arg1 + 8)) == 0)
            int32_t* eax_4
            
            if (ebp[5] u< 0x10)
                eax_4 = ebp
            else
                eax_4 = *ebp
            
            int32_t* var_14_3 = eax_4
            sub_51ddc0(0x7563b4)
        
        *(arg1 + 0x10) = 0
        sub_401180(arg1 + 0x14, 0xffffffff, ebp, 0)
        sub_4c0520(arg1)
        int32_t (* eax_5)[0x101]
        eax_5.b = 1
        return eax_5

eax.b = 0
return eax
