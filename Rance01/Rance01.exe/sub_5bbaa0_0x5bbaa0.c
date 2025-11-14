// 函数: sub_5bbaa0
// 地址: 0x5bbaa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
void* eax_2 = arg1[0x10]
void* ecx = *(eax_2 + 4)
void* eax_3 = *(eax_2 + 0x68)
int32_t edx = *(ecx + 0x1c)
int32_t edx_1 = *(edx + (arg1[7] << 2))
arg1[9] = edx_1
int32_t edi = *(ecx + 4)
int32_t esi = edi << 2
__alloca_probe_16(esi)
int32_t __saved_edi
int32_t* var_c = &__saved_edi
__alloca_probe_16(esi)
int32_t* var_1c = &__saved_edi
__alloca_probe_16(esi)
int32_t* var_10 = &__saved_edi
__alloca_probe_16(esi)
int32_t i = 0

if (edi s> 0)
    int32_t* edi_1 = var_10
    int32_t* eax_9 = &__saved_edi - edi_1
    
    do
        int32_t eax_11 = arg2[arg2[i + 1] + 0x101]
        int32_t eax_13 = (*(*((*(edx + (eax_11 << 2) + 0x320) << 2) + &data_73fa78) + 0x14))(arg1, 
            *(*(eax_3 + 0x30) + (eax_11 << 2)))
        int32_t ecx_9
        ecx_9.b = eax_13 != 0
        *(eax_9 + edi_1) = eax_13
        int32_t eax_14 = *arg1
        *edi_1 = ecx_9
        sub_6bc670(*(eax_14 + (i << 2)), 0, (edx_1 * 4) u>> 1)
        i += 1
        edi_1 = &edi_1[1]
    while (i s< *(ecx + 4))

int32_t* edi_8 = arg2
int32_t i_11 = edi_8[0x121]

if (i_11 s> 0)
    void* eax_15 = &edi_8[0x222]
    int32_t i_8 = i_11
    int32_t i_1
    
    do
        int32_t ecx_11 = *(eax_15 - 0x400)
        
        if (var_10[ecx_11] != 0 || var_10[*eax_15] != 0)
            int32_t ecx_13 = *eax_15
            var_10[ecx_11] = 1
            var_10[ecx_13] = 1
        
        eax_15 += 4
        i_1 = i_8
        i_8 -= 1
    while (i_1 != 1)

int32_t i_7 = 0

if (*edi_8 s> 0)
    void* var_14_2 = &edi_8[0x111]
    int32_t i_2
    
    do
        int32_t j = 0
        int32_t esi_2 = 0
        
        if (*(ecx + 4) s> 0)
            int32_t* ecx_14 = var_1c
            int32_t edx_11 = var_c - ecx_14
            
            do
                if (arg2[j + 1] == i_7)
                    int32_t edx_13
                    edx_13.b = var_10[j] != 0
                    esi_2 += 1
                    ecx_14 = &ecx_14[1]
                    ecx_14[-1] = edx_13
                    *(edx_11 + ecx_14 - 4) = *(*arg1 + (j << 2))
                
                j += 1
            while (j s< *(ecx + 4))
        
        int32_t eax_16 = *var_14_2
        (*(*((*(edx + (eax_16 << 2) + 0x520) << 2) + &data_737a6c) + 0x1c))(arg1, 
            *(*(eax_3 + 0x34) + (eax_16 << 2)), var_c, var_1c, esi_2)
        i_2 = i_7 + 1
        i_7 = i_2
        var_14_2 += 4
    while (i_2 s< *arg2)
    edi_8 = arg2

int32_t ecx_18 = edi_8[0x121]
int32_t ecx_19 = ecx_18 - 1
int32_t var_18_2 = ecx_19

if (ecx_18 - 1 s>= 0)
    long double x87_r7_1 = float.t(0)
    int32_t eax_20
    int32_t edx_23
    edx_23:eax_20 = sx.q(edx_1)
    int32_t edx_25 = (eax_20 - edx_23) s>> 1
    void* edi_9 = &edi_8[ecx_19 + 0x222]
    int32_t var_1c_1 = edx_25
    void* var_14_3 = edi_9
    
    while (true)
        int32_t eax_22 = *arg1
        void* esi_4 = *(eax_22 + (*(edi_9 - 0x400) << 2))
        void* eax_23 = *(eax_22 + (*edi_9 << 2))
        int32_t edi_11 = 0
        
        if (edx_25 s>= 4)
            void* ecx_20 = esi_4 + 4
            float* edi_13 = eax_23 - esi_4
            int32_t i_9 = ((var_1c_1 - 4) u>> 2) + 1
            void* edx_26 = eax_23 + 0xc
            int32_t var_24_1 = i_9 << 2
            int32_t i_3
            
            do
                long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(*(ecx_20 - 4))))
                x87_r6_3 - x87_r7_1
                int32_t eax_24
                eax_24.w = (x87_r6_3 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(*(edx_26 - 0xc))))
                x87_r5_1 - x87_r7_1
                bool cond:8_1 = (eax_24:1.b & 0x41) != 0
                eax_24.w = (x87_r5_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
                
                if (cond:8_1)
                    if ((eax_24:1.b & 0x41) != 0)
                        *(edx_26 - 0xc) = fconvert.s(x87_r6_3)
                        *(ecx_20 - 4) = fconvert.s(x87_r6_3 - x87_r5_1)
                    else
                        *(edx_26 - 0xc) = fconvert.s(x87_r6_3 + x87_r5_1)
                else if ((eax_24:1.b & 0x41) != 0)
                    *(edx_26 - 0xc) = fconvert.s(x87_r6_3)
                    *(ecx_20 - 4) = fconvert.s(x87_r5_1 + x87_r6_3)
                else
                    *(edx_26 - 0xc) = fconvert.s(x87_r6_3 - x87_r5_1)
                
                long double x87_r6_11 = fconvert.t(fconvert.s(fconvert.t(*ecx_20)))
                x87_r6_11 - x87_r7_1
                eax_24.w = (x87_r6_11 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_11, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_11 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(*(edi_13 + ecx_20))))
                x87_r5_4 - x87_r7_1
                bool cond:4_1 = (eax_24:1.b & 0x41) != 0
                eax_24.w = (x87_r5_4 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_4, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r5_4 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
                
                if (cond:4_1)
                    if ((eax_24:1.b & 0x41) != 0)
                        *(edi_13 + ecx_20) = fconvert.s(x87_r6_11)
                        *ecx_20 = fconvert.s(x87_r6_11 - x87_r5_4)
                    else
                        *(edi_13 + ecx_20) = fconvert.s(x87_r6_11 + x87_r5_4)
                else if ((eax_24:1.b & 0x41) != 0)
                    *(edi_13 + ecx_20) = fconvert.s(x87_r6_11)
                    *ecx_20 = fconvert.s(x87_r5_4 + x87_r6_11)
                else
                    *(edi_13 + ecx_20) = fconvert.s(x87_r6_11 - x87_r5_4)
                
                long double x87_r6_19 = fconvert.t(fconvert.s(fconvert.t(*(ecx_20 + 4))))
                x87_r6_19 - x87_r7_1
                eax_24.w = (x87_r6_19 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_19, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_19 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_7 = fconvert.t(fconvert.s(fconvert.t(*(edx_26 - 4))))
                x87_r5_7 - x87_r7_1
                bool cond:6_1 = (eax_24:1.b & 0x41) != 0
                eax_24.w = (x87_r5_7 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_7, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r5_7 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
                
                if (cond:6_1)
                    if ((eax_24:1.b & 0x41) != 0)
                        *(edx_26 - 4) = fconvert.s(x87_r6_19)
                        *(ecx_20 + 4) = fconvert.s(x87_r6_19 - x87_r5_7)
                    else
                        *(edx_26 - 4) = fconvert.s(x87_r6_19 + x87_r5_7)
                else if ((eax_24:1.b & 0x41) != 0)
                    *(edx_26 - 4) = fconvert.s(x87_r6_19)
                    *(ecx_20 + 4) = fconvert.s(x87_r5_7 + x87_r6_19)
                else
                    *(edx_26 - 4) = fconvert.s(x87_r6_19 - x87_r5_7)
                
                long double x87_r6_27 = fconvert.t(fconvert.s(fconvert.t(*(ecx_20 + 8))))
                x87_r6_27 - x87_r7_1
                eax_24.w = (x87_r6_27 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_27, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_27 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_10 = fconvert.t(fconvert.s(fconvert.t(*edx_26)))
                x87_r5_10 - x87_r7_1
                bool cond:7_1 = (eax_24:1.b & 0x41) != 0
                eax_24.w = (x87_r5_10 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_10, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r5_10 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
                
                if (cond:7_1)
                    if ((eax_24:1.b & 0x41) != 0)
                        *edx_26 = fconvert.s(x87_r6_27)
                        *(ecx_20 + 8) = fconvert.s(x87_r6_27 - x87_r5_10)
                    else
                        *edx_26 = fconvert.s(x87_r6_27 + x87_r5_10)
                else if ((eax_24:1.b & 0x41) != 0)
                    *edx_26 = fconvert.s(x87_r6_27)
                    *(ecx_20 + 8) = fconvert.s(x87_r5_10 + x87_r6_27)
                else
                    *edx_26 = fconvert.s(x87_r6_27 - x87_r5_10)
                
                ecx_20 += 0x10
                edx_26 += 0x10
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            edi_11 = var_24_1
            edx_25 = var_1c_1
            ecx_19 = var_18_2
        
        if (edi_11 s< edx_25)
            float* ecx_21 = esi_4 + (edi_11 << 2)
            void* edx_28 = eax_23 - esi_4
            int32_t i_10 = var_1c_1 - edi_11
            int32_t i_4
            
            do
                long double x87_r6_35 = fconvert.t(fconvert.s(fconvert.t(*ecx_21)))
                x87_r6_35 - x87_r7_1
                eax_23.w = (x87_r6_35 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_35, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_35 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_13 = fconvert.t(fconvert.s(fconvert.t(*(ecx_21 + edx_28))))
                x87_r5_13 - x87_r7_1
                bool cond:5_1 = (eax_23:1.b & 0x41) != 0
                eax_23.w = (x87_r5_13 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_13, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r5_13 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
                
                if (cond:5_1)
                    if ((eax_23:1.b & 0x41) != 0)
                        *(ecx_21 + edx_28) = fconvert.s(x87_r6_35)
                        *ecx_21 = fconvert.s(x87_r6_35 - x87_r5_13)
                    else
                        *(ecx_21 + edx_28) = fconvert.s(x87_r6_35 + x87_r5_13)
                else if ((eax_23:1.b & 0x41) != 0)
                    *(ecx_21 + edx_28) = fconvert.s(x87_r6_35)
                    *ecx_21 = fconvert.s(x87_r5_13 + x87_r6_35)
                else
                    *(ecx_21 + edx_28) = fconvert.s(x87_r6_35 - x87_r5_13)
                
                ecx_21 = &ecx_21[1]
                i_4 = i_10
                i_10 -= 1
            while (i_4 != 1)
            edx_25 = var_1c_1
            ecx_19 = var_18_2
        
        var_14_3 -= 4
        ecx_19 -= 1
        var_18_2 = ecx_19
        
        if (ecx_19 s< 0)
            break
        
        edi_9 = var_14_3

int32_t i_5 = 0

if (*(ecx + 4) s> 0)
    do
        int32_t eax_26 = arg2[arg2[i_5 + 1] + 0x101]
        (*(*((*(edx + (eax_26 << 2) + 0x320) << 2) + &data_73fa78) + 0x18))(arg1, 
            *(*(eax_3 + 0x30) + (eax_26 << 2)), (&__saved_edi)[i_5], *(*arg1 + (i_5 << 2)))
        i_5 += 1
    while (i_5 s< *(ecx + 4))

int32_t i_6 = 0

if (*(ecx + 4) s> 0)
    do
        int32_t eax_28 = *(*arg1 + (i_6 << 2))
        float* edx_38 = **(eax_3 + (arg1[7] << 2) + 0xc)
        int32_t var_48_4 = eax_28
        sub_5bca80(eax_28, edx_38, edx_38)
        i_6 += 1
    while (i_6 s< *(ecx + 4))

sub_6b4885(eax_1 ^ &__saved_ebp)
