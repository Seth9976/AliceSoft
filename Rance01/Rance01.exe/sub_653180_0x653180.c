// 函数: sub_653180
// 地址: 0x653180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728c30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b0
int32_t eax_2 = data_78c474 ^ &var_b0
int32_t __saved_edi
int32_t var_c4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
sub_401270(&var_64, 0x16, 0x731bc4)
int32_t var_4 = 0
sub_405220(&var_64, arg4)
int32_t var_4_1 = 0xffffffff

if (var_50 u>= 0x10)
    int32_t var_c8_1 = var_64.d
    sub_6b4d5b()

int32_t var_50_1 = 0xf
int32_t var_54_1 = 0
var_64 = 0
sub_401270(&var_64, 1, 0x731bdc)
int32_t var_4_2 = 1
int32_t edx = sub_405220(&var_64, arg4)

if (var_50_1 u>= 0x10)
    int32_t var_c8_2 = var_64.d
    edx = sub_6b4d5b()

int32_t var_50_2 = 0xf
int32_t var_54_2 = 0
var_64 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4_3 = 2
int32_t* var_78 = nullptr
int32_t var_74 = 0
int32_t var_70 = 0
var_4_3.b = 3

if (arg2 s> 0)
    int32_t* var_c8_3 = arg2
    
    if (sub_418b70(data_797ddc + 0xa8, edx, 0xf) != 0)
        sub_685320(arg2, &var_78, arg3)

int32_t var_ac
int32_t var_a8
int32_t var_a4
int32_t var_a0
int32_t var_9c
int32_t var_98
float var_94
int32_t var_90
int32_t var_8c
int32_t var_88
int32_t var_84
float var_80
sub_6506d0(arg2, arg3, &var_98, &var_a0, &var_a8, &var_ac, &var_8c, &var_80, &var_94, &var_88, 
    &var_9c, &var_90, &var_a4, &var_84)
int32_t var_50_3 = 0xf
int32_t var_54_3 = 0
var_64 = 0
sub_401270(&var_64, 0x19, "----- ")
var_4_3.b = 4
sub_405220(&var_64, arg4)
var_4_3.b = 3

if (var_50_3 u>= 0x10)
    int32_t var_c8_6 = var_64.d
    sub_6b4d5b()

sub_653810(arg4, var_a0, var_a8, var_8c, fconvert.s(fconvert.t(var_80)), 
    fconvert.s(fconvert.t(var_94)), var_88, var_9c, var_90, var_a4, var_84)
int32_t var_50_4 = 0xf
int32_t var_54_4 = 0
var_64 = 0
sub_401270(&var_64, 1, 0x731bfc)
var_4_3.b = 5
sub_405220(&var_64, arg4)
var_4_3.b = 3

if (var_50_4 u>= 0x10)
    int32_t var_c8_8 = var_64.d
    sub_6b4d5b()

if (sub_6507e0(arg2, arg3, 0, &var_98, &var_a0, &var_a8, &var_ac, &var_8c, &var_80, &var_94, 
        &var_88, &var_9c, &var_90, &var_a4, &var_84, &var_48) != 0)
    int32_t edi_5 = 0
    char i
    
    do
        int32_t var_c8_10 = edi_5 + 1
        var_4_3.b = 6
        sub_405150(sub_4104a0("----- "), arg4)
        var_4_3.b = 3
        
        if (var_50_4 u>= 0x10)
            int32_t var_c8_12 = var_64.d
            sub_6b4d5b()
        
        char* eax_15 = var_48.d
        
        if (var_34 u< 0x10)
            eax_15 = &var_48
        
        char* var_c8_13 = eax_15
        var_4_3.b = 7
        sub_405150(sub_4104a0(0x731c1c), arg4)
        var_4_3.b = 3
        
        if (var_50_4 u>= 0x10)
            int32_t var_c8_15 = var_64.d
            sub_6b4d5b()
        
        sub_653810(arg4, var_a0, var_a8, var_8c, fconvert.s(fconvert.t(var_80)), 
            fconvert.s(fconvert.t(var_94)), var_88, var_9c, var_90, var_a4, var_84)
        var_50_4 = 0xf
        int32_t var_54_5 = 0
        var_64 = 0
        sub_401270(&var_64, 1, 0x731c30)
        var_4_3.b = 8
        sub_405220(&var_64, arg4)
        var_4_3.b = 3
        
        if (var_50_4 u>= 0x10)
            int32_t var_c8_17 = var_64.d
            sub_6b4d5b()
        
        edi_5 += 1
        i = sub_6507e0(arg2, arg3, edi_5, &var_98, &var_a0, &var_a8, &var_ac, &var_8c, &var_80, 
            &var_94, &var_88, &var_9c, &var_90, &var_a4, &var_84, &var_48)
    while (i != 0)

int32_t* ecx_18 = var_78
int32_t* result = (var_74 - ecx_18) s>> 2
int32_t* result_1 = result
*(arg1 + 0x68) = result
int32_t edx_14

if (ecx_18 != var_74)
    edx_14 = *ecx_18
else
    edx_14 = 0

*(arg1 + 0x204) = edx_14
int32_t esi_11 = 0

if (result s> 0)
    do
        var_4_3.b = 9
        sub_405150(sub_4104a0(0x731c34), arg4)
        var_4_3.b = 3
        
        if (var_50_4 u>= 0x10)
            int32_t var_c8_20 = var_64.d
            sub_6b4d5b()
        
        int32_t var_c8_21 = esi_11 + 1
        var_4_3.b = 0xa
        sub_405150(sub_4104a0("----- %3d "), arg4)
        var_4_3.b = 3
        
        if (var_50_4 u>= 0x10)
            int32_t var_c8_23 = var_64.d
            sub_6b4d5b()
        
        int32_t var_c8_24 = var_78[esi_11]
        var_4_3.b = 0xb
        result = sub_405150(sub_4104a0(0x731c50), arg4)
        var_4_3.b = 3
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_2c
            int32_t var_c8_26 = var_2c
            result = sub_6b4d5b()
        
        esi_11 += 1
    while (esi_11 s< result_1)
    
    ecx_18 = var_78

if (ecx_18 != 0)
    int32_t* var_c8_27 = ecx_18
    result = sub_6b4d5b()

var_78 = nullptr
int32_t var_74_1 = 0
int32_t var_70_1 = 0

if (var_34 u>= 0x10)
    int32_t var_c8_28 = var_48.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_b0)
return result
