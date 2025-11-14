// 函数: sub_5ee570
// 地址: 0x5ee570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_719660
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c

if (arg2 u> 0x25ed097)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x4bda12f7, arg1[2] - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result u< arg2)
    int32_t* eax_6 = sub_5ee670(arg2)
    int32_t var_8_1 = 0
    int32_t edx_4 = arg1[1]
    int32_t var_30_1 = arg2
    sub_5ef300(eax_6, edx_4, *arg1, edx_4, eax_6)
    int32_t ecx_2 = arg1[1]
    void* i = *arg1
    int32_t eax_7
    int32_t edx_5
    edx_5:eax_7 = muls.dp.d(0x4bda12f7, ecx_2 - i)
    int32_t edx_6 = edx_5 s>> 5
    
    if (i != 0)
        for (; i != ecx_2; i += 0x6c)
            sub_4329b0(i)
        
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
    
    result = &eax_6[arg2 * 0x1b]
    arg1[2] = result
    arg1[1] = ((edx_6 u>> 0x1f) + edx_6) * 0x6c + eax_6
    *arg1 = eax_6

fsbase->NtTib.ExceptionList = ExceptionList
return result
