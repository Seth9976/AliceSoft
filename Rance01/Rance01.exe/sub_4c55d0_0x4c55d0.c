// 函数: sub_4c55d0
// 地址: 0x4c55d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_72831b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_28 = &var_4
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = operator new(0x2c)
int32_t* var_1c = esi
int32_t var_c_1 = 0

if (esi == 0)
    esi = nullptr
else
    *esi = 1
    CRITICAL_SECTION* lpCriticalSection = operator new(0x18)
    
    if (lpCriticalSection == 0)
        lpCriticalSection = nullptr
    else
        InitializeCriticalSection(lpCriticalSection)
    
    esi[1] = lpCriticalSection
    esi[2] = 0
    esi[8] = 0xf
    esi[7] = 0
    esi[3].b = 0
    esi[0xa] = 0

int32_t var_c_2 = 0xffffffff
int32_t eax_5 = *(arg1 + 0x298)
*(arg1 + 0x164) = esi
esi[0xa] = eax_5
void* esi_1 = arg1 + 0x188
void* ebx = arg1 + 0xc

if (sub_4d08e0(*(arg1 + 0x164), ebx, esi_1) != 0)
    *(arg1 + 0x168) = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    *var_28
    return 1

if (*(esi_1 + 0x14) u>= 0x10)
    esi_1 = *esi_1

if (*(ebx + 0x14) u>= 0x10)
    ebx = *ebx

void* var_38_3 = esi_1
void* var_3c_1 = ebx
sub_51ddc0(0x7561cc)
sub_4d0840(*(arg1 + 0x164))
int32_t result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
*var_28
return result
