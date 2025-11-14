// 函数: sub_40f4a0
// 地址: 0x40f4a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax = *arg1
int32_t esi = *arg2

if (eax u>= esi)
    if (eax u> esi)
        eax.b = 0
        return eax
    
    eax = zx.d(arg1[1].w)
    int16_t esi_1 = arg2[1].w
    
    if (eax.w u>= esi_1)
        if (eax.w u> esi_1)
            eax.b = 0
            return eax
        
        eax = zx.d(*(arg1 + 6))
        int16_t esi_2 = *(arg2 + 6)
        
        if (eax.w u>= esi_2)
            if (eax.w u> esi_2)
                eax.b = 0
                return eax
            
            char* esi_4 = arg2 - arg1
            void* eax_1 = &arg1[2]
            void* edi = 0xfffffff8 - arg1
            
            do
                arg1.b = *eax_1
                arg2.b = *(esi_4 + eax_1)
                
                if (arg1.b u< arg2.b)
                    eax_1.b = 1
                    return eax_1
                
                if (arg1.b u> arg2.b)
                    break
                
                eax_1 += 1
            while (edi + eax_1 s< 8)
            
            eax_1.b = 0
            return eax_1

eax.b = 1
return eax
