// 函数: sub_53b4f0
// 地址: 0x53b4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
uint32_t eax = zx.d(arg2)
int32_t edi
int32_t var_18 = edi
void* esi = arg1
void* eax_175
float ecx_4
int32_t ecx_32
int32_t edx
void* edx_3
int32_t edx_31
int32_t* esi_16

switch (eax)
    case 0
        int32_t* eax_1 = *(esi + 0x28c)
        int32_t ecx = *eax_1
        *(esi + 0x28c) = &eax_1[1]
        int32_t* eax_3 = *(esi + 0x2b0)
        *eax_3 = ecx
        *(esi + 0x2b0) += 4
        return eax_3
    case 1
        *(esi + 0x2b0) -= 4
        return eax
    case 2
        return sub_53dcb0(esi, esi, edi)
    case 3
        return sub_53de60(esi, esi, edi)
    case 4
        int32_t* eax_10 = *(esi + 0x2b0)
        *eax_10 = *(esi + 0x12d0)
        *(esi + 0x2b0) += 4
        return eax_10
    case 5
        edx_3 = *(esi + 0xab8)
    label_53b5d5:
        ecx_4 = *(edx_3 - 4)
        goto label_53b5d8
    case 6
        void* esi_1 = *(esi + 0x2b0)
        *(esi_1 - 4) = neg.d(*(esi_1 - 4))
        return eax
    case 7
        void* esi_2 = *(esi + 0x2b0)
        int32_t eax_12
        eax_12.b = *(esi_2 - 4) == 0
        *(esi_2 - 4) = eax_12
        return eax_12
    case 8
        *(esi + 0x2b0) -= 4
        int32_t* eax_13 = *(esi + 0x2b0)
        *eax_13 = not.d(*eax_13)
        *(esi + 0x2b0) += 4
        return eax_13
    case 9
        *(esi + 0x2b0) -= 4
        int32_t* eax_14 = *(esi + 0x2b0)
        int32_t eax_15 = *eax_14
        eax_14[-1] += eax_15
        return eax_15
    case 0xa
        *(esi + 0x2b0) -= 4
        int32_t* eax_16 = *(esi + 0x2b0)
        eax_16[-1] -= *eax_16
        return eax_16
    case 0xb
        *(esi + 0x2b0) -= 4
        int32_t* eax_17 = *(esi + 0x2b0)
        eax_17[-1] *= *eax_17
        return eax_17
    case 0xc
        return sub_53e480(esi)
    case 0xd
        return sub_53e4c0(esi)
    case 0xe
        *(esi + 0x2b0) -= 4
        int32_t ecx_9 = **(esi + 0x2b0)
        *(esi + 0x2b0) -= 4
        ecx_4 = ecx_9 & **(esi + 0x2b0)
    label_53b5d8:
        int32_t* eax_11 = *(esi + 0x2b0)
        *eax_11 = ecx_4
        *(esi + 0x2b0) += 4
        return eax_11
    case 0xf
        *(esi + 0x2b0) -= 4
        int32_t ecx_11 = **(esi + 0x2b0)
        *(esi + 0x2b0) -= 4
        int32_t* eax_23 = *(esi + 0x2b0)
        *eax_23 |= ecx_11
        *(esi + 0x2b0) += 4
        return eax_23
    case 0x10
        *(esi + 0x2b0) -= 4
        int32_t ecx_13 = **(esi + 0x2b0)
        *(esi + 0x2b0) -= 4
        int32_t* eax_24 = *(esi + 0x2b0)
        *eax_24 ^= ecx_13
        *(esi + 0x2b0) += 4
        return eax_24
    case 0x11
        *(esi + 0x2b0) -= 4
        char ecx_15 = (**(esi + 0x2b0)).b
        *(esi + 0x2b0) -= 4
        int32_t* eax_25 = *(esi + 0x2b0)
        *eax_25 <<= ecx_15
        *(esi + 0x2b0) += 4
        return eax_25
    case 0x12
        *(esi + 0x2b0) -= 4
        char ecx_17 = (**(esi + 0x2b0)).b
        *(esi + 0x2b0) -= 4
        int32_t* eax_26 = *(esi + 0x2b0)
        *eax_26 s>>= ecx_17
        *(esi + 0x2b0) += 4
        return eax_26
    case 0x13
        *(esi + 0x2b0) -= 4
        int32_t* eax_27 = *(esi + 0x2b0)
        int32_t edx_17
        edx_17.b = eax_27[-1] s< *eax_27
        eax_27[-1] = edx_17
        return eax_27
    case 0x14
        *(esi + 0x2b0) -= 4
        int32_t* eax_28 = *(esi + 0x2b0)
        int32_t edx_18
        edx_18.b = eax_28[-1] s> *eax_28
        eax_28[-1] = edx_18
        return eax_28
    case 0x15
        *(esi + 0x2b0) -= 4
        int32_t* eax_29 = *(esi + 0x2b0)
        int32_t edx_19
        edx_19.b = eax_29[-1] s<= *eax_29
        eax_29[-1] = edx_19
        return eax_29
    case 0x16
        *(esi + 0x2b0) -= 4
        int32_t* eax_30 = *(esi + 0x2b0)
        int32_t edx_20
        edx_20.b = eax_30[-1] s>= *eax_30
        eax_30[-1] = edx_20
        return eax_30
    case 0x17
        *(esi + 0x2b0) -= 4
        int32_t* eax_31 = *(esi + 0x2b0)
        int32_t edx_21
        edx_21.b = eax_31[-1] != *eax_31
        eax_31[-1] = edx_21
        return eax_31
    case 0x18
        *(esi + 0x2b0) -= 4
        int32_t* eax_32 = *(esi + 0x2b0)
        int32_t edx_22
        edx_22.b = eax_32[-1] == *eax_32
        eax_32[-1] = edx_22
        return eax_32
    case 0x19
        return sub_53e500(esi, edi)
    case 0x1a
        return sub_53e9c0(arg1)
    case 0x1b
        return sub_53ea60(arg1)
    case 0x1c
        return sub_53eb00(arg1)
    case 0x1d
        return sub_53eba0(arg1)
    case 0x1e
        return sub_53ec40(arg1)
    case 0x1f
        return sub_53ed00(arg1)
    case 0x20
        return sub_53edc0(arg1)
    case 0x21
        return sub_53ee80(arg1)
    case 0x22
        return sub_53ef40(esi)
    case 0x23
        return sub_53f000(esi)
    case 0x24
        return sub_540a60(arg1)
    case 0x25
        return sub_540b20(arg1)
    case 0x26
        return sub_540c00(arg1)
    case 0x27
        return sub_540ce0(arg1)
    case 0x28
        int32_t eax_76
        int80_t st0
        st0, eax_76 = sub_540dc0(arg1)
        return eax_76
    case 0x29
        int32_t* eax_48 = *(esi + 0x2b0) - 4
        **(esi + 0x2b0) = eax_48[-1]
        *(esi + 0x2b0) += 4
        int32_t eax_49 = *eax_48
        **(esi + 0x2b0) = eax_49
        *(esi + 0x2b0) += 4
        return eax_49
    case 0x2a
        return sub_53f0c0(esi)
    case 0x2b
        return sub_53d1c0(eax, edx, arg1, 0x74d868)
    case 0x2c
        *(esi + 0x28c) = *(esi + 0x290) + **(esi + 0x28c)
        return eax
    case 0x2d
        sub_53f1c0(esi)
        return esi
    case 0x2e
        sub_53f560(esi)
        return esi
    case 0x2f
        return sub_53f5a0(esi, ebp, esi, edi, 0)
    case 0x30
        int32_t* eax_59 = *(esi + 0x28c)
        int32_t ecx_25 = *eax_59
        *(esi + 0x28c) = &eax_59[1]
        return sub_53fbf0(ecx_25, esi)
    case 0x31
        return sub_53ffc0(arg1)
    case 0x32
        return sub_540060(arg1)
    case 0x33
        *(esi + 0x2b0) -= 4
        int32_t eax_68 = sub_70c710(fconvert.t(**(esi + 0x2b0)))
        **(esi + 0x2b0) = eax_68
        *(esi + 0x2b0) += 4
        return eax_68
    case 0x34
        *(esi + 0x2b0) -= 4
        int32_t* eax_69 = *(esi + 0x2b0)
        int32_t eax_70 = fconvert.s(float.t(*eax_69))
        *eax_69 = eax_70
        *(esi + 0x2b0) += 4
        return eax_70
    case 0x35
        *(esi + 0x2b0) -= 4
        float* eax_77 = *(esi + 0x2b0)
        *eax_77 = fconvert.s(fneg(fconvert.t(*eax_77)))
        *(esi + 0x2b0) += 4
        return eax_77
    case 0x36
        return sub_540ec0(esi)
    case 0x37
        return sub_540f00(esi)
    case 0x38
        return sub_540f40(esi)
    case 0x39
        return sub_540f80(arg1)
    case 0x3a
        sub_541000(arg1)
        return 1
    case 0x3b
        sub_541060(arg1)
        return 1
    case 0x3c
        sub_5410c0(arg1)
        return 1
    case 0x3d
        sub_541120(arg1)
        return 1
    case 0x3e
        sub_541180(arg1)
        return 1
    case 0x3f
        sub_5411e0(arg1)
        return 1
    case 0x40
        float* eax_85 = *(esi + 0x28c)
        float var_c_3 = fconvert.s(fconvert.t(*eax_85))
        *(esi + 0x28c) = &eax_85[1]
        ecx_4 = fconvert.s(fconvert.t(var_c_3))
        goto label_53b5d8
    case 0x41
        return sub_5413e0(esi)
    case 0x42
        return sub_541660(esi)
    case 0x43
        return sub_5416a0(esi)
    case 0x44
        return sub_5418b0(esi)
    case 0x45
        return sub_541ed0(esi)
    case 0x46
        return sub_542260(arg1, esi, edi)
    case 0x48
        return sub_542af0(esi, ebp, esi, edi)
    case 0x49
        return sub_5424d0(esi, ebp, esi, edi)
    case 0x4d
        return sub_544bc0(esi)
    case 0x4e
        return sub_544c00(esi)
    case 0x4f
        return sub_5452b0(esi)
    case 0x51
        return sub_545420(arg1, ebp, esi, edi)
    case 0x52
        return sub_5455b0(arg1)
    case 0x53
        return sub_545760(esi, ebp, esi, edi)
    case 0x54
        return sub_545940(ebp, esi, edi)
    case 0x55
        return sub_545a50(esi)
    case 0x56
        return sub_545c00(esi)
    case 0x57
        return sub_5486d0(esi)
    case 0x58
        return sub_548630(esi)
    case 0x59
        return sub_548740(esi)
    case 0x5a
        return sub_54c870(ebp, esi, edi, esi)
    case 0x5b
        edx_3 = *(esi + 0x12c0)
        goto label_53b5d5
    case 0x5c
        return sub_53f950(ebp, esi, edi, esi)
    case 0x5d
        sub_53df00(esi)
        return esi
    case 0x5e
        sub_53df40(esi)
        return esi
    case 0x5f
        return sub_548940(esi)
    case 0x60
        return sub_548a00(arg1, esi)
    case 0x61
        return sub_548b00(arg1)
    case 0x62
        return sub_548bc0(esi)
    case 0x63
        return sub_548ca0(esi)
    case 0x64
        return sub_54b460(esi)
    case 0x65
        return sub_54b690(esi)
    case 0x66
        *(esi + 0x2b0) -= 4
        int32_t ecx_2 = **(esi + 0x2b0)
        *(esi + 0x2b0) -= 4
        int32_t eax_5 = **(esi + 0x2b0)
        **(esi + 0x2b0) = ecx_2
        *(esi + 0x2b0) += 4
        **(esi + 0x2b0) = eax_5
        *(esi + 0x2b0) += 4
        return eax_5
    case 0x67
        return sub_53e0a0(esi)
    case 0x68
        return sub_543280(esi, ebp, esi, edi)
    case 0x69
        return sub_5433e0(esi, ebp, esi, edi)
    case 0x6a
        return sub_540930(esi)
    case 0x6b
        return sub_53fb30(esi)
    case 0x6c
        return sub_53f140(esi)
    case 0x6d
        return sub_53e650(esi, esi, edi)
    case 0x6e
        return sub_53e800(esi)
    case 0x6f
        return sub_54ccd0(esi)
    case 0x70
        return sub_542bc0(esi)
    case 0x71
        return sub_542d70(esi)
    case 0x72
        return sub_542f20(esi)
    case 0x73
        return sub_5430d0(esi)
    case 0x74
        return sub_543350(esi, esi, edi)
    case 0x75
        return sub_5434c0(esi, esi, edi)
    case 0x76
        return sub_54cfa0(arg1, esi)
    case 0x77
        return sub_54d000(esi, edx, arg1, esi, edi)
    case 0x78
        *(esi + 0x2b0) -= 4
        int32_t* eax_152 = *(esi + 0x2b0)
        
        if (*eax_152 == 0xffffffff)
            return eax_152
        
        return sub_53d1c0(eax_152, edx, arg1, 0x7510ac)
    case 0x79
        return sub_545d90(arg1, esi)
    case 0x7a
        edx_3 = *(esi + 0x2b0)
        goto label_53b5d5
    case 0x7b
        *(esi + 0x2b0) -= 4
        int32_t edx_29 = **(esi + 0x2b0)
        *(esi + 0x2b0) -= 4
        int32_t eax_156 = **(esi + 0x2b0)
        **(esi + 0x2b0) = eax_156
        *(esi + 0x2b0) += 4
        **(esi + 0x2b0) = edx_29
        *(esi + 0x2b0) += 4
        **(esi + 0x2b0) = eax_156
        *(esi + 0x2b0) += 4
        return eax_156
    case 0x7c
        return sub_54d050(arg1)
    case 0x7d
        return sub_54d0b0(esi, edx, arg1, esi, edi)
    case 0x7e
        return sub_548b60(arg1)
    case 0x7f
        return sub_53e6f0(esi)
    case 0x80
        return sub_53e760(esi)
    case 0x81
        return sub_53e310(esi, esi, edi)
    case 0x82
        return sub_53e3b0(esi, esi, edi)
    case 0x83
        return sub_540100(esi)
    case 0x84
        return sub_5460e0(ebp, esi, edi, esi)
    case 0x85
        return sub_5463e0(arg1)
    case 0x86
        return sub_543560(esi, edx, arg1, esi, edi)
    case 0x87
        return sub_546580(arg1)
    case 0x88
        return sub_546780(arg1, esi, edi, esi)
    case 0x89
        return sub_5468d0(ebp, esi, edi, esi)
    case 0x8a
        int32_t* eax_169 = *(esi + 0x28c)
        int32_t ecx_30 = *eax_169
        *(esi + 0x28c) = &eax_169[1]
        int32_t* esi_12 = *(esi + 0x12c4)
        
        if (esi_12[1] == 0)
            *(ecx_30 << 2) += 1
            return &eax_169[1]
        
        int32_t esi_13 = *esi_12
        *(esi_13 + (ecx_30 << 2)) += 1
        return &eax_169[1]
    case 0x8b
        int32_t* eax_171 = *(esi + 0x28c)
        int32_t ecx_31 = *eax_171
        *(esi + 0x28c) = &eax_171[1]
        int32_t* esi_14 = *(esi + 0x12c4)
        
        if (esi_14[1] == 0)
            *(ecx_31 << 2) -= 1
            return &eax_171[1]
        
        int32_t esi_15 = *esi_14
        *(esi_15 + (ecx_31 << 2)) -= 1
        return &eax_171[1]
    case 0x8c
        int32_t* eax_173 = *(esi + 0x28c)
        ecx_32 = *eax_173
        *(esi + 0x28c) = &eax_173[1]
        edx_31 = eax_173[1]
        eax_175 = &eax_173[2]
        *(esi + 0x28c) = eax_175
        esi_16 = *(esi + 0x12c4)
        
        if (esi_16[1] == 0)
            *(ecx_32 << 2) = edx_31
            return eax_175
        
        *(*esi_16 + (ecx_32 << 2)) = edx_31
        return eax_175
    case 0x8d
        *(esi + 0x2b0) -= 4
        int32_t* eax_176 = *(esi + 0x2b0)
        int32_t ecx_33
        ecx_33.b = *eax_176 != 0
        *eax_176 = ecx_33
        *(esi + 0x2b0) += 4
        return eax_176
    case 0x8e
        return sub_543810(esi)
    case 0x8f
        return sub_543a10(arg1, ebp, esi, edi)
    case 0x90
        return sub_5472f0(esi)
    case 0x91
        return sub_543b60(ebp, esi, edi, esi)
    case 0x92
        return sub_543f20(ebp, esi, edi, esi)
    case 0x93
        return sub_541240(ebp, esi, edi, esi)
    case 0x94
        return sub_5442d0(arg1, ebp, esi, edi)
    case 0x95
        return sub_5420a0(arg1, ebp, esi, edi)
    case 0x96
        return sub_544740(esi, ebp, esi, edi)
    case 0x97
        return sub_5445f0(esi, ebp, esi, edi)
    case 0x98
        return sub_5453a0(esi)
    case 0x99
        return sub_5446d0(esi)
    case 0x9a
        return sub_543d80(ebp, esi, edi, esi)
    case 0x9b
        return sub_544120(ebp, esi, edi, esi)
    case 0xaf
        int32_t eax_196
        int80_t st0_1
        st0_1, eax_196 = sub_546d80(esi)
        return eax_196
    case 0xb0
        return sub_5485a0(arg1)
    case 0xb1
        return sub_544f80(esi, esi, edi)
    case 0xb2
        return sub_544c90(esi)
    case 0xb3
        sub_545880(esi)
        return esi
    case 0xb4
        sub_5458e0(esi)
        return esi
    case 0xb5
        int32_t* eax_204 = *(esi + 0x28c)
        ecx_32 = *eax_204
        *(esi + 0x28c) = &eax_204[1]
        edx_31 = eax_204[1]
        eax_175 = &eax_204[2]
        *(esi + 0x28c) = eax_175
        esi_16 = *(esi + 0x12c8)
        
        if (esi_16[1] == 0)
            *(ecx_32 << 2) = edx_31
            return eax_175
        
        *(*esi_16 + (ecx_32 << 2)) = edx_31
        return eax_175
    case 0xb6
        sub_53e030(esi)
        return 4
    case 0xb7
        int32_t* eax_206 = *(esi + 0x28c)
        int32_t ecx_34 = *eax_206
        *(esi + 0x28c) = &eax_206[1]
        int32_t edx_33 = eax_206[1]
        *(esi + 0x28c) = &eax_206[2]
        int32_t* esi_18 = *(esi + 0x12c4)
        int32_t eax_209 = esi_18[1]
        
        if (ecx_34 u>= eax_209 u>> 2)
            *0 -= edx_33
            return 0
        
        if (eax_209 == 0)
            *(ecx_34 << 2) -= edx_33
            return ecx_34 << 2
        
        int32_t esi_19 = *esi_18
        *(esi_19 + (ecx_34 << 2)) -= edx_33
        return esi_19 + (ecx_34 << 2)
    case 0xb8
        sub_53f200(esi)
        return esi
    case 0xb9
        sub_53f260(esi)
        return esi
    case 0xba
        return sub_544de0(esi)
    case 0xbb
        return sub_53de00(esi)
    case 0xbc
        return sub_544d90(esi)
    case 0xbd
        int32_t* eax_220 = *(esi + 0x28c)
        int32_t ecx_35 = *eax_220
        *(esi + 0x28c) = &eax_220[1]
        int32_t edx_34 = eax_220[1]
        *(esi + 0x28c) = &eax_220[2]
        int32_t* eax_223 = *(esi + 0x12c8)
        int32_t edi_177
        
        if (eax_223[1] != 0)
            edi_177 = *eax_223
        else
            edi_177 = 0
        
        int32_t eax_224
        eax_224.b = *(edi_177 + (ecx_35 << 2)) s> edx_34
        **(esi + 0x2b0) = eax_224
        *(esi + 0x2b0) += 4
        return eax_224
    case 0xbe
        return sub_544d30(esi)
    case 0xbf
        return sub_544ce0(esi)
    case 0xc0
        sub_53f380(esi)
        return esi
    case 0xc1
        sub_53f3f0(esi)
        return esi
    case 0xc2
        return sub_53f770(arg1)
    case 0xc3
        sub_53e0e0(esi)
        return esi
    case 0xc4
        return sub_53e1d0(esi)
    case 0xc5
        sub_53e150(esi)
        return esi
    case 0xc6
        return sub_53f7b0(arg1)
    case 0xc7
        sub_53f510(esi)
        return esi
    case 0xc8
        return sub_5464e0(esi)
    case 0xc9
        sub_53f2c0(esi)
        return esi
    case 0xca
        sub_53f450(esi)
        return esi
    case 0xcb
        int32_t* ecx_37 = *(esi + 0x28c)
        int32_t eax_241 = *ecx_37
        void* edx_35 = *(esi + 0x12c0)
        *(esi + 0x28c) = &ecx_37[1]
        int32_t ecx_39 = *(edx_35 - 4)
        return sub_53f820(ecx_39, eax_241, ebp, esi, edi, esi, ecx_39)
    case 0xcc
        sub_53f320(esi)
        return esi
    case 0xcd
        sub_53f4b0(esi)
        return esi
    case 0xce
        int32_t* eax_245 = *(esi + 0x28c)
        ecx_32 = *eax_245
        *(esi + 0x28c) = &eax_245[1]
        edx_31 = eax_245[1]
        eax_175 = &eax_245[2]
        *(esi + 0x28c) = eax_175
        esi_16 = *(esi + 0x12cc)
        
        if (esi_16[1] == 0)
            *(ecx_32 << 2) = edx_31
            return eax_175
        
        *(*esi_16 + (ecx_32 << 2)) = edx_31
        return eax_175
    case 0xcf
        return sub_544e80(esi)
    case 0xd0
        return sub_545de0(esi)
    case 0xd1
        return sub_545e60(esi)
    case 0xd2
        return sub_545ee0(esi)
    case 0xd3
        sub_541540(esi)
        return esi
    case 0xd4
        return sub_541d20(esi, edx, arg1, ebp, esi, edi)
    case 0xd5
        return sub_546b70(arg1)
    case 0xd6
        return sub_543600(esi)
    case 0xd7
        sub_5425b0(esi)
        return esi
    case 0xd8
        sub_542770(esi)
        return esi
    case 0xd9
        sub_542690(esi)
        return esi
    case 0xda
        sub_542850(esi)
        return esi
    case 0xdb
        return sub_545040(esi)
    case 0xdc
        return sub_5450a0(esi)
    case 0xdd
        return sub_542400(esi)
    case 0xde
        return sub_53e250(esi)
    case 0xdf
        return sub_545150(esi)
    case 0xe0
        return sub_545200(esi)
    case 0xe1
        return sub_53df80(esi)
    case 0xe2
        return sub_545f60(esi)
    case 0xe3
        return sub_541e10(arg1)
    case 0xe4
        return sub_541980(esi)
    case 0xe5
        return sub_541a90(esi)
    case 0xe6
        return sub_541c70(esi)
    case 0xe7
        sub_543690(esi)
        return esi
    case 0xe8
        return sub_545fe0(esi)
    case 0xe9
        return sub_546060(esi)
    case 0xea
        sub_543710(esi)
        return esi
    case 0xeb
        sub_543790(esi)
        return esi
    case 0xec
        return sub_541b30(esi)
    case 0xed
        return sub_541bd0(esi)
    case 0xee
        sub_542930(esi)
        return esi
    case 0xef
        sub_542a10(esi)
        return esi
    case 0xf0
        sub_544f00(esi)
        return esi
    case 0xf1
        return sub_5473c0(esi)
    case 0xf2
        return sub_54d270(esi, esi, edi)
    case 0xf3
        return sub_54d340(esi, esi, edi)
    case 0xf4
        return sub_54d5a0(ebp, esi, edi, esi)
    case 0xf5
        return sub_54d9a0(esi, edx, arg1, esi, edi)
    case 0xf6
        return sub_54da40(ebp, esi, edi, esi)
    case 0xf7
        return sub_54db10(arg1, esi, edi)
    case 0xf8
        return sub_54dbb0(esi)
    case 0xf9
        return sub_54dc10(esi, ebp, esi, edi)
    case 0xfa
        return sub_54dd30(esi, esi, edi)
    case 0xfb
        return sub_54de00(esi, esi, edi)
    case 0xfc
        return sub_54ded0(esi, edx, arg1, esi, edi)
    case 0xfd
        return sub_54df20(esi, ebp, esi, edi)
    case 0xfe
        return sub_54e060(esi, esi, edi)
    case 0xff
        return sub_54d410(arg1, ebp, esi, edi)

uint32_t var_1c_26 = eax
return sub_53d1c0(eax, edx, arg1, 0x74cfd8)
