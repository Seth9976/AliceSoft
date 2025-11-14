// 函数: sub_503a60
// 地址: 0x503a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f980
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_5c = arg1
int32_t var_74_3
int32_t var_58

if (sub_51bc80(0x75496c, arg2) == 0)
    float var_50_2 = fconvert.s(float.t(0))
    var_58 = 0
    int32_t var_54_2 = 0
    int32_t var_38_2 = 0xf
    int32_t var_3c_2 = 0
    char var_4c_2 = 0
    int32_t var_1c_3 = 0xf
    int32_t var_20_3 = 0
    char var_30_3 = 0
    int32_t var_4_1 = 1
    int32_t result
    
    if (sub_503c10(&var_58) != 0)
        sub_504800(&var_58, arg1 + 0x1c)
    label_503bde:
        sub_5046c0(&var_58)
        result.b = 1
    else
        var_74_3 = 0x7549d4
    label_503b69:
        sub_51ddc0(var_74_3)
        sub_5046c0(&var_58)
        result.b = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_6b4885(eax_2 ^ &var_5c)
    return result

while (true)
    float var_50_1 = fconvert.s(float.t(0))
    var_58 = 0
    int32_t var_54_1 = 0
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c_1 = 0
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30_1 = 0
    int32_t var_4 = 0
    
    if (sub_503c10(&var_58) == 0)
        var_74_3 = 0x754970
        break
    
    sub_504800(&var_58, var_5c + 0x1c)
    
    if (sub_51bc80(0x754998, arg2) != 0)
        goto label_503bde
    
    if (sub_51bc80(0x75499c, arg2) == 0)
        var_74_3 = 0x7549a0
        break
    
    if (var_1c_1 u>= 0x10)
        int32_t var_74_1 = var_30_1.d
        sub_6b4d5b()
    
    int32_t var_1c_2 = 0xf
    int32_t var_20_2 = 0
    char var_30_2 = 0
    
    if (var_38_1 u>= 0x10)
        int32_t var_74_2 = var_4c_1.d
        sub_6b4d5b()

goto label_503b69
