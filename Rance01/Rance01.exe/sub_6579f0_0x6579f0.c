// 函数: sub_6579f0
// 地址: 0x6579f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718b90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
void* var_38 = nullptr
char var_48 = 0
sub_401270(&var_48, 0xe, 0x732b68)
int32_t var_4 = 0
int32_t result
int32_t result_2

if (*(arg1 + 0x68) != 1)
    if (*(arg1 + 0x200) == 0)
        *(arg1 + 0x200) = *(arg1 + 0x204)
    
    var_4.b = 1
    int32_t var_2c
    char eax_7 = sub_405d70(sub_401ec0(arg1 + 0x78, &var_2c, 0, var_38), &var_48)
    var_4.b = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_68_3 = var_2c
        sub_6b4d5b()
    
    int32_t var_4c
    int32_t eax_9
    void* edi_1
    
    if (eax_7 != 0)
        eax_9 = *(arg1 + 0x88)
        edi_1 = var_38
        var_4c = 0x72d656
        var_50 = eax_9
    
    if (eax_7 != 0 && edi_1 s< eax_9)
        while (true)
            char* eax_11 = sub_401ec0(arg1 + 0x78, &var_2c, edi_1, eax_9 - 1)
            
            if (*(eax_11 + 0x14) u>= 0x10)
                eax_11 = *eax_11
            
            int32_t result_1 = sub_6b760f(eax_11, &var_4c, 0xa)
            
            if (var_18 u>= 0x10)
                int32_t var_68_6 = var_2c
                sub_6b4d5b()
            
            if (result_1 != 0)
                *(arg1 + 0x200) = result_1
                
                if (var_34 u>= 0x10)
                    int32_t var_68_7 = var_48.d
                    sub_6b4d5b()
                
                result = result_1
                break
            
            edi_1 += 1
            
            if (edi_1 s>= var_50)
                goto label_657add
            
            eax_9 = var_50
    else
    label_657add:
        result_2 = *(arg1 + 0x200)
        
        if (var_34 u< 0x10)
            result = result_2
        else
            int32_t var_68_4 = var_48.d
            sub_6b4d5b()
            result = result_2
else
    result_2 = *(arg1 + 0x204)
    
    if (var_34 u< 0x10)
        result = result_2
    else
        int32_t var_68_1 = var_48.d
        sub_6b4d5b()
        result = result_2
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
