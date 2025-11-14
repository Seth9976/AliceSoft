// 函数: sub_57f330
// 地址: 0x57f330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_5
int32_t eax_1 = data_78c474 ^ &i_5
long double x87_r7 = float.t(0)
void* esi = arg1
float var_74 = fconvert.s(x87_r7)
float var_70 = fconvert.s(x87_r7)
float var_6c = fconvert.s(x87_r7)
float var_60 = fconvert.s(x87_r7)
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x51eb851f, *(esi + 0x24) - *(esi + 0x20))
float var_5c = fconvert.s(x87_r7)
float var_58 = fconvert.s(x87_r7)
float var_54 = fconvert.s(x87_r7)
float var_50 = fconvert.s(x87_r7)
float var_44 = fconvert.s(x87_r7)
float var_40 = fconvert.s(x87_r7)
float var_3c = fconvert.s(x87_r7)
float var_38 = fconvert.s(x87_r7)
int32_t edx_1 = edx s>> 5
float var_34 = fconvert.s(x87_r7)
float var_28 = fconvert.s(x87_r7)
float var_24 = fconvert.s(x87_r7)
float var_20 = fconvert.s(x87_r7)
float var_1c = fconvert.s(x87_r7)
float var_18 = fconvert.s(x87_r7)
float var_c = fconvert.s(x87_r7)
void* var_fc = esi
float var_8 = fconvert.s(x87_r7)
int32_t var_f4 = 0

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    long double x87_r7_1 = fconvert.t(0.00100000005f)
    int32_t var_f0_1 = 0
    
    while (true)
        void* esi_2 = *(esi + 0x20) + var_f0_1
        i_5 = 0
        int32_t ecx_2 = *(esi_2 + 0xc)
        int32_t edx_2 = *(esi_2 + 0x10)
        int32_t var_c0[0x3]
        var_c0[0] = *(esi_2 + 0x14)
        int32_t eax_7 = *(esi_2 + 0x2c)
        int32_t var_c8 = ecx_2
        int32_t var_c4_1 = edx_2
        int32_t var_ac_1 = eax_7
        int32_t var_b4_1 = *(esi_2 + 0x18)
        int32_t var_b0_1 = *(esi_2 + 0x1c)
        int32_t var_98_1 = *(esi_2 + 0x38)
        int32_t var_a8_1 = *(esi_2 + 0x30)
        int32_t var_a4_1 = *(esi_2 + 0x34)
        int32_t var_8c_1 = *(esi_2 + 0x50)
        int32_t var_94_1 = *(esi_2 + 0x3c)
        int32_t var_90_1 = *(esi_2 + 0x4c)
        int32_t var_78_1 = *(esi_2 + 0x5c)
        void* var_100_1 = esi_2
        int32_t var_88_1 = *(esi_2 + 0x54)
        int32_t var_7c_1 = *(esi_2 + 0x58)
        int32_t i = 0
        float* ebx_1 = &var_74
        int32_t* ebp_1 = &var_c8
        float var_e4
        
        do
            x87_r7_1 - fconvert.t(ebp_1[2])
            int32_t temp1_1 = mods.dp.d(sx.q(i + 1), 3)
            bool p_1 = unimplemented  {test ah, 0x41}
            bool p_2
            
            if (not(p_1))
                x87_r7_1 - fconvert.t(var_c0[temp1_1 * 7])
                p_2 = unimplemented  {test ah, 0x41}
            
            float* esi_3
            
            if (p_1 || p_2)
                x87_r7_1 - fconvert.t(ebp_1[2])
                bool p_3 = unimplemented  {test ah, 0x41}
                long double temp6_1
                
                if (not(p_3))
                    temp6_1 = fconvert.t(var_c0[temp1_1 * 7])
                    x87_r7_1 - temp6_1
                
                int32_t __saved_ebp
                
                if (p_3 || (((x87_r7_1 < temp6_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp6_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
                    long double temp5_1 = fconvert.t(ebp_1[2])
                    x87_r7_1 - temp5_1
                    
                    if ((((x87_r7_1 < temp5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_1 == temp5_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
                        x87_r7_1 - fconvert.t(var_c0[temp1_1 * 7])
                        bool p_4 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_4))
                            x87_r7_1 = fconvert.t(0.00100000005f)
                            esi_3 = sub_580650(&var_e4, ebp_1, &(&__saved_ebp)[temp1_1 * 7 + 0x13])
                            goto label_57f56f
                else
                    i_5 += 1
                    __builtin_memcpy(ebx_1, ebp_1, 0x1c)
                    float* eax_14 = sub_580650(&var_e4, ebp_1, &(&__saved_ebp)[temp1_1 * 7 + 0x13])
                    i_5 += 1
                    x87_r7_1 = fconvert.t(0.00100000005f)
                    ebx_1 = &ebx_1[0xe]
                    __builtin_memcpy(&ebx_1[7], eax_14, 0x1c)
                    esi_2 = var_100_1
            else
                esi_3 = ebp_1
            label_57f56f:
                i_5 += 1
                float* edi_3 = ebx_1
                ebx_1 = &ebx_1[7]
                __builtin_memcpy(edi_3, esi_3, 0x1c)
                esi_2 = var_100_1
            i += 1
            ebp_1 = &ebp_1[7]
        while (i s< 3)
        
        if (i_5 != 0)
            int32_t eax_19 = (*(var_fc + 0x44) - *(var_fc + 0x40)) s/ 0x1c
            int32_t var_f8_2 = eax_19
            
            if (i_5 s> 0)
                float* edi_4 = &var_74
                float* var_ec_1 = &var_74
                int32_t i_3 = i_5
                int32_t i_1
                
                do
                    int32_t ebp_2 = *(var_fc + 0x44)
                    int32_t eax_21
                    
                    if (edi_4 u< ebp_2)
                        eax_21 = *(var_fc + 0x40)
                    
                    float* esi_7
                    int32_t edi_8
                    
                    if (edi_4 u>= ebp_2 || eax_21 u> edi_4)
                        if (ebp_2 == *(var_fc + 0x48))
                            sub_580900(var_fc + 0x40)
                        
                        int32_t eax_24 = *(var_fc + 0x44)
                        
                        if (eax_24 != 0)
                            esi_7 = edi_4
                            edi_8 = eax_24
                        label_57f649:
                            __builtin_memcpy(edi_8, esi_7, 0x1c)
                            esi_2 = var_100_1
                            edi_4 = var_ec_1
                    else
                        if (ebp_2 == *(var_fc + 0x48))
                            sub_580900(var_fc + 0x40)
                        
                        edi_8 = *(var_fc + 0x44)
                        
                        if (edi_8 != 0)
                            esi_7 = *(var_fc + 0x40) + (edi_4 - eax_21) s/ 0x1c * 0x1c
                            goto label_57f649
                        
                        edi_4 = var_ec_1
                    *(var_fc + 0x44) += 0x1c
                    edi_4 = &edi_4[7]
                    i_1 = i_3
                    i_3 -= 1
                    var_ec_1 = edi_4
                while (i_1 != 1)
                x87_r7_1 = fconvert.t(0.00100000005f)
                eax_19 = var_f8_2
            
            int32_t i_4 = i_5 - 2
            
            if (i_4 s> 0)
                int32_t ebx_3 = eax_19 + 2
                int32_t i_2
                
                do
                    int32_t edx_24 = *(esi_2 + 0x60)
                    var_e4 = var_f8_2
                    int32_t var_e0_1 = ebx_3 - 1
                    int32_t var_dc_1 = ebx_3
                    int32_t var_d4_1 = edx_24
                    sub_5807f0(&var_e4, var_fc + 0x50)
                    ebx_3 += 1
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                x87_r7_1 = fconvert.t(0.00100000005f)
        
        var_f4 += 1
        var_f0_1 += 0x64
        int32_t eax_28
        int32_t edx_26
        edx_26:eax_28 = muls.dp.d(0x51eb851f, *(var_fc + 0x24) - *(var_fc + 0x20))
        int32_t edx_27 = edx_26 s>> 5
        
        if (var_f4 s>= (edx_27 u>> 0x1f) + edx_27)
            break
        
        esi = var_fc

sub_6b4885(eax_1 ^ &i_5)
