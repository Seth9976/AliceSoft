// 函数: sub_4b7210
// 地址: 0x4b7210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711086
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_10 = ebx
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1

for (int32_t* i = *(arg1 + 0x1c); i != *(arg1 + 0x20); i = &i[1])
    int32_t* ebx_2 = *i
    
    if (ebx_2 != 0)
        (*(**ebx_2 + 4))(eax_2)
        int32_t* var_24_1 = ebx_2
        sub_6b4d5b()

int32_t eax_4 = *(arg1 + 0x1c)

if (eax_4 != 0)
    int32_t var_24_2 = eax_4
    sub_6b4d5b()

*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
int32_t result = *(arg1 + 0xc)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
