// 函数: sub_55b810
// 地址: 0x55b810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716d60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* var_1c = arg1
int32_t* result = *(arg1 + 4)

if (*(arg2 + 0x2d) == 0)
    void* var_30_1 = &arg2[3]
    int32_t* result_1 = sub_55b9a0(arg1)
    result_1[1] = arg3
    int32_t* eax_4
    eax_4.b = arg2[0xb].b
    result_1[0xb].b = eax_4.b
    
    if (*(result + 0x2d) != 0)
        result = result_1
    
    int32_t var_8_1 = 0
    *result_1 = sub_55b810(*arg2, result_1)
    result_1[2] = sub_55b810(arg2[2], result_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
