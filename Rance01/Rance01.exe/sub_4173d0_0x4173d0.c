// 函数: sub_4173d0
// 地址: 0x4173d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg2 - 1)
int32_t ebp_1 = (eax_1 - edx) s>> 1

if (arg3 s< arg2)
    int32_t ecx_12
    
    do
        void* esi_1 = *(arg1 + (ebp_1 << 2))
        void* edi_1 = *arg4
        int32_t ebx_1
        
        if (*(esi_1 + 0x28) != 0)
            ebx_1 = (*(**(esi_1 + 0x28) + 0x2c))()
        else
            ebx_1 = 0
        
        int32_t eax_6
        
        if (*(edi_1 + 0x28) != 0)
            eax_6 = (*(**(edi_1 + 0x28) + 0x2c))()
        else
            eax_6 = 0
        
        if (ebx_1 s>= eax_6)
            int32_t ebx_2
            
            if (*(esi_1 + 0x28) != 0)
                ebx_2 = (*(**(esi_1 + 0x28) + 0x2c))()
            else
                ebx_2 = 0
            
            int32_t eax_10
            
            if (*(edi_1 + 0x28) != 0)
                eax_10 = (*(**(edi_1 + 0x28) + 0x2c))()
            else
                eax_10 = 0
            
            if (ebx_2 s> eax_10)
                break
            
            int32_t ebx_3
            
            if (*(esi_1 + 0x28) != 0)
                ebx_3 = (*(**(esi_1 + 0x28) + 0x28))()
            else
                ebx_3 = 0
            
            int32_t eax_14
            
            if (*(edi_1 + 0x28) != 0)
                eax_14 = (*(**(edi_1 + 0x28) + 0x28))()
            else
                eax_14 = 0
            
            if (ebx_3 s>= eax_14)
                int32_t ebx_4
                
                if (*(esi_1 + 0x28) != 0)
                    ebx_4 = (*(**(esi_1 + 0x28) + 0x28))()
                else
                    ebx_4 = 0
                
                int32_t eax_18
                
                if (*(edi_1 + 0x28) != 0)
                    eax_18 = (*(**(edi_1 + 0x28) + 0x28))()
                else
                    eax_18 = 0
                
                if (ebx_4 s> eax_18)
                    break
                
                int32_t esi_2
                
                if (*(esi_1 + 0x28) != 0)
                    esi_2 = (*(**(esi_1 + 0x28) + 0x24))()
                else
                    esi_2 = 0
                
                int32_t eax_22
                
                if (*(edi_1 + 0x28) != 0)
                    eax_22 = (*(**(edi_1 + 0x28) + 0x24))()
                else
                    eax_22 = 0
                
                if (esi_2 s>= eax_22)
                    break
        
        *(arg1 + (arg2 << 2)) = *(arg1 + (ebp_1 << 2))
        int32_t eax_26
        int32_t edx_12
        edx_12:eax_26 = sx.q(ebp_1 - 1)
        ecx_12 = ebp_1
        arg2 = ecx_12
        ebp_1 = (eax_26 - edx_12) s>> 1
    while (arg3 s< ecx_12)

*(arg1 + (arg2 << 2)) = *arg4
return arg2
