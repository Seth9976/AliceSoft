// 函数: sub_695630
// 地址: 0x695630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7277c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_c
int32_t edi = arg_c
int32_t arg_8
int32_t ebp = arg_8
struct _EXCEPTION_REGISTRATION_RECORD** result = arg2

if (arg1 != 0)
    int32_t* esi_1 = &result[0xd]
    int32_t var_2c
    sub_426250(&var_2c, esi_1, &result[0x14])
    int32_t var_4 = 0
    int32_t var_1c
    int32_t var_5c = var_1c
    int32_t var_48
    int32_t var_34
    
    if (ebp != edi && edi s<= var_1c)
        int32_t* eax_6 = &arg_c
        
        if (edi s>= ebp)
            eax_6 = &arg_8
        
        int32_t var_60 = *eax_6
        int32_t* eax_7 = &arg_c
        
        if (ebp s>= edi)
            eax_7 = &arg_8
        
        int32_t edx_1 = *eax_7
        int32_t ebp_1 = 0
        sub_401270(esi_1, nullptr, 0x72ce57)
        int32_t edi_1 = var_60
        
        if (edi_1 s> 0)
            do
                var_4.b = 1
                sub_402000(esi_1, sub_401ec0(&var_2c, &var_48, ebp_1, 1), 0, 0xffffffff)
                var_4.b = 0
                
                if (var_34 u>= 0x10)
                    int32_t var_7c_2 = var_48
                    sub_6b4d5b()
                
                ebp_1 += 1
            while (ebp_1 s< edi_1)
        
        int32_t ebp_2 = edx_1
        sub_401270(&result[0x14], nullptr, 0x72ce75)
        int32_t edi_2 = ebp_2
        
        if (edi_2 s< var_5c)
            do
                var_4.b = 2
                sub_402000(&result[0x14], sub_401ec0(&var_2c, &var_48, ebp_2, 1), 0, 0xffffffff)
                var_4.b = 0
                
                if (var_34 u>= 0x10)
                    int32_t var_7c_3 = var_48
                    sub_6b4d5b()
                
                ebp_2 += 1
            while (ebp_2 s< var_5c)
        
        int32_t eax_11 = var_60
        int32_t* eax_12 = sub_401ec0(&var_2c, &var_48, eax_11, edi_2 - eax_11)
        var_4.b = 3
        var_60 = 0
        var_5c = 0
        sub_6951a0(&var_60, &var_5c, arg1 + 0x28, eax_12)
        var_4.b = 0
        
        if (var_34 u>= 0x10)
            int32_t var_7c_6 = var_48
            sub_6b4d5b()
        
        result[0x1b] += var_60
    
    int32_t* eax_15 = sub_426250(&var_48, esi_1, &result[0x14])
    var_4.b = 4
    int32_t edi_4 = eax_15[4]
    int32_t* ecx_7
    
    if (eax_15[5] u< 0x10)
        ecx_7 = eax_15
    else
        ecx_7 = *eax_15
    
    int32_t ebp_3 = *(arg1 + 0x68)
    int32_t eax_16 = ebp_3
    
    if (ebp_3 u>= edi_4)
        eax_16 = edi_4
    
    int32_t* edx_5
    
    if (*(arg1 + 0x6c) u< 0x10)
        edx_5 = arg1 + 0x58
    else
        edx_5 = *(arg1 + 0x58)
    
    if (sub_402320(eax_16, edx_5, ecx_7, eax_16) != 0 || ebp_3 u< edi_4)
    label_69586c:
        sub_401180(arg1 + 0x58, 0xffffffff, eax_15, 0)
        result = sub_68d800(arg1, *(arg1 + 0x74))
        *(arg1 + 0xa0) = 1
    else
        result.b = ebp_3 != edi_4
        
        if (result != 0)
            goto label_69586c
    
    if (var_34 u>= 0x10)
        int32_t var_7c_10 = var_48
        result = sub_6b4d5b()
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_7c_11 = var_2c
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
