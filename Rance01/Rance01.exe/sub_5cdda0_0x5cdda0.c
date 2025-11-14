// 函数: sub_5cdda0
// 地址: 0x5cdda0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = data_797d84

if (eax_3 != 0)
    sub_5cde60(ecx, eax_3)
    data_797d84 = 0

void* eax_4 = operator new(0x10)
void* var_10_1 = eax_4
int32_t var_4 = 0

if (eax_4 == 0)
    data_797d84 = 0
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

*(eax_4 + 8) = 0
int32_t* eax_5 = sub_4ecfc0(1)
*(eax_4 + 4) = eax_5
*eax_5 = eax_5
void* eax_6 = *(eax_4 + 4)
*(eax_6 + 4) = eax_6
void* eax_7 = *(eax_4 + 4)
*(eax_7 + 8) = eax_7
*(*(eax_4 + 4) + 0x14) = 1
*(*(eax_4 + 4) + 0x15) = 1
data_797d84 = eax_4
void* eax_8
eax_8.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
