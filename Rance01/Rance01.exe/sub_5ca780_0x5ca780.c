// 函数: sub_5ca780
// 地址: 0x5ca780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebp = data_797d7c
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ebp[6].b != 0)
    void* esi_2 = *ebp + 4
    var_30 = 3
    sub_54e400(&var_30, esi_2)
    int128_t* eax_7 = (**arg1)(eax_4)
    char* ecx_1 = eax_7
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    int32_t var_4 = 0
    sub_410280(&var_2c, sub_401270(&var_2c, ecx_1 - &ecx_1[1], eax_7), *ebp)
    
    if (var_18_1 u>= 0x10)
        int32_t var_44_2 = var_2c.d
        sub_6b4d5b()
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
