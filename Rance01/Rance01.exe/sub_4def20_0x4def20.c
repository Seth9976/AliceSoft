// 函数: sub_4def20
// 地址: 0x4def20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_17 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 1, &(*U"==,{,,,},},,}")[3])
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
    
    char* var_88_1 = eax_6
    sub_4e4340(0x75561c)
    result = 0

int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_88_2 = var_2c.d
    sub_6b4d5b()

if (result != 0)
    if (sub_51bea0() == 0)
        result = 0
    else
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_401270(&var_2c, 1, &(*U"==,{,,,},},,}")[4])
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
            
            char* var_88_3 = eax_7
            sub_4e4340(0x75561c)
            result = 0
        
        int32_t var_4_3 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_88_4 = var_2c.d
            sub_6b4d5b()
        
        if (result == 0)
            result = 0
        else
            long double x87_r7_1 = float.t(0)
            float var_68 = fconvert.s(x87_r7_1)
            float var_64 = fconvert.s(x87_r7_1)
            float var_60 = fconvert.s(x87_r7_1)
            
            if (sub_51bd60(&var_68) == 0)
                result = 0
            else
                sub_402be0(&var_2c, &(*U"==,{,,,},},,}")[5])
                int32_t var_4_4 = 2
                bool cond:0_1 = sub_4e4300(&var_2c) == 0
                int32_t var_4_5 = 0xffffffff
                sub_401110(&var_2c)
                
                if (cond:0_1 != 0)
                    result = 0
                else if (sub_51bd60(&var_64) == 0)
                    result = 0
                else
                    sub_402be0(&var_2c, &(*U"==,{,,,},},,}")[6])
                    int32_t var_4_6 = 3
                    bool cond:1_1 = sub_4e4300(&var_2c) == 0
                    int32_t var_4_7 = 0xffffffff
                    sub_401110(&var_2c)
                    
                    if (cond:1_1 != 0)
                        result = 0
                    else if (sub_51bd60(&var_60) == 0)
                        result = 0
                    else
                        long double x87_r7_2 = float.t(0)
                        float var_5c = fconvert.s(x87_r7_2)
                        var_70 = fconvert.s(x87_r7_2)
                        int32_t var_6c = 1
                        
                        if (sub_51bc80(&(*U"==,{,,,},},,}")[7], arg1) != 0)
                        label_4df301:
                            float var_1c_2 = fconvert.s(fconvert.t(var_5c))
                            float var_18_2 = fconvert.s(fconvert.t(var_70))
                            var_2c.d = &sealengine::CEmitterPos::`vftable'
                            float var_28_1 = var_68
                            float var_24_1 = var_64
                            float var_20_1 = var_60
                            int32_t var_4_16 = 8
                            void var_50
                            int32_t* eax_30 = &var_50
                            int32_t var_58
                            sub_4e9120(&var_2c, eax_30, var_58, var_6c)
                            var_4_16.b = 9
                            sub_4e9160(eax_30, arg2 + 0xcc)
                            result = 1
                        else
                            sub_402be0(&var_2c, &(*U"==,{,,,},},,}")[8])
                            int32_t var_4_8 = 4
                            bool cond:2_1 = sub_4e4300(&var_2c) == 0
                            int32_t var_4_9 = 0xffffffff
                            sub_401110(&var_2c)
                            
                            if (cond:2_1 != 0)
                                result = 0
                            else if (sub_4df390(&var_6c) == 0)
                                result = 0
                            else
                                if (sub_51bc80(&(*U"==,{,,,},},,}")[9], arg1) != 0)
                                    goto label_4df301
                                
                                sub_402be0(&var_2c, &(*U"==,{,,,},},,}")[0xa])
                                int32_t var_4_10 = 5
                                bool cond:3_1 = sub_4e4300(&var_2c) == 0
                                int32_t var_4_11 = 0xffffffff
                                sub_401110(&var_2c)
                                
                                if (cond:3_1 != 0)
                                    result = 0
                                else if (sub_51bd60(&var_5c) == 0)
                                    result = 0
                                else
                                    sub_402be0(&var_2c, &(*U"==,{,,,},},,}")[0xb])
                                    int32_t var_4_12 = 6
                                    bool cond:4_1 = sub_4e4300(&var_2c) == 0
                                    int32_t var_4_13 = 0xffffffff
                                    sub_401110(&var_2c)
                                    
                                    if (cond:4_1 != 0)
                                        result = 0
                                    else if (sub_51bd60(&var_70) == 0)
                                        result = 0
                                    else
                                        sub_402be0(&var_2c, &(*U"==,{,,,},},,}")[0xc])
                                        int32_t var_4_14 = 7
                                        bool cond:5_1 = sub_4e4300(&var_2c) == 0
                                        int32_t var_4_15 = 0xffffffff
                                        sub_401110(&var_2c)
                                        
                                        if (cond:5_1 == 0)
                                            goto label_4df301
                                        
                                        result = 0
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
