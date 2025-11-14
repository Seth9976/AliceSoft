// 函数: sub_55b3e0
// 地址: 0x55b3e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71ee10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c

if (arg2 u> 0x3c3c3c3)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x78787879, arg1[2] - *arg1)
int32_t edx_1 = edx s>> 5
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result u< arg2)
    int32_t result_1
    
    if (arg2 u> 0)
        result_1 = sub_5044a0(arg2)
    else
        result_1 = 0
    
    int32_t var_8_1 = 0
    int32_t eax_8 = arg1[1]
    int32_t var_30_1 = arg2
    sub_55b8d0(eax_8, result_1, *arg1, eax_8, result_1)
    int32_t var_8_2 = 0xffffffff
    int32_t ecx_3 = arg1[1]
    int32_t* i = *arg1
    void* ecx_4 = ecx_3 - i
    int32_t eax_9
    int32_t edx_4
    edx_4:eax_9 = muls.dp.d(0x78787879, ecx_4)
    int32_t edx_5 = edx_4 s>> 5
    
    if (i != 0)
        for (; i != ecx_3; i = &i[0x11])
            ecx_4 = sub_539cf0(ecx_4, i)
        
        int32_t var_30_3 = *arg1
        sub_6b4d5b()
    
    result = result_1
    arg1[2] = result + arg2 * 0x44
    arg1[1] = result + ((edx_5 u>> 0x1f) + edx_5) * 0x44
    *arg1 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
