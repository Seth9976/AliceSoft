// 函数: sub_654fc0
// 地址: 0x654fc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728950
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t** var_64 = nullptr
int32_t var_60 = 0
int32_t var_5c = 0
int32_t var_4 = 0

if (arg1 s> 0)
    int32_t* var_80_1 = arg1
    
    if (sub_418b70(data_797ddc + 0xa8, arg2, arg1) != 0)
        sub_685320(arg1, &var_64, arg2)

int32_t* var_2c
sub_651030(&var_2c, arg1, arg2)
var_4.b = 1
char eax_10 = sub_6511c0(arg1, arg2)
char eax_11 = sub_651220(arg1, arg2)
int32_t eax_12 = sub_651100(arg1, arg2)
int32_t eax_13 = sub_651160(arg1, arg2)
int32_t ebx_2 = (var_60 - var_64) s>> 2
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 0x1c, 0x732168)
var_4.b = 2
sub_405220(&var_48, arg4)
var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_80_8 = var_48.d
    sub_6b4d5b()

int32_t* eax_14 = var_2c
int32_t var_18

if (var_18 u< 0x10)
    eax_14 = &var_2c

int32_t* var_80_9 = eax_14
var_4.b = 3
sub_405150(sub_4104a0(0x732188), arg4)
var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_80_11 = var_48.d
    sub_6b4d5b()

int32_t eax_17 = 0x7321a0

if (eax_10 == 0)
    eax_17 = 0x7321a8

int32_t var_80_12 = eax_17
var_4.b = 4
sub_405150(sub_4104a0(0x7321b0), arg4)
var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_80_14 = var_48.d
    sub_6b4d5b()

int32_t eax_19 = 0x7321c8

if (eax_11 == 0)
    eax_19 = 0x7321d0

int32_t var_80_15 = eax_19
var_4.b = 5
sub_405150(sub_4104a0(0x7321d8), arg4)
var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_80_17 = var_48.d
    sub_6b4d5b()

int32_t var_80_18 = eax_12
var_4.b = 6
sub_405150(sub_4104a0(0x7321f0), arg4)
var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_80_20 = var_48.d
    sub_6b4d5b()

int32_t var_80_21 = eax_13
var_4.b = 7
sub_405150(sub_4104a0(0x732208), arg4)
var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_80_23 = var_48.d
    sub_6b4d5b()

int32_t var_80_24 = ebx_2
var_4.b = 8
sub_405150(sub_4104a0(0x732220), arg4)
var_4.b = 1

if (var_34 u>= 0x10)
    int32_t var_80_26 = var_48.d
    sub_6b4d5b()

int32_t** edx_5 = var_64
*(arg3 + 0x68) = ebx_2
int32_t* result

if (edx_5 != var_60)
    result = *edx_5
else
    result = nullptr

int32_t esi_2 = 0
*(arg3 + 0x204) = result

if (ebx_2 s> 0)
    do
        var_4.b = 9
        sub_405150(sub_4104a0(0x732238), arg4)
        var_4.b = 1
        
        if (var_34 u>= 0x10)
            int32_t var_80_28 = var_48.d
            sub_6b4d5b()
        
        int32_t var_80_29 = esi_2 + 1
        var_4.b = 0xa
        sub_405150(sub_4104a0("----- %3d "), arg4)
        var_4.b = 1
        
        if (var_34 u>= 0x10)
            int32_t var_80_31 = var_48.d
            sub_6b4d5b()
        
        int32_t var_80_32 = var_64[esi_2]
        var_4.b = 0xb
        result = sub_405150(sub_4104a0(0x732254), arg4)
        var_4.b = 1
        
        if (var_34 u>= 0x10)
            int32_t var_80_34 = var_48.d
            result = sub_6b4d5b()
        
        esi_2 += 1
    while (esi_2 s< ebx_2)
    
    edx_5 = var_64

if (var_18 u>= 0x10)
    int32_t* var_80_35 = var_2c
    result = sub_6b4d5b()
    edx_5 = var_64

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c.b = 0

if (edx_5 != 0)
    int32_t** var_80_36 = edx_5
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
