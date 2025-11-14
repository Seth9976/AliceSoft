// 函数: sub_62c5a0
// 地址: 0x62c5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721552
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dplogviewer::CLogWnd::`vftable'{for `dplogviewer::CTextChildWnd'}
int32_t var_4 = 4

if (arg1[0x66].b != 0)
    void* eax_3 = &arg1[0x67]
    
    if (arg1[0x6c] u>= 0x10)
        eax_3 = *eax_3
    
    sub_62cea0(eax_3, arg1, 0)

if (arg1[0x6c] u>= 0x10)
    int32_t var_24_1 = arg1[0x67]
    sub_6b4d5b()

arg1[0x6c] = 0xf
arg1[0x6b] = 0
arg1[0x67].b = 0

if (arg1[0x64] u>= 0x10)
    int32_t var_24_2 = arg1[0x5f]
    sub_6b4d5b()

arg1[0x64] = 0xf
arg1[0x63] = 0
arg1[0x5f].b = 0

if (arg1[0x5d] u>= 0x10)
    int32_t var_24_3 = arg1[0x58]
    sub_6b4d5b()

arg1[0x5d] = 0xf
arg1[0x5c] = 0
arg1[0x58].b = 0
int32_t* eax_7 = arg1[0x53]

if (eax_7 != 0)
    sub_405780(eax_7, arg1[0x54])
    int32_t var_24_4 = arg1[0x53]
    sub_6b4d5b()

arg1[0x53] = 0
arg1[0x54] = 0
arg1[0x55] = 0
int32_t var_4_1 = 0xffffffff
BOOL result = sub_6307d0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
