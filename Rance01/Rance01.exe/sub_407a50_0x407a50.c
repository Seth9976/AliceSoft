// 函数: sub_407a50
// 地址: 0x407a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* eax_6 = (**arg2)(data_78c474 ^ &__saved_edi)
char* ecx_1 = eax_6
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_6)
int32_t var_4 = 0
void* eax_7 = data_797d2c
struct IEncodeCG::encodecg::CApp::VTable** eax_8

if (*(eax_7 + 0x18) == 0)
    eax_8 = sub_5c7c40()
    *(eax_7 + 0x18) = eax_8

if (*(eax_7 + 0x18) != 0 || eax_8 != 0)
    int128_t* ecx_3 = var_2c.d
    
    if (var_18 u< 0x10)
        ecx_3 = &var_2c
    
    eax_8 = sub_40b7c0(ecx_3, *(eax_7 + 0x30), arg1, *(eax_7 + 0x18))
else
    eax_8.b = 0

if (var_18 u>= 0x10)
    int32_t var_3c_2 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return zx.d(eax_8.b)
