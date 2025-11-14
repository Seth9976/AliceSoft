// 函数: sub_4e1480
// 地址: 0x4e1480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720250
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
sub_401270(&var_64, 1, 0x755480)
int32_t var_4 = 0
char* ecx = var_64.d

if (var_50 u< 0x10)
    ecx = &var_64

char result

if (sub_51bc80(ecx, arg1) != 0)
    result = 1
else
    char* eax_6 = var_64.d
    
    if (var_50 u< 0x10)
        eax_6 = &var_64
    
    char* var_88_1 = eax_6
    sub_4e4340(0x75561c)
    result = 0

bool var_6d = result == 0
int32_t var_4_1 = 0xffffffff

if (var_50 u>= 0x10)
    int32_t var_88_2 = var_64.d
    sub_6b4d5b()

if (var_6d != 0)
    result = 0
else
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    int32_t var_4_2 = 1
    void var_68
    
    if (sub_51b970(&var_48, &var_68) != 0)
        if (sub_402680(0x755484, &var_48) == 0)
            if (sub_402680(0x755490, &var_48) == 0)
                sub_401110(&var_48)
                result = 0
            else
                *(arg2 + 0x158) = 1
                sub_402be0(&var_64, U"[]=,=,=,=,=,=,=,=,=,=================")
                var_4_2.b = 2
                bool cond:0_1 = sub_4e4300(&var_64) == 0
                var_4_2.b = 1
                sub_401110(&var_64)
                
                if (cond:0_1 != 0)
                    sub_401110(&var_48)
                    result = 0
                else
                    *(arg2 + 0x15c)
                    
                    if (sub_51bea0() == 0)
                        sub_401110(&var_48)
                        result = 0
                    else
                        void var_2c
                        sub_402be0(&var_2c, &(*U"[]=,=,=,=,=,=,=,=,=,=================")[1])
                        var_4_2.b = 3
                        bool cond:1_1 = sub_4e4300(&var_2c) == 0
                        sub_401110(&var_2c)
                        
                        if (cond:1_1 == 0)
                            goto label_4e1675
                        
                        sub_401110(&var_48)
                        result = 0
        else
            *(arg2 + 0x158) = 0
        label_4e1675:
            
            if (var_34_1 u>= 0x10)
                int32_t var_88_5 = var_48.d
                sub_6b4d5b()
            
            result = 1
    else
        if (var_34_1 u>= 0x10)
            int32_t var_88_4 = var_48.d
            sub_6b4d5b()
        
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
