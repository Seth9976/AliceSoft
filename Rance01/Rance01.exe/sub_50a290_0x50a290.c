// 函数: sub_50a290
// 地址: 0x50a290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71173e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t* esi = *(arg1 + 0xcc)

if (esi != 0)
    sub_4cb6a0(esi)
    *(arg1 + 0xcc) = 0

int32_t result = *(arg1 + 0x98)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0x98) = 0
*(arg1 + 0x9c) = 0
*(arg1 + 0xa0) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
