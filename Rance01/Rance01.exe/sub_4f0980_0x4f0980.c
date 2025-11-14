// 函数: sub_4f0980
// 地址: 0x4f0980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712dba
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_c4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double x87_r6 = fconvert.t(arg4)
int32_t eax_3 = sub_70c710(fconvert.t(*arg3) - x87_r6)
long double x87_r6_3 = fconvert.t(*arg2) - x87_r6
int32_t var_ac = eax_3
int32_t eax_4 = sub_70c710(x87_r6_3)
int32_t var_b0 = eax_4
int32_t* eax_5 = &var_ac

if (eax_3 s>= eax_4)
    eax_5 = &var_b0

int32_t i_3 = *eax_5 - 1
int32_t eax_8 = sub_70c710(fconvert.t(*arg3) + x87_r6)
long double x87_r6_7 = fconvert.t(*arg2) + x87_r6
var_ac = eax_8
int32_t eax_9 = sub_70c710(x87_r6_7)
var_b0 = eax_9
int32_t* eax_10 = &var_ac

if (eax_9 s>= eax_8)
    eax_10 = &var_b0

int32_t var_a4 = *eax_10 + 1
int32_t eax_13 = sub_70c710(fconvert.t(arg3[2]) - x87_r6)
long double x87_r6_11 = fconvert.t(arg2[2]) - x87_r6
var_ac = eax_13
int32_t eax_14 = sub_70c710(x87_r6_11)
var_b0 = eax_14
int32_t* eax_15 = &var_ac

if (eax_13 s>= eax_14)
    eax_15 = &var_b0

int32_t edi_2 = *eax_15 - 1
int32_t eax_16 = sub_70c710(fconvert.t(arg3[2]) + x87_r6)
long double x87_r7_3 = x87_r6 + fconvert.t(arg2[2])
var_ac = eax_16
int32_t eax_18 = sub_70c710(x87_r7_3)
var_b0 = eax_18
int32_t* eax_19 = &var_ac

if (eax_18 s>= eax_16)
    eax_19 = &var_b0

int32_t eax_20 = *(arg1 + 0x28)
int32_t ebp_2 = *eax_19 + 1
var_b0 = ebp_2

if (i_3 s<= eax_20)
    int32_t i_8 = *(arg1 + 0x24)
    
    if (var_a4 s>= i_8)
        int32_t esi_4 = *(arg1 + 0x30)
        
        if (edi_2 s<= esi_4)
            int32_t edx_1 = *(arg1 + 0x2c)
            
            if (ebp_2 s>= edx_1)
                if (i_3 s< i_8)
                    i_3 = i_8
                
                if (var_a4 s> eax_20)
                    var_a4 = eax_20
                
                if (edi_2 s< edx_1)
                    edi_2 = edx_1
                
                if (ebp_2 s> esi_4)
                    var_b0 = esi_4
                    ebp_2 = esi_4
                
                void var_80
                sub_4167e0(&var_80)
                int32_t var_4 = 0
                int32_t edx_2 = edi_2
                var_ac = edi_2
                float var_8c
                
                if (edi_2 s<= ebp_2)
                    do
                        for (int32_t i = i_3; i s<= var_a4; i += 1)
                            int32_t eax_24 =
                                (edx_2 - *(arg1 + 0x2c)) * *(arg1 + 0x34) - *(arg1 + 0x24)
                            int32_t eax_25 = eax_24 + i
                            
                            if (eax_24 + i s>= 0)
                                int32_t* ecx_2 = *(arg1 + 0x14)
                                
                                if (eax_25 s< (*(arg1 + 0x18) - ecx_2) s>> 4)
                                    edi_2 = eax_25 << 4
                                    int32_t* j = *(ecx_2 + edi_2)
                                    
                                    if (j != *(ecx_2 + edi_2 + 4))
                                        do
                                            sub_4c33d0(&var_80, j, &var_8c)
                                            j = &j[1]
                                        while (j != *(*(arg1 + 0x14) + edi_2 + 4))
                                        
                                        edx_2 = var_ac
                        
                        edx_2 += 1
                        var_ac = edx_2
                    while (edx_2 s<= var_b0)
                
                var_ac = fconvert.s(fconvert.t(*arg3))
                var_b0 = fconvert.s(fconvert.t(arg3[2]))
                float var_98_1 = fconvert.s(fconvert.t(var_ac))
                long double x87_r7_7 = float.t(0)
                float var_94_1 = fconvert.s(x87_r7_7)
                float var_90_1 = fconvert.s(fconvert.t(var_b0))
                var_ac = fconvert.s(fconvert.t(*arg2))
                var_b0 = fconvert.s(fconvert.t(arg2[2]))
                var_8c = fconvert.s(fconvert.t(var_ac))
                float var_60 = var_8c
                float var_88_1 = fconvert.s(x87_r7_7)
                float var_58_1 = fconvert.s(fconvert.t(var_b0))
                float var_54 = var_98_1
                int32_t* var_7c
                int32_t* eax_33 = var_7c
                float var_4c_1 = var_90_1
                var_ac = fconvert.s(fconvert.t(arg4) * fconvert.t(0.5))
                int32_t* i_2 = *eax_33
                long double x87_r6_21 = fconvert.t(var_ac)
                float var_5c_1 = var_88_1
                float var_48_1 = fconvert.s(x87_r6_21)
                float var_50_1 = var_94_1
                int32_t* i_6 = i_2
                int32_t* i_4 = i_2
                
                if (i_2 != eax_33)
                    do
                        void* eax_34 = i_2[3]
                        int32_t ebp_3 = 0
                        void* var_64_1 = eax_34
                        int32_t i_1 = 0
                        var_b0 = eax_34 + 0x20
                        
                        do
                            if (*var_b0 == 0)
                                float* ecx_9 = *(eax_34 + 4)
                                int32_t edx_7 = mods.dp.d(sx.q(ebp_3 + 1), 3) * 3
                                float var_70_1 =
                                    fconvert.s(fconvert.t(fconvert.s(fconvert.t(ecx_9[edx_7]))))
                                float var_6c_1 = fconvert.s(x87_r7_7)
                                float var_68_1 =
                                    fconvert.s(fconvert.t(fconvert.s(fconvert.t(ecx_9[edx_7 + 2]))))
                                float var_a0_2 = fconvert.s(fconvert.t(*(ecx_9 + i_1 + 8)))
                                float var_2c =
                                    fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(ecx_9 + i_1)))))
                                float var_90_2 = fconvert.s(fconvert.t(var_a0_2))
                                float var_28_1 = fconvert.s(x87_r7_7)
                                float var_14_1 = fconvert.s(x87_r6_21)
                                float var_20 = var_70_1
                                float var_24_1 = var_90_2
                                float var_38 = fconvert.s(x87_r7_7)
                                float var_34_1 = fconvert.s(x87_r7_7)
                                float var_1c_1 = var_6c_1
                                float var_30_1 = fconvert.s(x87_r7_7)
                                float var_44 = fconvert.s(x87_r7_7)
                                float var_40_1 = fconvert.s(x87_r7_7)
                                float var_3c_1 = fconvert.s(x87_r7_7)
                                float var_18_1 = var_68_1
                                float var_10
                                int32_t eax_41
                                long double st0_1
                                st0_1, eax_41 = sub_4b6c30(&var_2c, &var_20, &var_44, &var_38, 
                                    &var_60, &var_54, &var_8c, &var_10)
                                long double x87_r7_11 = fconvert.t(var_ac)
                                long double x87_r6_26 =
                                    fconvert.t(fconvert.s(x87_r7_11 + fconvert.t(var_48_1)))
                                long double x87_r5_9 = fconvert.t(fconvert.s(st0_1))
                                long double x87_r6_27 = x87_r6_26 * x87_r6_26
                                x87_r5_9 - x87_r6_27
                                eax_41.w = (x87_r5_9 < x87_r6_27 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r5_9, x87_r6_27) ? 1 : 0) << 0xa
                                    | (x87_r5_9 == x87_r6_27 ? 1 : 0) << 0xe | 0x3800
                                bool p_1 = unimplemented  {test ah, 0x41}
                                
                                if (not(p_1))
                                    int32_t var_4_2 = 1
                                    sub_58bc40(&var_80, &var_8c, i_6, var_7c)
                                    int32_t* var_c8_6 = var_7c
                                    sub_6b4d5b()
                                    int32_t eax_45
                                    eax_45.b = 1
                                    goto label_4f0e27
                                
                                eax_34 = var_64_1
                                i_2 = i_4
                                x87_r6_21 = x87_r7_11
                                x87_r7_7 = float.t(0)
                            
                            var_b0 += 4
                            i_1 += 0xc
                            ebp_3 += 1
                        while (i_1 s< 0x24)
                        
                        if (*(i_2 + 0x11) == 0)
                            int32_t* i_9 = i_2[2]
                            
                            if (*(i_9 + 0x11) != 0)
                                int32_t* i_7 = i_2[1]
                                int32_t* i_5
                                
                                if (*(i_7 + 0x11) == 0)
                                    for (; i_2 == i_7[2]; i_2 = i_5)
                                        i_5 = i_7
                                        i_7 = i_7[1]
                                        
                                        if (*(i_7 + 0x11) != 0)
                                            break
                                i_4 = i_7
                            else
                                int32_t* i_10 = *i_9
                                
                                while (*(i_10 + 0x11) == 0)
                                    i_9 = i_10
                                    i_10 = *i_9
                                
                                i_4 = i_9
                            
                            i_2 = i_4
                        
                        eax_33 = var_7c
                    while (i_2 != eax_33)
                    
                    i_2 = i_6
                
                int32_t var_4_1 = 2
                sub_58bc40(&var_80, &var_8c, i_2, eax_33)
                int32_t* var_c8_4 = var_7c
                sub_6b4d5b()

eax_20.b = 0
label_4f0e27:
fsbase->NtTib.ExceptionList = ExceptionList
