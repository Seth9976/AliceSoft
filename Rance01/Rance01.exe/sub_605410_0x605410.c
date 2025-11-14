// 函数: sub_605410
// 地址: 0x605410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721b5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpanalysis::CApp::`vftable'{for `IJaffaDebugPlugin'}
arg1[1] = &dpanalysis::CApp::`vftable'{for `IVMTraceCallback'}
arg1[2] = &dpanalysis::CApp::`vftable'{for `dpanalysis::CWinApp'}
int32_t var_4 = 0x14
int32_t ecx
sub_6189e0(ecx, &arg1[0x2b8])
var_4.b = 0x13
sub_617de0(&arg1[0x2af])
int32_t* eax_5 = arg1[0x2ab]

if (eax_5 != 0)
    sub_60a3c0(eax_5, arg1[0x2ac])
    int32_t var_2c_3 = arg1[0x2ab]
    sub_6b4d5b()

arg1[0x2ab] = 0
arg1[0x2ac] = 0
arg1[0x2ad] = 0

if (arg1[0x2a8] u>= 0x10)
    int32_t var_2c_4 = arg1[0x2a3]
    sub_6b4d5b()

arg1[0x2a8] = 0xf
arg1[0x2a7] = 0
arg1[0x2a3].b = 0
sub_609d80(&arg1[0x299])
sub_610380(&arg1[0x294])
arg1[0x267] = &dpanalysis::CWindow::`vftable'

if (arg1[0x274] u>= 0x10)
    int32_t var_2c_6 = arg1[0x26f]
    sub_6b4d5b()

arg1[0x274] = 0xf
arg1[0x273] = 0
arg1[0x26f].b = 0

if (arg1[0x26d] u>= 0x10)
    int32_t var_2c_7 = arg1[0x268]
    sub_6b4d5b()

arg1[0x26d] = 0xf
arg1[0x26c] = 0
arg1[0x268].b = 0
arg1[0x23a] = &dpanalysis::CWindow::`vftable'

if (arg1[0x247] u>= 0x10)
    int32_t var_2c_8 = arg1[0x242]
    sub_6b4d5b()

arg1[0x247] = 0xf
arg1[0x246] = 0
arg1[0x242].b = 0

if (arg1[0x240] u>= 0x10)
    int32_t var_2c_9 = arg1[0x23b]
    sub_6b4d5b()

arg1[0x240] = 0xf
arg1[0x23f] = 0
arg1[0x23b].b = 0
void* eax_12 = arg1[0x235]

if (eax_12 != 0)
    struct IJaffaDebugPlugin::dpanalysis::CApp::VTable** var_2c_10 = arg1
    sub_6176c0(eax_12, arg1[0x236])
    int32_t var_30_1 = arg1[0x235]
    sub_6b4d5b()

arg1[0x235] = 0
arg1[0x236] = 0
arg1[0x237] = 0
sub_60c040(&arg1[0x1fa])
var_4.b = 0xa
sub_610de0(&arg1[0x18a])
sub_60e990(&arg1[0x151])
sub_60d180(&arg1[0x115])
sub_614bb0(&arg1[0xa4])
arg1[0x77] = &dpanalysis::CWindow::`vftable'

if (arg1[0x84] u>= 0x10)
    int32_t var_2c_13 = arg1[0x7f]
    sub_6b4d5b()

arg1[0x84] = 0xf
arg1[0x83] = 0
arg1[0x7f].b = 0

if (arg1[0x7d] u>= 0x10)
    int32_t var_2c_14 = arg1[0x78]
    sub_6b4d5b()

arg1[0x7d] = 0xf
arg1[0x7c] = 0
arg1[0x78].b = 0
arg1[0x4a] = &dpanalysis::CWindow::`vftable'

if (arg1[0x57] u>= 0x10)
    int32_t var_2c_15 = arg1[0x52]
    sub_6b4d5b()

arg1[0x57] = 0xf
arg1[0x56] = 0
arg1[0x52].b = 0

if (arg1[0x50] u>= 0x10)
    int32_t var_2c_16 = arg1[0x4b]
    sub_6b4d5b()

arg1[0x50] = 0xf
arg1[0x4f] = 0
arg1[0x4b].b = 0
void* eax_19 = arg1[0x46]

if (eax_19 != 0)
    struct IJaffaDebugPlugin::dpanalysis::CApp::VTable** var_2c_17 = arg1
    int32_t var_30_2 = arg1[0x47]
    sub_60a740(eax_19, arg1)
    int32_t var_34_1 = arg1[0x46]
    sub_6b4d5b()

arg1[0x46] = 0
arg1[0x47] = 0
arg1[0x48] = 0
sub_609bd0(&arg1[0x42])
void* var_14 = &arg1[0x3e]
var_4.b = 0x15
int32_t** eax_22 = arg1[0x3f]
void var_10
sub_60f770(&arg1[0x3e], &var_10, *eax_22, eax_22)
int32_t var_2c_20 = arg1[0x3f]
sub_6b4d5b()
int32_t* eax_23 = arg1[0x3a]

if (eax_23 != 0)
    sub_405780(eax_23, arg1[0x3b])
    int32_t var_2c_21 = arg1[0x3a]
    sub_6b4d5b()

arg1[0x3a] = 0
arg1[0x3b] = 0
arg1[0x3c] = 0
int32_t* result = arg1[0x36]

if (result != 0)
    sub_405780(result, arg1[0x37])
    int32_t var_2c_22 = arg1[0x36]
    result = sub_6b4d5b()

arg1[0x36] = 0
arg1[0x37] = 0
arg1[0x38] = 0

if (arg1[0x30] u>= 0x10)
    int32_t var_2c_23 = arg1[0x2b]
    result = sub_6b4d5b()

arg1[0x30] = 0xf
arg1[0x2f] = 0
arg1[0x2b].b = 0
arg1[2] = &dpanalysis::CWindow::`vftable'

if (arg1[0xf] u>= 0x10)
    int32_t var_2c_24 = arg1[0xa]
    result = sub_6b4d5b()

arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0

if (arg1[8] u>= 0x10)
    int32_t var_2c_25 = arg1[3]
    result = sub_6b4d5b()

arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
