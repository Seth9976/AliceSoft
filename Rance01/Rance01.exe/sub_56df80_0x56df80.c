// 函数: sub_56df80
// 地址: 0x56df80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[2] == 0)
    int32_t eax
    eax.b = 0
    return eax

void* edi = *(*arg1 + 0xc)

if (edi != 0)
    char eax_2 = sub_58a680(edi)
    
    if (eax_2 == 0)
        return eax_2

int32_t* esi = (*(*arg1[2] + 0x28))()

if (esi != 0)
    void* edi_1 = *esi
    int32_t eax_6 = (*(*arg1[2] + 0x5c))(1)
    
    if ((*(edi_1 + 8))(arg1[7], arg1[8], 1, 1, eax_6) == 0)
        sub_604c90(0x74b644)
        (*(*esi + 4))()
        int32_t eax_10
        eax_10.b = 0
        return eax_10
    
    if ((*(*esi + 0x14))() == 0)
        goto label_56e047
    
    int32_t* ecx_6 = arg1[2]
    int32_t* var_10_2 = ecx_6
    
    if ((*(*ecx_6 + 0x44))(0, fconvert.s(float.t(1))).b != 0)
        char eax_15 = (*(*arg1[2] + 0x4c))()
        char eax_17
        
        if (eax_15 != 0)
            eax_17 = sub_56e0a0(arg1)
        
        int32_t edx_7
        
        if (eax_15 != 0 && eax_17 != 0)
            bool cond:0_1 = (*(*arg1[2] + 0x50))() == 0
            edx_7 = *(*esi + 0x18)
            
            if (cond:0_1)
                goto label_56e045
            
            bool cond:1_1 = edx_7() == 0
            void* eax_19 = *esi
            
            if (cond:1_1)
                (*(eax_19 + 4))()
            else
                bool cond:2_1 = (*(eax_19 + 0x2c))(arg1[6]) == 0
                int32_t edx_10 = *(*esi + 4)
                
                if (not(cond:2_1))
                    edx_10()
                    int32_t eax_26
                    eax_26.b = 1
                    return eax_26
                
                edx_10()
        else
            edx_7 = *(*esi + 0x18)
        label_56e045:
            edx_7()
        label_56e047:
            (*(*esi + 4))()

int32_t* eax_4
eax_4.b = 0
return eax_4
