// 函数: sub_6b60ed
// 地址: 0x6b60ed
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x770fd0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_10 = data_78c474
int32_t var_8_3 = 0x770fd0 ^ eax_10
int32_t __saved_ebp
int32_t var_30 = eax_10 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_6b60f9
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result_1 = 0
int32_t* edi = arg1
int32_t eax
eax.b = edi != 0
int32_t eax_2

if (eax != 0)
    eax_2.b = arg2 != 0

uint32_t result

if (eax == 0 || eax_2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
else
    arg1 = edi
    sub_6b600f(edi)
    int32_t var_8_1 = 0
    
    if ((edi[3].b & 0x40) == 0)
        int32_t eax_3 = __fileno(edi)
        void* ecx_6
        
        if (eax_3 == 0xffffffff || eax_3 == 0xfffffffe)
            ecx_6 = &data_78c560
        else
            ecx_6 = ((eax_3 & 0x1f) << 6) + (&data_798100)[eax_3 s>> 5]
        
        void* eax_6
        
        if ((*(ecx_6 + 0x24) & 0x7f) == 0)
            if (eax_3 == 0xffffffff || eax_3 == 0xfffffffe)
                eax_6 = &data_78c560
            else
                eax_6 = ((eax_3 & 0x1f) << 6) + (&data_798100)[eax_3 s>> 5]
        
        if ((*(ecx_6 + 0x24) & 0x7f) != 0 || (*(eax_6 + 0x24) & 0x80) != 0)
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result_1 = 0xffffffff
    
    if (result_1 == 0)
        int32_t eax_8 = sub_6bf611(edi)
        void arg_c
        result_1 = sub_6b9a57(edi, arg2, nullptr, &arg_c)
        sub_6bf6ad(eax_8, edi)
    
    int32_t var_8_2 = 0xfffffffe
    sub_6b61ef(&__saved_ebp)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6b61ee
return result
