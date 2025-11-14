// 函数: sub_53d0e0
// 地址: 0x53d0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72202b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx = __chkstk(0x4028)
int32_t arg_4014 = data_78c474 ^ &ExceptionList
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t var_18 = data_78c474 ^ &var_14
void arg_401c
fsbase->NtTib.ExceptionList = &arg_401c
char arg_14 = 0
void arg_4030
sub_6b5336(&arg_14, 0x4000, arg5, &arg_4030)
char* var_2c = &arg_14
int32_t var_30 = ecx
int32_t edx = sub_4104a0(0x74d178)
int32_t arg_8028 = 0
int32_t* arg_3ffc
int32_t* eax_5 = arg_3ffc

if (arg4 u< 0x10)
    eax_5 = &arg_3ffc

char result = sub_53d1c0(eax_5, edx, arg1, eax_5)

if (arg4 u>= 0x10)
    int32_t* arg_3fe8 = arg_3ffc
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = arg7
void arg_3ff8
sub_6b4885(arg6 ^ &arg_3ff8)
return result
