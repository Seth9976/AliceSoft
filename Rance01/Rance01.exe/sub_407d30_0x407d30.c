// 函数: sub_407d30
// 地址: 0x407d30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t edi
int32_t var_3c = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* eax_6 = (**arg3)(data_78c474 ^ &var_3c)
char ebx = 0
char* ecx = eax_6
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
sub_401270(&var_2c, ecx - &ecx[1], eax_6)
int32_t var_4 = 0
void* esi_2 = *(data_797d2c + 0x30)
int32_t* result
int32_t* ecx_3
int80_t st0
st0, result, ecx_3 = sub_574810(esi_2 + 0x17c, esi_2 + 0xc, &var_2c)

if (result != 0)
    int32_t var_44_2 = arg4
    void* eax_9 = sub_40c350(esi_2 + 0x274, arg4, ecx_3)
    char eax_10
    
    if (eax_9 != 0)
        eax_10 = sub_40c700(eax_9, result)
    
    if (eax_9 != 0 && eax_10 != 0)
        (*(*result + 4))()
        ebx = 1
    else
        (*(*result + 4))()

if (var_18 u>= 0x10)
    int32_t var_44_3 = var_2c.d
    sub_6b4d5b()

result.b = ebx
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
