// 函数: sub_58e810
// 地址: 0x58e810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp
int32_t var_18 = ebp
int32_t esi
int32_t var_1c = esi
int32_t ebp_1 = 0
int32_t edi
int32_t var_20 = edi

if (arg2 != 0 && (*(*arg2 + 0x10))() == *(arg1 + 0x28))
    int32_t ebx
    int32_t var_24 = ebx
    int32_t ebx_1 = *(arg1 + 0x2c)
    
    if ((*(*arg2 + 0x14))() == ebx_1)
        void* eax_4 = *(arg1 + 8)
        int32_t* var_10 = nullptr
        int32_t* eax_5 = **(eax_4 + 0x1c)
        
        if ((*(*eax_5 + 0x5c))(eax_5, *(arg1 + 0x28), ebx_1, 1, 0, 0x15, 2, &var_10, 0) s>= 0)
            int32_t* eax_6 = var_10
            int32_t* arg_8 = nullptr
            int32_t eax_8 = (*(*eax_6 + 0x48))(eax_6, 0, &arg_8)
            int32_t eax_11
            
            if (eax_8 s>= 0)
                int32_t* eax_10 = **(*(arg1 + 8) + 0x1c)
                eax_11 = (*(*eax_10 + 0x80))(eax_10, *(arg1 + 0x14), arg_8)
            
            if (eax_8 s>= 0 && eax_11 s>= 0)
                int32_t* eax_13 = arg_8
                int32_t var_4
                
                if ((*(*eax_13 + 0x34))(eax_13, &var_4, 0, 0x10) s>= 0)
                    int32_t i_2 = (*(*arg2 + 0x10))()
                    int32_t eax_17 = (*(*arg2 + 0x14))()
                    
                    if (eax_17 s> 0)
                        do
                            void* eax_19 = (*(*arg2 + 8))(0, ebp_1)
                            int32_t eax_21 = (*(*arg2 + 0x18))()
                            void* ecx_16 = var_4 * ebp_1 + __return_addr
                            int32_t eax_22
                            int32_t edx_12
                            edx_12:eax_22 = sx.q(eax_21)
                            int32_t i_1 = i_2
                            
                            if (i_1 s> 0)
                                void* edx_14 = eax_19 + 2
                                int32_t i
                                
                                do
                                    *(edx_14 - 2) = *ecx_16
                                    *(edx_14 - 1) = *(ecx_16 + 1)
                                    *edx_14 = *(ecx_16 + 2)
                                    edx_14 += ((edx_12 & 7) + eax_22) s>> 3
                                    ecx_16 += 4
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                            
                            ebp_1 += 1
                        while (ebp_1 s< eax_17)
                    
                    int32_t* eax_23 = arg_8
                    (*(*eax_23 + 0x38))(eax_23)
                    int32_t* eax_24 = arg_8
                    (*(*eax_24 + 8))(eax_24)
                    int32_t* eax_25 = var_10
                    (*(*eax_25 + 8))(eax_25)
                    int32_t eax_26
                    eax_26.b = 1
                    return eax_26
            else
                int32_t* eax_12 = var_10
                (*(*eax_12 + 8))(eax_12)
    
    int32_t eax_3
    eax_3.b = 0
    return eax_3

int32_t eax
eax.b = 0
return eax
