// 函数: sub_5111b0
// 地址: 0x5111b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f74b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_154
int32_t eax_2 = data_78c474 ^ &var_154
int32_t __saved_edi
int32_t var_168 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_4 = 0
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
var_4.b = 1
int32_t* eax_5
eax_5.b = (arg1 & 0x18000000) == 0x10000000
int32_t var_fc = 0xf
int32_t var_100 = 0
char var_110 = 0
char* esi = &var_110
char var_148
int32_t var_134_4
char var_12c
int32_t var_118_4
int32_t var_fc_1
char var_f4
int32_t var_e0_1
char var_d8
int32_t var_c4_1
char var_bc
int32_t var_a8_1
char var_a0
int32_t var_8c_1
char var_84
int32_t var_70_1
char var_68
int32_t var_54_1
int32_t var_e0
int32_t var_c4
int32_t var_a8
int32_t var_8c
int32_t var_70
int32_t var_54

if (eax_5.b == 0)
    sub_401270(esi, 8, "Renderer")
    var_4.b = 0x1d
    int32_t var_134_5 = 0xf
    int32_t var_138_5 = 0
    var_148 = 0
    sub_401270(&var_148, 6, "Shader")
    var_4.b = 0x1e
    int32_t var_118_5 = 0xf
    int32_t var_11c_5 = 0
    var_12c = 0
    var_4.b = 0x1f
    int32_t* eax_30 = sub_401800(sub_401270(&var_12c, 4, "Data"), &var_110, &var_bc)
    var_4.b = 0x20
    var_154 = sub_401800(0, &var_148, &var_f4)
    var_4.b = 0x21
    int32_t* eax_32
    int32_t edx_25
    eax_32, edx_25 = sub_401800(0, &var_12c, &var_d8)
    var_4.b = 0x22
    var_4.b = 0x23
    int32_t* var_16c_28 =
        sub_4b3c20(sub_4b3c20(eax_32, edx_25, var_154, &var_a0), &var_68, eax_30, &var_68)
    var_4.b = 0x24
    sub_402c60(&var_84, "shader_vs.fx", nullptr)
    var_4.b = 0x25
    sub_401ef0(&var_30, &var_84)
    
    if (var_70 u>= 0x10)
        int32_t var_16c_29 = var_84.d
        sub_6b4d5b()
    
    var_70_1 = 0xf
    int32_t var_74_2 = 0
    var_84 = 0
    
    if (var_54 u>= 0x10)
        int32_t var_16c_30 = var_68.d
        sub_6b4d5b()
    
    var_54_1 = 0xf
    int32_t var_58_2 = 0
    var_68 = 0
    
    if (var_8c u>= 0x10)
        int32_t var_16c_31 = var_a0.d
        sub_6b4d5b()
    
    var_8c_1 = 0xf
    int32_t var_90_2 = 0
    var_a0 = 0
    
    if (var_c4 u>= 0x10)
        int32_t var_16c_32 = var_d8.d
        sub_6b4d5b()
    
    var_c4_1 = 0xf
    int32_t var_c8_2 = 0
    var_d8 = 0
    
    if (var_e0 u>= 0x10)
        int32_t var_16c_33 = var_f4.d
        sub_6b4d5b()
    
    var_e0_1 = 0xf
    int32_t var_e4_2 = 0
    var_f4 = 0
    
    if (var_a8 u>= 0x10)
        int32_t var_16c_34 = var_bc.d
        sub_6b4d5b()
    
    var_a8_1 = 0xf
    int32_t var_ac_2 = 0
    var_bc = 0
    
    if (var_118_5 u>= 0x10)
        int32_t var_16c_35 = var_12c.d
        sub_6b4d5b()
    
    int32_t var_118_6 = 0xf
    int32_t var_11c_6 = 0
    var_12c = 0
    
    if (var_134_5 u>= 0x10)
        int32_t var_16c_36 = var_148.d
        sub_6b4d5b()
    
    var_4.b = 1
    int32_t var_134_6 = 0xf
    int32_t var_138_6 = 0
    var_148 = 0
    
    if (var_fc u>= 0x10)
        int32_t var_16c_37 = var_110.d
        sub_6b4d5b()
    
    var_fc_1 = 0xf
    int32_t var_100_2 = 0
    var_110 = 0
    sub_401270(&var_110, 8, "Renderer")
    var_4.b = 0x26
    var_134_4 = 0xf
    int32_t var_138_7 = 0
    var_148 = 0
    sub_401270(&var_148, 6, "Shader")
    var_4.b = 0x27
    var_118_4 = 0xf
    int32_t var_11c_7 = 0
    var_12c = 0
    var_4.b = 0x28
    int32_t* eax_39 = sub_401800(sub_401270(&var_12c, 4, "Data"), &var_110, &var_bc)
    var_4.b = 0x29
    var_154 = sub_401800(0, &var_148, &var_f4)
    var_4.b = 0x2a
    int32_t* eax_41
    int32_t edx_33
    eax_41, edx_33 = sub_401800(0, &var_12c, &var_d8)
    var_4.b = 0x2b
    var_4.b = 0x2c
    int32_t* var_16c_40 =
        sub_4b3c20(sub_4b3c20(eax_41, edx_33, var_154, &var_a0), &var_68, eax_39, &var_68)
    var_4.b = 0x2d
    sub_402c60(&var_84, "shader_vs_output.fx", nullptr)
    var_4.b = 0x2e
else
    if ((arg1.b & 1) == 0)
        sub_401270(esi, 9, "ShadowMap")
        var_4.b = 0xb
        int32_t var_134_2 = 0xf
        int32_t var_138_2 = 0
        var_148 = 0
        sub_401270(&var_148, 6, "Shader")
        var_4.b = 0xc
        int32_t var_118_2 = 0xf
        int32_t var_11c_2 = 0
        var_12c = 0
        var_4.b = 0xd
        int32_t* eax_15 = sub_401800(sub_401270(&var_12c, 4, "Data"), &var_110, &var_bc)
        var_4.b = 0xe
        var_154 = sub_401800(0, &var_148, &var_f4)
        var_4.b = 0xf
        int32_t* eax_17
        int32_t edx_12
        eax_17, edx_12 = sub_401800(0, &var_12c, &var_d8)
        var_4.b = 0x10
        var_4.b = 0x11
        int32_t* var_16c_13 =
            sub_4b3c20(sub_4b3c20(eax_17, edx_12, var_154, &var_a0), &var_68, eax_15, &var_68)
        var_4.b = 0x12
        sub_402c60(&var_84, "vs_shadowmap.fx", nullptr)
        var_4.b = 0x13
        sub_401ef0(&var_30, &var_84)
        
        if (var_70 u>= 0x10)
            int32_t var_16c_14 = var_84.d
            sub_6b4d5b()
        
        var_70_1 = 0xf
        int32_t var_74_1 = 0
        var_84 = 0
        
        if (var_54 u>= 0x10)
            int32_t var_16c_15 = var_68.d
            sub_6b4d5b()
        
        var_54_1 = 0xf
        int32_t var_58_1 = 0
        var_68 = 0
        
        if (var_8c u>= 0x10)
            int32_t var_16c_16 = var_a0.d
            sub_6b4d5b()
        
        var_8c_1 = 0xf
        int32_t var_90_1 = 0
        var_a0 = 0
        
        if (var_c4 u>= 0x10)
            int32_t var_16c_17 = var_d8.d
            sub_6b4d5b()
        
        var_c4_1 = 0xf
        int32_t var_c8_1 = 0
        var_d8 = 0
        
        if (var_e0 u>= 0x10)
            int32_t var_16c_18 = var_f4.d
            sub_6b4d5b()
        
        var_e0_1 = 0xf
        int32_t var_e4_1 = 0
        var_f4 = 0
        
        if (var_a8 u>= 0x10)
            int32_t var_16c_19 = var_bc.d
            sub_6b4d5b()
        
        var_a8_1 = 0xf
        int32_t var_ac_1 = 0
        var_bc = 0
        
        if (var_118_2 u>= 0x10)
            int32_t var_16c_20 = var_12c.d
            sub_6b4d5b()
        
        int32_t var_118_3 = 0xf
        int32_t var_11c_3 = 0
        var_12c = 0
        
        if (var_134_2 u>= 0x10)
            int32_t var_16c_21 = var_148.d
            sub_6b4d5b()
        
        int32_t var_134_3 = 0xf
        int32_t var_138_3 = 0
        var_148 = 0
    else
        sub_401270(esi, 9, "ShadowMap")
        var_4.b = 2
        int32_t var_118 = 0xf
        int32_t var_11c = 0
        var_12c = 0
        sub_401270(&var_12c, 6, "Shader")
        var_4.b = 3
        int32_t var_134 = 0xf
        int32_t var_138 = 0
        var_148 = 0
        var_4.b = 4
        int32_t* eax_6 = sub_401800(sub_401270(&var_148, 4, "Data"), &var_110, &var_84)
        var_4.b = 5
        var_154 = sub_401800(0, &var_12c, &var_68)
        var_4.b = 6
        int32_t* eax_8
        int32_t edx_5
        eax_8, edx_5 = sub_401800(0, &var_148, &var_a0)
        var_4.b = 7
        var_4.b = 8
        int32_t* var_16c_2 =
            sub_4b3c20(sub_4b3c20(eax_8, edx_5, var_154, &var_d8), &var_f4, eax_6, &var_f4)
        var_4.b = 9
        sub_402c60(&var_bc, "vs_shadowmap_blend.fx", nullptr)
        var_4.b = 0xa
        sub_401ef0(&var_30, &var_bc)
        
        if (var_a8 u>= 0x10)
            int32_t var_16c_3 = var_bc.d
            sub_6b4d5b()
        
        var_a8_1 = 0xf
        int32_t var_ac = 0
        var_bc = 0
        
        if (var_e0 u>= 0x10)
            int32_t var_16c_4 = var_f4.d
            sub_6b4d5b()
        
        var_e0_1 = 0xf
        int32_t var_e4 = 0
        var_f4 = 0
        
        if (var_c4 u>= 0x10)
            int32_t var_16c_5 = var_d8.d
            sub_6b4d5b()
        
        var_c4_1 = 0xf
        int32_t var_c8 = 0
        var_d8 = 0
        
        if (var_8c u>= 0x10)
            int32_t var_16c_6 = var_a0.d
            sub_6b4d5b()
        
        var_8c_1 = 0xf
        int32_t var_90 = 0
        var_a0 = 0
        
        if (var_54 u>= 0x10)
            int32_t var_16c_7 = var_68.d
            sub_6b4d5b()
        
        var_54_1 = 0xf
        int32_t var_58 = 0
        var_68 = 0
        
        if (var_70 u>= 0x10)
            int32_t var_16c_8 = var_84.d
            sub_6b4d5b()
        
        var_70_1 = 0xf
        int32_t var_74 = 0
        var_84 = 0
        
        if (var_134 u>= 0x10)
            int32_t var_16c_9 = var_148.d
            sub_6b4d5b()
        
        int32_t var_134_1 = 0xf
        int32_t var_138_1 = 0
        var_148 = 0
        
        if (var_118 u>= 0x10)
            int32_t var_16c_10 = var_12c.d
            sub_6b4d5b()
        
        int32_t var_118_1 = 0xf
        int32_t var_11c_1 = 0
        var_12c = 0
    
    var_4.b = 1
    
    if (var_fc u>= 0x10)
        int32_t var_16c_22 = var_110.d
        sub_6b4d5b()
    
    var_fc_1 = 0xf
    int32_t var_100_1 = 0
    var_110 = 0
    sub_401270(&var_110, 9, "ShadowMap")
    var_4.b = 0x14
    var_134_4 = 0xf
    int32_t var_138_4 = 0
    var_148 = 0
    sub_401270(&var_148, 6, "Shader")
    var_4.b = 0x15
    var_118_4 = 0xf
    int32_t var_11c_4 = 0
    var_12c = 0
    var_4.b = 0x16
    int32_t* eax_24 = sub_401800(sub_401270(&var_12c, 4, "Data"), &var_110, &var_bc)
    var_4.b = 0x17
    var_154 = sub_401800(0, &var_148, &var_f4)
    var_4.b = 0x18
    int32_t* eax_26
    int32_t edx_20
    eax_26, edx_20 = sub_401800(0, &var_12c, &var_d8)
    var_4.b = 0x19
    var_4.b = 0x1a
    int32_t* var_16c_25 =
        sub_4b3c20(sub_4b3c20(eax_26, edx_20, var_154, &var_a0), &var_68, eax_24, &var_68)
    var_4.b = 0x1b
    sub_402c60(&var_84, "shader_vs_output.fx", nullptr)
    var_4.b = 0x1c
sub_401ef0(&var_4c, &var_84)

if (var_70_1 u>= 0x10)
    int32_t var_16c_41 = var_84.d
    sub_6b4d5b()

var_84 = 0
int32_t var_74_3 = 0
int32_t var_70_2 = 0xf

if (var_54_1 u>= 0x10)
    int32_t var_16c_42 = var_68.d
    sub_6b4d5b()

var_68 = 0
int32_t var_58_3 = 0
int32_t var_54_2 = 0xf

if (var_8c_1 u>= 0x10)
    int32_t var_16c_43 = var_a0.d
    sub_6b4d5b()

var_a0 = 0
int32_t var_90_3 = 0
int32_t var_8c_2 = 0xf

if (var_c4_1 u>= 0x10)
    int32_t var_16c_44 = var_d8.d
    sub_6b4d5b()

var_d8 = 0
int32_t var_c8_3 = 0
int32_t var_c4_2 = 0xf

if (var_e0_1 u>= 0x10)
    int32_t var_16c_45 = var_f4.d
    sub_6b4d5b()

var_f4 = 0
int32_t var_e4_3 = 0
int32_t var_e0_2 = 0xf

if (var_a8_1 u>= 0x10)
    int32_t var_16c_46 = var_bc.d
    sub_6b4d5b()

var_bc = 0
int32_t var_ac_3 = 0
int32_t var_a8_2 = 0xf

if (var_118_4 u>= 0x10)
    int32_t var_16c_47 = var_12c.d
    sub_6b4d5b()

var_12c = 0
int32_t var_11c_8 = 0
int32_t var_118_7 = 0xf

if (var_134_4 u>= 0x10)
    int32_t var_16c_48 = var_148.d
    sub_6b4d5b()

var_4.b = 1
var_148 = 0
int32_t var_138_8 = 0
int32_t var_134_7 = 0xf

if (var_fc_1 u>= 0x10)
    int32_t var_16c_49 = var_110.d
    sub_6b4d5b()

struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_513360(&var_30, arg2).b != 0)
    char var_14d = 0
    sub_54e400(&var_14d, arg2)
    var_148.d = 0
    char* var_144_1 = nullptr
    int32_t var_140_1 = 0
    var_4.b = 0x2f
    
    if (sub_513360(&var_4c, &var_148) != 0)
        int32_t edi_19 = var_148.d
        int32_t* var_16c_56 = arg2
        sub_50fac0(arg2, *arg2, edi_19, var_144_1)
        
        if (edi_19 != 0)
            int32_t var_16c_57 = edi_19
            sub_6b4d5b()
        
        if (var_38 u>= 0x10)
            int32_t var_16c_58 = var_4c.d
            sub_6b4d5b()
        
        int32_t var_38_3 = 0xf
        int32_t var_3c_3 = 0
        var_4c = 0
        
        if (var_1c u>= 0x10)
            int32_t var_16c_59 = var_30.d
            sub_6b4d5b()
        
        result.b = 1
    else
        result = var_148.d
        
        if (result != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
            sub_6b4d5b()
        
        if (var_38 u>= 0x10)
            int32_t var_16c_54 = var_4c.d
            sub_6b4d5b()
        
        int32_t var_38_2 = 0xf
        int32_t var_3c_2 = 0
        var_4c = 0
        
        if (var_1c u< 0x10)
            result.b = 0
        else
            int32_t var_16c_55 = var_30.d
            sub_6b4d5b()
            result.b = 0
else
    if (var_38 u>= 0x10)
        int32_t var_16c_51 = var_4c.d
        sub_6b4d5b()
    
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    
    if (var_1c u>= 0x10)
        int32_t var_16c_52 = var_30.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_154)
return result
