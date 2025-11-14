// 函数: sub_4022d0
// 地址: 0x4022d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax

if (*arg1 == *arg2)
    eax.w = arg1[1].w
    
    if (eax.w == arg2[1].w)
        eax.w = *(arg1 + 6)
        
        if (eax.w == *(arg2 + 6))
            char* esi_1 = arg2 - arg1
            void* eax_1 = &arg1[2]
            void* edx = 0xfffffff8 - arg1
            
            do
                arg1.b = *eax_1
                
                if (arg1.b != *(esi_1 + eax_1))
                    eax_1.b = 0
                    return eax_1
                
                eax_1 += 1
            while (edx + eax_1 s< 8)
            
            eax_1.b = 1
            return eax_1

eax.b = 0
return eax
