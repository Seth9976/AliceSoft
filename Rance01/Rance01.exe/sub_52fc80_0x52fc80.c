// 函数: sub_52fc80
// 地址: 0x52fc80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_717135
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
char* result = arg3
int32_t var_8_1 = 0
int32_t* edi = arg1
char* result_1 = result

while (edi != arg2)
    var_8_1.b = 1
    
    if (result != 0)
        *(result + 0x14) = 0xf
        *(result + 0x10) = 0
        *result = 0
        sub_401180(result, 0xffffffff, edi, 0)
        *(result + 0x1c) = edi[7]
        *(result + 0x20) = edi[8]
        *(result + 0x24) = edi[9]
        int32_t eax_4 = edi[0xa]
        edi = arg1
        *(result + 0x28) = eax_4
    
    result = &result[0x2c]
    edi = &edi[0xb]
    var_8_1.b = 0
    arg3 = result
    arg1 = edi

fsbase->NtTib.ExceptionList = ExceptionList
return result
