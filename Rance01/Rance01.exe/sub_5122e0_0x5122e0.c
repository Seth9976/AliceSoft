// 函数: sub_5122e0
// 地址: 0x5122e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f51f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_560
int32_t eax_2 = data_78c474 ^ &var_560
int32_t __saved_edi
int32_t var_574 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_560 = arg2
int32_t var_504 = 0xf
int32_t var_508 = 0
char var_518 = 0
int32_t var_4 = 0
int32_t var_520 = 0xf
int32_t var_524 = 0
char var_534 = 0
int32_t eax_8 = arg2 u>> 0x1b & 3
var_4.b = 1
bool result
char var_550

if (eax_8 == 1)
    int32_t var_37c_1 = 0xf
    int32_t var_380_1 = 0
    char var_390 = 0
    sub_401270(&var_390, 6, "Filter")
    var_4.b = 2
    int32_t var_424_1 = 0xf
    int32_t var_428_1 = 0
    char var_438 = 0
    sub_401270(&var_438, 6, "Shader")
    var_4.b = 3
    int32_t var_45c_1 = 0xf
    int32_t var_460_1 = 0
    char var_470 = 0
    sub_401270(&var_470, 4, "Data")
    int32_t* var_578_49 = var_560
    var_4.b = 4
    char var_2c
    int32_t* eax_48
    int32_t ecx_25
    eax_48, ecx_25 = sub_513d90(&var_2c)
    var_4.b = 5
    char var_64
    int32_t* eax_49 = sub_401800(ecx_25, &var_390, &var_64)
    var_4.b = 6
    char var_9c
    var_560 = sub_401800(0, &var_438, &var_9c)
    var_4.b = 7
    var_4.b = 8
    char var_10c
    char var_d4
    int32_t* eax_52
    int32_t edx_37
    eax_52, edx_37 = sub_4b3c20(sub_401800(0, &var_470, &var_d4), &var_10c, var_560, &var_10c)
    var_4.b = 9
    var_4.b = 0xa
    var_4.b = 0xb
    char var_17c
    char var_144
    sub_401ef0(&var_518, 
        sub_4b3c20(sub_4b3c20(eax_52, edx_37, eax_49, &var_144), &var_17c, eax_48, &var_17c))
    int32_t var_168
    
    if (var_168 u>= 0x10)
        int32_t var_578_53 = var_17c.d
        sub_6b4d5b()
    
    int32_t var_168_1 = 0xf
    int32_t var_16c_1 = 0
    var_17c = 0
    int32_t var_130
    
    if (var_130 u>= 0x10)
        int32_t var_578_54 = var_144.d
        sub_6b4d5b()
    
    int32_t var_130_1 = 0xf
    int32_t var_134_1 = 0
    var_144 = 0
    int32_t var_f8
    
    if (var_f8 u>= 0x10)
        int32_t var_578_55 = var_10c.d
        sub_6b4d5b()
    
    int32_t var_f8_1 = 0xf
    int32_t var_fc_1 = 0
    var_10c = 0
    int32_t var_c0
    
    if (var_c0 u>= 0x10)
        int32_t var_578_56 = var_d4.d
        sub_6b4d5b()
    
    int32_t var_c0_1 = 0xf
    int32_t var_c4_1 = 0
    var_d4 = 0
    int32_t var_88
    
    if (var_88 u>= 0x10)
        int32_t var_578_57 = var_9c.d
        sub_6b4d5b()
    
    int32_t var_88_1 = 0xf
    int32_t var_8c_1 = 0
    var_9c = 0
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_578_58 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_578_59 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_45c_1 u>= 0x10)
        int32_t var_578_60 = var_470.d
        sub_6b4d5b()
    
    int32_t var_45c_2 = 0xf
    int32_t var_460_2 = 0
    var_470 = 0
    
    if (var_424_1 u>= 0x10)
        int32_t var_578_61 = var_438.d
        sub_6b4d5b()
    
    var_4.b = 1
    int32_t var_424_2 = 0xf
    int32_t var_428_2 = 0
    var_438 = 0
    
    if (var_37c_1 u< 0x10)
        goto label_51323b
    
    int32_t var_578_62 = var_390.d
label_51322a:
    sub_6b4d5b()
label_51323b:
    
    if (sub_513360(&var_518, arg1) != 0)
        char var_559 = 0
        sub_54e400(&var_559, arg1)
        
        if (var_524 == 0)
            goto label_5132ff
        
        var_550.d = 0
        char* var_54c_1 = nullptr
        int32_t var_548_1 = 0
        var_4.b = 0x30
        
        if (sub_513360(&var_534, &var_550) != 0)
            sub_50faa0(arg1, *arg1, var_550.d, var_54c_1)
            sub_65ab60(&var_550)
        label_5132ff:
            
            if (var_520 u>= 0x10)
                int32_t var_578_68 = var_534.d
                sub_6b4d5b()
            
            int32_t var_520_2 = 0xf
            int32_t var_524_2 = 0
            var_534 = 0
            
            if (var_504 u>= 0x10)
                int32_t var_578_69 = var_518.d
                sub_6b4d5b()
            
            result = true
        else
            sub_65ab60(&var_550)
            sub_401110(&var_534)
            sub_401110(&var_518)
            result = false
    else
        if (var_520 u>= 0x10)
            int32_t var_578_64 = var_534.d
            sub_6b4d5b()
        
        int32_t var_520_1 = 0xf
        int32_t var_524_1 = 0
        var_534 = 0
        
        if (var_504 u>= 0x10)
            int32_t var_578_65 = var_518.d
            sub_6b4d5b()
        
        result = false
else
    if (eax_8 == 2)
        int32_t var_3ec_1 = 0xf
        int32_t var_3f0_1 = 0
        char var_400 = 0
        sub_401270(&var_400, 9, "ShadowMap")
        var_4.b = 0xc
        int32_t var_440_1 = 0xf
        int32_t var_444_1 = 0
        char var_454 = 0
        sub_401270(&var_454, 6, "Shader")
        var_4.b = 0xd
        int32_t var_3d0_1 = 0xf
        int32_t var_3d4_1 = 0
        char var_3e4 = 0
        var_4.b = 0xe
        char var_304
        int32_t* eax_29 = sub_401800(sub_401270(&var_3e4, 4, "Data"), &var_400, &var_304)
        var_4.b = 0xf
        char var_33c
        var_560 = sub_401800(0, &var_454, &var_33c)
        var_4.b = 0x10
        char var_358
        int32_t* eax_31
        int32_t edx_20
        eax_31, edx_20 = sub_401800(0, &var_3e4, &var_358)
        var_4.b = 0x11
        var_4.b = 0x12
        char var_1d0
        char var_48
        int32_t* var_578_27 =
            sub_4b3c20(sub_4b3c20(eax_31, edx_20, var_560, &var_1d0), &var_48, eax_29, &var_48)
        var_4.b = 0x13
        char var_208
        sub_402c60(&var_208, "ps_shadowmap.fx", nullptr)
        var_4.b = 0x14
        sub_401ef0(&var_518, &var_208)
        int32_t var_1f4
        
        if (var_1f4 u>= 0x10)
            int32_t var_578_28 = var_208.d
            sub_6b4d5b()
        
        int32_t var_1f4_1 = 0xf
        int32_t var_1f8_1 = 0
        var_208 = 0
        int32_t var_34
        
        if (var_34 u>= 0x10)
            int32_t var_578_29 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        int32_t var_1bc
        
        if (var_1bc u>= 0x10)
            int32_t var_578_30 = var_1d0.d
            sub_6b4d5b()
        
        int32_t var_1bc_1 = 0xf
        int32_t var_1c0_1 = 0
        var_1d0 = 0
        int32_t var_344
        
        if (var_344 u>= 0x10)
            int32_t var_578_31 = var_358.d
            sub_6b4d5b()
        
        int32_t var_344_1 = 0xf
        int32_t var_348_1 = 0
        var_358 = 0
        int32_t var_328
        
        if (var_328 u>= 0x10)
            int32_t var_578_32 = var_33c.d
            sub_6b4d5b()
        
        int32_t var_328_1 = 0xf
        int32_t var_32c_1 = 0
        var_33c = 0
        int32_t var_2f0
        
        if (var_2f0 u>= 0x10)
            int32_t var_578_33 = var_304.d
            sub_6b4d5b()
        
        int32_t var_2f0_1 = 0xf
        int32_t var_2f4_1 = 0
        var_304 = 0
        
        if (var_3d0_1 u>= 0x10)
            int32_t var_578_34 = var_3e4.d
            sub_6b4d5b()
        
        int32_t var_3d0_2 = 0xf
        int32_t var_3d4_2 = 0
        var_3e4 = 0
        
        if (var_440_1 u>= 0x10)
            int32_t var_578_35 = var_454.d
            sub_6b4d5b()
        
        var_4.b = 1
        int32_t var_440_2 = 0xf
        int32_t var_444_2 = 0
        var_454 = 0
        
        if (var_3ec_1 u>= 0x10)
            int32_t var_578_36 = var_400.d
            sub_6b4d5b()
        
        int32_t var_3ec_2 = 0xf
        int32_t var_3f0_2 = 0
        var_400 = 0
        int32_t var_398_1 = 0xf
        int32_t var_39c_1 = 0
        char var_3ac = 0
        sub_401270(&var_3ac, 9, "ShadowMap")
        var_4.b = 0x15
        int32_t var_494_1 = 0xf
        int32_t var_498_1 = 0
        char var_4a8 = 0
        sub_401270(&var_4a8, 6, "Shader")
        var_4.b = 0x16
        int32_t var_4cc_1 = 0xf
        int32_t var_4d0_1 = 0
        char var_4e0 = 0
        var_4.b = 0x17
        char var_1b4
        int32_t* eax_38 = sub_401800(sub_401270(&var_4e0, 4, "Data"), &var_3ac, &var_1b4)
        var_4.b = 0x18
        char var_1ec
        var_560 = sub_401800(0, &var_4a8, &var_1ec)
        var_4.b = 0x19
        char var_224
        int32_t* eax_40
        int32_t edx_28
        eax_40, edx_28 = sub_401800(0, &var_4e0, &var_224)
        var_4.b = 0x1a
        var_4.b = 0x1b
        char var_294
        char var_25c
        int32_t* var_578_39 =
            sub_4b3c20(sub_4b3c20(eax_40, edx_28, var_560, &var_25c), &var_294, eax_38, &var_294)
        var_4.b = 0x1c
        char var_2cc
        sub_402c60(&var_2cc, "shader_vs_output.fx", nullptr)
        var_4.b = 0x1d
        sub_401ef0(&var_534, &var_2cc)
        int32_t var_2b8
        
        if (var_2b8 u>= 0x10)
            int32_t var_578_40 = var_2cc.d
            sub_6b4d5b()
        
        int32_t var_2b8_1 = 0xf
        int32_t var_2bc_1 = 0
        var_2cc = 0
        int32_t var_280
        
        if (var_280 u>= 0x10)
            int32_t var_578_41 = var_294.d
            sub_6b4d5b()
        
        int32_t var_280_1 = 0xf
        int32_t var_284_1 = 0
        var_294 = 0
        int32_t var_248
        
        if (var_248 u>= 0x10)
            int32_t var_578_42 = var_25c.d
            sub_6b4d5b()
        
        int32_t var_248_1 = 0xf
        int32_t var_24c_1 = 0
        var_25c = 0
        int32_t var_210
        
        if (var_210 u>= 0x10)
            int32_t var_578_43 = var_224.d
            sub_6b4d5b()
        
        int32_t var_210_1 = 0xf
        int32_t var_214_1 = 0
        var_224 = 0
        int32_t var_1d8
        
        if (var_1d8 u>= 0x10)
            int32_t var_578_44 = var_1ec.d
            sub_6b4d5b()
        
        int32_t var_1d8_1 = 0xf
        int32_t var_1dc_1 = 0
        var_1ec = 0
        int32_t var_1a0
        
        if (var_1a0 u>= 0x10)
            int32_t var_578_45 = var_1b4.d
            sub_6b4d5b()
        
        int32_t var_1a0_1 = 0xf
        int32_t var_1a4_1 = 0
        var_1b4 = 0
        
        if (var_4cc_1 u>= 0x10)
            int32_t var_578_46 = var_4e0.d
            sub_6b4d5b()
        
        int32_t var_4cc_2 = 0xf
        int32_t var_4d0_2 = 0
        var_4e0 = 0
        
        if (var_494_1 u>= 0x10)
            int32_t var_578_47 = var_4a8.d
            sub_6b4d5b()
        
        var_4.b = 1
        int32_t var_494_2 = 0xf
        int32_t var_498_2 = 0
        var_4a8 = 0
        
        if (var_398_1 u< 0x10)
            goto label_51323b
        
        int32_t var_578_48 = var_3ac.d
        goto label_51322a
    
    if (eax_8 == 3)
        int32_t var_4b0_1 = 0xf
        int32_t var_4b4_1 = 0
        char var_4c4 = 0
        sub_401270(&var_4c4, 8, "Renderer")
        var_4.b = 0x1e
        int32_t var_478_1 = 0xf
        int32_t var_47c_1 = 0
        char var_48c = 0
        sub_401270(&var_48c, 6, "Shader")
        var_4.b = 0x1f
        int32_t var_53c_1 = 0xf
        int32_t var_540_1 = 0
        var_550 = 0
        var_4.b = 0x20
        char var_80
        int32_t* eax_11 = sub_401800(sub_401270(&var_550, 4, "Data"), &var_4c4, &var_80)
        var_4.b = 0x21
        char var_374
        var_560 = sub_401800(0, &var_48c, &var_374)
        var_4.b = 0x22
        char var_198
        int32_t* eax_13
        int32_t edx_4
        eax_13, edx_4 = sub_401800(0, &var_550, &var_198)
        var_4.b = 0x23
        var_4.b = 0x24
        char var_320
        char var_f0
        int32_t* var_578_3 =
            sub_4b3c20(sub_4b3c20(eax_13, edx_4, var_560, &var_320), &var_f0, eax_11, &var_f0)
        var_4.b = 0x25
        char var_2e8
        sub_402c60(&var_2e8, "shader_ps.fx", nullptr)
        var_4.b = 0x26
        sub_401ef0(&var_518, &var_2e8)
        int32_t var_2d4
        
        if (var_2d4 u>= 0x10)
            int32_t var_578_4 = var_2e8.d
            sub_6b4d5b()
        
        int32_t var_2d4_1 = 0xf
        int32_t var_2d8_1 = 0
        var_2e8 = 0
        int32_t var_dc
        
        if (var_dc u>= 0x10)
            int32_t var_578_5 = var_f0.d
            sub_6b4d5b()
        
        int32_t var_dc_1 = 0xf
        int32_t var_e0_1 = 0
        var_f0 = 0
        int32_t var_30c
        
        if (var_30c u>= 0x10)
            int32_t var_578_6 = var_320.d
            sub_6b4d5b()
        
        int32_t var_30c_1 = 0xf
        int32_t var_310_1 = 0
        var_320 = 0
        int32_t var_184
        
        if (var_184 u>= 0x10)
            int32_t var_578_7 = var_198.d
            sub_6b4d5b()
        
        int32_t var_184_1 = 0xf
        int32_t var_188_1 = 0
        var_198 = 0
        int32_t var_360
        
        if (var_360 u>= 0x10)
            int32_t var_578_8 = var_374.d
            sub_6b4d5b()
        
        int32_t var_360_1 = 0xf
        int32_t var_364_1 = 0
        var_374 = 0
        int32_t var_6c
        
        if (var_6c u>= 0x10)
            int32_t var_578_9 = var_80.d
            sub_6b4d5b()
        
        int32_t var_6c_1 = 0xf
        int32_t var_70_1 = 0
        var_80 = 0
        
        if (var_53c_1 u>= 0x10)
            int32_t var_578_10 = var_550.d
            sub_6b4d5b()
        
        int32_t var_53c_2 = 0xf
        int32_t var_540_2 = 0
        var_550 = 0
        
        if (var_478_1 u>= 0x10)
            int32_t var_578_11 = var_48c.d
            sub_6b4d5b()
        
        var_4.b = 1
        int32_t var_478_2 = 0xf
        int32_t var_47c_2 = 0
        var_48c = 0
        
        if (var_4b0_1 u>= 0x10)
            int32_t var_578_12 = var_4c4.d
            sub_6b4d5b()
        
        int32_t var_4b0_2 = 0xf
        int32_t var_4b4_2 = 0
        var_4c4 = 0
        int32_t var_3b4_1 = 0xf
        int32_t var_3b8_1 = 0
        char var_3c8 = 0
        sub_401270(&var_3c8, 8, "Renderer")
        var_4.b = 0x27
        int32_t var_4e8_1 = 0xf
        int32_t var_4ec_1 = 0
        char var_4fc = 0
        sub_401270(&var_4fc, 6, "Shader")
        var_4.b = 0x28
        int32_t var_408_1 = 0xf
        int32_t var_40c_1 = 0
        char var_41c = 0
        var_4.b = 0x29
        char var_128
        int32_t* eax_20 = sub_401800(sub_401270(&var_41c, 4, "Data"), &var_3c8, &var_128)
        var_4.b = 0x2a
        char var_240
        var_560 = sub_401800(0, &var_4fc, &var_240)
        var_4.b = 0x2b
        char var_b8
        int32_t* eax_22
        int32_t edx_12
        eax_22, edx_12 = sub_401800(0, &var_41c, &var_b8)
        var_4.b = 0x2c
        var_4.b = 0x2d
        char var_278
        char var_160
        int32_t* var_578_15 =
            sub_4b3c20(sub_4b3c20(eax_22, edx_12, var_560, &var_278), &var_160, eax_20, &var_160)
        var_4.b = 0x2e
        char var_2b0
        sub_402c60(&var_2b0, "shader_vs_output.fx", nullptr)
        var_4.b = 0x2f
        sub_401ef0(&var_534, &var_2b0)
        int32_t var_29c
        
        if (var_29c u>= 0x10)
            int32_t var_578_16 = var_2b0.d
            sub_6b4d5b()
        
        int32_t var_29c_1 = 0xf
        int32_t var_2a0_1 = 0
        var_2b0 = 0
        int32_t var_14c
        
        if (var_14c u>= 0x10)
            int32_t var_578_17 = var_160.d
            sub_6b4d5b()
        
        int32_t var_14c_1 = 0xf
        int32_t var_150_1 = 0
        var_160 = 0
        int32_t var_264
        
        if (var_264 u>= 0x10)
            int32_t var_578_18 = var_278.d
            sub_6b4d5b()
        
        int32_t var_264_1 = 0xf
        int32_t var_268_1 = 0
        var_278 = 0
        int32_t var_a4
        
        if (var_a4 u>= 0x10)
            int32_t var_578_19 = var_b8.d
            sub_6b4d5b()
        
        int32_t var_a4_1 = 0xf
        int32_t var_a8_1 = 0
        var_b8 = 0
        int32_t var_22c
        
        if (var_22c u>= 0x10)
            int32_t var_578_20 = var_240.d
            sub_6b4d5b()
        
        int32_t var_22c_1 = 0xf
        int32_t var_230_1 = 0
        var_240 = 0
        int32_t var_114
        
        if (var_114 u>= 0x10)
            int32_t var_578_21 = var_128.d
            sub_6b4d5b()
        
        int32_t var_114_1 = 0xf
        int32_t var_118_1 = 0
        var_128 = 0
        
        if (var_408_1 u>= 0x10)
            int32_t var_578_22 = var_41c.d
            sub_6b4d5b()
        
        int32_t var_408_2 = 0xf
        int32_t var_40c_2 = 0
        var_41c = 0
        
        if (var_4e8_1 u>= 0x10)
            int32_t var_578_23 = var_4fc.d
            sub_6b4d5b()
        
        var_4.b = 1
        int32_t var_4e8_2 = 0xf
        int32_t var_4ec_2 = 0
        var_4fc = 0
        
        if (var_3b4_1 u< 0x10)
            goto label_51323b
        
        int32_t var_578_24 = var_3c8.d
        goto label_51322a
    
    result = false
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_560)
return result
