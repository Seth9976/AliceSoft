// 函数: sub_41d870
// 地址: 0x41d870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724fa1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
int128_t* ecx = *(arg1 + 0x14)
int128_t* esi = *(arg1 + 0x10)

if (esi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx, ebx_1, eax_2)
    *(arg1 + 0x14) = ebx_1 + esi

int128_t* ecx_1 = *(arg1 + 0x24)
int128_t* esi_1 = *(arg1 + 0x20)

if (esi_1 != ecx_1)
    int32_t ebx_3 = 0 s>> 2 << 2
    sub_6b49d0(esi_1, ecx_1, ebx_3, eax_2)
    *(arg1 + 0x24) = ebx_3 + esi_1

sub_5f7290(*data_797da0, *(arg1 + 4))
int128_t* ecx_3 = *(arg1 + 0x5c)
int128_t* esi_3 = *(arg1 + 0x58)

if (esi_3 != ecx_3)
    int32_t ebx_5 = 0 s>> 2 << 2
    sub_6b49d0(esi_3, ecx_3, ebx_5, eax_2)
    *(arg1 + 0x5c) = ebx_5 + esi_3

int32_t eax_13 = *(arg1 + 0x58)

if (eax_13 != 0)
    int32_t var_20_5 = eax_13
    sub_6b4d5b()

*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
int32_t eax_14 = *(arg1 + 0x20)

if (eax_14 != 0)
    int32_t var_20_6 = eax_14
    sub_6b4d5b()

*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
int32_t result = *(arg1 + 0x10)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
