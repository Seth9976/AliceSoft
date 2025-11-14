// 函数: sub_4ece90
// 地址: 0x4ece90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_711840
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
struct sealengine::CEmitterPos::VTable** edi = arg2

if (edi u> 0xaaaaaaa)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2aaaaaab, arg1[2] - *arg1)
int32_t edx_1 = edx s>> 2
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result u< edi)
    struct sealengine::CEmitterPos::VTable** var_18_1
    
    if (edi != 0)
        struct sealengine::CEmitterPos::VTable** eax_7 = sub_4ecfc0(edi)
        var_18_1 = eax_7
        edi = eax_7
    else
        var_18_1 = edi
    
    int32_t var_8_1 = 0
    struct sealengine::CEmitterPos::VTable** var_30_1 = arg2
    int32_t var_34_1 = *arg1
    sub_4ed450(edi, arg1[1], arg2)
    int32_t var_8_2 = 0xffffffff
    int32_t edx_3 = arg1[1]
    int32_t* i_1 = *arg1
    
    if (i_1 != 0)
        for (int32_t* i = i_1; i != edx_3; i = &i[6])
            (**i)(0)
        
        int32_t var_30_2 = *arg1
        sub_6b4d5b()
        edi = var_18_1
    
    result = &edi[arg2 * 6]
    arg1[2] = result
    arg1[1] = &edi[(edx_3 - i_1) s/ 0x18 * 6]
    *arg1 = edi

fsbase->NtTib.ExceptionList = ExceptionList
return result
