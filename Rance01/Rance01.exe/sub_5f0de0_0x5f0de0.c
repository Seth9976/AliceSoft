// 函数: sub_5f0de0
// 地址: 0x5f0de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726e20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t var_94 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1 + 0x324
sub_5e9cc0(esi)
*(arg1 + 0x334) = 0
*(arg1 + 0x338) = 0
int32_t* result_3 = nullptr
int32_t var_5c = 0
int32_t var_58 = 0
int32_t var_c_1 = 0
sub_5f1300(&result_3, arg1)
void* var_68 = arg1 + 0x40

if (*(arg1 + 0x310) != 0)
    var_68 = arg1 + 0x190

int32_t* result = result_3
int32_t* result_2 = result

if (result != var_5c)
    void* result_4
    
    do
        int32_t eax_7 = *result_2
        int32_t ecx_2
        ecx_2.b = eax_7 s>= 0xc
        int32_t* esi_2 = (ecx_2 - 1) & eax_7
        int32_t* var_80 = esi_2
        int32_t* eax_8
        int32_t ecx_3
        eax_8, ecx_3 = operator new(0x10)
        void* edx_2 = nullptr
        int32_t* var_7c_1
        int32_t* edi_1
        
        if (eax_8 == 0)
            edi_1 = nullptr
            var_7c_1 = nullptr
        else
            ecx_3 = *(arg1 + 0x33c)
            *eax_8 = 0xffffffff
            eax_8[1] = ecx_3
            eax_8[2] = 0
            eax_8[3] = 0
            edi_1 = eax_8
            var_7c_1 = eax_8
        
        void* eax_9 = *(arg1 + 0x2c)
        void* esi_5
        
        if (eax_9 == 0)
            void* eax_10 = arg1 + 0x10
            
            if (*(arg1 + 0x24) u>= 0x10)
                eax_10 = *eax_10
            
            int32_t* var_98_2 = esi_2
            var_c_1.b = 1
            sub_5e7890(edi_1, sub_4104a0(eax_10))
            var_c_1.b = 0
            char var_38
            int32_t var_24
            
            if (var_24 u>= 0x10)
                int32_t var_98_4 = var_38.d
                sub_6b4d5b()
            
            var_24 = 0xf
            int32_t var_28_1 = 0
            var_38 = 0
            esi_5 = data_797d2c
        else if (eax_9 == 1)
            int32_t ecx_4 = 0
            int32_t i = 0
            
            if (esi_2 s> 0)
                while (i s< (*(arg1 + 0x34) - *(arg1 + 0x30)) s>> 2)
                    ecx_4 += *(*(arg1 + 0x30) + (i << 2))
                    i += 1
                    
                    if (i s>= var_80)
                        break
            
            int32_t eax_12 = 0
            
            if (*result_2 s< (*(arg1 + 0x34) - *(arg1 + 0x30)) s>> 2)
                eax_12 = *(*(arg1 + 0x30) + (var_80 << 2))
            
            int32_t var_40_1 = eax_12
            int32_t var_48 = ecx_4
            int32_t var_44_1 = 0
            int32_t var_3c_1 = 0xffff
            sub_5e7a90(&var_48, edi_1, arg1 + 0x10)
            esi_5 = data_797d2c
        else if (eax_9 != 2)
            esi_5 = data_797d2c
        else
            esi_5 = data_797d2c
            
            if (edi_1[1] != 0)
                *(*(esi_5 + 0x30) + 0x17c) = *(arg1 + 0x2e0)
                
                if (edi_1[1] != 0)
                    edx_2 = *(esi_5 + 0x30)
                    *(edx_2 + 0x180) = *(arg1 + 0x2e4)
            
            if (edi_1[1] != 0)
                ecx_3.b = *(arg1 + 0x2e8)
                edx_2.b = *(arg1 + 0x2ec)
                eax_9.b = *(arg1 + 0x2f0)
                char var_73_1 = edx_2.b
                char var_72_1 = eax_9.b
                char var_71_1 = 0xff
                edx_2 = ecx_3.b.d
                *(*(esi_5 + 0x30) + 0x184) = edx_2
                
                if (edi_1[1] != 0)
                    *(*(esi_5 + 0x30) + 0x18c) = fconvert.s(fconvert.t(*(arg1 + 0x2fc)))
                    
                    if (edi_1[1] != 0)
                        void* ecx_5
                        ecx_5.b = *(arg1 + 0x300)
                        edx_2.b = *(arg1 + 0x304)
                        void* eax_16
                        eax_16.b = *(arg1 + 0x308)
                        char var_6f_1 = edx_2.b
                        char var_6e_1 = eax_16.b
                        char var_6d_1 = 0xff
                        edx_2 = ecx_5.b.d
                        *(*(esi_5 + 0x30) + 0x190) = edx_2
                        
                        if (edi_1[1] != 0)
                            *(*(esi_5 + 0x30) + 0x188) = fconvert.s(fconvert.t(*(arg1 + 0x2f8)))
            
            int32_t** eax_18 = edi_1[1]
            
            if (eax_18 != 0)
                if (*edi_1 == 0xffffffff)
                    int32_t* ecx_7 = *eax_18
                    int32_t* var_98_6 = ecx_7
                    *edi_1 = sub_40d040(*(esi_5 + 0x30) + 0x28c, edx_2, ecx_7)
                
                sub_5f9fe0(*edi_1, var_68 + var_80 * 0x1c)
                esi_5 = data_797d2c
        
        int32_t eax_24
        
        if (edi_1[1] != 0)
            int32_t* eax_25 = *edi_1
            
            if (eax_25 != 0xffffffff)
                void* edi_2 = *(esi_5 + 0x30)
                var_80 = eax_25
                int32_t* var_64
                sub_42e070(edi_2 + 0x294, &var_64, &var_80)
                int32_t* eax_27 = var_64
                void* eax_28
                
                if (eax_27 != *(edi_2 + 0x298))
                    eax_28 = eax_27[4]
                
                if (eax_27 != *(edi_2 + 0x298) && eax_28 != 0)
                    eax_24 = *(eax_28 + 0x14)
                else
                    eax_24 = 0
                
                edi_1 = var_7c_1
            else
                eax_24 = 0
        else
            eax_24 = 0
        
        *(arg1 + 0x334) += eax_24
        int32_t ecx_10 = edi_1[1]
        int32_t var_6c = ecx_10
        int32_t eax_29
        
        if (ecx_10 != 0)
            int32_t* eax_30 = *edi_1
            
            if (eax_30 != 0xffffffff)
                void* edi_3 = *(esi_5 + 0x30)
                var_80 = eax_30
                int32_t* var_50
                sub_42e070(edi_3 + 0x294, &var_50, &var_80)
                int32_t* eax_32 = var_50
                void* eax_33
                
                if (eax_32 != *(edi_3 + 0x298))
                    eax_33 = eax_32[4]
                
                if (eax_32 != *(edi_3 + 0x298) && eax_33 != 0)
                    eax_29 = *(eax_33 + 0x18)
                else
                    eax_29 = 0
                
                edi_1 = var_7c_1
                ecx_10 = var_6c
            else
                eax_29 = 0
        else
            eax_29 = 0
        
        if (*(arg1 + 0x338) s< eax_29)
            int32_t eax_34
            
            if (ecx_10 != 0)
                int32_t eax_35 = *edi_1
                
                if (eax_35 != 0xffffffff)
                    void* edi_4 = *(esi_5 + 0x30)
                    var_6c = eax_35
                    int32_t* var_4c
                    sub_42e070(edi_4 + 0x294, &var_4c, &var_6c)
                    int32_t* eax_37 = var_4c
                    void* eax_38
                    
                    if (eax_37 != *(edi_4 + 0x298))
                        eax_38 = eax_37[4]
                    
                    if (eax_37 != *(edi_4 + 0x298) && eax_38 != 0)
                        eax_34 = *(eax_38 + 0x18)
                    else
                        eax_34 = 0
                    
                    edi_1 = var_7c_1
                else
                    eax_34 = 0
            else
                eax_34 = 0
            
            *(arg1 + 0x338) = eax_34
        
        int32_t eax_39 = *(arg1 + 0x328)
        esi = arg1 + 0x324
        var_80 = edi_1
        int32_t edx_14
        
        if (&var_80 u< eax_39)
            edx_14 = *esi
        
        if (&var_80 u>= eax_39 || edx_14 u> &var_80)
            int32_t ecx_18 = *(esi + 8)
            
            if (eax_39 == ecx_18)
                int32_t edx_18 = *esi
                int32_t eax_45 = (eax_39 - edx_18) s>> 2
                
                if (eax_45 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_20 = (ecx_18 - edx_18) s>> 2
                
                if (eax_45 + 1 u> ecx_20)
                    uint32_t edx_20 = ecx_20 u>> 1
                    int32_t ecx_21
                    
                    if (0x3fffffff - edx_20 u>= ecx_20)
                        ecx_21 = ecx_20 + edx_20
                    else
                        ecx_21 = 0
                    
                    if (ecx_21 u< eax_45 + 1)
                        ecx_21 = eax_45 + 1
                    
                    sub_6b0560(esi, ecx_21)
                    edi_1 = var_7c_1
            
            int32_t** eax_47 = *(esi + 4)
            
            if (eax_47 != 0)
                *eax_47 = edi_1
        else
            int32_t ecx_13 = *(esi + 8)
            
            if (eax_39 == ecx_13)
                int32_t eax_41 = (eax_39 - edx_14) s>> 2
                
                if (eax_41 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_15 = (ecx_13 - edx_14) s>> 2
                
                if (eax_41 + 1 u> ecx_15)
                    uint32_t edx_16 = ecx_15 u>> 1
                    int32_t ecx_16
                    
                    if (0x3fffffff - edx_16 u>= ecx_15)
                        ecx_16 = ecx_15 + edx_16
                    else
                        ecx_16 = 0
                    
                    if (ecx_16 u< eax_41 + 1)
                        ecx_16 = eax_41 + 1
                    
                    esi = arg1 + 0x324
                    sub_6b0560(esi, ecx_16)
            
            int32_t* eax_43 = *(esi + 4)
            
            if (eax_43 != 0)
                *eax_43 = *(*esi + ((&var_80 - edx_14) s>> 2 << 2))
        
        *(esi + 4) += 4
        result_4 = &result_2[1]
        result_2 = result_4
    while (result_4 != var_5c)
    result = result_3

int32_t edx_22 = *(esi + 4) - *esi
*(arg1 + 0x350) = 1
*(arg1 + 0x334) += ((edx_22 s>> 2) - 1) * *(arg1 + 0x31c)

if (result != 0)
    int32_t* result_1 = result
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return result
