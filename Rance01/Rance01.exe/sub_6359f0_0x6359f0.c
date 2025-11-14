// 函数: sub_6359f0
// 地址: 0x6359f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_728890
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* eax_5
eax_5.b = *(*(ebx + 0x68) + 0x10)
void* var_4c = ebx
int32_t var_48
int32_t var_34

if (eax_5.b != 0)
    int32_t* ecx_1 = *(ebx + 0x70)
    int32_t* eax_6 = *(ebx + 0x6c)
    
    if (eax_6 != ecx_1)
        void* eax_7
        int32_t edx
        int32_t edx_1
        eax_7, edx_1 = sub_532d20(eax_6, edx, ecx_1, ecx_1)
        int32_t var_a0_2 = *(ebx + 0x70)
        sub_6367f0(eax_7, edx_1)
        *(ebx + 0x70) = eax_7
    
    int128_t* var_5c = nullptr
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    int32_t var_c_1 = 0
    int32_t* eax_10 = *(ebx + 0x68)
    int32_t ecx_2 = *eax_10
    int32_t eax_11 = eax_10[1]
    
    if (ecx_2 != eax_11)
        sub_65a090(&var_5c, (eax_11 - ecx_2) s>> 2)
        int128_t* ecx_4 = *eax_10
        sub_6b49d0(var_5c, ecx_4, (eax_10[1] - ecx_4) s>> 2 << 2, eax_4)
    
    sub_6365c0((var_58_1 - var_5c) s>> 2, ebx + 0x6c)
    int32_t eax_21
    int32_t edx_3
    edx_3:eax_21 = muls.dp.d(0x2aaaaaab, *(ebx + 0x70) - *(ebx + 0x6c))
    int32_t edx_4 = edx_3 s>> 2
    int32_t eax_24 = (edx_4 u>> 0x1f) + edx_4
    int32_t var_7c = 0
    
    if (eax_24 s> 0)
        int32_t* edx_5 = nullptr
        int32_t* var_84_1 = nullptr
        int32_t eax_25 = 0
        
        do
            int32_t* ecx_7 = *(ebx + 0x6c)
            *(edx_5 + ecx_7) = *(var_5c + (eax_25 << 2))
            int128_t* edx_6 = var_5c
            int32_t* esi_6 = *(edx_6 + (eax_25 << 2))
            int32_t ecx_10
            
            if (esi_6 s<= 0)
                ecx_10 = 0
            else
                int32_t** eax_27 = data_797ddc + 0xa8
                int32_t* var_a0_5 = esi_6
                
                if (sub_418b70(eax_27, edx_6, ecx_7) != 0)
                    int32_t* eax_30 = sub_418bd0(eax_27, esi_6)
                    
                    if (eax_30 == 0)
                        ecx_10 = 0
                    else
                        struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_31 =
                            sub_414e30(eax_30)
                        int32_t* eax_32 = eax_30
                        int32_t* ecx_8 = eax_32[0xe]
                        
                        if (ecx_8 != 0 && eax_31[2] == 0)
                            eax_31[8] = ecx_8
                            eax_31[2] = (**ecx_8)(1)
                            eax_32 = eax_30
                        
                        eax_31[3] = eax_32[0xc]
                        eax_31[4] = eax_32
                        ecx_10 = eax_31[9]
                    
                    eax_25 = var_7c
                else
                    eax_25 = var_7c
                    ecx_10 = 0
            
            eax_25 += 1
            *(var_84_1 + *(ebx + 0x6c) + 4) = ecx_10
            edx_5 = &var_84_1[6]
            var_7c = eax_25
            var_84_1 = edx_5
        while (eax_25 s< eax_24)
    
    int32_t eax_35
    int32_t edx_11
    edx_11:eax_35 = muls.dp.d(0x2aaaaaab, *(ebx + 0x70) - *(ebx + 0x6c))
    int32_t edx_12 = edx_11 s>> 2
    int32_t esi_11 = (edx_12 u>> 0x1f) + edx_12
    int32_t var_88_3 = 0
    int32_t var_74_1 = esi_11
    
    if (esi_11 s> 0)
        int32_t var_80_2 = 0
        int32_t eax_53
        
        do
            int32_t eax_36
            int32_t edx_13
            edx_13:eax_36 = muls.dp.d(0x2aaaaaab, *(ebx + 0x70) - *(ebx + 0x6c))
            int32_t edx_14 = edx_13 s>> 2
            int32_t eax_39 = (edx_14 u>> 0x1f) + edx_14
            int32_t var_78_2 = 0
            
            if (eax_39 s> 0)
                int32_t* var_84_2 = nullptr
                int32_t eax_51
                
                do
                    int32_t eax_40 = *(ebx + 0x6c)
                    
                    if (*(var_80_2 + eax_40 + 4) == *(var_84_2 + eax_40))
                        var_7c = var_80_2 + eax_40
                        int32_t eax_41 = *(var_84_2 + eax_40 + 0xc)
                        int32_t edx_16
                        
                        if (&var_7c u< eax_41)
                            edx_16 = *(var_84_2 + eax_40 + 8)
                        
                        if (&var_7c u>= eax_41 || edx_16 u> &var_7c)
                            int32_t ecx_21 = *(var_84_2 + eax_40 + 0x10)
                            
                            if (eax_41 == ecx_21)
                                int32_t edx_20 = *(var_84_2 + eax_40 + 8)
                                int32_t eax_47 = (eax_41 - edx_20) s>> 2
                                
                                if (eax_47 u> 0x3ffffffe)
                                    sub_6b47bf("vector<T> too long")
                                    noreturn
                                
                                int32_t ecx_23 = (ecx_21 - edx_20) s>> 2
                                
                                if (eax_47 + 1 u> ecx_23)
                                    uint32_t edx_22 = ecx_23 u>> 1
                                    int32_t ecx_24
                                    
                                    if (0x3fffffff - edx_22 u>= ecx_23)
                                        ecx_24 = ecx_23 + edx_22
                                    else
                                        ecx_24 = 0
                                    
                                    if (ecx_24 u< eax_47 + 1)
                                        ecx_24 = eax_47 + 1
                                    
                                    sub_6b0560(var_84_2 + eax_40 + 8, ecx_24)
                            
                            int32_t* eax_49 = *(var_84_2 + eax_40 + 0xc)
                            
                            if (eax_49 != 0)
                                *eax_49 = var_7c
                        else
                            int32_t ecx_16 = *(var_84_2 + eax_40 + 0x10)
                            
                            if (eax_41 == ecx_16)
                                int32_t eax_43 = (eax_41 - edx_16) s>> 2
                                
                                if (eax_43 u> 0x3ffffffe)
                                    sub_6b47bf("vector<T> too long")
                                    noreturn
                                
                                int32_t ecx_18 = (ecx_16 - edx_16) s>> 2
                                
                                if (eax_43 + 1 u> ecx_18)
                                    uint32_t edx_18 = ecx_18 u>> 1
                                    int32_t ecx_19
                                    
                                    if (0x3fffffff - edx_18 u>= ecx_18)
                                        ecx_19 = ecx_18 + edx_18
                                    else
                                        ecx_19 = 0
                                    
                                    if (ecx_19 u< eax_43 + 1)
                                        ecx_19 = eax_43 + 1
                                    
                                    sub_6b0560(var_84_2 + eax_40 + 8, ecx_19)
                                    ebx = var_4c
                            
                            int32_t* eax_45 = *(var_84_2 + eax_40 + 0xc)
                            
                            if (eax_45 != 0)
                                *eax_45 =
                                    *(*(var_84_2 + eax_40 + 8) + ((&var_7c - edx_16) s>> 2 << 2))
                        
                        *(var_84_2 + eax_40 + 0xc) += 4
                    
                    var_84_2 = &var_84_2[6]
                    eax_51 = var_78_2 + 1
                    var_78_2 = eax_51
                while (eax_51 s< eax_39)
                esi_11 = var_74_1
            
            var_80_2 += 0x18
            eax_53 = var_88_3 + 1
            var_88_3 = eax_53
        while (eax_53 s< esi_11)
    
    int32_t* var_6c = nullptr
    int32_t var_68_1 = 0
    int32_t var_64_1 = 0
    var_c_1.b = 1
    int32_t eax_54 = sub_636130(ebx, &var_6c)
    int32_t edi_5 = GetScrollPos(*(ebx + 0x11c), *(ebx + 0x124))
    int32_t var_84_3 = edi_5
    GetWindowPlacement(*(ebx + 0x34), &var_48)
    int32_t* esi_14 = *(ebx + 0x150)
    int32_t var_28
    int32_t var_20
    int32_t temp0_1 = divs.dp.d(sx.q(var_20 - var_28 - *(ebx + 0x5c)), *(ebx + 0x60))
    *(ebx + 0x60)
    char* eax_61 = *(ebx + 0x154)
    
    if (esi_14 != eax_61)
        char* ecx_27 = eax_61
        char* edi_6 = eax_61
        
        if (ecx_27 != ecx_27)
            int32_t eax_62 = eax_61 - esi_14
            int32_t var_88_4 = eax_62
            
            do
                if (esi_14 != edi_6)
                    if (esi_14[5] u>= 0x10)
                        int32_t var_a0_12 = *esi_14
                        sub_6b4d5b()
                        eax_62 = var_88_4
                        ecx_27 = eax_61
                    
                    esi_14[5] = 0xf
                    esi_14[4] = 0
                    *esi_14 = 0
                    
                    if (*(eax_62 + esi_14 + 0x14) u>= 0x10)
                        *esi_14 = *edi_6
                        *edi_6 = 0
                    else
                        sub_6b49d0(esi_14, edi_6, *(edi_6 + 0x10) + 1, eax_4)
                        eax_62 = var_88_4
                        ecx_27 = eax_61
                    
                    esi_14[4] = *(edi_6 + 0x10)
                    esi_14[5] = *(eax_62 + esi_14 + 0x14)
                    *(eax_62 + esi_14 + 0x14) = 0xf
                    *(edi_6 + 0x10) = 0
                    *edi_6 = 0
                
                edi_6 = &edi_6[0x1c]
                esi_14 = &esi_14[7]
            while (edi_6 != ecx_27)
        
        int32_t eax_66 = *(ebx + 0x154)
        int32_t var_74_2 = eax_66
        int32_t* edi_7 = esi_14
        
        if (esi_14 != eax_66)
            do
                if (edi_7[5] u>= 0x10)
                    int32_t var_a0_14 = *edi_7
                    sub_6b4d5b()
                    eax_66 = var_74_2
                
                edi_7[5] = 0xf
                edi_7[4] = 0
                *edi_7 = 0
                edi_7 = &edi_7[7]
            while (edi_7 != eax_66)
        
        edi_5 = var_84_3
        *(ebx + 0x154) = esi_14
    
    int32_t ecx_30 = var_68_1
    int32_t eax_71 = (ecx_30 - var_6c) s/ 0x1c
    int32_t eax_72
    
    if (eax_71 s>= temp0_1 + edi_5)
        eax_72 = temp0_1
    else
        eax_72 = eax_71 - edi_5
    
    int32_t eax_73 = eax_72 + edi_5
    
    if (edi_5 s< eax_73)
        int32_t esi_20 = var_84_3 * 0x1c
        int32_t i_1 = eax_73 - var_84_3
        int32_t i
        
        do
            sub_405220(esi_20 + var_6c, ebx + 0x150)
            esi_20 += 0x1c
            i = i_1
            i_1 -= 1
        while (i != 1)
        ecx_30 = var_68_1
    
    *(ebx + 0x12c) = (ecx_30 - var_6c) s/ 0x1c + 1
    int32_t eax_78 = GetScrollPos(*(ebx + 0x11c), *(ebx + 0x124))
    uint32_t ecx_34 = zx.d(*(ebx + 0x130))
    int32_t ecx_35 = neg.d(ecx_34)
    int32_t var_44_1 = (sbb.d(ecx_35, ecx_35, ecx_34 != 0) & 8) | 7
    int32_t ecx_39 = *(ebx + 0x12c)
    var_48 = 0x1c
    int32_t var_40_1 = 0
    
    if (ecx_39 s<= 0)
        int32_t var_3c_2 = 0
    else
        int32_t var_3c_1 = ecx_39 - 1
    
    int32_t var_34_1 = eax_78
    int32_t var_38_1 = *(ebx + 0x128)
    SetScrollInfo(*(ebx + 0x11c), *(ebx + 0x124), &var_48, 1)
    int32_t eax_80
    int32_t edx_42
    edx_42:eax_80 = sx.q(*(ebx + 0x60))
    *(ebx + 0x148) = ((eax_80 - edx_42) s>> 1) * (eax_54 + 2)
    int32_t eax_85 = GetScrollPos(*(ebx + 0x138), *(ebx + 0x140))
    uint32_t ecx_44 = zx.d(*(ebx + 0x14c))
    int32_t ecx_45 = neg.d(ecx_44)
    int32_t var_44_2 = (sbb.d(ecx_45, ecx_45, ecx_44 != 0) & 8) | 7
    int32_t ecx_49 = *(ebx + 0x148)
    var_48 = 0x1c
    int32_t var_40_2 = 0
    
    if (ecx_49 s<= 0)
        int32_t var_3c_4 = 0
    else
        int32_t var_3c_3 = ecx_49 - 1
    
    var_34 = eax_85
    int32_t var_38_2 = *(ebx + 0x144)
    SetScrollInfo(*(ebx + 0x138), *(ebx + 0x140), &var_48, 1)
    int32_t* esi_21 = var_6c
    
    if (esi_21 != 0)
        if (esi_21 != var_68_1)
            do
                if (esi_21[5] u>= 0x10)
                    int32_t var_a0_17 = *esi_21
                    sub_6b4d5b()
                
                esi_21[5] = 0xf
                esi_21[4] = 0
                *esi_21 = 0
                esi_21 = &esi_21[7]
            while (esi_21 != var_68_1)
            
            esi_21 = var_6c
        
        int32_t* var_a0_18 = esi_21
        sub_6b4d5b()
    
    int32_t var_c_2 = 0xffffffff
    var_6c = nullptr
    int32_t var_68_2 = 0
    int32_t var_64_2 = 0
    
    if (var_5c != 0)
        int128_t* var_a0_19 = var_5c
        sub_6b4d5b()

void* eax_89
eax_89.b = 0
sub_64e830(*(ebx + 0x108), eax_89.b, &var_48, ebx + 0x7c, ebx + 0x150, 
    GetScrollPos(*(ebx + 0x138), *(ebx + 0x140)))

if (var_34 u>= 0x10)
    int32_t var_a0_22 = var_48
    sub_6b4d5b()

InvalidateRect(*(ebx + 0x34), nullptr, 0)
BOOL result = UpdateWindow(*(ebx + 0x34))
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return result
