// 函数: sub_6a8080
// 地址: 0x6a8080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bce0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_17c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char var_d4
char* esi = &var_d4
result_1 = arg2
int32_t var_164 = 0
int32_t var_c0 = 0xf
int32_t var_c4 = 0
var_d4 = 0
sub_401270(esi, nullptr, 0x72ccba)
int32_t var_4 = 0
int32_t eax_6 = *arg1
int32_t var_160
int32_t var_14c
int32_t var_f0
int32_t var_dc

if (eax_6 == 0)
    int32_t var_180_3 = arg1[1]
    var_4.b = 1
    sub_401ef0(&var_d4, sub_4104a0("BGM--->%05dch"))
    var_4.b = 0
    
    if (var_dc u>= 0x10)
        int32_t var_180_4 = var_f0
        sub_6b4d5b()
else if (eax_6 == 1)
    int32_t var_180_1 = arg1[1]
    var_4.b = 2
    sub_401ef0(esi, sub_4104a0("Sound->%05dch"))
    var_4.b = 0
    
    if (var_14c u>= 0x10)
        int32_t var_180_2 = var_160
        sub_6b4d5b()

char var_128
char* esi_2 = &var_128
int32_t var_114 = 0xf
int32_t var_118 = 0
var_128 = 0
sub_401270(esi_2, nullptr, 0x72ccbb)
var_4.b = 3
int32_t eax_12 = arg1[2]

if (eax_12 s<= 0)
    var_4.b = 5
    sub_401ef0(&var_128, sub_4104a0("    ERROR"))
    var_4.b = 3
    
    if (var_14c u>= 0x10)
        int32_t var_180_7 = var_160
        sub_6b4d5b()
else
    int32_t var_180_5 = eax_12
    var_4.b = 4
    sub_401ef0(esi_2, sub_4104a0("    %05d"))
    var_4.b = 3
    
    if (var_14c u>= 0x10)
        int32_t var_180_6 = var_160
        sub_6b4d5b()

int32_t var_130 = 0xf
int32_t var_134 = 0
char var_144 = 0
sub_401270(&var_144, nullptr, 0x72cce7)
var_4.b = 6
int32_t eax_16 = arg1[3]
char var_b8
char var_9c

if (eax_16 u> 5)
    int32_t var_180_14 = eax_16
    var_4.b = 0xd
    sub_401ef0(&var_144, sub_4104a0("    "))
    var_4.b = 6
    
    if (var_14c u>= 0x10)
        int32_t var_180_15 = var_160
        sub_6b4d5b()
else
    switch (eax_16)
        case 0
            int32_t var_180_8 = 0
            var_4.b = 7
            sub_401ef0(&var_144, sub_4104a0("      "))
            var_4.b = 6
            sub_401110(&var_f0)
        case 1
            int32_t var_180_9 = 1
            var_4.b = 8
            sub_401ef0(&var_144, sub_4104a0("    "))
            var_4.b = 6
            sub_401110(&var_9c)
        case 2
            int32_t var_180_10 = 2
            var_4.b = 9
            sub_401ef0(&var_144, sub_4104a0("    "))
            var_4.b = 6
            sub_401110(&var_b8)
        case 3
            int32_t var_180_11 = 3
            var_4.b = 0xa
            sub_401ef0(&var_144, sub_4104a0("    "))
            var_4.b = 6
            void var_48
            sub_401110(&var_48)
        case 4
            int32_t var_180_12 = 4
            var_4.b = 0xb
            sub_401ef0(&var_144, sub_4104a0("    "))
            var_4.b = 6
            void var_64
            sub_401110(&var_64)
        case 5
            int32_t var_180_13 = 5
            var_4.b = 0xc
            sub_401ef0(&var_144, sub_4104a0("    "))
            var_4.b = 6
            void var_2c
            sub_401110(&var_2c)

char var_10c
char* esi_12 = &var_10c
int32_t var_f8 = 0xf
int32_t var_fc = 0
var_10c = 0
sub_401270(esi_12, nullptr, 0x72cd11)
var_4.b = 0xe
int128_t* var_180_16

if (arg1[8].b == 0)
    var_180_16 = &data_72d190
else
    var_180_16 = &data_72d188

sub_401270(esi_12, 6, var_180_16)
int32_t var_180_17 = arg1[9]
sub_4104a0("    %03d   ")
var_4.b = 0xf
int32_t* eax_24
int32_t edx_4
eax_24, edx_4 = sub_426250(&var_160, &var_d4, &var_128)
var_4.b = 0x10
var_4.b = 0x11
char* eax_28
int32_t edx_6
eax_28, edx_6 = sub_4c1d70(&var_10c, &var_9c, sub_4c1d70(&var_144, edx_4, eax_24, &var_f0), &var_9c)
var_4.b = 0x12
char var_80
char* eax_30
int32_t* ecx_13
eax_30, ecx_13 = sub_4c1d70(&var_80, edx_6, eax_28, &var_b8)
int32_t* result = result_1
char* var_1a0 = eax_30
var_4.b = 0x13
sub_402c60(result, 0x72d1a4, ecx_13)
int32_t var_a4

if (var_a4 u>= 0x10)
    int32_t var_180_18 = var_b8.d
    sub_6b4d5b()

int32_t var_a4_1 = 0xf
int32_t var_a8 = 0
var_b8 = 0
int32_t var_88

if (var_88 u>= 0x10)
    int32_t var_180_19 = var_9c.d
    sub_6b4d5b()

int32_t var_88_1 = 0xf
int32_t var_8c = 0
var_9c = 0

if (var_dc u>= 0x10)
    int32_t var_180_20 = var_f0
    sub_6b4d5b()

int32_t var_dc_1 = 0xf
int32_t var_e0 = 0
var_f0.b = 0

if (var_14c u>= 0x10)
    int32_t var_180_21 = var_160
    sub_6b4d5b()

int32_t var_14c_1 = 0xf
int32_t var_150 = 0
var_160.b = 0
int32_t var_6c

if (var_6c u>= 0x10)
    int32_t var_180_22 = var_80.d
    sub_6b4d5b()

int32_t var_6c_1 = 0xf
int32_t var_70 = 0
var_80 = 0

if (var_f8 u>= 0x10)
    int32_t var_180_23 = var_10c.d
    sub_6b4d5b()

int32_t var_f8_1 = 0xf
int32_t var_fc_1 = 0
var_10c = 0

if (var_130 u>= 0x10)
    int32_t var_180_24 = var_144.d
    sub_6b4d5b()

int32_t var_130_1 = 0xf
int32_t var_134_1 = 0
var_144 = 0

if (var_114 u>= 0x10)
    int32_t var_180_25 = var_128.d
    sub_6b4d5b()

int32_t var_114_1 = 0xf
int32_t var_118_1 = 0
var_128 = 0

if (var_c0 u>= 0x10)
    int32_t var_180_26 = var_d4.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
