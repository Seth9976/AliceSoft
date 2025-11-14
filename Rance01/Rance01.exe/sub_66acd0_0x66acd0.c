// 函数: sub_66acd0
// 地址: 0x66acd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c200
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0
var_68 = arg1[4]
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t* eax_6 = sub_401270(&var_48, nullptr, 0x72d4fb)
int32_t var_4 = 0

if (var_68 s> 0)
    int32_t edi_2
    
    do
        int32_t ecx_1 = arg1[5]
        char* eax_7
        
        if (ecx_1 u< 0x10)
            eax_7 = arg1
        else
            eax_7 = *arg1
        
        char* eax_8
        
        if (eax_7[i] u>= 0x81)
            if (ecx_1 u< 0x10)
                eax_8 = arg1
            else
                eax_8 = *arg1
        
        if (eax_7[i] u>= 0x81 && eax_8[i] u<= 0x9f)
            if (i + 1 s>= var_68)
                goto label_66addb
            
            goto label_66ad90
        
        char* eax_9
        
        if (ecx_1 u< 0x10)
            eax_9 = arg1
        else
            eax_9 = *arg1
        
        if (eax_9[i] u< 0xe0 || i + 1 s>= var_68)
        label_66addb:
            int32_t* eax_13
            
            if (ecx_1 u< 0x10)
                eax_13 = arg1
            else
                eax_13 = *arg1
            
            if (*(eax_13 + i) != 0x22)
                int32_t* eax_18
                
                if (ecx_1 u< 0x10)
                    eax_18 = arg1
                else
                    eax_18 = *arg1
                
                if (*(eax_18 + i) != 0x2e)
                    int32_t* eax_19
                    
                    if (ecx_1 u< 0x10)
                        eax_19 = arg1
                    else
                        eax_19 = *arg1
                    
                    eax_19.b = *(eax_19 + i)
                    eax_6 = sub_401f60(&var_48, eax_19.b)
                else
                    sub_405220(&var_48, arg2)
                    eax_6 = var_48.d
                    var_38 = 0
                    
                    if (var_34 u< 0x10)
                        eax_6 = &var_48
                    
                    *eax_6 = 0
                
                edi_2 = var_68
            else
                int32_t* eax_14
                
                if (ecx_1 u< 0x10)
                    eax_14 = arg1
                else
                    eax_14 = *arg1
                
                eax_14.b = *(eax_14 + i)
                eax_6 = sub_401f60(&var_48, eax_14.b)
                edi_2 = var_68
                
                for (i += 1; i s< edi_2; i += 1)
                    int32_t* eax_15
                    
                    if (arg1[5] u< 0x10)
                        eax_15 = arg1
                    else
                        eax_15 = *arg1
                    
                    sub_401f60(&var_48, *(eax_15 + i))
                    eax_6 = arg1[5]
                    int32_t* ecx_4
                    
                    if (eax_6 u< 0x10)
                        ecx_4 = arg1
                    else
                        ecx_4 = *arg1
                    
                    if (*(ecx_4 + i) != 0x5c)
                        if (eax_6 u< 0x10)
                            eax_6 = arg1
                        else
                            eax_6 = *arg1
                        
                        if (*(eax_6 + i) == 0x22)
                            break
                    else
                        i += 1
                        
                        if (i s< edi_2)
                            int32_t* eax_17
                            
                            if (eax_6 u< 0x10)
                                eax_17 = arg1
                            else
                                eax_17 = *arg1
                            
                            ecx_4.b = *(eax_17 + i)
                            eax_6 = sub_401f60(&var_48, ecx_4.b)
        else
        label_66ad90:
            char* eax_10
            
            if (ecx_1 u< 0x10)
                eax_10 = arg1
            else
                eax_10 = *arg1
            
            sub_401f60(&var_48, eax_10[i])
            int32_t* eax_12
            
            if (arg1[5] u< 0x10)
                eax_12 = arg1
            else
                eax_12 = *arg1
            
            eax_6 = sub_401f60(&var_48, *(eax_12 + i + 1))
            i += 1
            edi_2 = var_68
        
        i += 1
    while (i s< edi_2)

int32_t* edx_4 = var_48.d

if (var_34 u< 0x10)
    edx_4 = &var_48

int32_t eax_20 = sub_402320(eax_6, edx_4, 0x72d507, 0)
bool cond:1 = eax_20 == 0

if (eax_20 == 0)
    eax_20.b = var_38 != eax_20
    cond:1 = eax_20 == 0

eax_20.b = cond:1
eax_20.b = eax_20.b == 0

if (eax_20.b != 0)
    sub_405220(&var_48, arg2)

int128_t* result = (arg2[1] - *arg2) s/ 0x1c

if (result s> 0)
    int32_t ebp_1 = 0
    int128_t* var_64_1 = result
    int128_t* i_1
    
    do
        int32_t var_2c
        result = sub_66a040(&var_2c, *arg2 + ebp_1)
        int128_t* result_1 = result
        void* esi_8 = *arg2 + ebp_1
        
        if (esi_8 != result_1)
            if (*(esi_8 + 0x14) u>= 0x10)
                int32_t var_80_8 = *esi_8
                sub_6b4d5b()
            
            *(esi_8 + 0x14) = 0xf
            *(esi_8 + 0x10) = 0
            *esi_8 = 0
            
            if (*(result_1 + 0x14) u>= 0x10)
                result = *result_1
                *esi_8 = result
                *result_1 = 0
            else
                result = sub_6b49d0(esi_8, result_1, result_1[1].d + 1, eax_4)
            
            *(esi_8 + 0x10) = result_1[1].d
            *(esi_8 + 0x14) = *(result_1 + 0x14)
            *(result_1 + 0x14) = 0xf
            result_1[1].d = 0
            *result_1 = 0
        
        var_4.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_80_10 = var_2c
            result = sub_6b4d5b()
        
        ebp_1 += 0x1c
        i_1 = var_64_1
        var_64_1 -= 1
    while (i_1 != 1)

if (var_34 u>= 0x10)
    int32_t var_80_11 = var_48.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
