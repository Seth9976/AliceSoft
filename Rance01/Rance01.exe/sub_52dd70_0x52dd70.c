// 函数: sub_52dd70
// 地址: 0x52dd70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7171ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
char* result = arg3
int32_t var_8_1 = 0
int32_t* edi = arg1
char* result_2 = result

while (edi != arg2)
    char* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *(result + 0x14) = 0xf
        *(result + 0x10) = 0
        *result = 0
        sub_401180(result, 0xffffffff, edi, 0)
        var_8_1.b = 2
        *(result + 0x1c) = edi[7]
        sub_52dfc0(&result[0x20], &edi[8])
        *(result + 0x30) = edi[0xc]
        int32_t ecx_3 = edi[0xd]
        edi = arg1
        *(result + 0x34) = ecx_3
    
    result = &result[0x38]
    edi = &edi[0xe]
    var_8_1.b = 0
    arg3 = result
    arg1 = edi

fsbase->NtTib.ExceptionList = ExceptionList
return result
