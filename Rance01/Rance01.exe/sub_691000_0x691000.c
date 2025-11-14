// 函数: sub_691000
// 地址: 0x691000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718589
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_10
int32_t ebx = arg_10
int32_t var_4 = 0
char* var_4c = arg2
var_54 = 0
int32_t* var_48
sub_426250(&var_48, arg1 + 0x60, arg1 + 0x7c)
int32_t var_4_1 = 1
int32_t eax_7 = sub_695c40(&var_48)
*(arg2 + 0x10) = 0
*(arg2 + 0x14) = 0xf
*arg2 = 0
sub_401270(arg2, nullptr, 0x72cf97)
int32_t arg_c
int32_t eax_8 = arg_c
var_54 = 1
int32_t var_34

if (eax_8 != ebx && ebx s<= eax_7)
    int32_t* ecx_1 = &arg_10
    
    if (ebx s>= eax_8)
        ecx_1 = &arg_c
    
    int32_t i_2 = *ecx_1
    int32_t* eax_9 = &arg_10
    
    if (eax_8 s>= ebx)
        eax_9 = &arg_c
    
    int32_t esi_1 = *eax_9
    int32_t eax_10 = 0
    int32_t i_4 = 0
    
    if (i_2 s> 0)
        i_4 = i_2
        int32_t i
        
        do
            int32_t* edx_1 = var_48
            
            if (var_34 u< 0x10)
                edx_1 = &var_48
            
            int32_t** edx_2
            
            if (*(edx_1 + eax_10) u>= 0x81)
                edx_2 = var_48
                
                if (var_34 u< 0x10)
                    edx_2 = &var_48
            
            int32_t* edx_3
            
            if (*(edx_1 + eax_10) u< 0x81 || *(edx_2 + eax_10) u> 0x9f)
                edx_3 = var_48
                
                if (var_34 u< 0x10)
                    edx_3 = &var_48
            
            if ((*(edx_1 + eax_10) u>= 0x81 && *(edx_2 + eax_10) u<= 0x9f)
                    || *(edx_3 + eax_10) u>= 0xe0)
                eax_10 += 1
            
            eax_10 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t edx_4 = eax_10
    
    if (i_4 s< esi_1)
        int32_t i_3 = esi_1 - i_4
        int32_t i_1
        
        do
            int32_t** ebx_2 = var_48
            int32_t** ecx_2 = ebx_2
            
            if (var_34 u< 0x10)
                ecx_2 = &var_48
            
            int32_t** ecx_3
            
            if (*(ecx_2 + eax_10) u>= 0x81)
                ecx_3 = ebx_2
                
                if (var_34 u< 0x10)
                    ecx_3 = &var_48
            
            int32_t** ecx_4
            
            if (*(ecx_2 + eax_10) u< 0x81 || *(ecx_3 + eax_10) u> 0x9f)
                ecx_4 = ebx_2
                
                if (var_34 u< 0x10)
                    ecx_4 = &var_48
            
            if ((*(ecx_2 + eax_10) u>= 0x81 && *(ecx_3 + eax_10) u<= 0x9f)
                    || *(ecx_4 + eax_10) u>= 0xe0)
                eax_10 += 1
            
            eax_10 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int32_t var_2c
    char* eax_12 = sub_401ec0(&var_48, &var_2c, edx_4, eax_10 - edx_4)
    
    if (arg2 != eax_12)
        if (*(arg2 + 0x14) u>= 0x10)
            int32_t var_6c_2 = *arg2
            sub_6b4d5b()
        
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        
        if (*(eax_12 + 0x14) u>= 0x10)
            *arg2 = *eax_12
            *eax_12 = 0
        else
            sub_6b49d0(arg2, eax_12, *(eax_12 + 0x10) + 1, eax_4)
        
        *(arg2 + 0x10) = *(eax_12 + 0x10)
        *(arg2 + 0x14) = *(eax_12 + 0x14)
        *(eax_12 + 0x14) = 0xf
        *(eax_12 + 0x10) = 0
        *eax_12 = 0
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_6c_4 = var_2c
        sub_6b4d5b()

if (var_34 u>= 0x10)
    int32_t* var_6c_5 = var_48
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return arg2
