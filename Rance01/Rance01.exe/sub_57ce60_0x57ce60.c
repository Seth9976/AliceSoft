// 函数: sub_57ce60
// 地址: 0x57ce60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_711428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x3c) == 0)
    arg2 = fconvert.s(float.t(1) - fconvert.t(arg2))

int32_t ebx
ebx.b = *(arg1 + 0x3d)
int32_t eax_6
int32_t edx
edx:eax_6 = sx.q(*(arg1 + 0x34))
int32_t eax_10
int32_t edx_1
edx_1:eax_10 = sx.q(*(arg1 + 0x38))
uint32_t eax_13 = zx.d(ebx.b)
int32_t eax_14 = neg.d(eax_13)
void* var_70 = arg1
var_5c = fconvert.s(float.t((sbb.d(eax_14, eax_14, eax_13 != 0) & 0xfffffff4) + 0x48)
    * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
float var_3c = fconvert.s(float.t((eax_6 - edx) s>> 1))
float var_54_1 = fconvert.s(sub_51a3f0(fconvert.s(fconvert.t(var_5c))) * fconvert.t(var_3c))
float var_4c_1 = fconvert.s(float.t((eax_10 - edx_1) s>> 1))
double var_48 = fconvert.d(fconvert.t(var_4c_1))
int32_t eax_18
int16_t x87control
long double st0_1
st0_1, eax_18, x87control = sub_42a880(fconvert.s(fconvert.t(var_5c)))
long double x87_r7_15 = fconvert.t(var_54_1)
long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(var_48) / st0_1))
x87_r6_2 - x87_r7_15
eax_18.w = (x87_r6_2 < x87_r7_15 ? 1 : 0) << 8
    | (is_unordered.t(x87_r6_2, x87_r7_15) ? 1 : 0) << 0xa | (x87_r6_2 == x87_r7_15 ? 1 : 0) << 0xe
    | 0x3000
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    x87_r7_15 = x87_r6_2

var_5c = fconvert.s(x87_r7_15)
long double x87_r6_3 = fconvert.t(arg2)
int32_t eax_19
eax_19.b = ebx.b == 0
float* ebx_1 = nullptr
long double x87_r7_17 = fconvert.t(var_5c) * x87_r6_3
float* var_38 = nullptr
int32_t var_34 = 0
int32_t var_30 = 0
var_5c = fconvert.s(x87_r7_17 * x87_r6_3)
float var_54_2 = fconvert.s(x87_r6_3 * fconvert.t(360.0) + fconvert.t(270.0))
sub_4b3ba0(eax_19 + 6, &var_38)
int32_t var_c_1 = 0
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    ebx_1 = (*(*ecx + 0x14))(eax_4)

if (ebx_1 != 0)
    float* edi_1
    int32_t mxcsr
    
    if (*(arg1 + 0x3d) == 0)
        int32_t i = 0
        int32_t var_28 = 0x3050200
        int32_t var_24_1 = 0x1060500
        int32_t var_20_1 = 0x6010403
        int32_t i_4 = 0
        float* edi_2
        
        do
            float var_58_3 = fconvert.s((float.t(i_4) * fconvert.t(72.0) + fconvert.t(var_54_2))
                * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
            int16_t x87control_2
            int80_t st0_4
            st0_4, x87control_2 = sub_70ca80(mxcsr, x87control, fconvert.t(var_58_3))
            var_48.d = fconvert.s(st0_4)
            edi_2 = var_38
            edi_2[i * 2] =
                fconvert.s(fconvert.t(var_48.d) * fconvert.t(var_5c) + fconvert.t(var_3c))
            int80_t st0_5
            st0_5, x87control = sub_70c950(mxcsr, x87control_2, fconvert.t(var_58_3))
            var_48.d = fconvert.s(st0_5)
            i += 1
            i_4 = i
            edi_2[i * 2 - 1] =
                fconvert.s(fconvert.t(var_48.d) * fconvert.t(var_5c) + fconvert.t(var_4c_1))
        while (i s< 5)
        
        int32_t* eax_25
        int80_t st0_6
        st0_6, eax_25 = sub_5864e0(&edi_2[4], &var_48, &edi_2[2], &edi_2[8], &edi_2[6])
        float* ecx_3 = var_38
        ecx_3[0xa] = *eax_25
        ecx_3[0xb] = eax_25[1]
        int32_t* eax_27
        int80_t st0_7
        st0_7, eax_27 = sub_5864e0(ecx_3, &var_48, &ecx_3[4], &ecx_3[6], &edi_2[8])
        long double x87_r7_63 = fconvert.t(0.5)
        long double x87_r6_18 = fconvert.t(0.5f)
        float* ecx_4 = var_38
        long double x87_r5_12 = float.t(1)
        ecx_4[0xc] = *eax_27
        ecx_4[0xd] = eax_27[1]
        
        for (int32_t i_1 = 0; i_1 s< 0xc; )
            uint32_t edx_9 = zx.d(*(&var_28 + i_1))
            var_5c = fconvert.s(fconvert.t(ecx_4[edx_9 * 2 + 1]))
            void* edx_10 = &ecx_4[edx_9 * 2]
            *ebx_1 = fconvert.s(fconvert.t(*edx_10) - x87_r7_63)
            ebx_1[1] = fconvert.s(fconvert.t(var_5c) - x87_r7_63)
            ebx_1[2] = fconvert.s(x87_r6_18)
            ebx_1[3] = fconvert.s(x87_r5_12)
            ebx_1[4] = 0xffffffff
            var_5c = fconvert.s(fconvert.t(*(edx_10 + 4)) / float.t(*(arg1 + 0x38)))
            void* edx_12 = &ecx_4[zx.d(*(&var_28:1 + i_1)) * 2]
            ebx_1[5] = fconvert.s(fconvert.t(*edx_10) / float.t(*(arg1 + 0x34)))
            ebx_1[6] = fconvert.s(fconvert.t(var_5c))
            var_5c = fconvert.s(fconvert.t(*(edx_12 + 4)))
            ebx_1[7] = fconvert.s(fconvert.t(*edx_12) - x87_r7_63)
            ebx_1[8] = fconvert.s(fconvert.t(var_5c) - x87_r7_63)
            ebx_1[9] = fconvert.s(x87_r6_18)
            ebx_1[0xa] = fconvert.s(x87_r5_12)
            ebx_1[0xb] = 0xffffffff
            var_5c = fconvert.s(fconvert.t(*(edx_12 + 4)) / float.t(*(arg1 + 0x38)))
            void* edx_14 = &ecx_4[zx.d(*(&var_28:2 + i_1)) * 2]
            ebx_1[0xc] = fconvert.s(fconvert.t(*edx_12) / float.t(*(arg1 + 0x34)))
            ebx_1[0xd] = fconvert.s(fconvert.t(var_5c))
            var_5c = fconvert.s(fconvert.t(*(edx_14 + 4)))
            ebx_1[0xe] = fconvert.s(fconvert.t(*edx_14) - x87_r7_63)
            ebx_1[0xf] = fconvert.s(fconvert.t(var_5c) - x87_r7_63)
            ebx_1[0x10] = fconvert.s(x87_r6_18)
            ebx_1[0x11] = fconvert.s(x87_r5_12)
            ebx_1[0x12] = 0xffffffff
            var_5c = fconvert.s(fconvert.t(*(edx_14 + 4)) / float.t(*(arg1 + 0x38)))
            void* edx_16 = &ecx_4[zx.d(*(&var_28:3 + i_1)) * 2]
            ebx_1[0x13] = fconvert.s(fconvert.t(*edx_14) / float.t(*(arg1 + 0x34)))
            ebx_1[0x14] = fconvert.s(fconvert.t(var_5c))
            var_5c = fconvert.s(fconvert.t(*(edx_16 + 4)))
            ebx_1[0x15] = fconvert.s(fconvert.t(*edx_16) - x87_r7_63)
            ebx_1[0x16] = fconvert.s(fconvert.t(var_5c) - x87_r7_63)
            ebx_1[0x17] = fconvert.s(x87_r6_18)
            i_1 += 6
            ebx_1 = &ebx_1[0x2a]
            ebx_1[-0x12] = fconvert.s(x87_r5_12)
            ebx_1[-0x11] = 0xffffffff
            var_5c = fconvert.s(fconvert.t(*(edx_16 + 4)) / float.t(*(arg1 + 0x38)))
            void var_2a
            void* edx_18 = &ecx_4[zx.d(*(&var_2a + i_1)) * 2]
            ebx_1[-0x10] = fconvert.s(fconvert.t(*edx_16) / float.t(*(arg1 + 0x34)))
            ebx_1[-0xf] = fconvert.s(fconvert.t(var_5c))
            var_5c = fconvert.s(fconvert.t(*(edx_18 + 4)))
            ebx_1[-0xe] = fconvert.s(fconvert.t(*edx_18) - x87_r7_63)
            ebx_1[-0xd] = fconvert.s(fconvert.t(var_5c) - x87_r7_63)
            ebx_1[-0xc] = fconvert.s(x87_r6_18)
            ebx_1[-0xb] = fconvert.s(x87_r5_12)
            ebx_1[-0xa] = 0xffffffff
            var_5c = fconvert.s(fconvert.t(*(edx_18 + 4)) / float.t(*(arg1 + 0x38)))
            void var_29
            float* edx_20 = &ecx_4[zx.d(*(&var_29 + i_1)) * 2]
            ebx_1[-9] = fconvert.s(fconvert.t(*edx_18) / float.t(*(arg1 + 0x34)))
            ebx_1[-8] = fconvert.s(fconvert.t(var_5c))
            var_5c = fconvert.s(fconvert.t(edx_20[1]))
            ebx_1[-7] = fconvert.s(fconvert.t(*edx_20) - x87_r7_63)
            ebx_1[-6] = fconvert.s(fconvert.t(var_5c) - x87_r7_63)
            ebx_1[-5] = fconvert.s(x87_r6_18)
            ebx_1[-4] = fconvert.s(x87_r5_12)
            ebx_1[-3] = 0xffffffff
            var_5c = fconvert.s(fconvert.t(edx_20[1]) / float.t(*(arg1 + 0x38)))
            ebx_1[-2] = fconvert.s(fconvert.t(*edx_20) / float.t(*(arg1 + 0x34)))
            ebx_1[-1] = fconvert.s(fconvert.t(var_5c))
        
        edi_1 = var_38
    else
        int32_t i_2 = 0
        int32_t i_3 = 0
        float* edx_3
        
        do
            float var_58_2 = fconvert.s((float.t(i_3) * fconvert.t(60.0) + fconvert.t(var_54_2))
                * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
            int16_t x87control_1
            long double st0_2
            st0_2, x87control_1 = sub_70ca80(mxcsr, x87control, fconvert.t(var_58_2))
            var_38[i_2 * 2] =
                fconvert.s(fconvert.t(fconvert.s(st0_2)) * fconvert.t(var_5c) + fconvert.t(var_3c))
            long double st0_3
            st0_3, x87control = sub_70c950(mxcsr, x87control_1, fconvert.t(var_58_2))
            edx_3 = var_38
            i_2 += 1
            i_3 = i_2
            edx_3[i_2 * 2 - 1] = fconvert.s(fconvert.t(fconvert.s(st0_3)) * fconvert.t(var_5c)
                + fconvert.t(var_4c_1))
        while (i_2 s< 6)
        
        edi_1 = edx_3
        var_5c = fconvert.s(fconvert.t(edi_1[1]))
        long double x87_r6_5 = fconvert.t(0.5)
        *ebx_1 = fconvert.s(fconvert.t(*edi_1) - x87_r6_5)
        ebx_1[1] = fconvert.s(fconvert.t(var_5c) - x87_r6_5)
        long double x87_r6_9 = fconvert.t(0.5f)
        ebx_1[2] = fconvert.s(x87_r6_9)
        long double x87_r5_2 = float.t(1)
        ebx_1[3] = fconvert.s(x87_r5_2)
        ebx_1[4] = 0xffffffff
        var_5c = fconvert.s(fconvert.t(edi_1[1]) / float.t(*(arg1 + 0x38)))
        ebx_1[5] = fconvert.s(fconvert.t(*edi_1) / float.t(*(arg1 + 0x34)))
        ebx_1[6] = fconvert.s(fconvert.t(var_5c))
        var_5c = fconvert.s(fconvert.t(edi_1[5]))
        ebx_1[7] = fconvert.s(fconvert.t(edi_1[4]) - x87_r6_5)
        ebx_1[8] = fconvert.s(fconvert.t(var_5c) - x87_r6_5)
        ebx_1[9] = fconvert.s(x87_r6_9)
        ebx_1[0xa] = fconvert.s(x87_r5_2)
        ebx_1[0xb] = 0xffffffff
        var_5c = fconvert.s(fconvert.t(edi_1[5]) / float.t(*(arg1 + 0x38)))
        ebx_1[0xc] = fconvert.s(fconvert.t(edi_1[4]) / float.t(*(arg1 + 0x34)))
        ebx_1[0xd] = fconvert.s(fconvert.t(var_5c))
        var_5c = fconvert.s(fconvert.t(edi_1[9]))
        ebx_1[0xe] = fconvert.s(fconvert.t(edi_1[8]) - x87_r6_5)
        ebx_1[0xf] = fconvert.s(fconvert.t(var_5c) - x87_r6_5)
        ebx_1[0x10] = fconvert.s(x87_r6_9)
        ebx_1[0x11] = fconvert.s(x87_r5_2)
        ebx_1[0x12] = 0xffffffff
        var_5c = fconvert.s(fconvert.t(edi_1[9]) / float.t(*(arg1 + 0x38)))
        ebx_1[0x13] = fconvert.s(fconvert.t(edi_1[8]) / float.t(*(arg1 + 0x34)))
        ebx_1[0x14] = fconvert.s(fconvert.t(var_5c))
        var_5c = fconvert.s(fconvert.t(edi_1[3]))
        ebx_1[0x15] = fconvert.s(fconvert.t(edi_1[2]) - x87_r6_5)
        ebx_1[0x16] = fconvert.s(fconvert.t(var_5c) - x87_r6_5)
        ebx_1[0x17] = fconvert.s(x87_r6_9)
        ebx_1[0x18] = fconvert.s(x87_r5_2)
        ebx_1[0x19] = 0xffffffff
        var_5c = fconvert.s(fconvert.t(edi_1[3]) / float.t(*(arg1 + 0x38)))
        ebx_1[0x1a] = fconvert.s(fconvert.t(edi_1[2]) / float.t(*(arg1 + 0x34)))
        ebx_1[0x1b] = fconvert.s(fconvert.t(var_5c))
        var_5c = fconvert.s(fconvert.t(edi_1[7]))
        ebx_1[0x1c] = fconvert.s(fconvert.t(edi_1[6]) - x87_r6_5)
        ebx_1[0x1d] = fconvert.s(fconvert.t(var_5c) - x87_r6_5)
        ebx_1[0x1e] = fconvert.s(x87_r6_9)
        ebx_1[0x1f] = fconvert.s(x87_r5_2)
        ebx_1[0x20] = 0xffffffff
        var_5c = fconvert.s(fconvert.t(edi_1[7]) / float.t(*(arg1 + 0x38)))
        ebx_1[0x21] = fconvert.s(fconvert.t(edi_1[6]) / float.t(*(arg1 + 0x34)))
        ebx_1[0x22] = fconvert.s(fconvert.t(var_5c))
        var_5c = fconvert.s(fconvert.t(edi_1[0xb]))
        ebx_1[0x23] = fconvert.s(fconvert.t(edi_1[0xa]) - x87_r6_5)
        ebx_1[0x24] = fconvert.s(fconvert.t(var_5c) - x87_r6_5)
        ebx_1[0x25] = fconvert.s(x87_r6_9)
        ebx_1[0x26] = fconvert.s(x87_r5_2)
        ebx_1[0x27] = 0xffffffff
        var_5c = fconvert.s(fconvert.t(edi_1[0xb]) / float.t(*(arg1 + 0x38)))
        ebx_1[0x28] = fconvert.s(fconvert.t(edi_1[0xa]) / float.t(*(arg1 + 0x34)))
        ebx_1[0x29] = fconvert.s(fconvert.t(var_5c))
    int32_t* ecx_5 = *(arg1 + 4)
    
    if (ecx_5 != 0)
        (*(*ecx_5 + 0x18))(eax_4)
    
    float* var_70_6 = edi_1
    sub_6b4d5b()
    int32_t eax_31
    eax_31.b = 1
else
    float* eax_23 = var_38
    
    if (eax_23 != 0)
        float* var_70_3 = eax_23
        sub_6b4d5b()
    
    eax_23.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
