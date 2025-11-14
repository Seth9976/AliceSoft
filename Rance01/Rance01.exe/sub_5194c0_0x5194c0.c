// 函数: sub_5194c0
// 地址: 0x5194c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg3 + 0xc)

if (ecx == 0)
label_5194f4:
    int32_t* ecx_2 = *(arg3 + 0x10)
    
    if (ecx_2 == 0)
    label_519510:
        long double x87_r7 = float.t(1)
        float var_c4 = fconvert.s(x87_r7)
        long double x87_r6 = float.t(0)
        float var_c0 = fconvert.s(x87_r6)
        float var_bc = fconvert.s(x87_r6)
        float var_b8 = fconvert.s(x87_r6)
        float var_b4 = fconvert.s(x87_r6)
        float var_ac = fconvert.s(x87_r6)
        float var_a8 = fconvert.s(x87_r6)
        float var_a4 = fconvert.s(x87_r6)
        float var_a0 = fconvert.s(x87_r6)
        float var_98 = fconvert.s(x87_r6)
        float var_b0 = fconvert.s(x87_r7)
        float var_9c = fconvert.s(x87_r7)
        float var_94 = fconvert.s(fconvert.t(*arg1))
        float var_90 = fconvert.s(fconvert.t(arg1[1]))
        float var_8c = fconvert.s(fconvert.t(arg1[2]))
        float var_88 = fconvert.s(x87_r7)
        long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(arg1[3])))
        float var_84 = fconvert.s(x87_r5_4)
        float var_70 = fconvert.s(x87_r5_4)
        float var_5c = fconvert.s(x87_r5_4)
        float var_80 = fconvert.s(x87_r6)
        float var_7c = fconvert.s(x87_r6)
        float var_78 = fconvert.s(x87_r6)
        float var_74 = fconvert.s(x87_r6)
        float var_6c = fconvert.s(x87_r6)
        float var_68 = fconvert.s(x87_r6)
        float var_64 = fconvert.s(x87_r6)
        float var_60 = fconvert.s(x87_r6)
        float var_58 = fconvert.s(x87_r6)
        float var_54 = fconvert.s(x87_r6)
        float var_50 = fconvert.s(x87_r6)
        float var_4c = fconvert.s(x87_r6)
        float var_48 = fconvert.s(x87_r7)
        float var_44[0x11]
        __builtin_memcpy(arg3 + 0x18, sub_4b65f0(&var_44, &var_84, &var_c4, &var_44), 0x40)
        float* result
        result.b = 1
        return result
    
    if ((*(*ecx_2 + 0x10))() != 0)
        goto label_519510
    
    if (sub_5191e0(arg3) != 0)
        goto label_519510
else
    if ((*(*ecx + 0x34))() != 0)
        goto label_5194f4
    
    if (sub_518e90(arg3) != 0)
        goto label_5194f4

return 0
