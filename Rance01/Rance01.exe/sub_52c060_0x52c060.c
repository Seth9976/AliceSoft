// 函数: sub_52c060
// 地址: 0x52c060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_711620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t esi = arg2

if (esi u> 0xfffffff)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s>> 4

if (result u< esi)
    int32_t result_1 = sub_572360(esi)
    int32_t var_8_1 = 0
    void* ecx_1 = *arg1
    int32_t var_30_1 = arg2
    void* var_34_1 = ecx_1
    sub_52c190(result_1, arg1[1], ecx_1)
    int32_t var_8_2 = 0xffffffff
    int32_t ecx_2 = arg1[1]
    int32_t* i_1 = *arg1
    
    if (i_1 != 0)
        for (int32_t* i = i_1; i != ecx_2; i = &i[4])
            (**i)(0)
        
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
        esi = arg2
    
    result = result_1
    arg1[2] = (esi << 4) + result
    arg1[1] = ((ecx_2 - i_1) & 0xfffffff0) + result
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
