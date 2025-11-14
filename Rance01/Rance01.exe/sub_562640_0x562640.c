// 函数: sub_562640
// 地址: 0x562640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_34 = arg1
int32_t var_30 = 0
int32_t eax_5

if (arg3 s>= 0)
    eax_5 = *arg1

if (arg3 s< 0 || arg3 s>= (arg1[1] - eax_5) s>> 3 || *(eax_5 + (arg3 << 3)) == 0)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_4 = 0
    
    if (*(eax_5 + (arg3 << 3) + 4) != 0)
        sub_401270(&var_2c, 5, "[-D] ")
        arg1 = var_34
    
    int128_t* eax_8 = (*(**(*arg1 + (arg3 << 3)) + 0x14))(eax_4)
    char* ecx_1 = eax_8
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    sub_402cb0(&var_2c, eax_8, ecx_1 - &ecx_1[1])
    *(arg2 + 0x10) = 0
    *(arg2 + 0x14) = 0xf
    *arg2 = 0
    sub_401ef0(arg2, &var_2c)
    
    if (var_18_1 u>= 0x10)
        int32_t var_4c_2 = var_2c.d
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return arg2
