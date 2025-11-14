// 函数: sub_4ac180
// 地址: 0x4ac180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713576
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
int32_t ecx
sub_4ac220(ecx, arg1)
int32_t* eax_3 = *(arg1 + 0x14)

if (eax_3 != 0)
    sub_663180(eax_3, *(arg1 + 0x18))
    int32_t var_1c_2 = *(arg1 + 0x14)
    sub_6b4d5b()

*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
void* result = *(arg1 + 4)

if (result != 0)
    int32_t edx_2 = *(arg1 + 8)
    char* var_1c_3 = arg1
    int32_t var_20_1 = edx_2
    sub_4ae120(result, edx_2)
    int32_t var_24_1 = *(arg1 + 4)
    result = sub_6b4d5b()

*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
