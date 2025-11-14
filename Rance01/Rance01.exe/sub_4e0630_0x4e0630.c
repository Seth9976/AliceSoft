// 函数: sub_4e0630
// 地址: 0x4e0630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722580
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = data_78c474 ^ &var_48
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 1, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x1f])
int32_t var_4 = 0
char* ecx = var_2c.d

if (var_18 u< 0x10)
    ecx = &var_2c

char result

if (sub_51bc80(ecx, arg1) != 0)
    result = 1
else
    char* eax_6 = var_2c.d
    
    if (var_18 u< 0x10)
        eax_6 = &var_2c
    
    char* var_60_1 = eax_6
    sub_4e4340(0x75561c)
    result = 0

int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_60_2 = var_2c.d
    sub_6b4d5b()

if (result != 0)
    if (sub_51bea0() == 0)
        result = 0
    else
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_401270(&var_2c, 1, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x20])
        int32_t var_4_2 = 1
        int32_t* ecx_3 = var_2c.d
        
        if (var_18_1 u< 0x10)
            ecx_3 = &var_2c
        
        if (sub_51bc80(ecx_3, arg1) != 0)
            result = 1
        else
            char* eax_7 = var_2c.d
            
            if (var_18_1 u< 0x10)
                eax_7 = &var_2c
            
            char* var_60_3 = eax_7
            sub_4e4340(0x75561c)
            result = 0
        
        int32_t var_4_3 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_60_4 = var_2c.d
            sub_6b4d5b()
        
        float var_38
        
        if (result == 0)
            result = 0
        else if (sub_51bd60(&var_38) == 0)
            result = 0
        else
            int32_t var_44 = 1
            
            if (sub_51bc80(&(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x21], arg1) != 0)
            label_4e0855:
                long double x87_r7_1 = fconvert.t(var_38)
                float var_30_1 = fconvert.s(x87_r7_1)
                struct sealengine::CFrameMulAlpha::VTable* const var_34_1 =
                    &sealengine::CFrameMulAlpha::`vftable'
                int32_t var_4_8 = 4
                float var_20_1 = fconvert.s(x87_r7_1)
                int32_t var_40
                var_2c.d = var_40
                int32_t var_28_1 = var_44
                struct sealengine::CFrameMulAlpha::VTable* const var_24_1 =
                    &sealengine::CFrameMulAlpha::`vftable'
                var_1c_1.b = 0
                var_4_8.b = 5
                sub_4d33d0(&var_2c, arg2 + 0x11c)
                result = 1
            else
                sub_402be0(&var_2c, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x22])
                int32_t var_4_4 = 2
                bool cond:0_1 = sub_4e4300(&var_2c) == 0
                int32_t var_4_5 = 0xffffffff
                sub_401110(&var_2c)
                
                if (cond:0_1 != 0)
                    result = 0
                else if (sub_4df390(&var_44) == 0)
                    result = 0
                else
                    sub_402be0(&var_2c, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x23])
                    int32_t var_4_6 = 3
                    bool cond:1_1 = sub_4e4300(&var_2c) == 0
                    int32_t var_4_7 = 0xffffffff
                    sub_401110(&var_2c)
                    
                    if (cond:1_1 == 0)
                        goto label_4e0855
                    
                    result = 0
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48)
return result
