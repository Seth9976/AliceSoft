// 函数: sub_6c25ce
// 地址: 0x6c25ce
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x771450
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int32_t eax_7 = data_78c474
int32_t var_8_3 = 0x771450 ^ eax_7
int32_t __saved_ebp
void* var_2c = eax_7 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_6c25da
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx_1

if ((*arg3 & 0x80000000) == 0)
    ebx_1 = arg3[2] + arg2 + 0xc
else
    ebx_1 = arg2

int32_t var_8_1 = 0
var_30 = arg4
int32_t eax_1 = sub_6c244f(arg1, arg2, arg3, var_30)
void* const* esp = &var_2c
int32_t result

if (eax_1 == 1)
    var_30 = arg4 + 8
    var_30 = sub_6c21cb(*(arg1 + 0x18), var_30)
    result = sub_6bb35a(ebx_1, *(arg4 + 0x18), var_30)
    esp = &var_2c
else
    result = eax_1 - 2
    
    if (eax_1 == 2)
        var_30 = 1
        void* eax_4 = sub_6c21cb(*(arg1 + 0x18), arg4 + 8)
        result = sub_6bb35a(ebx_1, *(arg4 + 0x18), eax_4)
        esp = &var_30

int32_t var_8_2 = 0xfffffffe
*(esp - 4) = &data_6c2652
fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
esp[3]
int32_t __saved_ebp_2 = *(esp - 4)
return result
