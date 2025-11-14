// 函数: sub_598b20
// 地址: 0x598b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_724800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* arg_4
int32_t* esi = arg_4
int32_t** result = esi[1]

if (result u< 1)
    result = nullptr
    int32_t var_18_1 = 0
    int32_t var_8_1 = 0
    
    while (esi[1] u< 1)
        void* edi_1 = *esi
        result = sub_598d40(edi_1, *(edi_1 + 4))
        int32_t ecx_1 = esi[1]
        
        if (0x7fffffe - ecx_1 u< 1)
            sub_6b47bf("list<T> too long")
            noreturn
        
        var_18_1 += 1
        esi[1] = ecx_1 + 1
        *(edi_1 + 4) = result
        *result[1] = result
else if (result u> 1)
    do
        result = sub_598ca0(esi, &arg_4, *(*esi + 4))
    while (esi[1] u> 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
