// 函数: sub_51ddc0
// 地址: 0x51ddc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f246
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x402c)
int32_t arg_4018 = data_78c474 ^ &ExceptionList
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_1c = data_78c474 ^ &var_18
void arg_4020
fsbase->NtTib.ExceptionList = &arg_4020
char arg_18 = 0
void arg_4034
sub_6b5336(&arg_18, 0x4000, arg1, &arg_4034)
uint32_t eax_5 = GetCurrentThreadId()
eax_5.b = data_797d48 == eax_5
void* esp

if (data_78f507 == 0 || eax_5.b == 0)
    int32_t* var_8_1 = &data_797e08
    EnterCriticalSection(data_797e08)
    ExceptionList.b = 1
    int32_t arg_4028 = 0
    char* eax_6 = &arg_18
    int32_t arg_10 = 0xf
    int32_t arg_c = 0
    var_4.b = 0
    char i
    
    do
        i = *eax_6
        eax_6 = &eax_6[1]
    while (i != 0)
    void arg_19
    sub_401270(&var_4, eax_6 - &arg_19, &arg_18)
    arg_4028.b = 1
    sub_405220(&var_4, &data_797df8)
    LeaveCriticalSection(data_797e08)
    esp = &var_1c
else
    sub_604c90(&arg_18)
    void arg_3fe4
    esp = &arg_3fe4

enum MESSAGEBOX_RESULT result
result.b = 0
fsbase->NtTib.ExceptionList = *(esp + 0x403c)
*(esp + 4)
*(esp + 8)
*(esp + 0xc)
sub_6b4885(*(esp + 0x4034) ^ (esp + 0x10))
return result
