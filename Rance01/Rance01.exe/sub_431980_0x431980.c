// 函数: sub_431980
// 地址: 0x431980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

bool cond:0 = *(arg1 + 8) == 0
char* eax = arg4
char* ebx = arg3
int32_t* ebp = arg2
*ebx = 0
*eax = 0

if (not(cond:0))
    void* esi_1 = *(arg1 + 0xc)
    
    if (esi_1 != 0)
        if (*(esi_1 + 8) != 5)
        label_4319d8:
            int32_t* ecx_3 = *(arg1 + 0x10)
            
            if (ecx_3 != 0)
                int32_t eax_3 = (*(*ecx_3 + 4))()
                *(arg1 + 0x10) = 0
                return eax_3
        else
            arg3 = *ebp
            sub_42e070(esi_1 + 0x4c, &arg2, &arg3)
            eax = arg2
            
            if (eax == *(esi_1 + 0x50))
                goto label_4319d8
            
            int32_t* esi_2 = *(eax + 0x10)
            
            if (esi_2 == 0)
                goto label_4319d8
            
            int32_t* ecx_4 = *(arg1 + 0x10)
            
            if (ecx_4 != esi_2)
                if (ecx_4 != 0)
                    (*(*ecx_4 + 4))()
                
                *(arg1 + 0x10) = esi_2
                (**esi_2)()
                eax = esi_2[2]
                
                if (eax != 0xffffffff)
                    *ebp = eax
                    *ebx = 1
                    return eax
                
                eax.b = esi_2[3].b
                *arg4 = eax.b

return eax
