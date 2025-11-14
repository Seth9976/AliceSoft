// 函数: sub_5d8b00
// 地址: 0x5d8b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_719958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = nullptr
int32_t result

if (arg2 != 0)
    int32_t var_80_1 = *(arg2 + 8)
    void** var_84 = *(arg2 + 4)
    int32_t* var_70 = nullptr
    int32_t* var_6c_1 = nullptr
    int32_t var_68_1 = 0
    int32_t var_c_1 = 0
    int32_t* edi_2
    
    while (true)
        int32_t var_24_1 = 0xf
        int32_t var_28_1 = 0
        char var_38 = 0
        sub_401270(&var_38, 0x16, 0x7368d0)
        var_c_1.b = 1
        int32_t var_40_1 = 0xf
        int32_t var_44_1 = 0
        char var_54 = 0
        sub_401270(&var_54, 0x16, 0x7368e8)
        var_c_1.b = 2
        void** eax_8 = sub_5d5670(*(arg1 + 0x14), &var_38, &var_54, var_84)
        
        if (var_40_1 u>= 0x10)
            int32_t var_a0_2 = var_54.d
            sub_6b4d5b()
        
        var_c_1.b = 0
        int32_t var_40_2 = 0xf
        int32_t var_44_2 = 0
        var_54 = 0
        
        if (var_24_1 u>= 0x10)
            int32_t var_a0_3 = var_38.d
            sub_6b4d5b()
        
        void** var_7c = var_84
        int32_t* var_5c
        sub_42e070(arg1 + 0x28, &var_5c, &var_7c)
        int32_t* eax_11 = var_5c
        int32_t esi_4
        
        if (eax_11 != *(arg1 + 0x2c))
            esi_4 = *(eax_11[4] + 8)
        else
            esi_4 = 0x64
        
        var_7c = var_84
        int32_t* var_58
        sub_42e070(arg1 + 0x28, &var_58, &var_7c)
        int32_t* eax_14 = var_58
        
        if (eax_14 != *(arg1 + 0x2c) && *(eax_14[4] + 5) != 0)
            esi_4 = 0
        
        edi_2 = var_70
        var_80_1 = esi_4 * var_80_1 s/ 0x64
        int32_t* eax_17 = edi_2
        void** var_78
        void** var_74
        
        if (edi_2 != ebx)
            do
                if (var_84 == *eax_17)
                    void** ecx_8 = *(arg1 + 0x2c)
                    int32_t esi_6 = *(arg1 + 0x3c)
                    void** eax_19 = ecx_8[1]
                    
                    while (*(eax_19 + 0x15) == 0)
                        if (eax_19[3] s>= esi_6)
                            ecx_8 = eax_19
                            eax_19 = *eax_19
                        else
                            eax_19 = eax_19[2]
                    
                    void** edi_3 = *(arg1 + 0x2c)
                    var_7c = ecx_8
                    void*** eax_20
                    
                    if (ecx_8 == edi_3 || esi_6 s< ecx_8[3])
                        var_74 = edi_3
                        eax_20 = &var_74
                    else
                        eax_20 = &var_7c
                    
                    void** eax_21 = *eax_20
                    int32_t edx_10
                    
                    if (eax_21 != edi_3)
                        edx_10 = *(eax_21[4] + 8)
                    else
                        edx_10 = 0x64
                    
                    void** ecx_10 = *(arg1 + 0x2c)
                    void** eax_23 = ecx_10[1]
                    
                    while (*(eax_23 + 0x15) == 0)
                        if (eax_23[3] s>= esi_6)
                            ecx_10 = eax_23
                            eax_23 = *eax_23
                        else
                            eax_23 = eax_23[2]
                    
                    var_7c = ecx_10
                    void*** eax_24
                    
                    if (ecx_10 == edi_3 || esi_6 s< ecx_10[3])
                        var_78 = edi_3
                        eax_24 = &var_78
                    else
                        eax_24 = &var_7c
                    
                    void** eax_25 = *eax_24
                    
                    if (eax_25 != *(arg1 + 0x2c) && *(eax_25[4] + 5) != 0)
                        edx_10 = 0
                    
                    edi_2 = var_70
                    var_80_1 = edx_10 * var_80_1 s/ 0x64
                    break
                
                eax_17 = &eax_17[1]
            while (eax_17 != ebx)
        
        if (var_84 == *(arg1 + 0x3c))
            if (eax_8 != 0xffffffff)
                break
        else if (eax_8 != 0xffffffff)
            if (&var_84 u>= ebx || edi_2 u> &var_84)
                if (ebx == var_68_1)
                    int32_t eax_36 = (ebx - edi_2) s>> 2
                    
                    if (eax_36 u> 0x3ffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t ecx_22 = (var_68_1 - edi_2) s>> 2
                    
                    if (eax_36 + 1 u> ecx_22)
                        uint32_t edx_20 = ecx_22 u>> 1
                        int32_t ecx_23
                        
                        if (0x3fffffff - edx_20 u>= ecx_22)
                            ecx_23 = ecx_22 + edx_20
                        else
                            ecx_23 = 0
                        
                        if (ecx_23 u< eax_36 + 1)
                            ecx_23 = eax_36 + 1
                        
                        sub_6b0560(&var_70, ecx_23)
                        ebx = var_6c_1
                
                if (ebx != 0)
                    *ebx = var_84
            else
                int32_t* edx_15 = var_70
                int32_t edi_5 = (&var_84 - edx_15) s>> 2
                
                if (ebx == var_68_1)
                    int32_t eax_31 = (ebx - edx_15) s>> 2
                    
                    if (eax_31 u> 0x3ffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t ecx_18 = (var_68_1 - edx_15) s>> 2
                    
                    if (eax_31 + 1 u> ecx_18)
                        uint32_t edx_17 = ecx_18 u>> 1
                        int32_t ecx_19
                        
                        if (0x3fffffff - edx_17 u>= ecx_18)
                            ecx_19 = ecx_18 + edx_17
                        else
                            ecx_19 = 0
                        
                        if (ecx_19 u< eax_31 + 1)
                            ecx_19 = eax_31 + 1
                        
                        sub_6b0560(&var_70, ecx_19)
                        ebx = var_6c_1
                        edx_15 = var_70
                
                if (ebx != 0)
                    *ebx = edx_15[edi_5]
                    ebx = &ebx[1]
                    var_6c_1 = ebx
                    var_84 = eax_8
                    continue
            
            ebx = &ebx[1]
            var_6c_1 = ebx
            var_84 = eax_8
            continue
        
        void** ecx_25 = *(arg1 + 0x2c)
        int32_t esi_11 = *(arg1 + 0x3c)
        void** eax_39 = ecx_25[1]
        
        while (*(eax_39 + 0x15) == 0)
            if (eax_39[3] s>= esi_11)
                ecx_25 = eax_39
                eax_39 = *eax_39
            else
                eax_39 = eax_39[2]
        
        void** ebx_1 = *(arg1 + 0x2c)
        var_78 = ecx_25
        void*** eax_40
        
        if (ecx_25 == ebx_1 || esi_11 s< ecx_25[3])
            var_74 = ebx_1
            eax_40 = &var_74
        else
            eax_40 = &var_78
        
        void** eax_41 = *eax_40
        int32_t edx_22
        
        if (eax_41 != ebx_1)
            edx_22 = *(eax_41[4] + 8)
        else
            edx_22 = 0x64
        
        void** ecx_26 = *(arg1 + 0x2c)
        void** eax_44 = ecx_26[1]
        
        while (*(eax_44 + 0x15) == 0)
            if (eax_44[3] s>= esi_11)
                ecx_26 = eax_44
                eax_44 = *eax_44
            else
                eax_44 = eax_44[2]
        
        var_78 = ecx_26
        void*** eax_45
        
        if (ecx_26 == ebx_1 || esi_11 s< ecx_26[3])
            var_74 = ebx_1
            eax_45 = &var_74
        else
            eax_45 = &var_78
        
        void** eax_46 = *eax_45
        
        if (eax_46 != ebx_1 && *(eax_46[4] + 5) != 0)
            edx_22 = 0
        
        ebx = var_6c_1
        edi_2 = var_70
        var_80_1 = edx_22 * var_80_1 s/ 0x64
        break
    
    if (edi_2 != ebx)
        sub_6b49d0(edi_2, ebx, nullptr, eax_4)
    
    int32_t eax_51
    int32_t edx_26
    edx_26:eax_51 = muls.dp.d(0x51eb851f, *(arg2 + 0xc) * var_80_1)
    int32_t edx_27 = edx_26 s>> 5
    int32_t result_1 = (edx_27 u>> 0x1f) + edx_27
    
    if (*(arg1 + 0x39) == 0 && *(arg1 + 0x3a) == 0)
        result_1 = 0
    
    if (edi_2 != 0)
        int32_t* var_a0_8 = edi_2
        sub_6b4d5b()
    
    result = result_1
else
    result = 0x64

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return result
