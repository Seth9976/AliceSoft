// 函数: sub_4e3b70
// 地址: 0x4e3b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720198
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 1, U"=,,===")
int32_t var_4 = 0
char* ecx = var_48.d

if (var_34 u< 0x10)
    ecx = &var_48

enum MESSAGEBOX_RESULT result

if (sub_51bc80(ecx, arg1).b != 0)
    result.b = 1
else
    char* eax_6 = var_48.d
    
    if (var_34 u< 0x10)
        eax_6 = &var_48
    
    char* var_80_1 = eax_6
    sub_4e4340(0x75561c)
    result.b = 0

int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_80_2 = var_48.d
    sub_6b4d5b()

float var_60

if (result.b != 0)
    if (sub_51bd60(&var_60).b == 0)
        result.b = 0
    else
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        sub_401270(&var_48, 1, &(*U"=,,===")[1])
        int32_t var_4_2 = 1
        int32_t* ecx_3 = var_48.d
        
        if (var_34_1 u< 0x10)
            ecx_3 = &var_48
        
        if (sub_51bc80(ecx_3, arg1).b != 0)
            result.b = 1
        else
            char* eax_7 = var_48.d
            
            if (var_34_1 u< 0x10)
                eax_7 = &var_48
            
            char* var_80_3 = eax_7
            sub_4e4340(0x75561c)
            result.b = 0
        
        int32_t var_4_3 = 0xffffffff
        
        if (var_34_1 u>= 0x10)
            int32_t var_80_4 = var_48.d
            sub_6b4d5b()
        
        float var_4c
        
        if (result.b == 0)
            result.b = 0
        else if (sub_51bd60(&var_4c).b == 0)
            result.b = 0
        else
            void var_2c
            sub_402be0(&var_2c, &(*U"=,,===")[2])
            int32_t var_4_4 = 2
            bool cond:0_1 = sub_4e4300(&var_2c) == 0
            int32_t var_4_5 = 0xffffffff
            sub_401110(&var_2c)
            float var_50
            
            if (cond:0_1 != 0)
                result.b = 0
            else if (sub_51bd60(&var_50).b == 0)
                result.b = 0
            else
                long double x87_r7_2 = fconvert.t(var_4c)
                *(arg2 + 0x54) = fconvert.s(fconvert.t(var_60))
                long double x87_r7_3 = fconvert.t(var_50)
                *(arg2 + 0x58) = fconvert.s(x87_r7_2)
                *(arg2 + 0x5c) = fconvert.s(x87_r7_3)
                result.b = 1
else
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
