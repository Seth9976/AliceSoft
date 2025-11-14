// 函数: sub_53db80
// 地址: 0x53db80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char var_2c
char* esi = &var_2c
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
sub_401270(esi, 1, 0x74d188)
int32_t var_30
int32_t* var_4c = &var_30
char* edi = &var_2c
int32_t var_4 = 0
bool var_31 = sub_537dc0(&arg1[0x13], edi, &arg1[0x13]) == 0
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_4c_1 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
char result

if (var_31 != 0)
    result = 1
else
    if (arg1[0x4ce].b != 0)
        sub_52bd90(arg1[0x4be] + var_30 * 0x38)
    
    result = sub_53b2a0(arg1, esi, edi, arg1)
    
    if (result != 0)
        while (arg1[0xa6].b != 0)
            int16_t* eax_6 = arg1[0xa3]
            int16_t ecx_4 = *eax_6
            arg1[0xa3] = &eax_6[1]
            sub_53b4f0(arg1, ecx_4)
        
        arg1[0xa6].b = 1
        result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
