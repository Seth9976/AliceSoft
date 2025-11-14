// 函数: sub_610de0
// 地址: 0x610de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7193bc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpanalysis::CSourceWnd::`vftable'{for `dpanalysis::CTextChildWnd'}
int32_t var_4 = 0
void* var_14 = &arg1[0x6c]
var_4.b = 3
int32_t* eax_3 = arg1[0x6d]
void var_10
sub_50d940(&arg1[0x6c], &var_10, *eax_3, eax_3)
int32_t var_2c_1 = arg1[0x6d]
sub_6b4d5b()
int32_t* eax_5 = arg1[0x68]

if (eax_5 != 0)
    int32_t edx_1 = arg1[0x69]
    struct dpanalysis::CTextChildWnd::dpanalysis::CSourceWnd::VTable** var_2c_2 = arg1
    int32_t var_30_1 = edx_1
    sub_614290(eax_5, edx_1)
    int32_t var_34_1 = arg1[0x68]
    sub_6b4d5b()

arg1[0x68] = 0
arg1[0x69] = 0
arg1[0x6a] = 0
int32_t* result = sub_60b5f0(&arg1[0x35])
*arg1 = &dpanalysis::CWindow::`vftable'

if (arg1[0xd] u>= 0x10)
    int32_t var_2c_3 = arg1[8]
    result = sub_6b4d5b()

arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0

if (arg1[6] u>= 0x10)
    int32_t var_2c_4 = arg1[1]
    result = sub_6b4d5b()

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
