// 函数: sub_5eb6b0
// 地址: 0x5eb6b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713f90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IString::common::CStringWrapper::VTable* const var_30 =
    &common::CStringWrapper::`vftable'{for `IString'}
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401180(&var_2c, 0xffffffff, arg2, 0)
int32_t var_4 = 0
int32_t eax_7 = (*(*data_797dd8 + 0x1c))(&var_30)
int128_t* result = (*(*data_797dd8 + 0x54))(eax_7)

if (result.b != 0)
    int32_t* edx_3 = *(arg1 + 0x50)
    int32_t* ecx_3 = *(arg1 + 0x4c)
    
    if (ecx_3 != edx_3)
        int32_t* eax_9 = edx_3
        
        if (edx_3 != edx_3)
            do
                *ecx_3 = *eax_9
                ecx_3[1] = eax_9[1]
                eax_9 = &eax_9[2]
                ecx_3 = &ecx_3[2]
            while (eax_9 != edx_3)
        
        *(arg1 + 0x50) = ecx_3
    
    int32_t eax_11 = (*(*data_797dd8 + 0x34))(eax_7)
    int32_t ebp_1 = 0
    float var_6c
    int16_t top
    
    if (eax_11 s> 0)
        do
            unimplemented  {fldz }
            float var_64_1 = fconvert.s(unimplemented  {fst dword [esp+0x20], st0})
            float var_60_1 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
            unimplemented  {fstp dword [esp+0x24], st0}
            int16_t top_2 = top
            
            if ((*(*data_797dd8 + 0x5c))(eax_7, ebp_1, 0) != 0)
                (*(*data_797dd8 + 0x90))(eax_7, ebp_1, 0)
                float var_64_2 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                unimplemented  {fstp dword [esp+0x20], st0}
                top_2 += 1
            
            if ((*(*data_797dd8 + 0x5c))(eax_7, ebp_1, 1) != 0)
                (*(*data_797dd8 + 0x90))(eax_7, ebp_1, 1)
                float var_60_2 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                unimplemented  {fstp dword [esp+0x24], st0}
                top_2 += 1
            
            unimplemented  {fld st0, dword [esp+0x20]}
            int32_t eax_18 = *(arg1 + 0x50)
            var_6c = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
            unimplemented  {fstp dword [esp+0x18], st0}
            unimplemented  {fld st0, dword [esp+0x24]}
            float var_68_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            top = top_2
            int32_t ecx_9
            
            if (&var_6c u< eax_18)
                ecx_9 = *(arg1 + 0x4c)
            
            int32_t* eax_20
            
            if (&var_6c u>= eax_18 || ecx_9 u> &var_6c)
                if (eax_18 == *(arg1 + 0x54))
                    sub_58b960(arg1 + 0x4c)
                
                eax_20 = *(arg1 + 0x50)
                
                if (eax_20 != 0)
                    *eax_20 = var_6c
                    eax_20[1] = var_68_1
            else
                if (eax_18 == *(arg1 + 0x54))
                    sub_58b960(arg1 + 0x4c)
                
                int32_t* ecx_11 = *(arg1 + 0x4c) + ((&var_6c - ecx_9) s>> 3 << 3)
                eax_20 = *(arg1 + 0x50)
                
                if (eax_20 != 0)
                    *eax_20 = *ecx_11
                    eax_20[1] = ecx_11[1]
            *(arg1 + 0x50) += 8
            ebp_1 += 1
        while (ebp_1 s< eax_11)
    
    int16_t top_6 = top - 1
    unimplemented  {fld1 }
    int32_t eax_23 = (*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 3
    
    if (eax_23 s> 4)
        if (mods.dp.d(sx.q(eax_23 - 1), 3) != 0)
            var_6c = fconvert.s(unimplemented  {fst dword [esp+0x18], st0})
            float var_68_3 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            
            do
                int32_t eax_39 = *(arg1 + 0x50)
                int32_t edx_22
                
                if (&var_6c u< eax_39)
                    edx_22 = *(arg1 + 0x4c)
                
                if (&var_6c u>= eax_39 || edx_22 u> &var_6c)
                    int32_t ecx_33 = *(arg1 + 0x54)
                    
                    if (eax_39 == ecx_33)
                        int32_t edx_27 = *(arg1 + 0x4c)
                        int32_t eax_45 = (eax_39 - edx_27) s>> 3
                        
                        if (eax_45 u> 0x1ffffffe)
                            goto label_5eb986
                        
                        int32_t ecx_35 = (ecx_33 - edx_27) s>> 3
                        
                        if (eax_45 + 1 u> ecx_35)
                            uint32_t edx_29 = ecx_35 u>> 1
                            int32_t* ecx_36
                            
                            if (0x1fffffff - edx_29 u>= ecx_35)
                                ecx_36 = ecx_35 + edx_29
                            else
                                ecx_36 = nullptr
                            
                            if (ecx_36 u< eax_45 + 1)
                                ecx_36 = eax_45 + 1
                            
                            sub_562860(arg1 + 0x4c, ecx_36)
                    
                    float* eax_47 = *(arg1 + 0x50)
                    
                    if (eax_47 != 0)
                        *eax_47 = var_6c
                        eax_47[1] = var_68_3
                else
                    int32_t ecx_26 = *(arg1 + 0x54)
                    
                    if (eax_39 == ecx_26)
                        int32_t eax_41 = (eax_39 - edx_22) s>> 3
                        
                        if (eax_41 u> 0x1ffffffe)
                            goto label_5eb986
                        
                        int32_t ecx_28 = (ecx_26 - edx_22) s>> 3
                        
                        if (eax_41 + 1 u> ecx_28)
                            uint32_t edx_24 = ecx_28 u>> 1
                            int32_t* ecx_29
                            
                            if (0x1fffffff - edx_24 u>= ecx_28)
                                ecx_29 = ecx_28 + edx_24
                            else
                                ecx_29 = nullptr
                            
                            if (ecx_29 u< eax_41 + 1)
                                ecx_29 = eax_41 + 1
                            
                            sub_562860(arg1 + 0x4c, ecx_29)
                    
                    int32_t* eax_43 = *(arg1 + 0x50)
                    int32_t* ecx_31 = *(arg1 + 0x4c) + ((&var_6c - edx_22) s>> 3 << 3)
                    
                    if (eax_43 != 0)
                        *eax_43 = *ecx_31
                        eax_43[1] = ecx_31[1]
                
                *(arg1 + 0x50) += 8
            while (mods.dp.d(sx.q(((*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 3) - 1), 3) != 0)
            
            top_6 = top_6
            unimplemented  {fld1 }
    else if (eax_23 s< 4)
        var_6c = fconvert.s(unimplemented  {fst dword [esp+0x18], st0})
        float var_68_2 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
        unimplemented  {fstp dword [esp+0x1c], st0}
        
        do
            int32_t eax_24 = *(arg1 + 0x50)
            int32_t edx_11
            
            if (&var_6c u< eax_24)
                edx_11 = *(arg1 + 0x4c)
            
            if (&var_6c u>= eax_24 || edx_11 u> &var_6c)
                int32_t ecx_21 = *(arg1 + 0x54)
                
                if (eax_24 == ecx_21)
                    int32_t edx_16 = *(arg1 + 0x4c)
                    int32_t eax_30 = (eax_24 - edx_16) s>> 3
                    
                    if (eax_30 u> 0x1ffffffe)
                    label_5eb986:
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t ecx_23 = (ecx_21 - edx_16) s>> 3
                    
                    if (eax_30 + 1 u> ecx_23)
                        uint32_t edx_18 = ecx_23 u>> 1
                        int32_t* ecx_24
                        
                        if (0x1fffffff - edx_18 u>= ecx_23)
                            ecx_24 = ecx_23 + edx_18
                        else
                            ecx_24 = nullptr
                        
                        if (ecx_24 u< eax_30 + 1)
                            ecx_24 = eax_30 + 1
                        
                        sub_562860(arg1 + 0x4c, ecx_24)
                
                float* eax_32 = *(arg1 + 0x50)
                
                if (eax_32 != 0)
                    *eax_32 = var_6c
                    eax_32[1] = var_68_2
            else
                int32_t ecx_14 = *(arg1 + 0x54)
                
                if (eax_24 == ecx_14)
                    int32_t eax_26 = (eax_24 - edx_11) s>> 3
                    
                    if (eax_26 u> 0x1ffffffe)
                        goto label_5eb986
                    
                    int32_t ecx_16 = (ecx_14 - edx_11) s>> 3
                    
                    if (eax_26 + 1 u> ecx_16)
                        uint32_t edx_13 = ecx_16 u>> 1
                        int32_t* ecx_17
                        
                        if (0x1fffffff - edx_13 u>= ecx_16)
                            ecx_17 = ecx_16 + edx_13
                        else
                            ecx_17 = nullptr
                        
                        if (ecx_17 u< eax_26 + 1)
                            ecx_17 = eax_26 + 1
                        
                        sub_562860(arg1 + 0x4c, ecx_17)
                
                int32_t* eax_28 = *(arg1 + 0x50)
                int32_t* ecx_19 = *(arg1 + 0x4c) + ((&var_6c - edx_11) s>> 3 << 3)
                
                if (eax_28 != 0)
                    *eax_28 = *ecx_19
                    eax_28[1] = ecx_19[1]
            
            *(arg1 + 0x50) += 8
        while (((*(arg1 + 0x50) - *(arg1 + 0x4c)) & 0xfffffff8) s< 0x20)
        
        top_6 = top_6
        unimplemented  {fld1 }
    
    float* eax_54 = *(arg1 + 0x4c)
    unimplemented  {fldz }
    *eax_54 = fconvert.s(unimplemented  {fst dword [eax], st0})
    float* esi_11 = nullptr
    eax_54[1] = fconvert.s(unimplemented  {fst dword [eax+0x4], st0})
    int32_t ebx_3 = 0
    unimplemented  {fxch st0, st1}
    unimplemented  {fxch st0, st1}
    int32_t edx_35 = (*(arg1 + 0x50) - eax_54) s>> 3
    eax_54[edx_35 * 2 - 2] = fconvert.s(unimplemented  {fst dword [eax+edx*8-0x8], st0})
    eax_54[edx_35 * 2 - 1] = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
    unimplemented  {fstp dword [eax+0x4], st0}
    float var_64_3 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
    unimplemented  {fstp dword [esp+0x20], st0}
    int16_t top_10 = top_6 + 1
    int32_t edx_36
    edx_36:result = muls.dp.d(0x55555556, ((*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 3) - 1)
    int32_t ebp_6 = (edx_36 u>> 0x1f) + edx_36
    int128_t* result_1 = nullptr
    int32_t var_54 = 0
    float* var_50_1 = nullptr
    int32_t var_4c_1 = 0
    var_4.b = 1
    
    if (ebp_6 s> 0)
        int32_t var_60_3 = 0
        
        do
            int32_t* eax_57 = *(arg1 + 0x4c) + var_60_3
            int32_t ecx_42 = eax_57[1]
            int32_t var_38_1 = *eax_57
            int32_t var_40_1 = eax_57[6]
            unimplemented  {fld st0, dword [esp+0x44]}
            unimplemented  {fsub st0, dword [esp+0x4c]}
            int32_t var_3c_1 = eax_57[7]
            int32_t var_34_1 = ecx_42
            int32_t var_88_7 = ecx_42
            var_6c = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            unimplemented  {fld st0, dword [esp+0x4c]}
            unimplemented  {fsub st0, dword [esp+0x54]}
            var_70 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
            unimplemented  {fstp dword [esp+0x18], st0}
            unimplemented  {fld st0, dword [esp+0x18]}
            unimplemented  {fld st0, dword [esp+0x1c]}
            unimplemented  {fmul st0, st0}
            unimplemented  {fld st0, st1}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            var_6c = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            unimplemented  {fld st0, dword [esp+0x1c]}
            float var_88_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            sub_4d9250(var_88_8)
            unimplemented  {call 0x4d9250}
            int32_t edx_39 = var_54
            var_70 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
            unimplemented  {fstp dword [esp+0x18], st0}
            unimplemented  {fld st0, dword [esp+0x18]}
            unimplemented  {fadd dword [esp+0x24]}
            float var_64_4 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
            unimplemented  {fstp dword [esp+0x20], st0}
            int16_t top_26
            
            if (&var_70 u>= esi_11 || edx_39 u> &var_70)
                if (esi_11 == ebx_3)
                    int32_t eax_65 = (esi_11 - edx_39) s>> 2
                    
                    if (eax_65 u> 0x3ffffffe)
                        goto label_5eb986
                    
                    int32_t ecx_50 = (ebx_3 - edx_39) s>> 2
                    
                    if (eax_65 + 1 u> ecx_50)
                        uint32_t edx_43 = ecx_50 u>> 1
                        int32_t ecx_51
                        
                        if (0x3fffffff - edx_43 u>= ecx_50)
                            ecx_51 = ecx_50 + edx_43
                        else
                            ecx_51 = 0
                        
                        if (ecx_51 u< eax_65 + 1)
                            ecx_51 = eax_65 + 1
                        
                        sub_6b0560(&var_54, ecx_51)
                        ebx_3 = var_4c_1
                        esi_11 = var_50_1
                
                if (esi_11 != 0)
                    top_26 = top_10 - 1
                    unimplemented  {fld st0, dword [esp+0x14]}
                label_5ebc3d:
                    *esi_11 = fconvert.s(unimplemented  {fstp dword [esi], st0})
                    unimplemented  {fstp dword [esi], st0}
                    top_10 = top_26 + 1
            else
                if (esi_11 == ebx_3)
                    int32_t eax_61 = (esi_11 - edx_39) s>> 2
                    
                    if (eax_61 u> 0x3ffffffe)
                        goto label_5eb986
                    
                    int32_t ecx_46 = (ebx_3 - edx_39) s>> 2
                    
                    if (eax_61 + 1 u> ecx_46)
                        uint32_t edx_41 = ecx_46 u>> 1
                        int32_t ecx_47
                        
                        if (0x3fffffff - edx_41 u>= ecx_46)
                            ecx_47 = ecx_46 + edx_41
                        else
                            ecx_47 = 0
                        
                        if (ecx_47 u< eax_61 + 1)
                            ecx_47 = eax_61 + 1
                        
                        sub_6b0560(&var_54, ecx_47)
                        ebx_3 = var_4c_1
                        esi_11 = var_50_1
                
                if (esi_11 != 0)
                    top_26 = top_10 - 1
                    unimplemented  {fld st0, dword [ecx+ebp*4]}
                    goto label_5ebc3d
            var_60_3 += 0x18
            result = result_1 + 1
            esi_11 = &esi_11[1]
            var_50_1 = esi_11
            result_1 = result
        while (result s< ebp_6)
    
    int128_t* edi_3 = *(arg1 + 0x5c)
    int128_t* ecx_52 = *(arg1 + 0x60)
    
    if (edi_3 != ecx_52)
        int32_t ebx_4 = 0 s>> 2 << 2
        result = sub_6b49d0(edi_3, ecx_52, ebx_4, eax_4)
        *(arg1 + 0x60) = edi_3 + ebx_4
    
    int32_t ebx_5 = 0
    int32_t var_5c_1 = 0
    
    if (ebp_6 s> 0)
        do
            unimplemented  {fld st0, dword [edx+ebx*4]}
            int32_t eax_71 = *(arg1 + 0x60)
            unimplemented  {fdiv st0, dword [esp+0x20]}
            var_70 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
            unimplemented  {fstp dword [esp+0x14], st0}
            int32_t edx_44
            
            if (&var_70 u< eax_71)
                edx_44 = *(arg1 + 0x5c)
            
            int16_t top_28
            
            if (&var_70 u>= eax_71 || edx_44 u> &var_70)
                int32_t ecx_57 = *(arg1 + 0x64)
                
                if (eax_71 == ecx_57)
                    int32_t edx_47 = *(arg1 + 0x5c)
                    int32_t eax_76 = (eax_71 - edx_47) s>> 2
                    
                    if (eax_76 u> 0x3ffffffe)
                        goto label_5eb986
                    
                    int32_t ecx_59 = (ecx_57 - edx_47) s>> 2
                    
                    if (eax_76 + 1 u> ecx_59)
                        uint32_t edx_49 = ecx_59 u>> 1
                        int32_t ecx_60
                        
                        if (0x3fffffff - edx_49 u>= ecx_59)
                            ecx_60 = ecx_59 + edx_49
                        else
                            ecx_60 = 0
                        
                        if (ecx_60 u< eax_76 + 1)
                            ecx_60 = eax_76 + 1
                        
                        sub_6b0560(arg1 + 0x5c, ecx_60)
                
                result = *(arg1 + 0x60)
                
                if (result != 0)
                    top_28 = top_10 - 1
                    unimplemented  {fld st0, dword [esp+0x14]}
                label_5ebd6a:
                    *result = fconvert.s(unimplemented  {fstp dword [eax], st0})
                    unimplemented  {fstp dword [eax], st0}
                    top_10 = top_28 + 1
            else
                int32_t ecx_53 = *(arg1 + 0x64)
                
                if (eax_71 == ecx_53)
                    int32_t eax_73 = (eax_71 - edx_44) s>> 2
                    
                    if (eax_73 u> 0x3ffffffe)
                        goto label_5eb986
                    
                    int32_t ecx_55 = (ecx_53 - edx_44) s>> 2
                    
                    if (eax_73 + 1 u> ecx_55)
                        uint32_t edx_46 = ecx_55 u>> 1
                        int32_t ecx_56
                        
                        if (0x3fffffff - edx_46 u>= ecx_55)
                            ecx_56 = ecx_55 + edx_46
                        else
                            ecx_56 = 0
                        
                        if (ecx_56 u< eax_73 + 1)
                            ecx_56 = eax_73 + 1
                        
                        sub_6b0560(arg1 + 0x5c, ecx_56)
                        ebx_5 = var_5c_1
                
                result = *(arg1 + 0x60)
                
                if (result != 0)
                    top_28 = top_10 - 1
                    unimplemented  {fld st0, dword [edx+edi*4]}
                    goto label_5ebd6a
            *(arg1 + 0x60) += 4
            ebx_5 += 1
            var_5c_1 = ebx_5
        while (ebx_5 s< ebp_6)
    
    if (var_54 != 0)
        int32_t var_88_14 = var_54
        result = sub_6b4d5b()

var_30 = &common::CStringWrapper::`vftable'{for `IString'}

if (var_18 u>= 0x10)
    int32_t var_88_15 = var_2c.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
