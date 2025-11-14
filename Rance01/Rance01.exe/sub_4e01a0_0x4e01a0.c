// 函数: sub_4e01a0
// 地址: 0x4e01a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_13 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7225f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_60
int32_t eax_2 = data_78c474 ^ &var_60
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 1, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x17])
int32_t var_4 = 0
char* ecx = var_48.d

if (var_34 u< 0x10)
    ecx = &var_48

char result

if (sub_51bc80(ecx, arg1) != 0)
    result = 1
else
    char* eax_6 = var_48.d
    
    if (var_34 u< 0x10)
        eax_6 = &var_48
    
    char* var_78_1 = eax_6
    sub_4e4340(0x75561c)
    result = 0

int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_78_2 = var_48.d
    sub_6b4d5b()

if (result != 0)
    if (sub_51bea0() == 0)
        result = 0
    else
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        sub_401270(&var_48, 1, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x18])
        int32_t var_4_2 = 1
        int32_t* ecx_3 = var_48.d
        
        if (var_34_1 u< 0x10)
            ecx_3 = &var_48
        
        if (sub_51bc80(ecx_3, arg1) != 0)
            result = 1
        else
            char* eax_7 = var_48.d
            
            if (var_34_1 u< 0x10)
                eax_7 = &var_48
            
            char* var_78_3 = eax_7
            sub_4e4340(0x75561c)
            result = 0
        
        int32_t var_4_3 = 0xffffffff
        
        if (var_34_1 u>= 0x10)
            int32_t var_78_4 = var_48.d
            sub_6b4d5b()
        
        float var_50
        
        if (result == 0)
            result = 0
        else if (sub_51bd60(&var_50) == 0)
            result = 0
        else
            int32_t var_2c
            sub_402be0(&var_2c, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x19])
            int32_t var_4_4 = 2
            bool cond:0_1 = sub_4e4300(&var_2c) == 0
            int32_t var_4_5 = 0xffffffff
            sub_401110(&var_2c)
            float var_4c
            
            if (cond:0_1 != 0)
                result = 0
            else if (sub_51bd60(&var_4c) == 0)
                result = 0
            else
                sub_402be0(&var_2c, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x1a])
                int32_t var_4_6 = 3
                bool cond:1_1 = sub_4e4300(&var_2c) == 0
                int32_t var_4_7 = 0xffffffff
                sub_401110(&var_2c)
                float var_5c
                
                if (cond:1_1 != 0)
                    result = 0
                else if (sub_51bd60(&var_5c) == 0)
                    result = 0
                else
                    sub_402be0(&var_2c, &(*U"=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[0x1b])
                    int32_t var_4_8 = 4
                    bool cond:2_1 = sub_4e4300(&var_2c) == 0
                    int32_t var_4_9 = 0xffffffff
                    sub_401110(&var_2c)
                    
                    if (cond:2_1 != 0)
                        result = 0
                    else
                        var_60 = 1
                        
                        if (sub_4df390(&var_60) == 0)
                            result = 0
                        else
                            sub_402be0(&var_2c, &(*=,{,},}=,{,},}=,{,},}=,{,,,,}=,{,},}==,=,===")[
                                0x1c])
                            int32_t var_4_10 = 5
                            bool cond:3_1 = sub_4e4300(&var_2c) == 0
                            int32_t var_4_11 = 0xffffffff
                            sub_401110(&var_2c)
                            
                            if (cond:3_1 != 0)
                                result = 0
                            else
                                long double x87_r7_1 = fconvert.t(var_50)
                                float var_44_1 = fconvert.s(x87_r7_1)
                                var_48.d = &sealengine::CEmitterRotate::`vftable'
                                long double x87_r6_1 = fconvert.t(var_4c)
                                float var_40_1 = fconvert.s(x87_r6_1)
                                long double x87_r5_1 = fconvert.t(var_5c)
                                float var_3c_1 = fconvert.s(x87_r5_1)
                                int32_t var_4_12 = 6
                                float var_20_1 = fconvert.s(x87_r7_1)
                                int32_t edx_2 = var_60
                                float var_1c_1 = fconvert.s(x87_r6_1)
                                int32_t var_58
                                var_2c = var_58
                                int32_t var_28_1 = edx_2
                                float var_18_1 = fconvert.s(x87_r5_1)
                                struct sealengine::CEmitterRotate::VTable* const var_24_1 =
                                    &sealengine::CEmitterRotate::`vftable'
                                bool var_14_1 = cond:3_1
                                var_4_12.b = 7
                                sub_4e92d0(&var_2c, arg2 + 0x10c)
                                result = 1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_60)
return result
