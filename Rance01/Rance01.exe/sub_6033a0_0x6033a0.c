// 函数: sub_6033a0
// 地址: 0x6033a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719610
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_98
int32_t eax_2 = data_78c474 ^ &var_98
int32_t __saved_edi
int32_t var_ac = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_10
int32_t* edx_3
edx_3:eax_10 = sx.q((arg5 - arg3) s/ 0x1c)
int32_t ecx_3 = ((eax_10 - edx_3) s>> 1) * 7
void* esi = &arg3[ecx_3]
int32_t var_b0 = arg5 - 0x1c
void* var_b4 = esi
sub_603a80(arg3, edx_3, ecx_3)
int32_t** i_1 = esi + 0x1c
int32_t* ecx_4

if (arg3 u< esi)
    var_98 = esi - 0xc
    
    do
        int32_t* edx_5 = var_98
        int32_t edi_1 = edx_5[7]
        int32_t* ecx_5
        
        if (edx_5[8] u< 0x10)
            ecx_5 = esi
        else
            ecx_5 = *esi
        
        int32_t ebx_2 = *edx_5
        int32_t eax_15 = ebx_2
        
        if (ebx_2 u>= edi_1)
            eax_15 = edi_1
        
        void* ebp_2 = &var_98[-4]
        int32_t* edx_6
        
        if (edx_5[1] u< 0x10)
            edx_6 = ebp_2
        else
            edx_6 = *ebp_2
        
        int32_t eax_16
        eax_16, ecx_4 = sub_402320(eax_15, edx_6, ecx_5, eax_15)
        bool cond:1_1 = eax_16 s< 0
        
        if (eax_16 == 0)
            if (ebx_2 u>= edi_1)
                eax_16.b = ebx_2 != edi_1
            else
                eax_16 = 0xffffffff
            
            cond:1_1 = eax_16 s< 0
        
        eax_16.b = cond:1_1
        
        if (eax_16.b != 0)
            break
        
        int32_t* edx_7 = var_98
        void* ecx_6
        
        if (edx_7[1] u< 0x10)
            ecx_6 = ebp_2
        else
            ecx_6 = *ebp_2
        
        int32_t ebx_3 = edx_7[7]
        
        if (edi_1 u< ebx_3)
            ebx_3 = edi_1
        
        int32_t eax_17 = *edx_7
        
        if (ebx_3 u< eax_17)
            eax_17 = ebx_3
        
        int32_t* edx_8
        
        if (edx_7[8] u< 0x10)
            edx_8 = esi
        else
            edx_8 = *esi
        
        int32_t eax_18
        eax_18, ecx_4 = sub_402320(eax_17, edx_8, ecx_6, eax_17)
        bool cond:8_1 = eax_18 s< 0
        
        if (eax_18 == 0)
            int32_t eax_19 = *var_98
            
            if (ebx_3 u>= eax_19)
                int32_t edx_9
                edx_9.b = ebx_3 != eax_19
                eax_18 = edx_9
            else
                eax_18 = 0xffffffff
            
            cond:8_1 = eax_18 s< 0
        
        eax_18.b = cond:8_1
        
        if (eax_18.b != 0)
            break
        
        var_98 -= 0x1c
        esi -= 0x1c
    while (arg3 u< esi)

int32_t** i = i_1

if (i u< arg5)
    do
        int32_t* ecx_7
        
        if (*(esi + 0x14) u< 0x10)
            ecx_7 = esi
        else
            ecx_7 = *esi
        
        int32_t ebx_4 = i[4]
        int32_t eax_20 = *(esi + 0x10)
        
        if (ebx_4 u< eax_20)
            eax_20 = ebx_4
        
        int32_t ebp_3 = i[5]
        int32_t* i_5
        
        if (ebp_3 u< 0x10)
            i_5 = i
        else
            i_5 = *i
        
        int32_t* eax_21
        eax_21, ecx_4 = sub_402320(eax_20, i_5, ecx_7, eax_20)
        bool cond:4_1 = eax_21 s< 0
        
        if (eax_21 == 0)
            int32_t eax_22 = *(esi + 0x10)
            
            if (ebx_4 u>= eax_22)
                ecx_4.b = ebx_4 != eax_22
                eax_21 = ecx_4
            else
                eax_21 = 0xffffffff
            
            cond:4_1 = eax_21 s< 0
        
        eax_21.b = cond:4_1
        
        if (eax_21.b != 0)
            break
        
        int32_t* i_3
        
        if (ebp_3 u< 0x10)
            i_3 = i
        else
            i_3 = *i
        
        int32_t ebx_5 = *(esi + 0x10)
        int32_t eax_23 = i[4]
        
        if (ebx_5 u< eax_23)
            eax_23 = ebx_5
        
        int32_t* edx_10
        
        if (*(esi + 0x14) u< 0x10)
            edx_10 = esi
        else
            edx_10 = *esi
        
        int32_t eax_24
        eax_24, ecx_4 = sub_402320(eax_23, edx_10, i_3, eax_23)
        bool cond:9_1 = eax_24 s< 0
        
        if (eax_24 == 0)
            int32_t eax_25 = i[4]
            
            if (ebx_5 u>= eax_25)
                int32_t edx_11
                edx_11.b = ebx_5 != eax_25
                eax_24 = edx_11
            else
                eax_24 = 0xffffffff
            
            cond:9_1 = eax_24 s< 0
        
        eax_24.b = cond:9_1
        
        if (eax_24.b != 0)
            break
        
        i = &i[7]
    while (i u< arg5)
    
    i_1 = i

var_98 = esi

while (true)
    for (; i u< arg5; i = &i[7])
        int32_t ebp_4 = i[4]
        int32_t* i_4
        
        if (i[5] u< 0x10)
            i_4 = i
        else
            i_4 = *i
        
        int32_t ebx_6 = *(esi + 0x10)
        int32_t eax_26 = ebx_6
        
        if (ebx_6 u>= ebp_4)
            eax_26 = ebp_4
        
        int32_t* edx_12
        
        if (*(esi + 0x14) u< 0x10)
            edx_12 = esi
        else
            edx_12 = *esi
        
        int32_t eax_27 = sub_402320(eax_26, edx_12, i_4, eax_26)
        bool cond:3_1 = eax_27 s< 0
        
        if (eax_27 == 0)
            if (ebx_6 u>= ebp_4)
                eax_27.b = ebx_6 != ebp_4
            else
                eax_27 = 0xffffffff
            
            cond:3_1 = eax_27 s< 0
        
        eax_27.b = cond:3_1
        
        if (eax_27.b == 0)
            int32_t* ecx_9
            
            if (*(esi + 0x14) u< 0x10)
                ecx_9 = esi
            else
                ecx_9 = *esi
            
            int32_t eax_28 = ebp_4
            
            if (ebp_4 u>= ebx_6)
                eax_28 = ebx_6
            
            int32_t* i_6
            
            if (i[5] u< 0x10)
                i_6 = i
            else
                i_6 = *i
            
            int32_t eax_29 = sub_402320(eax_28, i_6, ecx_9, eax_28)
            bool cond:7_1 = eax_29 s< 0
            
            if (eax_29 == 0)
                if (ebp_4 u>= ebx_6)
                    eax_29.b = ebp_4 != ebx_6
                else
                    eax_29 = 0xffffffff
                
                cond:7_1 = eax_29 s< 0
            
            eax_29.b = cond:7_1
            
            if (eax_29.b != 0)
                break
            
            int32_t** i_7 = i_1
            i_1 = &i_1[7]
            
            if (i_7 != i)
                int32_t ebp_5 = i_7[3]
                int32_t* ecx_12 = *i_7
                int32_t edx_13 = i_7[1]
                int32_t ebx_7 = i_7[2]
                *i_7 = *i
                i_7[1] = i[1]
                i_7[2] = i[2]
                i_7[3] = i[3]
                *i = ecx_12
                i[1] = edx_13
                i[2] = ebx_7
                i[3] = ebp_5
                int32_t ecx_14 = i_7[4]
                i_7[4] = i[4]
                i[4] = ecx_14
                int32_t ecx_15 = i_7[5]
                i_7[5] = i[5]
                i[5] = ecx_15
    
    int32_t* eax_30 = var_98
    
    if (arg3 u< eax_30)
        void* ebp_11 = &eax_30[-3]
        void* eax_43
        
        do
            int32_t ebx_8 = *(esi + 0x10)
            int32_t* ecx_16
            
            if (*(esi + 0x14) u< 0x10)
                ecx_16 = esi
            else
                ecx_16 = *esi
            
            int32_t eax_31 = *ebp_11
            int32_t var_88_1 = eax_31
            
            if (eax_31 u< eax_31)
                var_88_1 = eax_31
            
            if (eax_31 u>= ebx_8)
                eax_31 = ebx_8
            
            void* edx_17
            
            if (*(ebp_11 + 4) u< 0x10)
                edx_17 = ebp_11 - 0x10
            else
                edx_17 = *(ebp_11 - 0x10)
            
            int32_t eax_32 = sub_402320(eax_31, edx_17, ecx_16, eax_31)
            bool cond:5_1 = eax_32 s< 0
            
            if (eax_32 == 0)
                int32_t eax_33 = *(esi + 0x10)
                
                if (var_88_1 u>= eax_33)
                    int32_t edx_18
                    edx_18.b = var_88_1 != eax_33
                    eax_32 = edx_18
                else
                    eax_32 = 0xffffffff
                
                cond:5_1 = eax_32 s< 0
            
            eax_32.b = cond:5_1
            
            if (eax_32.b == 0)
                void* ecx_18
                
                if (*(ebp_11 + 4) u< 0x10)
                    ecx_18 = ebp_11 - 0x10
                else
                    ecx_18 = *(ebp_11 - 0x10)
                
                int32_t edx_19 = *(esi + 0x10)
                int32_t eax_34 = *ebp_11
                
                if (edx_19 u< eax_34)
                    eax_34 = edx_19
                
                int32_t* edx_20
                
                if (*(esi + 0x14) u< 0x10)
                    edx_20 = esi
                else
                    edx_20 = *esi
                
                int32_t eax_35 = sub_402320(eax_34, edx_20, ecx_18, eax_34)
                bool cond:10_1 = eax_35 s< 0
                
                if (eax_35 == 0)
                    int32_t ecx_19 = *(esi + 0x10)
                    int32_t eax_36 = *ebp_11
                    
                    if (ecx_19 u>= eax_36)
                        int32_t edx_21
                        edx_21.b = ecx_19 != eax_36
                        eax_35 = edx_21
                    else
                        eax_35 = 0xffffffff
                    
                    cond:10_1 = eax_35 s< 0
                
                eax_35.b = cond:10_1
                
                if (eax_35.b != 0)
                    break
                
                esi -= 0x1c
                
                if (esi != ebp_11 - 0x10)
                    int32_t edx_22 = *(esi + 8)
                    int32_t eax_38 = *esi
                    int32_t ecx_20 = *(esi + 4)
                    int32_t edx_23 = *(esi + 0xc)
                    *esi = *(ebp_11 - 0x10)
                    *(esi + 4) = *(ebp_11 - 0xc)
                    *(esi + 8) = *(ebp_11 - 8)
                    *(esi + 0xc) = *(ebp_11 - 4)
                    *(ebp_11 - 0x10) = eax_38
                    *(ebp_11 - 0xc) = ecx_20
                    *(ebp_11 - 8) = edx_22
                    *(ebp_11 - 4) = edx_23
                    int32_t eax_40 = *(esi + 0x10)
                    *(esi + 0x10) = *ebp_11
                    *ebp_11 = eax_40
                    int32_t eax_41 = *(esi + 0x14)
                    *(esi + 0x14) = *(ebp_11 + 4)
                    *(ebp_11 + 4) = eax_41
            
            eax_43 = var_98 - 0x1c
            ebp_11 -= 0x1c
            var_98 = eax_43
        while (arg3 u< eax_43)
    
    int32_t* eax_44 = var_98
    
    if (eax_44 != arg3)
        var_98 = eax_44 - 0x1c
        
        if (i != arg5)
            if (i != eax_44 - 0x1c)
                int32_t ebp_32 = i[3]
                int32_t* ecx_35 = *i
                int32_t edx_44 = i[1]
                int32_t ebx_16 = i[2]
                *i = *(eax_44 - 0x1c)
                i[1] = *(eax_44 - 0x18)
                i[2] = *(eax_44 - 0x14)
                i[3] = *(eax_44 - 0x10)
                *(eax_44 - 0x1c) = ecx_35
                *(eax_44 - 0x18) = edx_44
                *(eax_44 - 0x14) = ebx_16
                *(eax_44 - 0x10) = ebp_32
                int32_t ecx_37 = i[4]
                i[4] = *(eax_44 - 0xc)
                *(eax_44 - 0xc) = ecx_37
                int32_t ecx_38 = i[5]
                i[5] = *(eax_44 - 8)
                *(eax_44 - 8) = ecx_38
            
            i = &i[7]
        else
            esi -= 0x1c
            
            if (eax_44 - 0x1c != esi)
                int32_t ebp_23 = *(eax_44 - 0x10)
                int32_t* ecx_27 = *(eax_44 - 0x1c)
                int32_t edx_38 = *(eax_44 - 0x18)
                int32_t ebx_14 = *(eax_44 - 0x14)
                *(eax_44 - 0x1c) = *esi
                *(eax_44 - 0x18) = *(esi + 4)
                *(eax_44 - 0x14) = *(esi + 8)
                *(eax_44 - 0x10) = *(esi + 0xc)
                *esi = ecx_27
                *(esi + 4) = edx_38
                *(esi + 8) = ebx_14
                *(esi + 0xc) = ebp_23
                int32_t ecx_29 = *(eax_44 - 0xc)
                *(eax_44 - 0xc) = *(esi + 0x10)
                *(esi + 0x10) = ecx_29
                int32_t ecx_30 = *(eax_44 - 8)
                *(eax_44 - 8) = *(esi + 0x14)
                *(esi + 0x14) = ecx_30
            
            void* i_8 = i_1 - 0x1c
            i_1 = i_8
            
            if (esi != i_8)
                int32_t eax_49 = *(esi + 0xc)
                int32_t* ecx_31 = *esi
                int32_t edx_41 = *(esi + 4)
                int32_t ebx_15 = *(esi + 8)
                *esi = *i_1
                *(esi + 4) = i_1[1]
                *(esi + 8) = i_1[2]
                *(esi + 0xc) = i_1[3]
                *i_1 = ecx_31
                i_1[1] = edx_41
                i_1[2] = ebx_15
                i_1[3] = eax_49
                int32_t ecx_33 = *(esi + 0x10)
                *(esi + 0x10) = i_1[4]
                i_1[4] = ecx_33
                int32_t ecx_34 = *(esi + 0x14)
                *(esi + 0x14) = i_1[5]
                i_1[5] = ecx_34
    else
        if (i == arg5)
            break
        
        if (i_1 != i && esi != i_1)
            int32_t ebp_12 = *(esi + 0xc)
            int32_t* ecx_23 = *esi
            int32_t edx_29 = *(esi + 4)
            int32_t ebx_10 = *(esi + 8)
            *esi = *i_1
            *(esi + 4) = i_1[1]
            *(esi + 8) = i_1[2]
            *(esi + 0xc) = i_1[3]
            *i_1 = ecx_23
            i_1[1] = edx_29
            i_1[2] = ebx_10
            i_1[3] = ebp_12
            int32_t ecx_24 = *(esi + 0x10)
            *(esi + 0x10) = i_1[4]
            i_1[4] = ecx_24
            int32_t ecx_25 = *(esi + 0x14)
            *(esi + 0x14) = i_1[5]
            i_1[5] = ecx_25
        
        i_1 = &i_1[7]
        int32_t** i_2 = i
        int32_t** ecx_26 = esi
        esi += 0x1c
        i = &i[7]
        
        if (ecx_26 != i_2)
            int32_t ebp_17 = ecx_26[2]
            int32_t* edx_33 = *ecx_26
            int32_t ebx_11 = ecx_26[1]
            int32_t ebp_18 = ecx_26[3]
            *ecx_26 = *i_2
            ecx_26[1] = i_2[1]
            ecx_26[2] = i_2[2]
            ecx_26[3] = i_2[3]
            *i_2 = edx_33
            i_2[1] = ebx_11
            i_2[2] = ebp_17
            i_2[3] = ebp_18
            int32_t edx_36 = ecx_26[4]
            ecx_26[4] = i_2[4]
            i_2[4] = edx_36
            int32_t edx_37 = ecx_26[5]
            ecx_26[5] = i_2[5]
            i_2[5] = edx_37

*arg4 = esi
arg4[1] = i_1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_98)
return arg4
