// 函数: sub_51b520
// 地址: 0x51b520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712a33
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10 = &arg1[4]
EnterCriticalSection(arg1[4])
char var_14 = 1
int32_t* esi = nullptr
int32_t var_4 = 0
int32_t* var_18
int32_t* arg_4
sub_591420(arg1, &var_18, &arg_4)
int32_t* ebx = var_18

if (ebx != arg1[1])
    int32_t* esi_1 = ebx[4]
    EnterCriticalSection(esi_1[1])
    *esi_1 += 1
    LeaveCriticalSection(esi_1[1])
    int32_t ebx_1 = ebx[4]
    LeaveCriticalSection(arg1[4])
    fsbase->NtTib.ExceptionList = ExceptionList
    return ebx_1

int32_t* eax_7 = operator new(0xc)
var_18 = eax_7
var_4.b = 1

if (eax_7 != 0)
    esi = sub_51ac10(eax_7)

var_4.b = 0
(**arg_4)(eax_2)
EnterCriticalSection(esi[1])
*esi += 1
LeaveCriticalSection(esi[1])
*sub_50fa20(arg1, &arg_4) = esi
LeaveCriticalSection(arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return esi
