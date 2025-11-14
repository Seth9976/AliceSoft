// 函数: sub_643fd0
// 地址: 0x643fd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c8d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
void* edi = result[0x23]
int32_t esi = 0

if (edi != 0)
    int32_t var_50 = 1
    sub_42e070(edi + 0x39c, &var_70, &var_50)
    int32_t* ecx_1 = var_70
    
    if (ecx_1 != *(edi + 0x3a0))
        var_50 = ecx_1[4]
    else
        var_50 = 0
    
    var_70 = 2
    int32_t* var_54
    sub_42e070(edi + 0x39c, &var_54, &var_70)
    int32_t* ecx_3 = var_54
    
    if (ecx_3 != *(edi + 0x3a0))
        var_54 = ecx_3[4]
    else
        var_54 = nullptr
    
    var_70 = 3
    int32_t* var_6c
    sub_42e070(edi + 0x39c, &var_6c, &var_70)
    int32_t* ecx_5 = var_6c
    int32_t var_3c_1
    
    if (ecx_5 != *(edi + 0x3a0))
        var_3c_1 = ecx_5[4]
    else
        var_3c_1 = 0
    
    var_70 = 4
    sub_42e070(edi + 0x39c, &var_6c, &var_70)
    int32_t* ecx_8 = var_6c
    int32_t var_40_1
    
    if (ecx_8 != *(edi + 0x3a0))
        var_40_1 = ecx_8[4]
    else
        var_40_1 = 0
    
    var_70 = 5
    sub_42e070(edi + 0x39c, &var_6c, &var_70)
    int32_t* ecx_10 = var_6c
    int32_t var_38_1
    
    if (ecx_10 != *(edi + 0x3a0))
        var_38_1 = ecx_10[4]
    else
        var_38_1 = 0
    
    var_70 = 6
    sub_42e070(edi + 0x39c, &var_6c, &var_70)
    int32_t* ecx_12 = var_6c
    int32_t var_44_1
    
    if (ecx_12 != *(edi + 0x3a0))
        var_44_1 = ecx_12[4]
    else
        var_44_1 = 0
    
    var_70 = 7
    sub_42e070(edi + 0x39c, &var_6c, &var_70)
    int32_t* ecx_15 = var_6c
    int32_t var_34_1
    
    if (ecx_15 != *(edi + 0x3a0))
        var_34_1 = ecx_15[4]
    else
        var_34_1 = 0
    
    var_70 = 8
    sub_42e070(edi + 0x39c, &var_6c, &var_70)
    int32_t* ecx_17 = var_6c
    int32_t var_4c_1
    
    if (ecx_17 != *(edi + 0x3a0))
        var_4c_1 = ecx_17[4]
    else
        var_4c_1 = 0
    
    var_70 = 9
    sub_42e070(edi + 0x39c, &var_6c, &var_70)
    int32_t* ecx_19 = var_6c
    int32_t var_48_1
    
    if (ecx_19 != *(edi + 0x3a0))
        var_48_1 = ecx_19[4]
    else
        var_48_1 = 0
    
    var_70 = 1
    sub_42e070(edi + 0x3ac, &var_6c, &var_70)
    int32_t* ecx_22 = var_6c
    
    if (ecx_22 != *(edi + 0x3b0))
        var_70 = ecx_22[4]
    else
        var_70 = nullptr
    
    var_6c = 2
    int32_t* var_64
    sub_42e070(edi + 0x3ac, &var_64, &var_6c)
    int32_t* ecx_24 = var_64
    
    if (ecx_24 != *(edi + 0x3b0))
        var_6c = ecx_24[4]
    else
        var_6c = nullptr
    
    var_64 = 3
    int32_t* var_58
    sub_42e070(edi + 0x3ac, &var_58, &var_64)
    int32_t* ecx_26 = var_58
    
    if (ecx_26 != *(edi + 0x3b0))
        var_64 = ecx_26[4]
    else
        var_64 = nullptr
    
    var_58 = 4
    int32_t* var_60
    sub_42e070(edi + 0x3ac, &var_60, &var_58)
    int32_t* ecx_29 = var_60
    
    if (ecx_29 != *(edi + 0x3b0))
        var_58 = ecx_29[4]
    else
        var_58 = nullptr
    
    var_60 = 5
    int32_t* var_68
    sub_42e070(edi + 0x3ac, &var_68, &var_60)
    int32_t* ecx_31 = var_68
    
    if (ecx_31 != *(edi + 0x3b0))
        var_60 = ecx_31[4]
    else
        var_60 = nullptr
    
    var_68 = 6
    int32_t* var_5c
    sub_42e070(edi + 0x3ac, &var_5c, &var_68)
    int32_t* ecx_33 = var_5c
    
    if (ecx_33 != *(edi + 0x3b0))
        esi = ecx_33[4]
    
    var_5c = 7
    sub_42e070(edi + 0x3ac, &var_68, &var_5c)
    int32_t* ecx_35 = var_68
    int32_t ebp_1
    
    if (ecx_35 != *(edi + 0x3b0))
        ebp_1 = ecx_35[4]
    else
        ebp_1 = 0
    
    var_5c = 8
    sub_42e070(edi + 0x3ac, &var_68, &var_5c)
    int32_t* ecx_37 = var_68
    int32_t ebx_1
    
    if (ecx_37 != *(edi + 0x3b0))
        ebx_1 = ecx_37[4]
    else
        ebx_1 = 0
    
    var_5c = 9
    sub_42e070(edi + 0x3ac, &var_68, &var_5c)
    int32_t* eax_28 = var_68
    int32_t edx_6
    
    if (eax_28 != *(edi + 0x3b0))
        edx_6 = eax_28[4]
    else
        edx_6 = 0
    
    void* eax_37 =
        var_4c_1 + var_48_1 + var_34_1 + var_44_1 + var_38_1 + var_40_1 + var_3c_1 + var_54 + var_50
    void* ecx_46 = edx_6 + ebx_1 + ebp_1 + esi + var_60 + var_58 + var_64 + var_6c + var_70
    int32_t var_88_19 = ecx_46 + eax_37
    void* var_8c_1 = ecx_46
    void* var_90_1 = eax_37
    int32_t var_94_1 = edx_6 + var_48_1
    int32_t var_98_1 = edx_6
    int32_t var_9c_1 = var_48_1
    int32_t var_a0_1 = ebx_1 + var_4c_1
    int32_t var_a4_1 = ebx_1
    int32_t var_a8_1 = var_4c_1
    int32_t var_ac_1 = var_34_1 + ebp_1
    int32_t var_b0_1 = ebp_1
    int32_t var_b4_1 = var_34_1
    int32_t var_b8_1 = esi + var_44_1
    int32_t var_bc_1 = esi
    int32_t var_c0_1 = var_44_1
    int32_t* eax_42 = var_60
    void* var_c4_1 = eax_42 + var_38_1
    int32_t* var_c8_1 = eax_42
    int32_t* eax_43 = var_58
    int32_t var_cc_1 = var_38_1
    void* var_d0_1 = eax_43 + var_40_1
    int32_t* var_d4_1 = eax_43
    int32_t* eax_44 = var_64
    int32_t var_d8_1 = var_40_1
    void* var_dc_1 = eax_44 + var_3c_1
    int32_t* var_e0_1 = eax_44
    int32_t* eax_45 = var_6c
    int32_t var_e4_1 = var_3c_1
    int32_t* ecx_52 = var_54
    int32_t var_e8_1 = eax_45 + ecx_52
    int32_t* var_ec_1 = eax_45
    int32_t* eax_46 = var_70
    int32_t* var_f0_1 = ecx_52
    int32_t ecx_53 = var_50
    void* var_f4_1 = eax_46 + ecx_53
    int32_t* var_f8_1 = eax_46
    int32_t var_fc_1 = ecx_53
    int32_t var_4 = 0
    result = sub_401ef0(arg1, sub_4104a0("CG:%d/%d(%d) "))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_88_20 = var_2c
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
