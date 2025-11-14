// 函数: sub_6b7d3f
// 地址: 0x6b7d3f
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x771098
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_1 = data_78c474
int32_t var_8_3 = 0x771098 ^ eax_1
int32_t __saved_ebp
int32_t var_30 = eax_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_6b7d4b
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6bf5de(0xe)
int32_t var_8_1 = 0
int32_t ecx = *(arg1 + 4)

if (ecx != 0)
    void* eax = data_797850
    void* edx_1 = &data_79784c
    
    while (true)
        void* var_20_1 = eax
        
        if (eax == 0)
            break
        
        if (*eax == ecx)
            *(edx_1 + 4) = *(eax + 4)
            __free_base(eax)
            break
        
        edx_1 = eax
    
    __free_base(*(arg1 + 4))
    *(arg1 + 4) = 0

int32_t var_8_2 = 0xfffffffe
int32_t result = sub_6b7da6()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6b7da1
return result
