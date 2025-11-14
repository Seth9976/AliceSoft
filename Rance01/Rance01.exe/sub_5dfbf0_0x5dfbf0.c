// 函数: sub_5dfbf0
// 地址: 0x5dfbf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_725e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0x50) == 0
*(arg1 + 0x78) = arg2
char result

if (cond:0)
    result = 1
else if (arg2 == 0)
    if (sub_5e7b80(arg1 + 0x64, arg1 + 0x40, *(arg1 + 0x5c), 0, 0) == 0)
        result = 0
    else
        result = 1
        *(arg1 + 0x90) = 1
else
    int32_t var_38
    sub_426250(&var_38, arg1 + 0x20, arg1 + 0x40)
    int32_t var_c_1 = 0
    
    if (sub_5fa1a0(&var_38) != 0)
        int32_t esi_2 = sub_5fa250(&var_38) * *(arg1 + 0x74)
        int32_t edi_2 = sub_5fa300(&var_38) * *(arg1 + 0x74)
        int32_t var_28
        
        if (sub_5e7890(arg1 + 0x64, &var_38) == 0)
            sub_401110(&var_38)
            result = 0
        else if (var_28 == 0)
        label_5dfcdd:
            
            if (*(arg1 + 0x68) != 0)
                int32_t* ecx_3 = *(arg1 + 0x64)
                
                if (ecx_3 != 0xffffffff)
                    sub_409460(ecx_3, 0, 0)
            
            sub_401110(&var_38)
            result = 1
            *(arg1 + 0x90) = 1
        else
            if (sub_5e7d90(edi_2, arg1 + 0x64, esi_2) != 0)
                goto label_5dfcdd
            
            sub_401110(&var_38)
            result = 0
    else
        int32_t var_24
        
        if (var_24 u>= 0x10)
            int32_t var_50_3 = var_38
            sub_6b4d5b()
        
        result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
