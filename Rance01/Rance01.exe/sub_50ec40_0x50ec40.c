// 函数: sub_50ec40
// 地址: 0x50ec40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714980
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float* ebx = arg2
void* esi = arg1

if (*(esi + 0x3c) == 0)
    goto label_50f221

float* var_1c = nullptr
int32_t var_18_1 = 0
int32_t var_14_1 = 0
sub_65a090(&var_1c, 0x1c)
int32_t var_4 = 0
void* eax_4 = ebx[0x33]
float var_4c_1
long double x87_r7_1

if (eax_4 != 0)
    float var_54_1
    
    if (((*(eax_4 + 0x10) - *(eax_4 + 0xc)) & 0xfffffffc) s> 0x28)
        var_54_1 = fconvert.s(fconvert.t(*(*(eax_4 + 0xc) + 0x28)))
        x87_r7_1 = float.t(0)
    else
        x87_r7_1 = float.t(0)
        var_54_1 = fconvert.s(x87_r7_1)
    
    var_4c_1 = fconvert.s(fconvert.t(var_54_1))
else
    x87_r7_1 = float.t(0)
    var_4c_1 = fconvert.s(x87_r7_1)

float var_50_1

if (eax_4 != 0)
    float var_54_2
    
    if (((*(eax_4 + 0x10) - *(eax_4 + 0xc)) & 0xfffffffc) s> 0x24)
        var_54_2 = fconvert.s(fconvert.t(*(*(eax_4 + 0xc) + 0x24)))
    else
        var_54_2 = fconvert.s(x87_r7_1)
    
    var_50_1 = fconvert.s(fconvert.t(var_54_2))
else
    var_50_1 = fconvert.s(x87_r7_1)

if (eax_4 != 0)
    if (((*(eax_4 + 0x10) - *(eax_4 + 0xc)) & 0xfffffffc) s> 0x20)
        x87_r7_1 = fconvert.t(*(*(eax_4 + 0xc) + 0x20))
    
    x87_r7_1 = fconvert.t(fconvert.s(x87_r7_1))

float var_34 = fconvert.s(fconvert.t(fconvert.s(x87_r7_1)))
float var_30_1 = fconvert.s(fconvert.t(var_50_1))
float var_2c_1 = fconvert.s(fconvert.t(var_4c_1))
float var_28
float* eax_5 = sub_51e2a0(&var_34, &var_28)
float* esi_3 = var_1c
float var_44_1 = fconvert.s(fneg(fconvert.t(eax_5[1])))
float var_48_1 = fconvert.s(fneg(fconvert.t(eax_5[2])))
*esi_3 = fconvert.s(fconvert.t(fconvert.s(fneg(fconvert.t(*eax_5)))))
esi_3[1] = fconvert.s(fconvert.t(var_44_1))
esi_3[2] = fconvert.s(fconvert.t(var_48_1))
long double x87_r7_15 = float.t(0)
esi_3[3] = fconvert.s(x87_r7_15)
void* eax_6 = ebx[0x33]
float var_4c_2

if (eax_6 != 0)
    float var_4c_3
    
    if (((*(eax_6 + 0x10) - *(eax_6 + 0xc)) & 0xfffffffc) s> 0x2c)
        var_4c_3 = fconvert.s(fconvert.t(*(*(eax_6 + 0xc) + 0x2c)))
    else
        var_4c_3 = fconvert.s(x87_r7_15)
    
    var_4c_2 = fconvert.s(fconvert.t(var_4c_3))
else
    var_4c_2 = fconvert.s(x87_r7_15)

esi_3[4] = fconvert.s(fconvert.t(var_4c_2))
void* eax_7 = ebx[0x33]
float var_4c_4

if (eax_7 != 0)
    float var_4c_5
    
    if (((*(eax_7 + 0x10) - *(eax_7 + 0xc)) & 0xfffffffc) s> 0x30)
        var_4c_5 = fconvert.s(fconvert.t(*(*(eax_7 + 0xc) + 0x30)))
    else
        var_4c_5 = fconvert.s(x87_r7_15)
    
    var_4c_4 = fconvert.s(fconvert.t(var_4c_5))
else
    var_4c_4 = fconvert.s(x87_r7_15)

esi_3[5] = fconvert.s(fconvert.t(var_4c_4))
void* eax_8 = ebx[0x33]
float var_4c_6

if (eax_8 != 0)
    float var_4c_7
    
    if (((*(eax_8 + 0x10) - *(eax_8 + 0xc)) & 0xfffffffc) s> 0x34)
        var_4c_7 = fconvert.s(fconvert.t(*(*(eax_8 + 0xc) + 0x34)))
    else
        var_4c_7 = fconvert.s(x87_r7_15)
    
    var_4c_6 = fconvert.s(fconvert.t(var_4c_7))
else
    var_4c_6 = fconvert.s(x87_r7_15)

esi_3[6] = fconvert.s(fconvert.t(var_4c_6))
esi_3[7] = fconvert.s(x87_r7_15)
void* eax_9 = ebx[0x33]
float var_4c_8

if (eax_9 != 0)
    float var_4c_9
    
    if (((*(eax_9 + 0x10) - *(eax_9 + 0xc)) & 0xfffffffc) s> 0x38)
        var_4c_9 = fconvert.s(fconvert.t(*(*(eax_9 + 0xc) + 0x38)))
    else
        var_4c_9 = fconvert.s(x87_r7_15)
    
    var_4c_8 = fconvert.s(fconvert.t(var_4c_9))
else
    var_4c_8 = fconvert.s(x87_r7_15)

esi_3[8] = fconvert.s(fconvert.t(var_4c_8))
void* eax_10 = ebx[0x33]
float var_4c_10

if (eax_10 != 0)
    float var_4c_11
    
    if (((*(eax_10 + 0x10) - *(eax_10 + 0xc)) & 0xfffffffc) s> 0x3c)
        var_4c_11 = fconvert.s(fconvert.t(*(*(eax_10 + 0xc) + 0x3c)))
    else
        var_4c_11 = fconvert.s(x87_r7_15)
    
    var_4c_10 = fconvert.s(fconvert.t(var_4c_11))
else
    var_4c_10 = fconvert.s(x87_r7_15)

esi_3[9] = fconvert.s(fconvert.t(var_4c_10))
void* eax_11 = ebx[0x33]
float var_4c_12

if (eax_11 != 0)
    float var_4c_13
    
    if (((*(eax_11 + 0x10) - *(eax_11 + 0xc)) & 0xfffffffc) s> 0x40)
        var_4c_13 = fconvert.s(fconvert.t(*(*(eax_11 + 0xc) + 0x40)))
    else
        var_4c_13 = fconvert.s(x87_r7_15)
    
    var_4c_12 = fconvert.s(fconvert.t(var_4c_13))
else
    var_4c_12 = fconvert.s(x87_r7_15)

esi_3[0xa] = fconvert.s(fconvert.t(var_4c_12))
esi_3[0xb] = fconvert.s(x87_r7_15)
void* eax_12 = ebx[0x33]
float var_4c_14

if (eax_12 != 0)
    float var_4c_15
    
    if (((*(eax_12 + 0x10) - *(eax_12 + 0xc)) & 0xfffffffc) s> 0x44)
        var_4c_15 = fconvert.s(fconvert.t(*(*(eax_12 + 0xc) + 0x44)))
    else
        var_4c_15 = fconvert.s(x87_r7_15)
    
    var_4c_14 = fconvert.s(fconvert.t(var_4c_15))
else
    var_4c_14 = fconvert.s(x87_r7_15)

esi_3[0xc] = fconvert.s(fconvert.t(var_4c_14))
void* eax_13 = ebx[0x33]
float var_4c_16

if (eax_13 != 0)
    float var_4c_17
    
    if (((*(eax_13 + 0x10) - *(eax_13 + 0xc)) & 0xfffffffc) s> 0x48)
        var_4c_17 = fconvert.s(fconvert.t(*(*(eax_13 + 0xc) + 0x48)))
    else
        var_4c_17 = fconvert.s(x87_r7_15)
    
    var_4c_16 = fconvert.s(fconvert.t(var_4c_17))
else
    var_4c_16 = fconvert.s(x87_r7_15)

esi_3[0xd] = fconvert.s(fconvert.t(var_4c_16))
void* eax_14 = ebx[0x33]
float var_4c_18

if (eax_14 != 0)
    float var_4c_19
    
    if (((*(eax_14 + 0x10) - *(eax_14 + 0xc)) & 0xfffffffc) s> 0x4c)
        var_4c_19 = fconvert.s(fconvert.t(*(*(eax_14 + 0xc) + 0x4c)))
    else
        var_4c_19 = fconvert.s(x87_r7_15)
    
    var_4c_18 = fconvert.s(fconvert.t(var_4c_19))
else
    var_4c_18 = fconvert.s(x87_r7_15)

esi_3[0xe] = fconvert.s(fconvert.t(var_4c_18))
esi_3[0xf] = fconvert.s(x87_r7_15)
void* ecx_37 = ebx[0x33]
float var_40_2

if (ecx_37 != 0)
    float var_4c_20
    
    if (((*(ecx_37 + 0x10) - *(ecx_37 + 0xc)) & 0xfffffffc) s> 8)
        var_4c_20 = fconvert.s(fconvert.t(*(*(ecx_37 + 0xc) + 8)))
    else
        var_4c_20 = fconvert.s(x87_r7_15)
    
    var_40_2 = fconvert.s(fconvert.t(var_4c_20))
else
    var_40_2 = fconvert.s(x87_r7_15)

float var_54_5

if (ecx_37 != 0)
    float var_4c_21
    
    if (((*(ecx_37 + 0x10) - *(ecx_37 + 0xc)) & 0xfffffffc) s> 0xc)
        var_4c_21 = fconvert.s(fconvert.t(*(*(ecx_37 + 0xc) + 0xc)))
    else
        var_4c_21 = fconvert.s(x87_r7_15)
    
    var_54_5 = fconvert.s(fconvert.t(var_4c_21))
else
    var_54_5 = fconvert.s(x87_r7_15)

float var_50_2

if (ecx_37 != 0)
    float var_4c_22
    
    if (((*(ecx_37 + 0x10) - *(ecx_37 + 0xc)) & 0xfffffffc) s> 0x10)
        var_4c_22 = fconvert.s(fconvert.t(*(*(ecx_37 + 0xc) + 0x10)))
    else
        var_4c_22 = fconvert.s(x87_r7_15)
    
    var_50_2 = fconvert.s(fconvert.t(var_4c_22))
else
    var_50_2 = fconvert.s(x87_r7_15)

float var_44_2

if (ecx_37 != 0)
    float var_4c_23
    
    if (((*(ecx_37 + 0x10) - *(ecx_37 + 0xc)) & 0xfffffffc) s> 0x14)
        var_4c_23 = fconvert.s(fconvert.t(*(*(ecx_37 + 0xc) + 0x14)))
    else
        var_4c_23 = fconvert.s(x87_r7_15)
    
    var_44_2 = fconvert.s(fconvert.t(var_4c_23))
else
    var_44_2 = fconvert.s(x87_r7_15)

float var_48_2

if (ecx_37 != 0)
    float var_4c_24
    
    if (((*(ecx_37 + 0x10) - *(ecx_37 + 0xc)) & 0xfffffffc) s> 0x18)
        var_4c_24 = fconvert.s(fconvert.t(*(*(ecx_37 + 0xc) + 0x18)))
    else
        var_4c_24 = fconvert.s(x87_r7_15)
    
    var_48_2 = fconvert.s(fconvert.t(var_4c_24))
else
    var_48_2 = fconvert.s(x87_r7_15)

float var_4c_25

if (ecx_37 != 0)
    float var_4c_26
    
    if (((*(ecx_37 + 0x10) - *(ecx_37 + 0xc)) & 0xfffffffc) s> 0x1c)
        var_4c_26 = fconvert.s(fconvert.t(*(*(ecx_37 + 0xc) + 0x1c)))
    else
        var_4c_26 = fconvert.s(x87_r7_15)
    
    var_4c_25 = fconvert.s(fconvert.t(var_4c_26))
else
    var_4c_25 = fconvert.s(x87_r7_15)

long double x87_r5_1 = fconvert.t(var_54_5)
long double x87_r6_45 = x87_r5_1
long double x87_r5_3 = fconvert.t(var_48_2)
long double x87_r3_1 = fconvert.t(var_44_2)
long double x87_r3_3 = fconvert.t(var_4c_25)
x87_r7_15 - x87_r3_3
eax_14.w = (x87_r7_15 < x87_r3_3 ? 1 : 0) << 8
    | (is_unordered.t(x87_r7_15, x87_r3_3) ? 1 : 0) << 0xa | (x87_r7_15 == x87_r3_3 ? 1 : 0) << 0xe
    | 0x2000
bool p_1 = unimplemented  {test ah, 0x44}
long double x87_r5_4

if (not(p_1))
    x87_r6_45 = x87_r3_3
    x87_r5_4 = float.t(0)
else
    x87_r5_4 = x87_r5_3 / x87_r3_3

float var_44_3
long double x87_r6_46
long double x87_r7_16

if (ecx_37 != 0)
    float var_44_4
    
    if (((*(ecx_37 + 0x10) - *(ecx_37 + 0xc)) & 0xfffffffc) s> 0)
        var_44_4 = fconvert.s(fconvert.t(**(ecx_37 + 0xc)))
        x87_r6_46 = x87_r7_15
        x87_r7_16 = x87_r6_45
    else
        x87_r6_46 = x87_r7_15
        x87_r7_16 = x87_r6_45
        var_44_4 = fconvert.s(x87_r6_46)
    
    var_44_3 = fconvert.s(fconvert.t(var_44_4))
else
    x87_r6_46 = x87_r7_15
    x87_r7_16 = x87_r6_45
    var_44_3 = fconvert.s(x87_r6_46)

esi_3[0x10] = fconvert.s(fconvert.t(var_44_3))
void* eax_29 = ebx[0x33]

if (eax_29 != 0)
    if (((*(eax_29 + 0x10) - *(eax_29 + 0xc)) & 0xfffffffc) s> 4)
        x87_r7_16 = x87_r6_46
        x87_r6_46 = fconvert.t(*(*(eax_29 + 0xc) + 4))
    
    x87_r6_46 = fconvert.t(fconvert.s(x87_r6_46))

esi_3[0x11] = fconvert.s(fconvert.t(fconvert.s(x87_r6_46)))
esi_3[0x12] = fconvert.s(fconvert.t(var_40_2))
esi_3[0x13] = fconvert.s(x87_r7_16)
esi_3[0x14] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_50_2) * x87_r5_1)))
esi_3[0x15] = fconvert.s(fconvert.t(fconvert.s(x87_r5_3 * x87_r3_1)))
esi_3[0x16] = fconvert.s(fconvert.t(fconvert.s(x87_r3_1 * x87_r3_3)))
esi_3[0x17] = fconvert.s(fconvert.t(fconvert.s(x87_r5_4)))
esi_3[0x18] = fconvert.s(fconvert.t(*ebx))
esi_3[0x19] = fconvert.s(fconvert.t(ebx[1]))
esi_3[0x1a] = fconvert.s(fconvert.t(ebx[2]))
esi_3[0x1b] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(ebx[0x14]))))
float* var_70_2 = esi_3
int32_t eax_37

if ((*(**(arg1 + 0x34) + 0x24))(0, esi_3, (var_18_1 - esi_3) s>> 2 u>> 2) != 0)
    *(arg1 + 0x3c) = 0
    int32_t var_4_1 = 0xffffffff
    sub_6b4d5b()
    esi = arg1
label_50f221:
    
    if (*(esi + 0x30) != 0)
        if (ebx[0x2b] == 2)
            var_1c = nullptr
            int32_t var_18_2 = 0
            int32_t var_14_2 = 0
            sub_65a090(&var_1c, 0x1c)
            float* eax_39 = arg2
            int32_t var_4_2 = 1
            float* ebp_1 = var_1c
            *ebp_1 = fconvert.s(fconvert.t(*eax_39))
            ebp_1[1] = fconvert.s(fconvert.t(eax_39[1]))
            ebp_1[2] = fconvert.s(fconvert.t(eax_39[2]))
            long double x87_r7_33 = float.t(0)
            ebp_1[3] = fconvert.s(x87_r7_33)
            void* ebx_1 = eax_39[0x33]
            float var_4c_28
            
            if (ebx_1 == 0 || ((*(ebx_1 + 0x10) - *(ebx_1 + 0xc)) & 0xfffffffc) s<= 0x5c)
                var_4c_28 = fconvert.s(x87_r7_33)
            else
                long double x87_r6_50 = fconvert.t(fconvert.s(fconvert.t(*(*(ebx_1 + 0xc) + 0x5c))))
                x87_r7_33 - x87_r6_50
                eax_39.w = (x87_r7_33 < x87_r6_50 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_33, x87_r6_50) ? 1 : 0) << 0xa
                    | (x87_r7_33 == x87_r6_50 ? 1 : 0) << 0xe | 0x3000
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    x87_r7_33 = x87_r6_50
                    var_4c_28 = fconvert.s(x87_r7_33)
                else
                    long double x87_r5_10 = float.t(1)
                    var_4c_28 = fconvert.s(x87_r5_10 / x87_r5_10)
            
            float var_48_4
            
            if (ebx_1 != 0)
                float var_40_5
                
                if (((*(ebx_1 + 0x10) - *(ebx_1 + 0xc)) & 0xfffffffc) s> 0x68)
                    var_40_5 = fconvert.s(fconvert.t(*(*(ebx_1 + 0xc) + 0x68)))
                else
                    var_40_5 = fconvert.s(x87_r7_33)
                
                var_48_4 = fconvert.s(fconvert.t(var_40_5))
            else
                var_48_4 = fconvert.s(x87_r7_33)
            
            float var_44_7
            
            if (ebx_1 != 0)
                float var_40_6
                
                if (((*(ebx_1 + 0x10) - *(ebx_1 + 0xc)) & 0xfffffffc) s> 0x64)
                    var_40_6 = fconvert.s(fconvert.t(*(*(ebx_1 + 0xc) + 0x64)))
                else
                    var_40_6 = fconvert.s(x87_r7_33)
                
                var_44_7 = fconvert.s(fconvert.t(var_40_6))
            else
                var_44_7 = fconvert.s(x87_r7_33)
            
            if (ebx_1 != 0)
                if (((*(ebx_1 + 0x10) - *(ebx_1 + 0xc)) & 0xfffffffc) s> 0x60)
                    x87_r7_33 = fconvert.t(*(*(ebx_1 + 0xc) + 0x60))
                
                x87_r7_33 = fconvert.t(fconvert.s(x87_r7_33))
            
            var_34 = fconvert.s(fconvert.t(fconvert.s(x87_r7_33)))
            float var_30_2 = fconvert.s(fconvert.t(var_44_7))
            float var_2c_2 = fconvert.s(fconvert.t(var_48_4))
            sub_51e2a0(&var_34, &var_28)
            float var_48_5
            long double x87_r7_37
            
            if (ebx_1 != 0)
                float var_40_9
                
                if (((*(ebx_1 + 0x10) - *(ebx_1 + 0xc)) & 0xfffffffc) s> 0x58)
                    var_40_9 = fconvert.s(fconvert.t(*(*(ebx_1 + 0xc) + 0x58)))
                    x87_r7_37 = float.t(0)
                else
                    x87_r7_37 = float.t(0)
                    var_40_9 = fconvert.s(x87_r7_37)
                
                var_48_5 = fconvert.s(fconvert.t(var_40_9))
            else
                x87_r7_37 = float.t(0)
                var_48_5 = fconvert.s(x87_r7_37)
            
            float var_44_8
            
            if (ebx_1 != 0)
                float var_40_10
                
                if (((*(ebx_1 + 0x10) - *(ebx_1 + 0xc)) & 0xfffffffc) s> 0x50)
                    var_40_10 = fconvert.s(fconvert.t((*(ebx_1 + 0xc))[0x14]))
                else
                    var_40_10 = fconvert.s(x87_r7_37)
                
                var_44_8 = fconvert.s(fconvert.t(var_40_10))
            else
                var_44_8 = fconvert.s(x87_r7_37)
            
            float var_40_11
            
            if (ebx_1 != 0)
                float var_40_12
                
                if (((*(ebx_1 + 0x10) - *(ebx_1 + 0xc)) & 0xfffffffc) s> 0x54)
                    var_40_12 = fconvert.s(fconvert.t(*(*(ebx_1 + 0xc) + 0x54)))
                else
                    var_40_12 = fconvert.s(x87_r7_37)
                
                var_40_11 = fconvert.s(fconvert.t(var_40_12))
            else
                var_40_11 = fconvert.s(x87_r7_37)
            
            long double x87_r6_61 = fconvert.t(var_44_8)
            long double x87_r5_15 = fconvert.t(var_48_5)
            long double x87_r3_6 = float.t(1)
            long double x87_r5_16 = x87_r3_6 - x87_r5_15
            long double x87_r3_9 = fconvert.t(var_40_11)
            long double x87_r6_62 = x87_r6_61 + x87_r3_9
            long double x87_r3_11 = float.t(0)
            x87_r3_11 - x87_r6_62
            float* eax_44
            eax_44.w = (x87_r3_11 < x87_r6_62 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_11, x87_r6_62) ? 1 : 0) << 0xa
                | (x87_r3_11 == x87_r6_62 ? 1 : 0) << 0xe | 0x2800
            bool p_3 = unimplemented  {test ah, 0x44}
            float var_44_9
            
            if (not(p_3))
                var_44_9 = fconvert.s(x87_r7_37)
                x87_r6_62 = x87_r3_6
            else
                var_44_9 = fconvert.s(x87_r3_6 / x87_r6_62)
            
            float var_40_13
            
            if (ebx_1 != 0)
                float var_40_14
                
                if (((*(ebx_1 + 0x10) - *(ebx_1 + 0xc)) & 0xfffffffc) s> 0x6c)
                    var_40_14 = fconvert.s(fconvert.t(*(*(ebx_1 + 0xc) + 0x6c)))
                else
                    var_40_14 = fconvert.s(x87_r7_37)
                
                var_40_13 = fconvert.s(fconvert.t(var_40_14))
            else
                var_40_13 = fconvert.s(x87_r7_37)
            
            float eax_50 = arg2
            ebp_1[4] = fconvert.s(fconvert.t(var_40_13))
            void* ecx_53 = *(eax_50 i+ 0xcc)
            
            if (ecx_53 != 0)
                if (((*(ecx_53 + 0x10) - *(ecx_53 + 0xc)) & 0xfffffffc) s> 0x70)
                    arg2 = fconvert.s(fconvert.t(*(*(ecx_53 + 0xc) + 0x70)))
                else
                    arg2 = fconvert.s(x87_r7_37)
                
                arg2 = fconvert.s(fconvert.t(arg2))
            else
                arg2 = fconvert.s(x87_r7_37)
            
            ebp_1[5] = fconvert.s(fconvert.t(arg2))
            void* ecx_55 = *(eax_50 i+ 0xcc)
            
            if (ecx_55 != 0)
                if (((*(ecx_55 + 0x10) - *(ecx_55 + 0xc)) & 0xfffffffc) s> 0x74)
                    arg2 = fconvert.s(fconvert.t(*(*(ecx_55 + 0xc) + 0x74)))
                else
                    arg2 = fconvert.s(x87_r7_37)
                
                arg2 = fconvert.s(fconvert.t(arg2))
            else
                arg2 = fconvert.s(x87_r7_37)
            
            ebp_1[6] = fconvert.s(fconvert.t(arg2))
            ebp_1[7] = fconvert.s(x87_r7_37)
            void* ecx_57 = *(eax_50 i+ 0xcc)
            
            if (ecx_57 != 0)
                if (((*(ecx_57 + 0x10) - *(ecx_57 + 0xc)) & 0xfffffffc) s> 0x78)
                    arg2 = fconvert.s(fconvert.t(*(*(ecx_57 + 0xc) + 0x78)))
                else
                    arg2 = fconvert.s(x87_r7_37)
                
                arg2 = fconvert.s(fconvert.t(arg2))
            else
                arg2 = fconvert.s(x87_r7_37)
            
            ebp_1[8] = fconvert.s(fconvert.t(arg2))
            void* ecx_59 = *(eax_50 i+ 0xcc)
            
            if (ecx_59 != 0)
                if (((*(ecx_59 + 0x10) - *(ecx_59 + 0xc)) & 0xfffffffc) s> 0x7c)
                    arg2 = fconvert.s(fconvert.t(*(*(ecx_59 + 0xc) + 0x7c)))
                else
                    arg2 = fconvert.s(x87_r7_37)
                
                arg2 = fconvert.s(fconvert.t(arg2))
            else
                arg2 = fconvert.s(x87_r7_37)
            
            ebp_1[9] = fconvert.s(fconvert.t(arg2))
            void* ecx_61 = *(eax_50 i+ 0xcc)
            
            if (ecx_61 != 0)
                if (((*(ecx_61 + 0x10) - *(ecx_61 + 0xc)) & 0xfffffffc) s> 0x80)
                    arg2 = fconvert.s(fconvert.t(*(*(ecx_61 + 0xc) + 0x80)))
                else
                    arg2 = fconvert.s(x87_r7_37)
                
                arg2 = fconvert.s(fconvert.t(arg2))
            else
                arg2 = fconvert.s(x87_r7_37)
            
            ebp_1[0xa] = fconvert.s(fconvert.t(arg2))
            ebp_1[0xb] = fconvert.s(x87_r7_37)
            void* ecx_63 = *(eax_50 i+ 0xcc)
            
            if (ecx_63 != 0)
                if (((*(ecx_63 + 0x10) - *(ecx_63 + 0xc)) & 0xfffffffc) s> 0x50)
                    arg2 = fconvert.s(fconvert.t(*(*(ecx_63 + 0xc) + 0x50)))
                else
                    arg2 = fconvert.s(x87_r7_37)
                
                arg2 = fconvert.s(fconvert.t(arg2))
            else
                arg2 = fconvert.s(x87_r7_37)
            
            ebp_1[0xc] = fconvert.s(fconvert.t(arg2))
            void* ecx_65 = *(eax_50 i+ 0xcc)
            
            if (ecx_65 != 0)
                if (((*(ecx_65 + 0x10) - *(ecx_65 + 0xc)) & 0xfffffffc) s> 0x54)
                    arg2 = fconvert.s(fconvert.t(*(*(ecx_65 + 0xc) + 0x54)))
                else
                    arg2 = fconvert.s(x87_r7_37)
                
                arg2 = fconvert.s(fconvert.t(arg2))
            else
                arg2 = fconvert.s(x87_r7_37)
            
            ebp_1[0xd] = fconvert.s(fconvert.t(arg2))
            void* eax_51 = *(eax_50 i+ 0xcc)
            
            if (eax_51 != 0)
                if (((*(eax_51 + 0x10) - *(eax_51 + 0xc)) & 0xfffffffc) s> 0x58)
                    arg2 = fconvert.s(fconvert.t(*(*(eax_51 + 0xc) + 0x58)))
                else
                    arg2 = fconvert.s(x87_r7_37)
                
                arg2 = fconvert.s(fconvert.t(arg2))
            else
                arg2 = fconvert.s(x87_r7_37)
            
            ebp_1[0xe] = fconvert.s(fconvert.t(arg2))
            ebp_1[0xf] = fconvert.s(fconvert.t(var_4c_28))
            int32_t eax_56
            int32_t edx_57
            edx_57:eax_56 = sx.q((var_18_2 - ebp_1) s>> 2)
            ebp_1[0x10] = fconvert.s(fconvert.t(var_28))
            float var_24
            ebp_1[0x11] = fconvert.s(fconvert.t(var_24))
            float var_20
            ebp_1[0x12] = fconvert.s(fconvert.t(var_20))
            ebp_1[0x13] = fconvert.s(x87_r7_37)
            ebp_1[0x14] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(3.0) * x87_r6_61
                * fconvert.t(3.1415920257568359) * fconvert.t(0.0625))))
            ebp_1[0x15] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(-2.0) * x87_r5_15)))
            ebp_1[0x16] = fconvert.s(fconvert.t(fconvert.s(x87_r5_15 * x87_r5_15 + x87_r3_6)))
            ebp_1[0x17] = fconvert.s(fconvert.t(fconvert.s(x87_r5_16
                * fconvert.t(0.78539800643920898) * x87_r3_9 * x87_r5_16)))
            ebp_1[0x18] = fconvert.s(fconvert.t(var_44_9))
            ebp_1[0x19] = fconvert.s(fconvert.t(fconvert.s(fneg(x87_r6_62))))
            ebp_1[0x1a] = fconvert.s(x87_r7_37)
            ebp_1[0x1b] = fconvert.s(x87_r7_37)
            float* var_70_5 = ebp_1
            
            if ((*(**(arg1 + 0x28) + 0x20))(0x12, ebp_1, (eax_56 + (edx_57 & 3)) s>> 2) == 0)
                sub_6b4d5b()
                eax_37.b = 0
            else
                sub_6b4d5b()
                *(arg1 + 0x30) = 0
        else if ((*(**(esi + 0x28) + 0x1c))(0x12, fconvert.s(fconvert.t(*ebx)), 
                fconvert.s(fconvert.t(ebx[1])), fconvert.s(fconvert.t(ebx[2])), 
                fconvert.s(float.t(0))) != 0)
            *(esi + 0x30) = 0
else
    sub_6b4d5b()
    eax_37.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
