// 函数: sub_5d7a00
// 地址: 0x5d7a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7199a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = nullptr
int32_t var_80 = *(arg2 + 8)
int32_t var_84 = *(arg2 + 4)
int32_t* var_6c = nullptr
int32_t* var_68 = nullptr
int32_t var_64 = 0
int32_t var_c_1 = 0
int32_t* edi_2

while (true)
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38 = 0
    sub_401270(&var_38, 0x16, 0x736900)
    var_c_1.b = 1
    int32_t var_40_1 = 0xf
    int32_t var_44_1 = 0
    char var_54 = 0
    sub_401270(&var_54, 0x16, 0x736918)
    var_c_1.b = 2
    int32_t eax_8 = sub_5d5670(*(arg1 + 0x10), &var_38, &var_54, var_84)
    
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
    
    void* esi_3 = arg1
    void** ecx_3 = *(esi_3 + 0x28)
    void** eax_9 = ecx_3[1]
    int32_t edi_1
    
    if (*(eax_9 + 0x15) != 0)
        edi_1 = var_84
    else
        do
            edi_1 = var_84
            
            if (eax_9[3] s>= edi_1)
                ecx_3 = eax_9
                eax_9 = *eax_9
            else
                eax_9 = eax_9[2]
        while (*(eax_9 + 0x15) == 0)
    
    void** eax_10 = *(esi_3 + 0x28)
    void** var_7c = ecx_3
    void*** eax_11
    
    if (ecx_3 == eax_10 || edi_1 s< ecx_3[3])
        void** var_5c = eax_10
        eax_11 = &var_5c
    else
        eax_11 = &var_7c
    
    void** eax_12 = *eax_11
    int32_t ecx_4
    
    if (eax_12 != *(esi_3 + 0x28))
        ecx_4 = *(eax_12[4] + 8)
    else
        ecx_4 = 0x64
    
    void** edx_3 = *(esi_3 + 0x28)
    void** eax_14 = edx_3[1]
    
    while (*(eax_14 + 0x15) == 0)
        if (eax_14[3] s>= edi_1)
            edx_3 = eax_14
            eax_14 = *eax_14
        else
            eax_14 = eax_14[2]
    
    void** eax_15 = *(esi_3 + 0x28)
    var_7c = edx_3
    void*** eax_16
    
    if (edx_3 == eax_15 || edi_1 s< edx_3[3])
        void** var_58 = eax_15
        eax_16 = &var_58
    else
        eax_16 = &var_7c
    
    void** eax_17 = *eax_16
    
    if (eax_17 != *(esi_3 + 0x28) && *(eax_17[4] + 5) != 0)
        ecx_4 = 0
    
    edi_2 = var_6c
    var_80 = ecx_4 * var_80 s/ 0x64
    int32_t* eax_22 = edi_2
    void** var_78
    void** var_74
    
    if (edi_2 != ebx)
        do
            if (var_84 == *eax_22)
                void** ecx_7 = *(esi_3 + 0x28)
                void** eax_23 = ecx_7[1]
                int32_t esi_4 = *(esi_3 + 0x38)
                
                while (*(eax_23 + 0x15) == 0)
                    if (eax_23[3] s>= esi_4)
                        ecx_7 = eax_23
                        eax_23 = *eax_23
                    else
                        eax_23 = eax_23[2]
                
                void** eax_24 = *(esi_3 + 0x28)
                var_7c = ecx_7
                void*** eax_25
                
                if (ecx_7 == eax_24 || esi_4 s< ecx_7[3])
                    var_74 = eax_24
                    eax_25 = &var_74
                else
                    eax_25 = &var_7c
                
                void** eax_26 = *eax_25
                int32_t edx_8
                
                if (eax_26 != *(esi_3 + 0x28))
                    edx_8 = *(eax_26[4] + 8)
                else
                    edx_8 = 0x64
                
                void** ecx_8 = *(arg1 + 0x28)
                void** eax_28 = ecx_8[1]
                
                while (*(eax_28 + 0x15) == 0)
                    if (eax_28[3] s>= esi_4)
                        ecx_8 = eax_28
                        eax_28 = *eax_28
                    else
                        eax_28 = eax_28[2]
                
                var_7c = ecx_8
                void*** eax_30
                
                if (ecx_8 == *(arg1 + 0x28) || esi_4 s< ecx_8[3])
                    var_78 = *(arg1 + 0x28)
                    eax_30 = &var_78
                else
                    eax_30 = &var_7c
                
                void** eax_32 = *eax_30
                
                if (eax_32 != *(arg1 + 0x28) && *(eax_32[4] + 5) != 0)
                    edx_8 = 0
                
                esi_3 = arg1
                var_80 = edx_8 * var_80 s/ 0x64
                break
            
            eax_22 = &eax_22[1]
        while (eax_22 != ebx)
    
    if (var_84 == *(esi_3 + 0x38))
        if (eax_8 != 0xffffffff)
            break
    else if (eax_8 != 0xffffffff)
        if (&var_84 u>= ebx || edi_2 u> &var_84)
            if (ebx == var_64)
                int32_t eax_41 = (ebx - edi_2) s>> 2
                
                if (eax_41 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_22 = (var_64 - edi_2) s>> 2
                
                if (eax_41 + 1 u> ecx_22)
                    uint32_t edx_19 = ecx_22 u>> 1
                    int32_t ecx_23
                    
                    if (0x3fffffff - edx_19 u>= ecx_22)
                        ecx_23 = ecx_22 + edx_19
                    else
                        ecx_23 = 0
                    
                    if (ecx_23 u< eax_41 + 1)
                        ecx_23 = eax_41 + 1
                    
                    sub_6b0560(&var_6c, ecx_23)
                    ebx = var_68
            
            if (ebx != 0)
                *ebx = var_84
        else
            int32_t* edx_14 = var_6c
            int32_t edi_4 = (&var_84 - edx_14) s>> 2
            
            if (ebx == var_64)
                int32_t eax_37 = (ebx - edx_14) s>> 2
                
                if (eax_37 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_17 = (var_64 - edx_14) s>> 2
                
                if (eax_37 + 1 u> ecx_17)
                    uint32_t edx_16 = ecx_17 u>> 1
                    int32_t ecx_18
                    
                    if (0x3fffffff - edx_16 u>= ecx_17)
                        ecx_18 = ecx_17 + edx_16
                    else
                        ecx_18 = 0
                    
                    if (ecx_18 u< eax_37 + 1)
                        ecx_18 = eax_37 + 1
                    
                    sub_6b0560(&var_6c, ecx_18)
                    ebx = var_68
                    edx_14 = var_6c
            
            if (ebx != 0)
                *ebx = edx_14[edi_4]
                ebx = &ebx[1]
                var_68 = ebx
                var_84 = eax_8
                continue
        
        ebx = &ebx[1]
        var_68 = ebx
        var_84 = eax_8
        continue
    
    void** ecx_25 = *(arg1 + 0x28)
    int32_t esi_9 = *(arg1 + 0x38)
    void** eax_45 = ecx_25[1]
    
    while (*(eax_45 + 0x15) == 0)
        if (eax_45[3] s>= esi_9)
            ecx_25 = eax_45
            eax_45 = *eax_45
        else
            eax_45 = eax_45[2]
    
    void** ebx_1 = *(arg1 + 0x28)
    var_78 = ecx_25
    void*** eax_46
    
    if (ecx_25 == ebx_1 || esi_9 s< ecx_25[3])
        var_74 = ebx_1
        eax_46 = &var_74
    else
        eax_46 = &var_78
    
    void** eax_47 = *eax_46
    int32_t edx_21
    
    if (eax_47 != ebx_1)
        edx_21 = *(eax_47[4] + 8)
    else
        edx_21 = 0x64
    
    void** ecx_26 = *(arg1 + 0x28)
    void** eax_49 = ecx_26[1]
    
    while (*(eax_49 + 0x15) == 0)
        if (eax_49[3] s>= esi_9)
            ecx_26 = eax_49
            eax_49 = *eax_49
        else
            eax_49 = eax_49[2]
    
    var_78 = ecx_26
    void*** eax_50
    
    if (ecx_26 == ebx_1 || esi_9 s< ecx_26[3])
        var_74 = ebx_1
        eax_50 = &var_74
    else
        eax_50 = &var_78
    
    void** eax_51 = *eax_50
    
    if (eax_51 != ebx_1 && *(eax_51[4] + 5) != 0)
        edx_21 = 0
    
    ebx = var_68
    edi_2 = var_6c
    var_80 = edx_21 * var_80 s/ 0x64
    break

if (edi_2 != ebx)
    sub_6b49d0(edi_2, ebx, nullptr, eax_4)

int32_t eax_56
int32_t edx_26
edx_26:eax_56 = muls.dp.d(0x51eb851f, *(arg2 + 0xc) * var_80)
int32_t edx_27 = edx_26 s>> 5
int32_t result = (edx_27 u>> 0x1f) + edx_27

if (*(arg1 + 0x35) == 0 && *(arg1 + 0x36) == 0)
    result = 0

if (edi_2 != 0)
    int32_t* var_a0_6 = edi_2
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return result
