// 函数: sub_5ca2f0
// 地址: 0x5ca2f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716690
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
char* result = arg3
int32_t var_8_1 = 0
char* eax_3 = arg1
char* result_2 = result

while (eax_3 != arg2)
    char* edi_1 = eax_3
    char* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        eax_3.b = *eax_3
        *result = eax_3.b
        *(result + 0x18) = 0xf
        *(result + 0x14) = 0
        result[4] = 0
        sub_401180(&result[4], 0xffffffff, &edi_1[4], 0)
        var_8_1.b = 2
        sub_6b05e0(&result[0x20], &edi_1[0x20])
        eax_3 = arg1
    
    result = &result[0x30]
    eax_3 = &eax_3[0x30]
    var_8_1.b = 0
    arg3 = result
    arg1 = eax_3

fsbase->NtTib.ExceptionList = ExceptionList
return result
