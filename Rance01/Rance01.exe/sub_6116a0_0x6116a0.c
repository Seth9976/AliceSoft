// 函数: sub_6116a0
// 地址: 0x6116a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = data_797dac
int32_t* eax = *(arg1 + 0xc8)

if (ebx s>= 0)
    int32_t edi_1 = *eax
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x66666667, eax[1] - edi_1)
    int32_t edx_2 = edx_1 s>> 3
    
    if (ebx s< (edx_2 u>> 0x1f) + edx_2)
        void* edi_2 = edi_1 + ebx * 0x14
        
        if (edi_2 != 0)
            int32_t eax_8
            int32_t edx_4
            edx_4:eax_8 = sx.q(GetScrollPos(*(arg1 + 0x88), SB_HORZ) * *(arg1 + 0xb4))
            int32_t ebp_1 = (eax_8 - edx_4) s>> 1
            int32_t var_14 = ebp_1
            int32_t eax_11 = GetScrollPos(*(arg1 + 0x88), SB_VERT)
            int32_t var_c = 0
            int32_t ebx_3 = (*(arg1 + 0xb8) + *(arg1 + 0xb4)) * eax_11
            int32_t eax_14 = (*(edi_2 + 8) - *(edi_2 + 4)) s>> 2
            
            if (eax_14 s> 0)
                int32_t ecx_4 = *(arg1 + 0xbc)
                int32_t* edi_3 = *(edi_2 + 4)
                int32_t ecx_5 = *(arg1 + 0xb4)
                int32_t edx_6 = *(arg1 + 0xb8) + ecx_5
                int32_t var_1c_1 = ecx_5
                int32_t* var_8_1 = edi_3
                
                while (true)
                    void* result = *edi_3
                    int32_t eax_17
                    int32_t edx_7
                    edx_7:eax_17 = sx.q(*(result + 0x20) * ecx_5)
                    int32_t eax_21
                    int32_t edx_8
                    edx_8:eax_21 = sx.q(*(result + 0x28) * var_1c_1)
                    int32_t ebp_2 = *(result + 0x24)
                    
                    if (arg2 s>= ((eax_17 - edx_7) s>> 1) - ecx_4 - ebp_1
                            && arg2 s< ((eax_21 - edx_8) s>> 1) - ecx_4 - var_14
                            && arg3 s>= ebp_2 * edx_6 - ebx_3
                            && arg3 s< (ebp_2 + 1) * edx_6 - ebx_3)
                        return result
                    
                    int32_t eax_28 = var_c + 1
                    edi_3 = &var_8_1[1]
                    var_c = eax_28
                    var_8_1 = edi_3
                    
                    if (eax_28 s>= eax_14)
                        break
                    
                    ebp_1 = var_14
                    ecx_5 = var_1c_1

return 0
