// 函数: sub_435e30
// 地址: 0x435e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_10 = ebx
int32_t eax

if (*(arg1 + 0x10) == *(arg1 + 0x14))
    eax.b = 1
    return eax

int32_t esi
int32_t var_14 = esi
void* const esi_1 = nullptr

if (*(arg1 + 0x20) != 0 && (*(**(arg1 + 0x20) + 0x34))().b != 0)
    int32_t edi
    int32_t var_18 = edi
    void** i = *(arg1 + 0x10)
    void** i_1 = i
    char eax_3 = (*(**(arg1 + 0x20) + 0x20))()
    
    if (eax_3 == 0)
        return eax_3
    
    int32_t ebp
    int32_t var_18_1 = ebp
    int32_t* edi_7
    
    if (i == *(arg1 + 0x14))
        edi_7 = arg3
    else
        do
            void* ebp_1 = *i
            
            if (ebp_1 != 0)
                void* ecx_3 = *(ebp_1 + 0xd4)
                
                if (ecx_3 == 0)
                    if (esi_1 == 0)
                        goto label_435f2c
                    
                    if (sub_4354b0(esi_1, ebp_1) == 0)
                        sub_435fc0(i_1, arg3, arg1, i_1, arg2)
                    label_435f2c:
                        esi_1 = ebp_1
                        i_1 = *(ebp_1 + 0xcc)
                        arg2 = 1
                    else
                        arg2 += 1
                else
                    if (esi_1 != 0)
                        sub_435fc0(arg2, arg3, arg1, i_1, arg2)
                        esi_1 = nullptr
                    
                    if ((*(*ecx_3 + 0xc))() == 0)
                        return 0
                    
                    if ((*(**(arg1 + 0x20) + 0x20))() == 0)
                        return 0
            
            void** i_2
            i = &i_2[1]
            i_2 = i
        while (i != *(arg1 + 0x14))
        
        if (esi_1 == 0)
            edi_7 = arg3
        else
            edi_7 = arg3
            
            if (sub_434d40(arg1, esi_1, edi_7, *(arg1 + 0x2c), *(arg1 + 0x30)) != 0)
                (*(**(arg1 + 0x20) + 0x24))(i_1)
                (*(*edi_7 + 0x74))(arg2 * 2)
                int32_t eax_15
                eax_15.b = 1
                return eax_15
    
    (*(*edi_7 + 0x74))()
    int32_t eax_17
    eax_17.b = 1
    return eax_17

eax.b = 1
return eax
