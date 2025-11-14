// 函数: sub_65c190
// 地址: 0x65c190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_38
int32_t eax_1 = data_78c474 ^ &var_38
int32_t* result = arg2

if (result s>= 0)
    void* esi_1 = *(data_797d2c + 0x30)
    int32_t* result_2 = result
    int32_t* result_1
    sub_42e070(esi_1 + 0x294, &result_1, &result_2)
    result = result_1
    
    if (result != *(esi_1 + 0x298))
        result = result[4]
        
        if (result != 0)
            int32_t* edi_1 = result[0x33]
            
            if (edi_1 != 0)
                void* ebp_1 = (*(*edi_1 + 8))(0, 0)
                int32_t eax_6 = (*(*edi_1 + 0x10))()
                int32_t* result_3 = (*(*edi_1 + 0x14))()
                int32_t eax_8 = *(*edi_1 + 0x18)
                result_1 = result_3
                int32_t* result_4 = eax_8()
                void* edx_6 = *edi_1
                result_2 = result_4
                uint32_t ebx_3 = ((*(edx_6 + 0x10))() * result_2) u>> 3
                int32_t eax_13 = (*(*edi_1 + 0x1c))() - ebx_3
                sub_657be0(arg1 + 0x78, result_3, eax_6)
                void* esi_3 = arg1 + 0xbc
                void* var_18_1 = esi_3
                sub_6a4b20(eax_6, esi_3, *(arg1 + 0x34), result_1)
                HBRUSH eax_19 = CreateSolidBrush(*(arg1 + 0x60))
                RECT lprc
                lprc.right = *(esi_3 + 4)
                lprc.left = 0
                lprc.top = 0
                lprc.bottom = *(esi_3 + 8)
                FillRect(*(esi_3 + 0xc), &lprc, eax_19)
                DeleteObject(eax_19)
                int32_t eax_21 = 0
                int32_t var_20_1 = 0
                
                if (result_1 u> 0)
                    do
                        int32_t edi_4 = 0
                        
                        if (eax_6 u> 0)
                            do
                                char ecx_9 = *(ebp_1 + 1)
                                char edx_11 = *ebp_1
                                char var_32_1 = *(ebp_1 + 2)
                                ebp_1 += 3
                                char ecx_10 = 0xff
                                
                                if (result_2 == 0x20)
                                    ecx_10 = *ebp_1
                                    ebp_1 += 1
                                
                                if (*(arg1 + 0x98) != 0 && eax_21 u< *(arg1 + 0x8c)
                                        && edi_4 u< *(arg1 + 0x88))
                                    char* eax_25 = *(arg1 + 0x94) * edi_4
                                        + *(arg1 + 0x90) * var_20_1 + *(arg1 + 0x78)
                                    esi_3 = var_18_1
                                    *eax_25 = edx_11
                                    eax_25[1] = ecx_9
                                    eax_25[2] = var_32_1
                                    eax_25[3] = ecx_10
                                    eax_21 = var_20_1
                                
                                edi_4 += 1
                            while (edi_4 u< eax_6)
                        
                        ebp_1 += eax_13
                        eax_21 += 1
                        var_20_1 = eax_21
                    while (eax_21 u< result_1)
                
                void* ecx_11 = *(arg1 + 0x8c)
                void* eax_27 = *(arg1 + 0x88)
                int80_t st0_1
                st0_1, result = sub_657f50(ecx_11, ecx_11, arg1 + 0x78, *esi_3, eax_27, eax_27)

sub_6b4885(eax_1 ^ &var_38)
return result
