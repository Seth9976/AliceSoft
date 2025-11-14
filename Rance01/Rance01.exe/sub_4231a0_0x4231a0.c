// 函数: sub_4231a0
// 地址: 0x4231a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int128_t* var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = data_797d40
var_30 = arg1
sub_4234a0(ebp)
int128_t* eax_7 = ebp[0x1f]
int128_t* edi = ebp[0x1e]

if (edi != eax_7)
    void* esi_2 = 0
    sub_6b49d0(edi, eax_7, esi_2, eax_4)
    ebp[0x1f] = esi_2 + edi

int128_t* esi_4 = var_30
char* eax_8 = esi_4
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *eax_8
    eax_8 = &eax_8[1]
while (i != 0)
sub_401270(&var_2c, eax_8 - &eax_8[1], esi_4)
int32_t var_4 = 0
sub_423550(ebp, &var_2c)
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_48_4 = var_2c.d
    sub_6b4d5b()

void* eax_10 = &ebp[0x10]
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
*(eax_10 + 0x10) = 0

if (*(eax_10 + 0x14) u>= 0x10)
    eax_10 = *eax_10

*eax_10 = 0
sub_401270(&ebp[0x17], 3, 0x756f24)
HANDLE hEvent = ebp[1]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(ebp[1])
    ebp[1] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
ebp[1] = hEvent_1
char result

if (hEvent_1 == 0)
    sub_604c90(0x756f28)
    result = 0
else
    ResetEvent(hEvent_1)
    
    if (sub_576230(ebp, sub_423980, ebp) != 0)
        result = 1
    else
        sub_604c90(0x756f48)
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
