// 函数: sub_637600
// 地址: 0x637600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71cd8e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4d4
int32_t eax_2 = data_78c474 ^ &var_4d4
int32_t __saved_edi
int32_t var_4e8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c0 = 0
int32_t var_45c = 0xf
int32_t var_460 = 0
char var_470 = 0
sub_401270(&var_470, nullptr, 0x72d716)
int32_t var_4 = 0
int32_t eax_7 = arg1[1] - 1
void* const var_4ec
void* edi

if (eax_7 u> 9)
    var_4ec = &data_733034
    edi = 3
else
    switch (eax_7)
        case 0
            var_4ec = &data_732fec
            edi = 2
        case 1
            var_4ec = &data_732ff0
            edi = 4
        case 2
            var_4ec = &data_732ff8
            edi = 4
        case 3
            var_4ec = &data_733000
            edi = 3
        case 4
            var_4ec = &data_733004
            edi = 3
        case 5
            var_4ec = &data_733008
            edi = 4
        case 6
            var_4ec = &data_733010
            edi = 8
        case 7
            var_4ec = &data_73301c
            edi = 4
        case 8
            var_4ec = &data_733024
            edi = 6
        case 9
            var_4ec = &data_73302c
            edi = 4

sub_401270(&var_470, edi, var_4ec)
int32_t var_440 = 0xf
int32_t var_444 = 0
char var_454 = 0
sub_401270(&var_454, nullptr, 0x72d717)
var_4.b = 1
int32_t eax_8 = arg1[0x10]
void* const var_4ec_1
void* edi_1

if (eax_8 u> 3)
    var_4ec_1 = &data_733058
    edi_1 = 3
else
    switch (eax_8)
        case 0
            var_4ec_1 = &data_733038
            edi_1 = 4
        case 1
            var_4ec_1 = &data_733040
            edi_1 = 4
        case 2
            var_4ec_1 = &data_733048
            edi_1 = 4
        case 3
            var_4ec_1 = &data_733050
            edi_1 = 5

sub_401270(&var_454, edi_1, var_4ec_1)
int32_t var_478 = 0xf
int32_t var_47c = 0
char var_48c = 0
sub_401270(&var_48c, nullptr, 0x72d726)
var_4.b = 2
int32_t eax_10 = arg1[0x12] - 1
void* const var_4ec_2
void* edi_2

if (eax_10 u> 8)
    var_4ec_2 = &data_7330a4
    edi_2 = 3
else
    switch (eax_10)
        case 0
            var_4ec_2 = &data_73305c
            edi_2 = 4
        case 1
            var_4ec_2 = &data_733064
            edi_2 = 4
        case 2
            var_4ec_2 = &data_73306c
            edi_2 = 4
        case 3
            var_4ec_2 = &data_733074
            edi_2 = 4
        case 4
            var_4ec_2 = &data_73307c
            edi_2 = 4
        case 5
            var_4ec_2 = &data_733084
            edi_2 = 4
        case 6
            var_4ec_2 = &data_73308c
            edi_2 = 4
        case 7
            var_4ec_2 = &data_733094
            edi_2 = 4
        case 8
            var_4ec_2 = &data_73309c
            edi_2 = 4

sub_401270(&var_48c, edi_2, var_4ec_2)
int32_t eax_11 = sub_70c710(fconvert.t(arg1[0x19]))
int32_t eax_14 = sub_70c710(fconvert.t(arg1[0x1a]))
int32_t eax_17 = sub_70c710(fconvert.t(arg1[0x1b]))
long double x87_r7_3 = fconvert.t(arg1[0x1c])
var_4d4 = eax_17
int32_t eax_20 = sub_70c710(x87_r7_3)
int32_t eax_23 = sub_70c710(fconvert.t(arg1[0x1d]))
long double x87_r6 = fconvert.t(10000.0)
int32_t eax_26 = sub_70c710((fconvert.t(arg1[0x19]) - float.t(eax_11)) * x87_r6)
int32_t eax_27 = sub_70c710((fconvert.t(arg1[0x1a]) - float.t(eax_14)) * x87_r6)
int32_t eax_28 = sub_70c710((fconvert.t(arg1[0x1b]) - float.t(var_4d4)) * x87_r6)
long double x87_r6_9 = fconvert.t(arg1[0x1c]) - float.t(eax_20)
var_4d4 = eax_28
int32_t eax_29 = sub_70c710(x87_r6_9 * x87_r6)
int32_t eax_30 = sub_70c710(x87_r6 * (fconvert.t(arg1[0x1d]) - float.t(eax_23)))
int32_t var_248 = 0xf
int32_t var_24c = 0
char var_25c = 0
sub_401270(&var_25c, nullptr, 0x72d727)
var_4.b = 3
int32_t var_280 = 0xf
int32_t var_284 = 0
char var_294 = 0
sub_401270(&var_294, nullptr, 0x72d73e)
var_4.b = 4
int32_t var_2b8 = 0xf
int32_t var_2bc = 0
char var_2cc = 0
sub_401270(&var_2cc, nullptr, 0x72d73f)
var_4.b = 5
int32_t var_2f0 = 0xf
int32_t var_2f4 = 0
char var_304 = 0
sub_401270(&var_304, nullptr, 0x72d74a)
var_4.b = 6
int32_t var_328 = 0xf
int32_t var_32c = 0
char var_33c = 0
sub_401270(&var_33c, nullptr, 0x72d74b)
var_4.b = 7
int32_t var_360 = 0xf
int32_t var_364 = 0
char var_374 = 0
sub_401270(&var_374, nullptr, 0x72d756)
var_4.b = 8
int32_t var_398 = 0xf
int32_t var_39c = 0
char var_3ac = 0
sub_401270(&var_3ac, nullptr, 0x72d757)
var_4.b = 9
int32_t var_424 = 0xf
int32_t var_428 = 0
char var_438 = 0
sub_401270(&var_438, nullptr, 0x72d762)
var_4.b = 0xa
int32_t var_408 = 0xf
int32_t var_40c = 0
char var_41c = 0
sub_401270(&var_41c, nullptr, 0x72d763)
var_4.b = 0xb
int32_t var_30c = 0xf
int32_t var_310 = 0
char var_320 = 0
sub_401270(&var_320, nullptr, 0x72d772)
var_4.b = 0xc
int32_t var_29c = 0xf
int32_t var_2a0 = 0
char var_2b0 = 0
sub_401270(&var_2b0, nullptr, 0x72d773)
var_4.b = 0xd
int32_t var_344 = 0xf
int32_t var_348 = 0
char var_358 = 0
sub_401270(&var_358, nullptr, 0x72d783)
var_4.b = 0xe
int32_t var_264 = 0xf
int32_t var_268 = 0
char var_278 = 0
sub_401270(&var_278, nullptr, 0x72d792)
var_4.b = 0xf
int32_t var_37c = 0xf
int32_t var_380 = 0
char var_390 = 0
sub_401270(&var_390, nullptr, 0x72d793)
var_4.b = 0x10
int32_t var_2d4 = 0xf
int32_t var_2d8 = 0
char var_2e8 = 0
sub_401270(&var_2e8, nullptr, 0x72d7a3)
var_4.b = 0x11
int32_t var_3b4 = 0xf
int32_t var_3b8 = 0
char var_3c8 = 0
sub_401270(&var_3c8, nullptr, 0x72d7b2)
var_4.b = 0x12
int32_t var_22c = 0xf
int32_t var_230 = 0
char var_240 = 0
sub_401270(&var_240, nullptr, 0x72d7b3)
var_4.b = 0x13
int32_t var_210 = 0xf
int32_t var_214 = 0
char var_224 = 0
sub_401270(&var_224, nullptr, 0x72d7c2)
var_4.b = 0x14
int32_t var_3ec = 0xf
int32_t var_3f0 = 0
char var_400 = 0
sub_401270(&var_400, nullptr, 0x72d7c3)
var_4.b = 0x15
int32_t var_3d0 = 0xf
int32_t var_3d4 = 0
char var_3e4 = 0
sub_401270(&var_3e4, nullptr, 0x72d7d5)
var_4.b = 0x16
int32_t var_4a8
int32_t var_494

if (arg1[0x1e].b != 0)
    int32_t var_4ec_3 = *arg1
    var_4.b = 0x17
    sub_401ef0(&var_25c, sub_4104a0(" %10d"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_4 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x79) != 0)
    char* eax_33 = var_470.d
    
    if (var_45c u< 0x10)
        eax_33 = &var_470
    
    char* var_4ec_5 = eax_33
    var_4.b = 0x18
    sub_401ef0(&var_294, sub_4104a0(&data_7330b0))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_6 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x7a) != 0)
    int32_t var_4ec_7 = arg1[3]
    int32_t var_4f0_1 = arg1[2]
    var_4.b = 0x19
    sub_401ef0(&var_2cc, sub_4104a0("   (%5d,%5d)"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_8 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x7b) != 0)
    int32_t ecx_3 = arg1[4]
    int32_t eax_37 = arg1[5]
    int32_t var_4ec_9 = ecx_3 * eax_37
    int32_t var_4f0_2 = eax_37
    int32_t var_4f4_1 = ecx_3
    var_4.b = 0x1a
    sub_401ef0(&var_304, sub_4104a0("   [%5d,%5d]%8d"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_10 = var_4a8
        sub_6b4d5b()

if (arg1[0x1f].b != 0)
    int32_t var_4ec_11 = arg1[7]
    var_4.b = 0x1b
    sub_401ef0(&var_33c, sub_4104a0("     %3d"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_12 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x7d) != 0)
    int32_t var_4ec_13 = arg1[8]
    var_4.b = 0x1c
    sub_401ef0(&var_374, sub_4104a0(" %10d"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_14 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x7e) != 0)
    int32_t var_4ec_15 = arg1[0xb]
    int32_t var_4f0_3 = arg1[0xa]
    int32_t var_4f4_2 = arg1[9]
    var_4.b = 0x1d
    sub_401ef0(&var_3ac, sub_4104a0("   [%3d,%3d,%3d]"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_16 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x7f) != 0)
    int32_t var_4ec_17 = arg1[0xe]
    int32_t var_4f0_4 = arg1[0xd]
    int32_t var_4f4_3 = arg1[0xc]
    var_4.b = 0x1e
    sub_401ef0(&var_438, sub_4104a0("   [%3d,%3d,%3d]"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_18 = var_4a8
        sub_6b4d5b()

if (arg1[0x20].b != 0)
    char* eax_48 = var_454.d
    
    if (var_440 u< 0x10)
        eax_48 = &var_454
    
    char* var_4ec_19 = eax_48
    var_4.b = 0x1f
    sub_401ef0(&var_41c, sub_4104a0(" %5s"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_20 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x81) != 0)
    int32_t eax_50 = 0x733118
    
    if (arg1[0x11].b == 0)
        eax_50 = 0x73311c
    
    int32_t var_4ec_21 = eax_50
    var_4.b = 0x20
    sub_401ef0(&var_320, sub_4104a0(" %4s"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_22 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x82) != 0)
    int32_t eax_52 = 0x733128
    
    if (*(arg1 + 0x45) == 0)
        eax_52 = 0x73312c
    
    int32_t var_4ec_23 = eax_52
    var_4.b = 0x21
    sub_401ef0(&var_2b0, sub_4104a0(" %4s"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_24 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x83) != 0)
    char* eax_55 = var_48c.d
    
    if (var_478 u< 0x10)
        eax_55 = &var_48c
    
    char* var_4ec_25 = eax_55
    var_4.b = 0x22
    sub_401ef0(&var_358, sub_4104a0(" %4s"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_26 = var_4a8
        sub_6b4d5b()

if (arg1[0x21].b != 0)
    int32_t var_4ec_27 = arg1[0x13]
    var_4.b = 0x23
    sub_401ef0(&var_278, sub_4104a0(" %13d"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_28 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x85) != 0)
    int32_t eax_59 = 0x733148
    
    if (arg1[0x14].b == 0)
        eax_59 = 0x73314c
    
    int32_t var_4ec_29 = eax_59
    var_4.b = 0x24
    sub_401ef0(&var_390, sub_4104a0(" %7s"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_30 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x86) != 0)
    int32_t var_4ec_31 = arg1[0x15]
    var_4.b = 0x25
    sub_401ef0(&var_2e8, sub_4104a0(" %11d"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_32 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x87) != 0)
    int32_t var_4ec_33 = arg1[0x16]
    var_4.b = 0x26
    sub_401ef0(&var_3c8, sub_4104a0(" %11d"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_34 = var_4a8
        sub_6b4d5b()

if (arg1[0x22].b != 0)
    int32_t var_4ec_35 = arg1[0x17]
    var_4.b = 0x27
    sub_401ef0(&var_240, sub_4104a0(" %10d"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_36 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x89) != 0)
    int32_t eax_66 = 0x733170
    
    if (arg1[0x18].b == 0)
        eax_66 = 0x733174
    
    int32_t var_4ec_37 = eax_66
    var_4.b = 0x28
    sub_401ef0(&var_224, sub_4104a0(" %9s"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_38 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x8a) != 0)
    int32_t var_4ec_39 = eax_27
    int32_t var_4f0_5 = mods.dp.d(sx.q(eax_14), 0x64)
    int32_t var_4f4_4 = eax_26
    int32_t var_4f8_1 = mods.dp.d(sx.q(eax_11), 0x64)
    var_4.b = 0x29
    sub_401ef0(&var_400, sub_4104a0("     [%2d.%04d,%2d.%04d]"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_40 = var_4a8
        sub_6b4d5b()

if (*(arg1 + 0x8b) != 0)
    int32_t var_4ec_41 = eax_30
    int32_t var_4f0_6 = mods.dp.d(sx.q(eax_23), 0x64)
    int32_t var_4f4_5 = eax_29
    int32_t var_4f8_2 = mods.dp.d(sx.q(eax_20), 0x64)
    int32_t var_4fc_1 = var_4d4
    int32_t var_500_1 = mods.dp.d(sx.q(eax_17), 0x64)
    var_4.b = 0x2a
    sub_401ef0(&var_3e4, sub_4104a0("     [%4d.%04d,%4d.%04d,%4d.%04d]"))
    var_4.b = 0x16
    
    if (var_494 u>= 0x10)
        int32_t var_4ec_42 = var_4a8
        sub_6b4d5b()

void* const esi_46 = &data_7331c0

if (arg1[0xf] == 0)
    esi_46 = &data_7331c4

int32_t* eax_74
int32_t edx_27
eax_74, edx_27 = sub_426250(&var_4a8, &var_25c, &var_294)
var_4.b = 0x2b
var_4.b = 0x2c
char var_9c
char var_64
char* eax_78
int32_t edx_29
eax_78, edx_29 =
    sub_4c1d70(&var_304, &var_9c, sub_4c1d70(&var_2cc, edx_27, eax_74, &var_64), &var_9c)
var_4.b = 0x2d
var_4.b = 0x2e
char var_10c
char var_d4
char* eax_82
int32_t edx_31
eax_82, edx_31 =
    sub_4c1d70(&var_374, &var_10c, sub_4c1d70(&var_33c, edx_29, eax_78, &var_d4), &var_10c)
var_4.b = 0x2f
var_4.b = 0x30
char var_17c
char var_144
char* eax_86
int32_t edx_33
eax_86, edx_33 =
    sub_4c1d70(&var_438, &var_17c, sub_4c1d70(&var_3ac, edx_31, eax_82, &var_144), &var_17c)
var_4.b = 0x31
var_4.b = 0x32
char var_1ec
char var_1b4
char* eax_90
int32_t edx_35
eax_90, edx_35 =
    sub_4c1d70(&var_320, &var_1ec, sub_4c1d70(&var_41c, edx_33, eax_86, &var_1b4), &var_1ec)
var_4.b = 0x33
var_4.b = 0x34
char var_128
char var_48
char* eax_94
int32_t edx_37
eax_94, edx_37 =
    sub_4c1d70(&var_358, &var_128, sub_4c1d70(&var_2b0, edx_35, eax_90, &var_48), &var_128)
var_4.b = 0x35
var_4.b = 0x36
char var_160
char var_b8
char* eax_98
int32_t edx_39
eax_98, edx_39 =
    sub_4c1d70(&var_390, &var_160, sub_4c1d70(&var_278, edx_37, eax_94, &var_b8), &var_160)
var_4.b = 0x37
var_4.b = 0x38
char var_198
char var_80
char* eax_102
int32_t edx_41
eax_102, edx_41 =
    sub_4c1d70(&var_3c8, &var_198, sub_4c1d70(&var_2e8, edx_39, eax_98, &var_80), &var_198)
var_4.b = 0x39
var_4.b = 0x3a
char var_1d0
char var_f0
char* eax_106
int32_t edx_43
eax_106, edx_43 =
    sub_4c1d70(&var_224, &var_1d0, sub_4c1d70(&var_240, edx_41, eax_102, &var_f0), &var_1d0)
var_4.b = 0x3b
var_4.b = 0x3c
char var_208
char var_2c
char* eax_110
int32_t* ecx_35
eax_110, ecx_35 =
    sub_4c1d70(&var_3e4, &var_208, sub_4c1d70(&var_400, edx_43, eax_106, &var_2c), &var_208)
char* var_500_3 = eax_110
var_4.b = 0x3d
sub_402c60(arg2, esi_46, ecx_35)
int32_t var_1f4

if (var_1f4 u>= 0x10)
    int32_t var_4ec_45 = var_208.d
    sub_6b4d5b()

int32_t var_1f4_1 = 0xf
int32_t var_1f8 = 0
var_208 = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_4ec_46 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_1bc

if (var_1bc u>= 0x10)
    int32_t var_4ec_47 = var_1d0.d
    sub_6b4d5b()

int32_t var_1bc_1 = 0xf
int32_t var_1c0 = 0
var_1d0 = 0
int32_t var_dc

if (var_dc u>= 0x10)
    int32_t var_4ec_48 = var_f0.d
    sub_6b4d5b()

int32_t var_dc_1 = 0xf
int32_t var_e0 = 0
var_f0 = 0
int32_t var_184

if (var_184 u>= 0x10)
    int32_t var_4ec_49 = var_198.d
    sub_6b4d5b()

int32_t var_184_1 = 0xf
int32_t var_188 = 0
var_198 = 0
int32_t var_6c

if (var_6c u>= 0x10)
    int32_t var_4ec_50 = var_80.d
    sub_6b4d5b()

int32_t var_6c_1 = 0xf
int32_t var_70 = 0
var_80 = 0
int32_t var_14c

if (var_14c u>= 0x10)
    int32_t var_4ec_51 = var_160.d
    sub_6b4d5b()

int32_t var_14c_1 = 0xf
int32_t var_150 = 0
var_160 = 0
int32_t var_a4

if (var_a4 u>= 0x10)
    int32_t var_4ec_52 = var_b8.d
    sub_6b4d5b()

int32_t var_a4_1 = 0xf
int32_t var_a8 = 0
var_b8 = 0
int32_t var_114

if (var_114 u>= 0x10)
    int32_t var_4ec_53 = var_128.d
    sub_6b4d5b()

int32_t var_114_1 = 0xf
int32_t var_118 = 0
var_128 = 0
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_4ec_54 = var_48.d
    sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_1d8

if (var_1d8 u>= 0x10)
    int32_t var_4ec_55 = var_1ec.d
    sub_6b4d5b()

int32_t var_1d8_1 = 0xf
int32_t var_1dc = 0
var_1ec = 0
int32_t var_1a0

if (var_1a0 u>= 0x10)
    int32_t var_4ec_56 = var_1b4.d
    sub_6b4d5b()

int32_t var_1a0_1 = 0xf
int32_t var_1a4 = 0
var_1b4 = 0
int32_t var_168

if (var_168 u>= 0x10)
    int32_t var_4ec_57 = var_17c.d
    sub_6b4d5b()

int32_t var_168_1 = 0xf
int32_t var_16c = 0
var_17c = 0
int32_t var_130

if (var_130 u>= 0x10)
    int32_t var_4ec_58 = var_144.d
    sub_6b4d5b()

int32_t var_130_1 = 0xf
int32_t var_134 = 0
var_144 = 0
int32_t var_f8

if (var_f8 u>= 0x10)
    int32_t var_4ec_59 = var_10c.d
    sub_6b4d5b()

int32_t var_f8_1 = 0xf
int32_t var_fc = 0
var_10c = 0
int32_t var_c0

if (var_c0 u>= 0x10)
    int32_t var_4ec_60 = var_d4.d
    sub_6b4d5b()

int32_t var_c0_1 = 0xf
int32_t var_c4 = 0
var_d4 = 0
int32_t var_88

if (var_88 u>= 0x10)
    int32_t var_4ec_61 = var_9c.d
    sub_6b4d5b()

int32_t var_88_1 = 0xf
int32_t var_8c = 0
var_9c = 0
int32_t var_50

if (var_50 u>= 0x10)
    int32_t var_4ec_62 = var_64.d
    sub_6b4d5b()

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0

if (var_494 u>= 0x10)
    int32_t var_4ec_63 = var_4a8
    sub_6b4d5b()

int32_t var_494_1 = 0xf
int32_t var_498 = 0
var_4a8.b = 0

if (var_3d0 u>= 0x10)
    int32_t var_4ec_64 = var_3e4.d
    sub_6b4d5b()

int32_t var_3d0_1 = 0xf
int32_t var_3d4_1 = 0
var_3e4 = 0

if (var_3ec u>= 0x10)
    int32_t var_4ec_65 = var_400.d
    sub_6b4d5b()

int32_t var_3ec_1 = 0xf
int32_t var_3f0_1 = 0
var_400 = 0

if (var_210 u>= 0x10)
    int32_t var_4ec_66 = var_224.d
    sub_6b4d5b()

int32_t var_210_1 = 0xf
int32_t var_214_1 = 0
var_224 = 0

if (var_22c u>= 0x10)
    int32_t var_4ec_67 = var_240.d
    sub_6b4d5b()

int32_t var_22c_1 = 0xf
int32_t var_230_1 = 0
var_240 = 0

if (var_3b4 u>= 0x10)
    int32_t var_4ec_68 = var_3c8.d
    sub_6b4d5b()

int32_t var_3b4_1 = 0xf
int32_t var_3b8_1 = 0
var_3c8 = 0

if (var_2d4 u>= 0x10)
    int32_t var_4ec_69 = var_2e8.d
    sub_6b4d5b()

int32_t var_2d4_1 = 0xf
int32_t var_2d8_1 = 0
var_2e8 = 0

if (var_37c u>= 0x10)
    int32_t var_4ec_70 = var_390.d
    sub_6b4d5b()

int32_t var_37c_1 = 0xf
int32_t var_380_1 = 0
var_390 = 0

if (var_264 u>= 0x10)
    int32_t var_4ec_71 = var_278.d
    sub_6b4d5b()

int32_t var_264_1 = 0xf
int32_t var_268_1 = 0
var_278 = 0

if (var_344 u>= 0x10)
    int32_t var_4ec_72 = var_358.d
    sub_6b4d5b()

int32_t var_344_1 = 0xf
int32_t var_348_1 = 0
var_358 = 0

if (var_29c u>= 0x10)
    int32_t var_4ec_73 = var_2b0.d
    sub_6b4d5b()

int32_t var_29c_1 = 0xf
int32_t var_2a0_1 = 0
var_2b0 = 0

if (var_30c u>= 0x10)
    int32_t var_4ec_74 = var_320.d
    sub_6b4d5b()

int32_t var_30c_1 = 0xf
int32_t var_310_1 = 0
var_320 = 0

if (var_408 u>= 0x10)
    int32_t var_4ec_75 = var_41c.d
    sub_6b4d5b()

int32_t var_408_1 = 0xf
int32_t var_40c_1 = 0
var_41c = 0

if (var_424 u>= 0x10)
    int32_t var_4ec_76 = var_438.d
    sub_6b4d5b()

int32_t var_424_1 = 0xf
int32_t var_428_1 = 0
var_438 = 0

if (var_398 u>= 0x10)
    int32_t var_4ec_77 = var_3ac.d
    sub_6b4d5b()

int32_t var_398_1 = 0xf
int32_t var_39c_1 = 0
var_3ac = 0

if (var_360 u>= 0x10)
    int32_t var_4ec_78 = var_374.d
    sub_6b4d5b()

int32_t var_360_1 = 0xf
int32_t var_364_1 = 0
var_374 = 0

if (var_328 u>= 0x10)
    int32_t var_4ec_79 = var_33c.d
    sub_6b4d5b()

int32_t var_328_1 = 0xf
int32_t var_32c_1 = 0
var_33c = 0

if (var_2f0 u>= 0x10)
    int32_t var_4ec_80 = var_304.d
    sub_6b4d5b()

int32_t var_2f0_1 = 0xf
int32_t var_2f4_1 = 0
var_304 = 0

if (var_2b8 u>= 0x10)
    int32_t var_4ec_81 = var_2cc.d
    sub_6b4d5b()

int32_t var_2b8_1 = 0xf
int32_t var_2bc_1 = 0
var_2cc = 0

if (var_280 u>= 0x10)
    int32_t var_4ec_82 = var_294.d
    sub_6b4d5b()

int32_t var_280_1 = 0xf
int32_t var_284_1 = 0
var_294 = 0

if (var_248 u>= 0x10)
    int32_t var_4ec_83 = var_25c.d
    sub_6b4d5b()

int32_t var_248_1 = 0xf
int32_t var_24c_1 = 0
var_25c = 0

if (var_478 u>= 0x10)
    int32_t var_4ec_84 = var_48c.d
    sub_6b4d5b()

int32_t var_478_1 = 0xf
int32_t var_47c_1 = 0
var_48c = 0

if (var_440 u>= 0x10)
    int32_t var_4ec_85 = var_454.d
    sub_6b4d5b()

int32_t var_440_1 = 0xf
int32_t var_444_1 = 0
var_454 = 0

if (var_45c u>= 0x10)
    int32_t var_4ec_86 = var_470.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4d4)
return arg2
