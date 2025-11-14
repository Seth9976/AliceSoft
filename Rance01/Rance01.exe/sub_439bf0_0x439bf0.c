// 函数: sub_439bf0
// 地址: 0x439bf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = *(arg4 + 0xcc)

if (ebp == 0)
    return 

float var_14 = fconvert.s(float.t(arg5))
float var_10_1 = fconvert.s(float.t(arg6))
int32_t var_24
float* eax_1 = sub_40c970(0, &var_24, arg4)
float var_44 = fconvert.s(fconvert.t(*eax_1) + fconvert.t(var_14))
float var_40_1 = fconvert.s(fconvert.t(eax_1[1]) + fconvert.t(var_10_1))
long double x87_r6_1 = float.t(0)
float var_3c_1 = fconvert.s(fconvert.t(eax_1[2]) + x87_r6_1)
float var_38_1 = fconvert.s(x87_r6_1 + fconvert.t(eax_1[3]))
float* eax_2 = sub_40c970(1, &var_24, arg4)
float var_54 = fconvert.s(fconvert.t(*eax_2) + fconvert.t(var_14))
float var_50_1 = fconvert.s(fconvert.t(eax_2[1]) + fconvert.t(var_10_1))
long double x87_r6_3 = float.t(0)
float var_4c_1 = fconvert.s(fconvert.t(eax_2[2]) + x87_r6_3)
float var_48_1 = fconvert.s(x87_r6_3 + fconvert.t(eax_2[3]))
float* eax_3 = sub_40c970(2, &var_24, arg4)
float var_34 = fconvert.s(fconvert.t(*eax_3) + fconvert.t(var_14))
float var_30_1 = fconvert.s(fconvert.t(eax_3[1]) + fconvert.t(var_10_1))
long double x87_r6_5 = float.t(0)
float var_2c_1 = fconvert.s(fconvert.t(eax_3[2]) + x87_r6_5)
float var_28_1 = fconvert.s(x87_r6_5 + fconvert.t(eax_3[3]))
float* eax_4 = sub_40c970(3, &var_24, arg4)
void* esi_2 = arg4 + 0x78
void* edi_1 = arg4 + 0x80
void* ebx_1 = arg4 + 0x88
float var_64 = fconvert.s(fconvert.t(*eax_4) + fconvert.t(var_14))
float var_60_1 = fconvert.s(fconvert.t(eax_4[1]) + fconvert.t(var_10_1))
long double x87_r6_7 = float.t(0)
float var_5c_1 = fconvert.s(fconvert.t(eax_4[2]) + x87_r6_7)
float var_58_1 = fconvert.s(x87_r6_7 + fconvert.t(eax_4[3]))
long double x87_r6_13 = fconvert.t(fconvert.s(fabs(fconvert.t(fconvert.s(fconvert.t(var_3c_1)
    - fconvert.t(var_4c_1))))))
long double x87_r5_1 = fconvert.t(9.9999997473787516e-05)
x87_r5_1 - x87_r6_13
eax_4.w = (x87_r5_1 < x87_r6_13 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r6_13) ? 1 : 0) << 0xa
    | (x87_r5_1 == x87_r6_13 ? 1 : 0) << 0xe | 0x2800
bool p_1 = unimplemented  {test ah, 0x41}

if (not(p_1))
    arg6.b = 1
else
    long double x87_r5_6 =
        fconvert.t(fconvert.s(fabs(fconvert.t(fconvert.s(x87_r5_1 - fconvert.t(var_2c_1))))))
    x87_r5_6 - x87_r6_13
    eax_4.w = (x87_r5_6 < x87_r6_13 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_6, x87_r6_13) ? 1 : 0) << 0xa
        | (x87_r5_6 == x87_r6_13 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_4:1.b & 1) == 0)
        arg6.b = 1
    else
        long double x87_r6_17 =
            fconvert.t(fconvert.s(fabs(fconvert.t(fconvert.s(x87_r5_1 - fconvert.t(var_5c_1))))))
        x87_r6_17 - x87_r6_13
        eax_4.w = (x87_r6_17 < x87_r6_13 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_17, x87_r6_13) ? 1 : 0) << 0xa
            | (x87_r6_17 == x87_r6_13 ? 1 : 0) << 0xe
        
        if ((eax_4:1.b & 1) == 0)
            arg6.b = 1
        else
            arg6.b = 0

int32_t eax_5 = sub_70c710(fconvert.t(var_34))

if (sub_70c710(fconvert.t(var_44)) != eax_5)
    arg5.b = 1
else
    int32_t eax_7 = sub_70c710(fconvert.t(var_64))
    
    if (sub_70c710(fconvert.t(var_54)) != eax_7)
        arg5.b = 1
    else
        int32_t eax_9 = sub_70c710(fconvert.t(var_50_1))
        
        if (sub_70c710(fconvert.t(var_40_1)) != eax_9)
            arg5.b = 1
        else
            int32_t eax_11 = sub_70c710(fconvert.t(var_60_1))
            arg5.b = 0
            
            if (sub_70c710(fconvert.t(var_30_1)) != eax_11)
                arg5.b = 1

char edx_5 = (*(arg4 + 0xac)).b
int32_t ebx_6 = *(arg4 + 0x1c)
int32_t edx_6 = *(arg4 + 0xb4)
var_24 = *(arg4 + 0xa8)
char ecx_2 = (*(arg4 + 0xb0)).b
char edx_7 = (*(arg4 + 0x9c)).b
int32_t edx_8 = *(arg4 + 0xa4)
var_14 = *(arg4 + 0x98)
char ecx_4 = (*(arg4 + 0xa0)).b
int32_t eax_14 = *(arg4 + 0xb8)
int32_t var_8_1 = edx_8
uint32_t eax_17 = zx.d((*(*ebp + 0x28))())
int32_t eax_18 = neg.d(eax_17)
int32_t edx_15 = ((zx.d(var_24.b) | edx_6 << 8) << 8 | zx.d(edx_5)) << 8 | zx.d(ecx_2)
int32_t edx_16 = neg.d(edx_15)
int32_t ecx_9
ecx_9.b = (((var_14 | 0xffffff00) << 8 | zx.d(edx_7)) << 8 | zx.d(ecx_4)) != 0xffffffff
int32_t edx_19 = neg.d(sbb.d(edx_16, edx_16, edx_15 != 0)) | ecx_9
int32_t edx_20 = neg.d(edx_19)
uint32_t edx_23 = zx.d(*(arg1 + 0x14))
int32_t edx_24 = neg.d(edx_23)
int32_t edx_29 = neg.d(eax_14 - 1)
int32_t ecx_13 = (sbb.d(eax_18, eax_18, eax_17 != 0) & 0x40)
    | neg.d(sbb.d(edx_20, edx_20, edx_19 != 0)) | (sbb.d(edx_24, edx_24, edx_23 != 0) & 4)
    | ((sbb.d(edx_29, edx_29, eax_14 != 1) & 0xfffffffe) + 2)
int32_t edx_34 = neg.d(ebx_6)
uint32_t edx_37 = zx.d(arg5.b)
int32_t edx_38 = neg.d(edx_37)
uint32_t edx_41 = zx.d(arg6.b)
int32_t edx_42 = neg.d(edx_41)

switch (ecx_13 | (sbb.d(edx_34, edx_34, ebx_6 != 0) & 0x20)
        | (sbb.d(edx_38, edx_38, edx_37 != 0) & 8) | (sbb.d(edx_42, edx_42, edx_41 != 0) & 0x10))
    case 0
        sub_450180(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 1
        sub_450a10(&var_54, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebp, &var_24, &var_14, arg1 + 0x18)
    case 2
        sub_451460(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 3
        sub_451f70(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebp, &var_24, &var_14, arg1 + 0x18)
    case 4
        sub_452dc0(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 5
        sub_4535e0(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebp, &var_24, &var_14)
    case 6
        sub_453f00(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 7
        sub_4548f0(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebp, &var_24, &var_14)
    case 8
        sub_455390(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 9
        sub_455e80(&var_54, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebp, &var_24, &var_14, arg1 + 0x18)
    case 0xa
        sub_456a90(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0xb
        sub_4577e0(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebp, &var_24, &var_14, arg1 + 0x18)
    case 0xc
        sub_458850(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0xd
        sub_459310(&var_54, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebp, &var_24, &var_14)
    case 0xe
        sub_459e80(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0xf
        sub_45ab60(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebp, &var_24, &var_14)
    case 0x10
        sub_45b920(&var_44, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64)
    case 0x11
        sub_45c230(arg3, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64, 
            &var_24, &var_14, arg1 + 0x18)
    case 0x12
        sub_45ccf0(arg3, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp)
    case 0x13
        sub_45d860(arg2, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp, 
            &var_24, &var_14, arg1 + 0x18)
    case 0x14
        sub_45e740(arg2, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64)
    case 0x15
        sub_45f0c0(&var_44, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, &var_24, &var_14)
    case 0x16
        sub_45fae0(&var_44, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, 
            ebp)
    case 0x17
        sub_4605f0(arg3, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp, 
            &var_24, &var_14)
    case 0x18
        sub_4611d0(arg3, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64)
    case 0x19
        sub_461d00(arg2, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64, 
            &var_24, &var_14, arg1 + 0x18)
    case 0x1a
        sub_462980(arg2, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp)
    case 0x1b
        sub_463740(&var_44, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, 
            ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x1c
        sub_464850(&var_44, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64)
    case 0x1d
        sub_465430(arg3, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64, 
            &var_24, &var_14)
    case 0x1e
        sub_4660d0(arg3, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp)
    case 0x1f
        sub_466e40(arg2, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp, 
            &var_24, &var_14)
    case 0x20
        sub_467cb0(&var_44, &var_34, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, 
            &var_64, ebp)
    case 0x21
        sub_468590(arg2, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x22
        sub_468ff0(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x23
        sub_4698f0(arg2, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x24
        sub_46a360(&var_44, &var_34, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, 
            &var_64, ebp)
    case 0x25
        sub_46abd0(arg2, &var_44, ebx_1, ebx_6, arg2, arg3, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebp, &var_24, &var_14)
    case 0x26
        sub_46b530(&var_44, &var_34, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, 
            &var_64, ebp)
    case 0x27
        sub_46bdf0(arg2, &var_44, ebx_1, ebx_6, arg2, arg3, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebp, &var_24, &var_14)
    case 0x28
        sub_46c780(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x29
        sub_46d2d0(arg2, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x2a
        sub_46df10(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x2b
        sub_46ea70(arg2, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x2c
        sub_46f6b0(&var_44, &var_34, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, 
            &var_64, ebp)
    case 0x2d
        sub_4701d0(arg2, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14)
    case 0x2e
        sub_470da0(&var_44, &var_34, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, 
            &var_64, ebp)
    case 0x2f
        sub_4718e0(arg2, &var_44, ebx_1, ebx_6, arg2, arg3, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebp, &var_24, &var_14)
    case 0x30
        sub_4724e0(arg2, arg3, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebp)
    case 0x31
        sub_472e40(&var_44, arg2, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x32
        sub_473930(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x33
        sub_4742c0(arg2, arg3, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x34
        sub_474db0(arg2, arg3, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebp)
    case 0x35
        sub_475790(&var_44, arg2, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, 
            &var_34, &var_64, ebp, &var_24, &var_14)
    case 0x36
        sub_476210(&var_44, arg2, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, 
            &var_34, &var_64, ebp)
    case 0x37
        sub_476c00(arg3, &var_44, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, 
            &var_34, &var_64, ebp, &var_24, &var_14)
    case 0x38
        sub_4776a0(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x39
        sub_478230(&var_44, arg2, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x3a
        sub_478f00(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x3b
        sub_479aa0(arg2, arg3, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x3c
        sub_47a780(arg2, arg3, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebp)
    case 0x3d
        sub_47b3b0(&var_44, arg2, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebx_6, ebp, &var_24, &var_14)
    case 0x3e
        sub_47c0a0(&var_44, arg2, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, 
            &var_34, &var_64, ebp)
    case 0x3f
        sub_47cd00(arg3, &var_44, ebx_1, ebx_6, arg2, arg3, &var_44, esi_2, &var_54, edi_1, 
            &var_34, &var_64, ebp, &var_24, &var_14)
    case 0x40
        sub_47da10(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0x41
        sub_47e2f0(arg3, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, ebp, 
            &var_24, &var_14, arg1 + 0x18)
    case 0x42
        sub_47ed70(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0x43
        sub_47f870(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp, 
            &var_24, &var_14, arg1 + 0x18)
    case 0x44
        sub_4806e0(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0x45
        sub_480fa0(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp, 
            &var_24, &var_14)
    case 0x46
        sub_481910(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0x47
        sub_482310(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp, 
            &var_24, &var_14)
    case 0x48
        sub_482dc0(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0x49
        sub_4838f0(arg3, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, ebp, 
            &var_24, &var_14, arg1 + 0x18)
    case 0x4a
        sub_484530(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0x4b
        sub_485270(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp, 
            &var_24, &var_14, arg1 + 0x18)
    case 0x4c
        sub_4862d0(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0x4d
        sub_486e20(arg3, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, ebp, 
            &var_24, &var_14)
    case 0x4e
        sub_487a10(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp)
    case 0x4f
        sub_488700(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, ebp, 
            &var_24, &var_14)
    case 0x50
        sub_4894d0(arg3, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64)
    case 0x51
        sub_489e30(arg2, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64, 
            &var_24, &var_14, arg1 + 0x18)
    case 0x52
        sub_48a920(arg2, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp)
    case 0x53
        sub_48b4a0(&var_44, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, 
            ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x54
        sub_48c390(&var_44, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64)
    case 0x55
        sub_48cd50(arg3, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64, 
            &var_24, &var_14)
    case 0x56
        sub_48d7c0(arg3, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp)
    case 0x57
        sub_48e320(arg2, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp, 
            &var_24, &var_14)
    case 0x58
        sub_48ef40(arg2, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64)
    case 0x59
        sub_48fad0(&var_44, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, &var_24, &var_14, arg1 + 0x18)
    case 0x5a
        sub_490780(&var_44, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64)
    case 0x5b
        sub_491540(arg3, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp, 
            &var_24, &var_14, arg1 + 0x18)
    case 0x5c
        sub_492600(arg3, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64)
    case 0x5d
        sub_493240(arg2, ebp, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64, 
            &var_24, &var_14)
    case 0x5e
        sub_493f20(arg2, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, ebp)
    case 0x5f
        sub_494cd0(&var_44, edi_1, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, &var_34, &var_64, 
            ebp, &var_24, &var_14)
    case 0x60
        sub_495b30(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x61
        sub_496420(&var_54, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x62
        sub_496eb0(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x63
        sub_4977b0(&var_54, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x64
        sub_498250(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x65
        sub_498af0(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp, &var_24, &var_14)
    case 0x66
        sub_499460(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x67
        sub_499d30(&var_54, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14)
    case 0x68
        sub_49a6e0(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x69
        sub_49b220(&var_54, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x6a
        sub_49be70(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x6b
        sub_49c9c0(&var_54, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x6c
        sub_49d620(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x6d
        sub_49e150(&var_54, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14)
    case 0x6e
        sub_49ed30(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x6f
        sub_49f880(&var_54, &var_44, ebx_1, arg2, arg3, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14)
    case 0x70
        sub_4a0490(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x71
        sub_4a0e00(arg2, arg3, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x72
        sub_4a1900(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x73
        sub_4a2280(arg3, &var_44, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x74
        sub_4a2d90(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x75
        sub_4a3770(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp, &var_24, &var_14)
    case 0x76
        sub_4a4200(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x77
        sub_4a4bf0(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp, &var_24, &var_14)
    case 0x78
        sub_4a56a0(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x79
        sub_4a6240(&var_44, arg2, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x7a
        sub_4a6f00(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x7b
        sub_4a7ab0(arg2, arg3, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, &var_64, 
            ebx_6, ebp, &var_24, &var_14, arg1 + 0x18)
    case 0x7c
        sub_4a8780(&var_44, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x7d
        sub_4a93c0(arg3, &var_44, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_34, 
            &var_64, ebx_6, ebp, &var_24, &var_14)
    case 0x7e
        sub_4aa0a0(arg2, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp)
    case 0x7f
        sub_4aad00(arg3, &var_34, ebx_1, arg2, arg3, &var_44, esi_2, &var_54, edi_1, &var_64, 
            ebx_6, ebp, &var_24, &var_14)
