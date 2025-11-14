// 函数: sub_423320
// 地址: 0x423320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = data_797d40
var_34 = arg1
sub_4234a0(ebp)
int128_t* eax_7 = ebp[0x1f]
int128_t* esi = ebp[0x1e]

if (esi != eax_7)
    void* edi_2 = 0
    sub_6b49d0(esi, eax_7, edi_2, eax_4)
    ebp[0x1f] = edi_2 + esi

char* eax_8 = arg2
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *eax_8
    eax_8 = &eax_8[1]
while (i != 0)
sub_401270(&var_2c, eax_8 - &eax_8[1], arg2)
int32_t var_4 = 0
sub_423550(ebp, &var_2c)
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_4c_4 = var_2c.d
    sub_6b4d5b()

int32_t* ecx = var_34
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_401180(&ebp[0x10], 0xffffffff, ecx, 0)
sub_401270(&ebp[0x17], 4, "POST")
HANDLE hEvent = ebp[1]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(ebp[1])
    ebp[1] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
ebp[1] = hEvent_1
char result

if (hEvent_1 == 0)
    sub_604c90(0x756f70)
    result = 0
else
    ResetEvent(hEvent_1)
    
    if (sub_576230(ebp, sub_423980, ebp) != 0)
        result = 1
    else
        sub_604c90(0x756f90)
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
