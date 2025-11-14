// 函数: sub_4ac8a0
// 地址: 0x4ac8a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711e22
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_98 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double x87_r6 = fconvert.t(arg4)
int32_t eax_3 = sub_70c710(fconvert.t(*arg3) - x87_r6)
long double x87_r6_3 = fconvert.t(*arg2) - x87_r6
int32_t var_70 = eax_3
int32_t eax_4 = sub_70c710(x87_r6_3)
int32_t var_74 = eax_4
int32_t* eax_5 = &var_70

if (eax_3 s>= eax_4)
    eax_5 = &var_74

int32_t i_3 = *eax_5 - 1
int32_t eax_8 = sub_70c710(fconvert.t(*arg3) + x87_r6)
long double x87_r6_7 = fconvert.t(*arg2) + x87_r6
var_70 = eax_8
int32_t eax_9 = sub_70c710(x87_r6_7)
var_74 = eax_9
int32_t* eax_10 = &var_70

if (eax_9 s>= eax_8)
    eax_10 = &var_74

int32_t var_80 = *eax_10 + 1
int32_t eax_13 = sub_70c710(fconvert.t(arg3[2]) - x87_r6)
long double x87_r6_11 = fconvert.t(arg2[2]) - x87_r6
var_70 = eax_13
int32_t eax_14 = sub_70c710(x87_r6_11)
var_74 = eax_14
int32_t* eax_15 = &var_70

if (eax_13 s>= eax_14)
    eax_15 = &var_74

int32_t edi_4 = *eax_15 - 1
int32_t eax_16 = sub_70c710(fconvert.t(arg3[2]) + x87_r6)
long double x87_r7_3 = x87_r6 + fconvert.t(arg2[2])
var_70 = eax_16
int32_t eax_17 = sub_70c710(x87_r7_3)
var_74 = eax_17
int32_t* eax_18 = &var_70

if (eax_17 s>= eax_16)
    eax_18 = &var_74

int32_t eax_19 = *(arg1 + 0x28)
int32_t ebp_2 = *eax_18 + 1
int32_t var_7c = ebp_2

if (i_3 s<= eax_19)
    int32_t i_8 = *(arg1 + 0x24)
    
    if (var_80 s>= i_8)
        int32_t esi_2 = *(arg1 + 0x30)
        
        if (edi_4 s<= esi_2)
            int32_t edx_1 = *(arg1 + 0x2c)
            
            if (ebp_2 s>= edx_1)
                if (i_3 s< i_8)
                    i_3 = i_8
                
                if (var_80 s> eax_19)
                    var_80 = eax_19
                
                if (edi_4 s< edx_1)
                    edi_4 = edx_1
                
                if (ebp_2 s> esi_2)
                    var_7c = esi_2
                    ebp_2 = esi_2
                
                void var_20
                sub_4167e0(&var_20)
                int32_t var_4 = 0
                int32_t edx_2 = edi_4
                int32_t var_78_1 = edi_4
                double var_4c
                
                if (edi_4 s<= ebp_2)
                    do
                        for (int32_t i = i_3; i s<= var_80; i += 1)
                            int32_t eax_24 =
                                (edx_2 - *(arg1 + 0x2c)) * *(arg1 + 0x34) - *(arg1 + 0x24)
                            int32_t eax_25 = eax_24 + i
                            
                            if (eax_24 + i s>= 0)
                                int32_t* ecx_1 = *(arg1 + 0x14)
                                
                                if (eax_25 s< (*(arg1 + 0x18) - ecx_1) s>> 4)
                                    int32_t* j = ecx_1[eax_25 * 4]
                                    
                                    if (j != ecx_1[eax_25 * 4 + 1])
                                        do
                                            sub_4c33d0(&var_20, j, &var_4c)
                                            j = &j[1]
                                        while (j != *(*(arg1 + 0x14) + (eax_25 << 4) + 4))
                                        
                                        edx_2 = var_78_1
                        
                        edx_2 += 1
                        var_78_1 = edx_2
                    while (edx_2 s<= var_7c)
                
                int32_t* var_1c
                int32_t* ecx_6 = var_1c
                int32_t* i_4 = *ecx_6
                var_70 = fconvert.s(fconvert.t(3.40282347e+38f))
                int32_t* i_2 = i_4
                int32_t* var_50
                
                if (i_4 != ecx_6)
                    long double x87_r7_5 = float.t(0)
                    
                    do
                        int32_t* esi_7 = i_4[3]
                        int32_t ebp_3 = 0
                        var_50 = esi_7
                        float* i_1 = nullptr
                        int32_t* var_7c_1 = &esi_7[7]
                        
                        do
                            if (*var_7c_1 == 0)
                                int32_t ecx_3 = *esi_7
                                float* eax_32 = ecx_3 + mods.dp.d(sx.q(ebp_3 + 1), 3) * 0xc
                                float var_68_1 = fconvert.s(fconvert.t(*arg2))
                                float var_54_1 = fconvert.s(fconvert.t(arg2[2]))
                                float var_6c_1 = fconvert.s(fconvert.t(*arg3))
                                float var_5c_1 = fconvert.s(fconvert.t(arg3[2]))
                                float var_80_1 = fconvert.s(fconvert.t(*(i_1 + ecx_3)))
                                float var_78_2 = fconvert.s(fconvert.t(*(i_1 + ecx_3 + 8)))
                                float var_64_1 = fconvert.s(fconvert.t(*eax_32))
                                var_74 = fconvert.s(fconvert.t(eax_32[2]))
                                long double x87_r6_23 = fconvert.t(var_74) - fconvert.t(var_78_2)
                                var_4c = fconvert.d(x87_r6_23)
                                long double x87_r4_1 = fconvert.t(var_68_1)
                                long double x87_r5_2 = fconvert.t(var_6c_1) - x87_r4_1
                                long double x87_r3_3 = fconvert.t(var_64_1) - fconvert.t(var_80_1)
                                var_64_1.q = fconvert.d(x87_r3_3)
                                long double x87_r1_1 = fconvert.t(var_54_1)
                                long double x87_r2_2 = fconvert.t(var_5c_1) - x87_r1_1
                                var_74 = fconvert.s(x87_r6_23 * x87_r5_2 - x87_r2_2 * x87_r3_3)
                                long double x87_r1_3 = fconvert.t(var_74)
                                x87_r7_5 - x87_r1_3
                                eax_32.w = (x87_r7_5 < x87_r1_3 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_5, x87_r1_3) ? 1 : 0) << 0xa
                                    | (x87_r7_5 == x87_r1_3 ? 1 : 0) << 0xe | 0x1000
                                bool p_1 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_1))
                                    x87_r7_5 = x87_r2_2
                                else
                                    long double x87_r2_4 = x87_r1_1 - fconvert.t(var_78_2)
                                    long double x87_r1_5 = x87_r4_1 - fconvert.t(var_80_1)
                                    var_5c_1.q = fconvert.d(x87_r1_5)
                                    long double x87_r2_6 =
                                        x87_r2_4 * x87_r5_2 - fconvert.t(var_5c_1.q) * x87_r7_5
                                    long double x87_r3_9 = float.t(0)
                                    long double x87_r2_7 = fconvert.t(fconvert.s((
                                        x87_r3_3 * x87_r2_4 - x87_r1_5 * fconvert.t(var_4c))
                                        / fconvert.t(var_74)))
                                    x87_r2_7 - x87_r3_9
                                    eax_32.w = (x87_r2_7 < x87_r3_9 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r2_7, x87_r3_9) ? 1 : 0) << 0xa
                                        | (x87_r2_7 == x87_r3_9 ? 1 : 0) << 0xe | 0x1000
                                    bool p_2 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_2))
                                        x87_r7_5 = x87_r3_9
                                    else
                                        long double x87_r1_11 = float.t(1)
                                        x87_r1_11 - x87_r2_7
                                        eax_32.w = (x87_r1_11 < x87_r2_7 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r1_11, x87_r2_7) ? 1 : 0) << 0xa
                                            | (x87_r1_11 == x87_r2_7 ? 1 : 0) << 0xe | 0x1000
                                        bool p_3 = unimplemented  {test ah, 0x5}
                                        
                                        if (not(p_3))
                                            x87_r7_5 = x87_r3_9
                                        else
                                            long double x87_r1_12 =
                                                fconvert.t(fconvert.s(x87_r2_6 / x87_r2_6))
                                            x87_r1_12 - x87_r3_9
                                            eax_32.w = (x87_r1_12 < x87_r3_9 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r1_12, x87_r3_9) ? 1 : 0)
                                                << 0xa | (x87_r1_12 == x87_r3_9 ? 1 : 0) << 0xe | 0x800
                                            bool p_4 = unimplemented  {test ah, 0x5}
                                            
                                            if (not(p_4))
                                                x87_r7_5 = x87_r1_12
                                            else
                                                long double x87_r0_9 = float.t(1)
                                                x87_r0_9 - x87_r1_12
                                                eax_32.w = (x87_r0_9 < x87_r1_12 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r0_9, x87_r1_12) ? 1 : 0)
                                                    << 0xa | (x87_r0_9 == x87_r1_12 ? 1 : 0) << 0xe
                                                    | 0x1000
                                                bool p_5 = unimplemented  {test ah, 0x5}
                                                
                                                if (not(p_5))
                                                    x87_r7_5 = x87_r3_9
                                                else
                                                    var_74 =
                                                        fconvert.s(x87_r5_2 * x87_r2_7 + x87_r4_1)
                                                    float var_78_3 =
                                                        fconvert.s(x87_r7_5 * x87_r2_7 + x87_r1_1)
                                                    long double x87_r6_27 =
                                                        fconvert.t(var_78_3) - x87_r1_1
                                                    long double x87_r7_9 =
                                                        fconvert.t(var_74) - x87_r4_1
                                                    x87_r7_5 = x87_r3_9
                                                    float var_80_2 = fconvert.s(
                                                        x87_r6_27 * x87_r6_27 + x87_r7_9 * x87_r7_9)
                                                    long double x87_r6_30 = fconvert.t(var_80_2)
                                                    long double x87_r5_8 = fconvert.t(var_70)
                                                    x87_r5_8 - x87_r6_30
                                                    eax_32.w = (x87_r5_8 < x87_r6_30 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r5_8, x87_r6_30) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r5_8 == x87_r6_30 ? 1 : 0) << 0xe
                                                        | 0x3800
                                                    
                                                    if ((eax_32:1.b & 0x41) == 0)
                                                        float var_38 =
                                                            fconvert.s(fconvert.t(var_4c))
                                                        float var_34_1 = fconvert.s(x87_r7_5)
                                                        float var_30_1 =
                                                            fconvert.s(fneg(fconvert.t(var_64_1.q)))
                                                        float var_2c
                                                        sub_51e2a0(&var_38, &var_2c)
                                                        long double x87_r6_32 = fconvert.t(arg4)
                                                        esi_7 = var_50
                                                        float var_24
                                                        float var_64_3 = fconvert.s(fconvert.t(
                                                            fconvert.s(x87_r6_32
                                                            * fconvert.t(var_24)))
                                                            + fconvert.t(var_78_3))
                                                        *arg5 = fconvert.s(fconvert.t(fconvert.s(
                                                            fconvert.t(fconvert.s(fconvert.t(var_2c)
                                                            * x87_r6_32)) + fconvert.t(var_74))))
                                                        float var_28
                                                        arg5[1] = fconvert.s(fconvert.t(fconvert.s(
                                                            fconvert.t(fconvert.s(fconvert.t(var_28)
                                                            * x87_r6_32)) + fconvert.t(0.0))))
                                                        arg5[2] = fconvert.s(fconvert.t(var_64_3))
                                                        var_70 = fconvert.s(fconvert.t(var_80_2))
                                                        x87_r7_5 = float.t(0)
                            
                            var_7c_1 = &var_7c_1[1]
                            i_1 = &i_1[3]
                            ebp_3 += 1
                        while (i_1 s< 0x24)
                        
                        if (*(i_2 + 0x11) == 0)
                            int32_t* i_6 = i_2[2]
                            
                            if (*(i_6 + 0x11) != 0)
                                int32_t* i_5 = i_2[1]
                                
                                if (*(i_5 + 0x11) == 0)
                                    while (i_2 == i_5[2])
                                        i_2 = i_5
                                        i_5 = i_5[1]
                                        
                                        if (*(i_5 + 0x11) != 0)
                                            break
                                
                                i_2 = i_5
                            else
                                int32_t* i_7 = *i_6
                                
                                while (*(i_7 + 0x11) == 0)
                                    i_6 = i_7
                                    i_7 = *i_6
                                
                                i_2 = i_6
                        
                        i_4 = i_2
                        ecx_6 = var_1c
                    while (i_4 != ecx_6)
                
                int32_t var_4_1 = 1
                sub_58bc40(&var_20, &var_50, *ecx_6, ecx_6)
                int32_t* var_9c_3 = var_1c
                sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
