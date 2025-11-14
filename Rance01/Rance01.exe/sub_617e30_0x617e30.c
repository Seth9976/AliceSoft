// 函数: sub_617e30
// 地址: 0x617e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_712490
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c

if (arg2 u> 0xccccccc)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x66666667, arg1[2] - *arg1)
int32_t edx_1 = edx s>> 3
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result u< arg2)
    int32_t var_8_1 = 0
    struct dpanalysis::SVarSourceList::VTable** edi_1 = sub_4d50d0(arg2)
    int32_t eax_7 = arg1[1]
    int32_t var_30_1 = arg2
    sub_618060(eax_7, arg2, *arg1, eax_7, edi_1)
    int32_t var_8_2 = 0xffffffff
    int32_t edx_3 = arg1[1]
    int32_t* i_1 = *arg1
    
    if (i_1 != 0)
        for (int32_t* i = i_1; i != edx_3; i = &i[5])
            (**i)(0)
        
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
    
    result = (edx_3 - i_1) s/ 0x14 * 5
    arg1[2] = &edi_1[arg2 * 5]
    arg1[1] = &edi_1[result]
    *arg1 = edi_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
