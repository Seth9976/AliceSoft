// 函数: sub_503c10
// 地址: 0x503c10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7174b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t var_38 = data_78c474 ^ &var_34
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* var_30
void* result = sub_51b970(&var_2c, &var_30)

if (result.b != 0)
    int32_t* var_40_1
    void* ecx_2
    
    if (var_30 - 2 u<= 3)
        switch (var_30)
            case 2
                char* eax_7 = var_2c.d
                
                if (var_18 u< 0x10)
                    eax_7 = &var_2c
                
                float* var_3c_2 = &var_34
                
                if (sub_6b51b5(eax_7, 0x757588) == 1)
                    float edx_1 = var_34
                    *arg1 = nullptr
                    arg1[1] = edx_1
                    goto label_503d3f
                
                sub_401110(&var_2c)
                result.b = 0
            case 3
                char* eax_8 = var_2c.d
                
                if (var_18 u< 0x10)
                    eax_8 = &var_2c
                
                float* var_3c_3 = &var_34
                result = sub_6b51b5(eax_8, 0x757594)
                
                if (result == 1)
                    long double x87_r7_1 = fconvert.t(var_34)
                    *arg1 = result
                    arg1[2] = fconvert.s(x87_r7_1)
                    goto label_503d3f
                
                sub_401110(&var_2c)
                result.b = 0
            case 4
                int32_t var_3c_4 = 0
                *arg1 = 2
                var_40_1 = &var_2c
                ecx_2 = &arg1[3]
            label_503d35:
                sub_401180(ecx_2, 0xffffffff, var_40_1, 0)
            label_503d3f:
                
                if (var_18 u>= 0x10)
                    int32_t var_3c_6 = var_2c.d
                    sub_6b4d5b()
                
                result.b = 1
            case 5
                int32_t var_3c_5 = 0
                *arg1 = 3
                var_40_1 = &var_2c
                ecx_2 = &arg1[0xa]
                goto label_503d35
    else if (var_18 u< 0x10)
        result.b = 0
    else
        int32_t var_3c_7 = var_2c.d
        sub_6b4d5b()
        result.b = 0
else if (var_18 u< 0x10)
    result.b = 0
else
    int32_t var_3c_1 = var_2c.d
    sub_6b4d5b()
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
