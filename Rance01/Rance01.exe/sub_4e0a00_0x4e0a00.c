// 函数: sub_4e0a00
// 地址: 0x4e0a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 1, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x25])
int32_t var_4 = 0
char* ecx = var_2c.d

if (var_18 u< 0x10)
    ecx = &var_2c

char result

if (sub_51bc80(ecx, arg1) != 0)
    result = 1
else
    char* eax_5 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_5 = &var_2c
    
    char* var_4c_1 = eax_5
    sub_4e4340(0x75561c)
    result = 0

int32_t* ebx
ebx.b = result == 0
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_4c_2 = var_2c.d
    sub_6b4d5b()

int32_t* ebp_3

if (ebx.b == 0)
    int128_t* ecx_1 = *(arg2 + 0x138)
    int128_t* esi_2 = *(arg2 + 0x134)
    
    if (esi_2 != ecx_1)
        int32_t ebp_1 = 0 s>> 2 << 2
        sub_6b49d0(esi_2, ecx_1, ebp_1, eax_4)
        *(arg2 + 0x138) = ebp_1 + esi_2
    
    ebp_3 = arg1
    result = sub_51bea0()

if (ebx.b != 0 || result == 0)
label_4e0c09:
    result = 0
else
    while (true)
        int32_t eax_10 = *(arg2 + 0x138)
        int32_t edx_1
        
        if (&var_34 u< eax_10)
            edx_1 = *(arg2 + 0x134)
        
        if (&var_34 u>= eax_10 || edx_1 u> &var_34)
            int32_t ecx_8 = *(arg2 + 0x13c)
            
            if (eax_10 == ecx_8)
                int32_t edx_5 = *(arg2 + 0x134)
                int32_t eax_16 = (eax_10 - edx_5) s>> 2
                
                if (eax_16 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_10 = (ecx_8 - edx_5) s>> 2
                
                if (eax_16 + 1 u> ecx_10)
                    uint32_t edx_7 = ecx_10 u>> 1
                    int32_t ecx_11
                    
                    if (0x3fffffff - edx_7 u>= ecx_10)
                        ecx_11 = ecx_10 + edx_7
                    else
                        ecx_11 = 0
                    
                    if (ecx_11 u< eax_16 + 1)
                        ecx_11 = eax_16 + 1
                    
                    sub_6b0560(arg2 + 0x134, ecx_11)
            
            int32_t* eax_18 = *(arg2 + 0x138)
            
            if (eax_18 != 0)
                *eax_18 = var_34
        else
            int32_t ecx_3 = *(arg2 + 0x13c)
            
            if (eax_10 == ecx_3)
                int32_t eax_12 = (eax_10 - edx_1) s>> 2
                
                if (eax_12 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_5 = (ecx_3 - edx_1) s>> 2
                
                if (eax_12 + 1 u> ecx_5)
                    uint32_t edx_3 = ecx_5 u>> 1
                    int32_t ecx_6
                    
                    if (0x3fffffff - edx_3 u>= ecx_5)
                        ecx_6 = ecx_5 + edx_3
                    else
                        ecx_6 = 0
                    
                    if (ecx_6 u< eax_12 + 1)
                        ecx_6 = eax_12 + 1
                    
                    sub_6b0560(arg2 + 0x134, ecx_6)
            
            int32_t* eax_14 = *(arg2 + 0x138)
            
            if (eax_14 != 0)
                *eax_14 = *(*(arg2 + 0x134) + ((&var_34 - edx_1) s>> 2 << 2))
            
            ebp_3 = arg1
        
        *(arg2 + 0x138) += 4
        
        if (sub_51bc80(&(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x26], ebp_3) == 0)
            result = 1
            break
        
        if (sub_51bea0() == 0)
            goto label_4e0c09

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
