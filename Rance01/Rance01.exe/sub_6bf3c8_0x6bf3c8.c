// 函数: sub_6bf3c8
// 地址: 0x6bf3c8
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x7712a8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_9 = data_78c474
int32_t var_8_3 = 0x7712a8 ^ eax_9
int32_t __saved_ebp
int32_t var_34 = eax_9 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_4 = &data_6bf3d4
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
sub_6bf5de(1)
int32_t var_8_1 = 0
int32_t var_38 = 3
int32_t edi = 3

while (true)
    int32_t var_24_1 = edi
    
    if (edi s>= data_799240)
        break
    
    int32_t eax = data_798228
    
    if (*(eax + (edi << 2)) != 0)
        int32_t* eax_1 = *(eax + (edi << 2))
        
        if ((eax_1[3].b & 0x83) != 0 && sub_6b6951(eax_1) != 0xffffffff)
            result += 1
        
        if (edi s>= 0x14)
            DeleteCriticalSection(*(data_798228 + (edi << 2)) + 0x20)
            __free_base(*(data_798228 + (edi << 2)))
            *(data_798228 + (edi << 2)) = 0
    
    edi += 1

int32_t var_8_2 = 0xfffffffe
sub_6bf45b()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6bf45a
return result
