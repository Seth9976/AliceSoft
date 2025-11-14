// 函数: sub_4f0520
// 地址: 0x4f0520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_18
sub_51bfa0(&var_18, arg1, arg2)

for (void* i = *(arg3 + 4); i != *(arg3 + 8); i += 0x68)
    void* ecx = var_18
    float* edi_1 = *(i + 4)
    int32_t var_14
    void* eax
    
    if (ecx == var_14)
    label_4f0583:
        eax = 1
    else
        float* ecx_1 = ecx + 8
        
        while (true)
            long double x87_r7_5 = fconvert.t(ecx_1[-1]) * fconvert.t(edi_1[1])
                + fconvert.t(ecx_1[-2]) * fconvert.t(*edi_1)
                + fconvert.t(*ecx_1) * fconvert.t(edi_1[2]) + fconvert.t(ecx_1[1])
            long double temp1_1 = fconvert.t(0.0)
            x87_r7_5 - temp1_1
            eax.w = (x87_r7_5 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe
            
            if ((eax:1.b & 1) != 0)
                break
            
            ecx_1 = &ecx_1[4]
            
            if (&ecx_1[-2] == var_14)
                goto label_4f0583_2
        
        char eax_3
        int80_t st0_1
        st0_1, eax_3 = sub_51c5a0(&var_18, &edi_1[3])
        
        if (eax_3 != 0)
        label_4f0583_1:
            eax = 1
        else
            char eax_5
            int80_t st0_2
            st0_2, eax_5 = sub_51c5a0(&var_18, &edi_1[6])
            
            if (eax_5 != 0)
            label_4f0583_2:
                eax = 1
            else
                eax = nullptr
    
    *(i + 0x64) = eax.b

void* eax_1 = var_18

if (eax_1 != 0)
    void* var_2c_1 = eax_1
    sub_6b4d5b()
