// 函数: sub_668d80
// 地址: 0x668d80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713917
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 4
int32_t ecx
sub_668e80(ecx, arg1)
int32_t eax_3 = *(arg1 + 0x6c)

if (eax_3 != 0)
    int32_t var_20_1 = eax_3
    sub_6b4d5b()

*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = 0
int32_t* eax_4 = *(arg1 + 0x5c)

if (eax_4 != 0)
    sub_663180(eax_4, *(arg1 + 0x60))
    int32_t var_20_3 = *(arg1 + 0x5c)
    sub_6b4d5b()

*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x64) = 0
var_4.b = 1
void* result = *(arg1 + 0x4c)

if (result != 0)
    void* var_20_4 = arg1
    sub_663220(result, *(arg1 + 0x50))
    int32_t var_24_1 = *(arg1 + 0x4c)
    result = sub_6b4d5b()

*(arg1 + 0x4c) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x54) = 0

if (*(arg1 + 0x44) u>= 0x10)
    int32_t var_20_5 = *(arg1 + 0x30)
    result = sub_6b4d5b()

*(arg1 + 0x44) = 0xf
*(arg1 + 0x40) = 0
*(arg1 + 0x30) = 0

if (*(arg1 + 0x20) u>= 0x10)
    int32_t var_20_6 = *(arg1 + 0xc)
    result = sub_6b4d5b()

*(arg1 + 0x20) = 0xf
*(arg1 + 0x1c) = 0
*(arg1 + 0xc) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
