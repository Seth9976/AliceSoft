// 函数: sub_55f530
// 地址: 0x55f530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1
int32_t* var_8 = ebx
int32_t eax_1 = (**arg2)()
enum MESSAGEBOX_RESULT eax_8

if ((**ebx)() == eax_1)
    void* ecx_4 = ebx[1]
    eax_8 = *(ecx_4 + 0x1c)
    
    if (eax_8 s>= 0)
        void* ecx_6 = *(*(ecx_4 + 0x14) + 4)
        
        if (eax_8 u< (*(ecx_6 + 0x12c) - *(ecx_6 + 0x128)) s>> 4)
            int32_t eax_9 = eax_8 << 4
            
            if (eax_9 != neg.d(*(ecx_6 + 0x128)))
                void* ebp = *(eax_9 + *(ecx_6 + 0x128) + 4)
                int32_t esi_1 = *(ebp + 0x34)
                int32_t eax_10
                int32_t edx_7
                edx_7:eax_10 = muls.dp.d(0x2e8ba2e9, *(ebp + 0x38) - esi_1)
                int32_t edx_8 = edx_7 s>> 3
                int32_t i = 0
                int32_t eax_13
                
                if ((edx_8 u>> 0x1f) + edx_8 s> 0)
                    int32_t var_c_1 = 0
                    int32_t edx_21
                    
                    do
                        int32_t* eax_16
                        
                        switch (*(var_c_1 + esi_1 + 0x1c) - 0xa)
                            case 0, 1, 0x11, 0x25
                                int32_t* ecx_10 = ebx[1]
                                eax_16 = ecx_10[1]
                                
                                if (i u>= eax_16 u>> 2)
                                    eax_16.b = 0
                                    return eax_16
                                
                                int32_t ecx_11
                                
                                if (eax_16 != 0)
                                    ecx_11 = *ecx_10
                                else
                                    ecx_11 = 0
                                
                                int32_t* esi_2 = ecx_11 + (i << 2)
                                
                                if (esi_2 == 0)
                                    eax_16.b = 0
                                    return eax_16
                                
                                eax_16 = (*(*arg2 + 0xc))(i)
                                
                                if (eax_16 == 0)
                                    eax_16.b = 0
                                    return eax_16
                                
                                *esi_2 = *eax_16
                            case 2
                                int32_t* ebx_1 = (*(*ebx + 0xc))(i)
                                
                                if (ebx_1 == 0)
                                    eax_16.b = 0
                                    return eax_16
                                
                                eax_16 = (*(*arg2 + 0xc))(i)
                                
                                if (eax_16 == 0)
                                    eax_16.b = 0
                                    return eax_16
                                
                                (*(*ebx_1 + 4))((**eax_16)())
                                ebx = var_8
                            case 3
                                int32_t* esi_4 = ebx[1]
                                int32_t var_4
                                
                                if (sub_54f990(esi_4, i, &var_4).b == 0)
                                    eax_16.b = 0
                                    return eax_16
                                
                                int32_t* esi_5 = sub_5529f0(esi_4[5], i, var_4)
                                
                                if (esi_5 == 0)
                                    eax_16.b = 0
                                    return eax_16
                                
                                eax_16 = (*(*arg2 + 0xc))(i)
                                
                                if (eax_16 == 0)
                                    eax_16.b = 0
                                    return eax_16
                                
                                if ((*(*sub_5521d0(esi_5) + 0x20))(eax_16).b == 0)
                                    eax_16.b = 0
                                    return eax_16
                                
                                ebx = var_8
                            default
                                sub_604c90("IVMStruct3::Copy()\n")
                                eax_16.b = 0
                                return eax_16
                        
                        esi_1 = *(ebp + 0x34)
                        var_c_1 += 0x2c
                        int32_t edx_20
                        edx_20:eax_13 = muls.dp.d(0x2e8ba2e9, *(ebp + 0x38) - esi_1)
                        edx_21 = edx_20 s>> 3
                        i += 1
                    while (i s< (edx_21 u>> 0x1f) + edx_21)
                
                eax_13.b = 1
                return eax_13
else
    int32_t var_20_1 = (**ebx)((**arg2)())
    sub_604c90("IVMStruct3::Copy()\nDest ")

eax_8.b = 0
return eax_8
