// 函数: sub_6507e0
// 地址: 0x6507e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx
int32_t* var_4 = ecx
int32_t** eax

if (arg1 s> 0)
    void* edi_1 = data_797ddc
    int32_t* var_14_1 = arg1
    int32_t* ecx_1
    int32_t edx
    int32_t edx_1
    eax, ecx_1, edx_1 = sub_418b70(edi_1 + 0xa8, edx, ecx)
    
    if (eax.b != 0)
        int32_t* var_14_2 = arg1
        
        if (sub_418b70(edi_1 + 0xa8, edx_1, ecx_1).b != 0)
            eax.b = sub_6841d0(arg1, arg2) == 3
            
            if (eax.b != 0)
                int32_t ecx_4
                eax, ecx_4 = sub_67fe90(arg1, arg2)
                
                if (eax[1] s> arg3)
                    eax = *eax
                    
                    for (int32_t* i = *eax; i != eax; i = *i)
                        if (arg3 s<= 0)
                            if (i == eax)
                                break
                            
                            int32_t* eax_3 = i[2]
                            *arg4 = *eax_3
                            *arg5 = eax_3[1]
                            *arg6 = eax_3[2]
                            *arg7 = eax_3[3]
                            *arg8 = eax_3[4]
                            *arg9 = fconvert.s(fconvert.t(eax_3[6]))
                            *arg10 = fconvert.s(fconvert.t(eax_3[7]))
                            *arg11 = eax_3[8]
                            *arg12 = eax_3[8]
                            *arg13 = eax_3[8]
                            *arg14 = sub_680350(arg1, arg2)
                            *arg15 = sub_6803d0(arg1, arg2)
                            sub_401180(arg16, 0xffffffff, i[2] + 0x38, 0)
                            int32_t* eax_7
                            eax_7.b = 1
                            return eax_7

eax.b = 0
return eax
