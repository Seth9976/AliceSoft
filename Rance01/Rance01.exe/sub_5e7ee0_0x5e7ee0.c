// 函数: sub_5e7ee0
// 地址: 0x5e7ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg1

if (arg2[1] != 0 && arg2[3] != 0)
    arg1 = *arg2
    
    if (arg1 != 0xffffffff && arg3 s> 0 && edi s> 0)
        int32_t* esi = sub_5f9dd0(arg1)
        int32_t* eax
        
        if (esi != 0)
            int32_t ebx
            ebx.b = (*(*esi + 0x24))()
            eax = (*(*esi + 0x28))()
            int32_t* eax_7
            int32_t* edi_1
            
            if (ebx.b != 0)
                int32_t edx_3 = *(*esi + 0x18)
                
                if (eax.b == 0)
                    int32_t eax_8 = edx_3()
                    int32_t* ecx_7 = *arg2[2]
                    
                    if (ecx_7 != 0)
                        eax_7 = (*(*ecx_7 + 0xc))(arg3, edi, eax_8)
                        goto label_5e7fa3
                    
                    edi_1 = nullptr
                    goto label_5e7fac
                
                int32_t eax_5 = edx_3()
                int32_t* ecx_5 = *arg2[2]
                
                if (ecx_5 != 0)
                    eax_7 = (*(*ecx_5 + 8))(arg3, edi, eax_5)
                    goto label_5e7fa3
                
                edi_1 = nullptr
                goto label_5e7fac
            
            if (eax.b != 0)
                int32_t* ecx_8 = *arg2[2]
                
                if (ecx_8 != 0)
                    eax_7 = (*(*ecx_8 + 0x10))(arg3, edi)
                label_5e7fa3:
                    edi_1 = eax_7
                    goto label_5e7fac
                
                edi_1 = nullptr
            label_5e7fac:
                int32_t eax_14
                int32_t __saved_ebx_6
                eax_14, __saved_ebx_6 = (*(*esi + 0x14))()
                int32_t __saved_ebx_4 = __saved_ebx_6
                long double x87_r7_3 = float.t(0)
                int32_t eax_18
                int32_t ecx_12
                eax_18, ecx_12 = (*(*edi_1 + 0x14))(fconvert.s(x87_r7_3), fconvert.s(x87_r7_3), 
                    fconvert.s(float.t((*(*esi + 0x10))(fconvert.s(float.t(eax_14))))))
                int32_t var_20_1 = ecx_12
                int32_t eax_20
                int32_t ecx_14
                eax_20, ecx_14 = (*(*edi_1 + 0x10))(fconvert.s(float.t(eax_18)))
                long double x87_r7_6 = float.t(0)
                sub_5e6c10(ecx_14, esi, arg2[3], edi_1, fconvert.s(x87_r7_6), fconvert.s(x87_r7_6), 
                    fconvert.s(float.t(eax_20)))
                *arg2
                bool eax_22 = sub_5f9e20()
                int32_t eax_23 = *(*edi_1 + 4)
                
                if (eax_22 != 0)
                    eax_23()
                    int32_t eax_24
                    eax_24.b = 1
                    return eax_24
                
                eax_23()
        
        eax.b = 0
        return eax

arg1.b = 0
return arg1
