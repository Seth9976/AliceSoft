// 函数: sub_5f95b0
// 地址: 0x5f95b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t result = GetTickCount()

if (result - *(arg1 + 0x28) u< *(arg1 + 0xc))
    result.b = 1
    return result

int32_t* ebp = *(arg1 + 0x14)
*(arg1 + 0x28) = result

if (ebp != *(arg1 + 0x18))
    while (true)
        int32_t eax = *ebp
        int32_t esi_2 = *(*(arg1 + 0x2c) + 4) + eax
        char* eax_1 = data_797d94
        
        if (sub_5d57f0(eax_1) != 0)
            void* edi_2 = *(eax_1 + 0x3c)
            bool cond:0_1 = *(edi_2 + 4) == 0
            int32_t var_c = esi_2
            
            if (not(cond:0_1))
                int32_t* var_8
                sub_42e070(edi_2 + 0x18, &var_8, &var_c)
                int32_t* eax_4 = var_8
                
                if (eax_4 != *(edi_2 + 0x1c))
                    int32_t* eax_5 = eax_4[4]
                    
                    if (eax_5 != 0 && (*(**eax_5 + 0x1c))().b != 0)
                        ebp = &ebp[1]
                        
                        if (ebp == *(arg1 + 0x18))
                            break
                        
                        continue
        
        char* eax_7 = data_797d94
        int32_t* esi_4 = *(*(arg1 + 0x2c) + 4) + eax
        bool eax_8 = sub_5d57f0(eax_7)
        
        if (eax_8 != 0)
            return sub_5d85d0(esi_4, *(eax_7 + 0x3c)) != 0
        
        return eax_8 != 0

result.b = 0
return result
