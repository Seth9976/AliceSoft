// 函数: sub_4d0a10
// 地址: 0x4d0a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717b9e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 1
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)
CRITICAL_SECTION* lpCriticalSection_1

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    lpCriticalSection_1 = lpCriticalSection

arg1[1] = lpCriticalSection_1
int32_t var_4 = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 0
var_4.b = 4
arg1[0x15] = 0
int32_t* eax_3 = sub_4b5460(1)
arg1[0x14] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[0x14]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[0x14]
*(eax_5 + 8) = eax_5
*(arg1[0x14] + 0x38) = 1
*(arg1[0x14] + 0x39) = 1
var_4.b = 5
arg1[0x19] = 0
int32_t* eax_7 = sub_4b5460(1)
arg1[0x18] = eax_7
*eax_7 = eax_7
void* eax_8 = arg1[0x18]
*(eax_8 + 4) = eax_8
void* eax_9 = arg1[0x18]
*(eax_9 + 8) = eax_9
*(arg1[0x18] + 0x38) = 1
*(arg1[0x18] + 0x39) = 1
var_4.b = 6
arg1[0x1d] = 0
int32_t* eax_11 = sub_4b5460(1)
arg1[0x1c] = eax_11
*eax_11 = eax_11
void* eax_12 = arg1[0x1c]
*(eax_12 + 4) = eax_12
void* eax_13 = arg1[0x1c]
*(eax_13 + 8) = eax_13
*(arg1[0x1c] + 0x38) = 1
*(arg1[0x1c] + 0x39) = 1
var_4.b = 7
arg1[0x21] = 0
int32_t* eax_14 = sub_4b5460(1)
arg1[0x20] = eax_14
*eax_14 = eax_14
void* eax_15 = arg1[0x20]
*(eax_15 + 4) = eax_15
void* eax_16 = arg1[0x20]
*(eax_16 + 8) = eax_16
*(arg1[0x20] + 0x38) = 1
*(arg1[0x20] + 0x39) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
