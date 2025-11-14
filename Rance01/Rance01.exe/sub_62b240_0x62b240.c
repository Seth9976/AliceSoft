// 函数: sub_62b240
// 地址: 0x62b240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d0a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
sub_62b300(arg2)
HGDIOBJ ho = arg2[0x11]

if (ho != 0)
    DeleteObject(ho)
    arg2[0x11] = 0

if (arg2[0x18] u>= 0x10)
    int32_t var_24_2 = arg2[0x13]
    sub_6b4d5b()

arg2[0x18] = 0xf
arg2[0x17] = 0
arg2[0x13].b = 0
arg2[4] = &dplogviewer::CDIBSurface::`vftable'{for `ISurface'}
sub_62c310(&arg2[4])
int32_t var_4_1 = 3
int32_t** eax_4 = arg2[1]
sub_62b970(arg2, &var_10, *eax_4, eax_4)
int32_t var_24_4 = arg2[1]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
