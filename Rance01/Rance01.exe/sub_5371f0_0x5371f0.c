// 函数: sub_5371f0
// 地址: 0x5371f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716ea0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* result = arg3
int32_t var_8_1 = 0
int32_t* edi = arg1
int32_t* result_2 = result

while (edi != arg2)
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *edi
        result[6] = 0xf
        result[5] = 0
        result[1].b = 0
        sub_401180(&result[1], 0xffffffff, &edi[1], 0)
        var_8_1.b = 2
        result[8] = edi[8]
        sub_6b05e0(&result[9], &edi[9])
        int32_t edx_2 = edi[0xd]
        edi = arg1
        result[0xd] = edx_2
    
    result = &result[0xe]
    edi = &edi[0xe]
    var_8_1.b = 0
    arg3 = result
    arg1 = edi

fsbase->NtTib.ExceptionList = ExceptionList
return result
