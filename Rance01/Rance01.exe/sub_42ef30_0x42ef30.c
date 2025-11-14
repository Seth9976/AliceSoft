// 函数: sub_42ef30
// 地址: 0x42ef30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *arg2
int32_t* ebp = arg3
arg3 = eax

if (eax != arg2[1])
    long double x87_r7_1 = fconvert.t(-1f)
    long double x87_r6_1 = float.t(1)
    long double x87_r5_1 = float.t(0)
    
    while (true)
        void* esi_1 = *eax
        int32_t ebx_3 = *(esi_1 + 0x64) * ebp[2] s/ 0xff
        int32_t edi_3 = *(esi_1 + 0x60) * ebp[1] s/ 0xff
        int32_t eax_6 = *(esi_1 + 0x5c) * *ebp s/ 0xff
        
        if (eax_6 s<= 0)
            eax_6 = 0
        else if (eax_6 s> 0xff)
            eax_6 = 0xff
        
        *ebp = eax_6
        int32_t eax_7
        
        if (edi_3 s<= 0)
            eax_7 = 0
        else
            eax_7 = edi_3
            
            if (edi_3 s> 0xff)
                eax_7 = 0xff
        
        ebp[1] = eax_7
        int32_t eax_8
        
        if (ebx_3 s<= 0)
            eax_8 = 0
        else
            eax_8 = ebx_3
            
            if (ebx_3 s> 0xff)
                eax_8 = 0xff
        
        ebp[2] = eax_8
        ebp[3] = 0xff
        int32_t eax_10 = *(esi_1 + 0x68) + *arg4
        int32_t edx_11 = *(esi_1 + 0x70) + arg4[2]
        int32_t ecx_8 = *(esi_1 + 0x6c) + arg4[1]
        
        if (eax_10 s<= 0)
            eax_10 = 0
        else if (eax_10 s> 0xff)
            eax_10 = 0xff
        
        *arg4 = eax_10
        int32_t eax_11
        
        if (ecx_8 s<= 0)
            eax_11 = 0
        else
            eax_11 = ecx_8
            
            if (ecx_8 s> 0xff)
                eax_11 = 0xff
        
        arg4[1] = eax_11
        int32_t eax_12
        
        if (edx_11 s<= 0)
            eax_12 = 0
        else
            eax_12 = edx_11
            
            if (edx_11 s> 0xff)
                eax_12 = 0xff
        
        arg4[2] = eax_12
        arg4[3] = 0xff
        *arg5 = *(esi_1 + 0x78) * *arg5 s/ 0xff
        int32_t eax_17 = *arg6
        
        if (eax_17 == 0)
            eax_17 = *(esi_1 + 0x74)
        
        *arg6 = eax_17
        bool eax_18
        
        if (*(esi_1 + 0x59) == 0)
            eax_18 = *arg7
        else
            eax_18 = *arg7 == 0
        
        *arg7 = eax_18
        bool eax_19
        
        if (*(esi_1 + 0x58) == 0)
            eax_19 = *arg8
        else
            eax_19 = *arg8 == 0
        
        *arg8 = eax_19
        eax_19 = *(esi_1 + 0x59)
        float var_40
        float* edi_6
        float var_5c_1
        long double x87_r5_3
        long double x87_r7_3
        
        if (eax_19 != 0)
        label_42f115:
            x87_r5_3 = x87_r7_1
            x87_r7_3 = x87_r5_1
            var_5c_1 = fconvert.s(x87_r5_3)
        label_42f12b:
            float var_58_1
            
            if (*(esi_1 + 0x58) == 0)
                x87_r6_1 = x87_r5_3
                var_58_1 = fconvert.s(x87_r6_1)
            else
                var_58_1 = fconvert.s(x87_r5_3)
            
            edi_6 = arg9
            var_40 = fconvert.s(fconvert.t(var_5c_1))
            float var_3c_1 = fconvert.s(x87_r7_3)
            float var_38_1 = fconvert.s(x87_r7_3)
            float var_34_1 = fconvert.s(x87_r7_3)
            float var_30_1 = fconvert.s(x87_r7_3)
            float var_2c_1 = fconvert.s(fconvert.t(var_58_1))
            float var_28_1 = fconvert.s(x87_r7_3)
            float var_24_1 = fconvert.s(x87_r7_3)
            float var_20_1 = fconvert.s(x87_r7_3)
            float var_1c_1 = fconvert.s(x87_r7_3)
            float var_14_1 = fconvert.s(x87_r7_3)
            float var_10_1 = fconvert.s(x87_r7_3)
            float var_c_1 = fconvert.s(x87_r7_3)
            float var_8_1 = fconvert.s(x87_r7_3)
            float var_18_1 = fconvert.s(x87_r6_1)
            float var_4_1 = fconvert.s(x87_r6_1)
            sub_42e150(edi_6, &var_40)
            x87_r7_1 = float.t(0)
            x87_r6_1 = float.t(1)
        else
            if (*(esi_1 + 0x58) != eax_19)
                if (eax_19 != 0)
                    goto label_42f115
                
                var_5c_1 = fconvert.s(x87_r6_1)
                x87_r5_3 = x87_r7_1
                x87_r7_3 = x87_r5_1
                goto label_42f12b
            
            edi_6 = arg9
        int32_t ecx_15 = *(esi_1 + 0x50)
        
        if (ecx_15 != 0 || *(esi_1 + 0x54) != ecx_15)
            float* eax_25
            int80_t st0_1
            st0_1, eax_25 = sub_5ff0b0(arg1, &var_40, *(arg1 + 0x14), &var_40, 
                fconvert.s(float.t(neg.d(ecx_15))), fconvert.s(float.t(neg.d(*(esi_1 + 0x54)))), 
                fconvert.s(x87_r6_1), fconvert.s(x87_r6_1), fconvert.s(x87_r7_1), 
                fconvert.s(x87_r7_1), fconvert.s(x87_r7_1))
            sub_42e150(edi_6, eax_25)
        
        int32_t edx_20 = *(esi_1 + 0x24)
        float* eax_28
        int80_t st0_2
        st0_2, eax_28 = sub_5ff0b0(&var_40, edx_20, *(arg1 + 0x14), &var_40, 
            fconvert.s(float.t(edx_20)), fconvert.s(float.t(*(esi_1 + 0x28))), 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(esi_1 + 0x2c))))), 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(esi_1 + 0x30))))), 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(esi_1 + 0x44))))), 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(esi_1 + 0x48))))), 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(esi_1 + 0x4c))))))
        sub_42e150(edi_6, eax_28)
        eax = &arg3[1]
        arg3 = eax
        
        if (eax == arg2[1])
            break
        
        eax = arg3
        x87_r6_1 = float.t(1)
        x87_r5_1 = float.t(0)
        x87_r7_1 = fconvert.t(-1f)

eax.b = 1
