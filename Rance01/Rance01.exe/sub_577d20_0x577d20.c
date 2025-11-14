// 函数: sub_577d20
// 地址: 0x577d20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r6 = fconvert.t(arg2)
int32_t i = 0
int32_t ebp_2 = ((sub_70c710(float.t(*(arg1 + 0x34) + 0xe0) * x87_r6) + 0xf) & 0xfffffff0) - 0xe0
int32_t var_14 = ebp_2
int32_t eax_3 = sub_70c710(x87_r6 * float.t(*(arg1 + 0x38) + 0xe0))
int32_t* ecx_2 = *(arg1 + 4)
int32_t ebx_2 = ((eax_3 + 0xf) & 0xfffffff0) - 0xe0
int32_t var_18 = ebx_2
float* eax_4

if (ecx_2 != 0)
    eax_4 = (*(*ecx_2 + 0x14))()
else
    eax_4 = nullptr

if (eax_4 == 0)
    eax_4.b = 0
    return 

long double x87_r7_4 = fconvert.t(0.5)
long double x87_r6_2 = fconvert.t(0.5f)
int32_t edx_3 = ebp_2 - ebx_2
long double x87_r5_1 = float.t(1)
arg2 = 2.1019477e-44f
long double x87_r4 = float.t(0)
int32_t ecx_3 = ebx_2
int32_t var_10_1 = ebx_2
int32_t var_c = edx_3

while (true)
    int32_t edx_4 = edx_3 + ecx_3
    
    if (edx_3 + ecx_3 s>= 0)
        int32_t ebx_3 = *(arg1 + 0x34)
        
        if (edx_4 s>= ebx_3)
            ebx_2 = var_18
        else
            float var_20_1 = arg2
            
            if (arg2 i+ edx_4 s> ebx_3)
                var_20_1 = ebx_3 - edx_4
            
            float var_8_1 = fconvert.s(float.t(*(arg1 + 0x30)))
            long double x87_r3_3 = fconvert.t(fconvert.s(float.t(edx_4)))
            long double x87_r2_3 = fconvert.t(fconvert.s(x87_r3_3 - x87_r7_4))
            *eax_4 = fconvert.s(x87_r2_3)
            eax_4[1] = fconvert.s(fconvert.t(var_8_1) - x87_r7_4)
            eax_4[2] = fconvert.s(x87_r6_2)
            eax_4[3] = fconvert.s(x87_r5_1)
            eax_4[4] = 0xffffffff
            eax_4[5] = fconvert.s(x87_r3_3 / float.t(*(arg1 + 0x34)))
            eax_4[6] = fconvert.s(x87_r4)
            float var_4_1 = fconvert.s(float.t(*(arg1 + 0x30)))
            float var_1c_4 =
                fconvert.s(fconvert.t(fconvert.s(float.t(var_20_1) + x87_r3_3)) - x87_r7_4)
            eax_4[7] = fconvert.s(fconvert.t(var_1c_4))
            eax_4[8] = fconvert.s(fconvert.t(var_4_1) - x87_r7_4)
            eax_4[9] = fconvert.s(x87_r6_2)
            eax_4[0xa] = fconvert.s(x87_r5_1)
            eax_4[0xb] = 0xffffffff
            float var_20_2 = fconvert.s(float.t(edx_4 i+ var_20_1))
            eax_4[0xc] = fconvert.s(fconvert.t(var_20_2) / float.t(*(arg1 + 0x34)))
            eax_4[0xd] = fconvert.s(x87_r4)
            float var_4_3 = fconvert.s(float.t(*(arg1 + 0x30)) + float.t(*(arg1 + 0x38)))
            eax_4[0xe] = fconvert.s(x87_r2_3)
            eax_4[0xf] = fconvert.s(fconvert.t(var_4_3) - x87_r7_4)
            eax_4[0x10] = fconvert.s(x87_r6_2)
            eax_4[0x11] = fconvert.s(x87_r5_1)
            eax_4[0x12] = 0xffffffff
            eax_4[0x13] = fconvert.s(x87_r3_3 / float.t(*(arg1 + 0x34)))
            eax_4[0x14] = fconvert.s(x87_r5_1)
            float var_4_4 = fconvert.s(float.t(*(arg1 + 0x30)))
            eax_4[0x15] = fconvert.s(fconvert.t(var_1c_4))
            eax_4[0x16] = fconvert.s(fconvert.t(var_4_4) - x87_r7_4)
            eax_4[0x17] = fconvert.s(x87_r6_2)
            eax_4[0x18] = fconvert.s(x87_r5_1)
            eax_4[0x19] = 0xffffffff
            eax_4[0x1a] = fconvert.s(fconvert.t(var_20_2) / float.t(*(arg1 + 0x34)))
            eax_4 = &eax_4[0x2a]
            i += 6
            eax_4[-0xf] = fconvert.s(x87_r4)
            float var_4_5 = fconvert.s(float.t(*(arg1 + 0x30)) + float.t(*(arg1 + 0x38)))
            eax_4[-0xe] = fconvert.s(fconvert.t(var_1c_4))
            eax_4[-0xd] = fconvert.s(fconvert.t(var_4_5) - x87_r7_4)
            eax_4[-0xc] = fconvert.s(x87_r6_2)
            eax_4[-0xb] = fconvert.s(x87_r5_1)
            eax_4[-0xa] = 0xffffffff
            eax_4[-9] = fconvert.s(fconvert.t(var_20_2) / float.t(*(arg1 + 0x34)))
            eax_4[-8] = fconvert.s(x87_r5_1)
            float var_4_6 = fconvert.s(float.t(*(arg1 + 0x30)) + float.t(*(arg1 + 0x38)))
            eax_4[-7] = fconvert.s(x87_r2_3)
            eax_4[-6] = fconvert.s(fconvert.t(var_4_6) - x87_r7_4)
            eax_4[-5] = fconvert.s(x87_r6_2)
            eax_4[-4] = fconvert.s(x87_r5_1)
            eax_4[-3] = 0xffffffff
            eax_4[-2] = fconvert.s(x87_r3_3 / float.t(*(arg1 + 0x34)))
            eax_4[-1] = fconvert.s(x87_r5_1)
            int32_t ebx_5
            
            if (ecx_3 s>= 0)
                ebx_5 = *(arg1 + 0x38)
            
            if (ecx_3 s< 0 || ecx_3 s>= ebx_5)
                ebp_2 = var_14
                ebx_2 = var_18
            else
                float edx_6 = arg2
                float var_1c_5 = edx_6
                
                if (ecx_3 i+ edx_6 s> ebx_5)
                    float ebx_6 = ebx_5 - ecx_3
                    edx_6 = ebx_6
                    var_1c_5 = ebx_6
                
                *eax_4 = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_4)
                long double x87_r3_10 = fconvert.t(fconvert.s(float.t(var_10_1)))
                long double x87_r2_24 = fconvert.t(fconvert.s(x87_r3_10 - x87_r7_4))
                eax_4[1] = fconvert.s(x87_r2_24)
                eax_4[2] = fconvert.s(x87_r6_2)
                eax_4[3] = fconvert.s(x87_r5_1)
                eax_4[4] = 0xffffffff
                float var_4_9 = fconvert.s(x87_r3_10 / float.t(*(arg1 + 0x38)))
                eax_4[5] = fconvert.s(x87_r4)
                eax_4[6] = fconvert.s(fconvert.t(var_4_9))
                eax_4[7] = fconvert.s(
                    fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c))))
                    - x87_r7_4)
                eax_4[8] = fconvert.s(x87_r2_24)
                eax_4[9] = fconvert.s(x87_r6_2)
                eax_4[0xa] = fconvert.s(x87_r5_1)
                eax_4[0xb] = 0xffffffff
                float var_4_11 = fconvert.s(x87_r3_10 / float.t(*(arg1 + 0x38)))
                eax_4[0xc] = fconvert.s(x87_r5_1)
                eax_4[0xd] = fconvert.s(fconvert.t(var_4_11))
                eax_4[0xe] = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_4)
                float var_1c_6 =
                    fconvert.s(fconvert.t(fconvert.s(float.t(var_1c_5) + x87_r3_10)) - x87_r7_4)
                eax_4[0xf] = fconvert.s(fconvert.t(var_1c_6))
                eax_4[0x10] = fconvert.s(x87_r6_2)
                eax_4[0x11] = fconvert.s(x87_r5_1)
                eax_4[0x12] = 0xffffffff
                float var_20_3 = fconvert.s(float.t(edx_6 i+ ecx_3))
                float var_4_14 = fconvert.s(fconvert.t(var_20_3) / float.t(*(arg1 + 0x38)))
                eax_4[0x13] = fconvert.s(x87_r4)
                eax_4[0x14] = fconvert.s(fconvert.t(var_4_14))
                eax_4[0x15] = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_4)
                eax_4[0x16] = fconvert.s(fconvert.t(var_1c_6))
                eax_4[0x17] = fconvert.s(x87_r6_2)
                eax_4[0x18] = fconvert.s(x87_r5_1)
                eax_4[0x19] = 0xffffffff
                float var_4_15 = fconvert.s(fconvert.t(var_20_3) / float.t(*(arg1 + 0x38)))
                ebp_2 = var_14
                ebx_2 = var_18
                eax_4[0x1a] = fconvert.s(x87_r4)
                eax_4 = &eax_4[0x2a]
                i += 6
                eax_4[-0xf] = fconvert.s(fconvert.t(var_4_15))
                eax_4[-0xe] = fconvert.s(
                    fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c))))
                    - x87_r7_4)
                eax_4[-0xd] = fconvert.s(x87_r2_24)
                eax_4[-0xc] = fconvert.s(x87_r6_2)
                eax_4[-0xb] = fconvert.s(x87_r5_1)
                eax_4[-0xa] = 0xffffffff
                float var_4_17 = fconvert.s(x87_r3_10 / float.t(*(arg1 + 0x38)))
                eax_4[-9] = fconvert.s(x87_r5_1)
                eax_4[-8] = fconvert.s(fconvert.t(var_4_17))
                eax_4[-7] = fconvert.s(
                    fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c))))
                    - x87_r7_4)
                eax_4[-6] = fconvert.s(fconvert.t(var_1c_6))
                eax_4[-5] = fconvert.s(x87_r6_2)
                eax_4[-4] = fconvert.s(x87_r5_1)
                eax_4[-3] = 0xffffffff
                float var_4_19 = fconvert.s(fconvert.t(var_20_3) / float.t(*(arg1 + 0x38)))
                eax_4[-2] = fconvert.s(x87_r5_1)
                eax_4[-1] = fconvert.s(fconvert.t(var_4_19))
    
    float edx_9 = arg2 i- 1
    ecx_3 += 0x10
    var_10_1 = ecx_3
    arg2 = edx_9
    
    if (edx_9 s<= 0)
        break
    
    edx_3 = var_c

long double x87_r3_23 = float.t(0)

if (ebp_2 s> 0)
    int32_t ecx_4 = *(arg1 + 0x34)
    
    if (ecx_4 s> 0)
        int32_t var_10_2 = ebp_2
        
        if (ebp_2 s> ecx_4)
            var_10_2 = ecx_4
        
        float var_4_20 = fconvert.s(float.t(*(arg1 + 0x30)))
        arg2 = fconvert.s(x87_r3_23 - x87_r7_4)
        *eax_4 = fconvert.s(fconvert.t(arg2))
        eax_4[1] = fconvert.s(fconvert.t(var_4_20) - x87_r7_4)
        eax_4[2] = fconvert.s(x87_r6_2)
        eax_4[3] = fconvert.s(x87_r5_1)
        eax_4[4] = 0xffffffff
        eax_4[5] = fconvert.s(x87_r3_23 / float.t(*(arg1 + 0x34)))
        eax_4[6] = fconvert.s(x87_r4)
        float var_8_3 = fconvert.s(float.t(*(arg1 + 0x30)))
        long double x87_r2_49 = fconvert.t(fconvert.s(float.t(var_10_2)))
        float var_18_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_49 + x87_r3_23)) - x87_r7_4)
        eax_4[7] = fconvert.s(fconvert.t(var_18_1))
        eax_4[8] = fconvert.s(fconvert.t(var_8_3) - x87_r7_4)
        eax_4[9] = fconvert.s(x87_r6_2)
        eax_4[0xa] = fconvert.s(x87_r5_1)
        eax_4[0xb] = 0xffffffff
        eax_4[0xc] = fconvert.s(x87_r2_49 / float.t(*(arg1 + 0x34)))
        eax_4[0xd] = fconvert.s(x87_r4)
        float var_4_23 = fconvert.s(float.t(*(arg1 + 0x30)) + float.t(*(arg1 + 0x38)))
        eax_4[0xe] = fconvert.s(fconvert.t(arg2))
        eax_4[0xf] = fconvert.s(fconvert.t(var_4_23) - x87_r7_4)
        eax_4[0x10] = fconvert.s(x87_r6_2)
        eax_4[0x11] = fconvert.s(x87_r5_1)
        eax_4[0x12] = 0xffffffff
        eax_4[0x13] = fconvert.s(x87_r3_23 / float.t(*(arg1 + 0x34)))
        eax_4[0x14] = fconvert.s(x87_r5_1)
        float var_4_24 = fconvert.s(float.t(*(arg1 + 0x30)))
        eax_4[0x15] = fconvert.s(fconvert.t(var_18_1))
        eax_4[0x16] = fconvert.s(fconvert.t(var_4_24) - x87_r7_4)
        eax_4[0x17] = fconvert.s(x87_r6_2)
        eax_4[0x18] = fconvert.s(x87_r5_1)
        eax_4[0x19] = 0xffffffff
        eax_4[0x1a] = fconvert.s(x87_r2_49 / float.t(*(arg1 + 0x34)))
        eax_4[0x1b] = fconvert.s(x87_r4)
        eax_4 = &eax_4[0x2a]
        i += 6
        float var_4_25 = fconvert.s(float.t(*(arg1 + 0x30)) + float.t(*(arg1 + 0x38)))
        eax_4[-0xe] = fconvert.s(fconvert.t(var_18_1))
        eax_4[-0xd] = fconvert.s(fconvert.t(var_4_25) - x87_r7_4)
        eax_4[-0xc] = fconvert.s(x87_r6_2)
        eax_4[-0xb] = fconvert.s(x87_r5_1)
        eax_4[-0xa] = 0xffffffff
        eax_4[-9] = fconvert.s(x87_r2_49 / float.t(*(arg1 + 0x34)))
        eax_4[-8] = fconvert.s(x87_r5_1)
        float var_4_26 = fconvert.s(float.t(*(arg1 + 0x30)) + float.t(*(arg1 + 0x38)))
        eax_4[-7] = fconvert.s(fconvert.t(arg2))
        eax_4[-6] = fconvert.s(fconvert.t(var_4_26) - x87_r7_4)
        eax_4[-5] = fconvert.s(x87_r6_2)
        eax_4[-4] = fconvert.s(x87_r5_1)
        eax_4[-3] = 0xffffffff
        eax_4[-2] = fconvert.s(x87_r3_23 / float.t(*(arg1 + 0x34)))
        eax_4[-1] = fconvert.s(x87_r5_1)

if (ebx_2 s> 0)
    int32_t ecx_5 = *(arg1 + 0x38)
    
    if (ecx_5 s> 0)
        int32_t var_10_3 = ebx_2
        
        if (ebx_2 s> ecx_5)
            var_10_3 = ecx_5
        
        *eax_4 = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_4)
        arg2 = fconvert.s(x87_r3_23 - x87_r7_4)
        long double x87_r2_72 = fconvert.t(arg2)
        eax_4[1] = fconvert.s(x87_r2_72)
        eax_4[2] = fconvert.s(x87_r6_2)
        eax_4[3] = fconvert.s(x87_r5_1)
        eax_4[4] = 0xffffffff
        float var_4_27 = fconvert.s(x87_r3_23 / float.t(*(arg1 + 0x38)))
        eax_4[5] = fconvert.s(x87_r4)
        eax_4[6] = fconvert.s(fconvert.t(var_4_27))
        eax_4[7] = fconvert.s(float.t(*(arg1 + 0x34) + *(arg1 + 0x2c)) - x87_r7_4)
        eax_4[8] = fconvert.s(x87_r2_72)
        eax_4[9] = fconvert.s(x87_r6_2)
        eax_4[0xa] = fconvert.s(x87_r5_1)
        eax_4[0xb] = 0xffffffff
        float var_4_29 = fconvert.s(x87_r3_23 / float.t(*(arg1 + 0x38)))
        eax_4[0xc] = fconvert.s(x87_r5_1)
        eax_4[0xd] = fconvert.s(fconvert.t(var_4_29))
        eax_4[0xe] = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_4)
        long double x87_r2_83 = fconvert.t(fconvert.s(float.t(var_10_3)))
        float var_18_2 = fconvert.s(fconvert.t(fconvert.s(x87_r2_83 + x87_r3_23)) - x87_r7_4)
        eax_4[0xf] = fconvert.s(fconvert.t(var_18_2))
        eax_4[0x10] = fconvert.s(x87_r6_2)
        eax_4[0x11] = fconvert.s(x87_r5_1)
        eax_4[0x12] = 0xffffffff
        float var_4_32 = fconvert.s(x87_r2_83 / float.t(*(arg1 + 0x38)))
        eax_4[0x13] = fconvert.s(x87_r4)
        eax_4[0x14] = fconvert.s(fconvert.t(var_4_32))
        eax_4[0x15] = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_4)
        eax_4[0x16] = fconvert.s(fconvert.t(var_18_2))
        eax_4[0x17] = fconvert.s(x87_r6_2)
        eax_4[0x18] = fconvert.s(x87_r5_1)
        eax_4[0x19] = 0xffffffff
        float var_4_33 = fconvert.s(x87_r2_83 / float.t(*(arg1 + 0x38)))
        eax_4[0x1a] = fconvert.s(x87_r4)
        eax_4[0x1b] = fconvert.s(fconvert.t(var_4_33))
        eax_4 = &eax_4[0x2a]
        eax_4[-0xe] = fconvert.s(float.t(*(arg1 + 0x34) + *(arg1 + 0x2c)) - x87_r7_4)
        eax_4[-0xd] = fconvert.s(fconvert.t(arg2))
        eax_4[-0xc] = fconvert.s(x87_r6_2)
        eax_4[-0xb] = fconvert.s(x87_r5_1)
        eax_4[-0xa] = 0xffffffff
        arg2 = fconvert.s(x87_r3_23 / float.t(*(arg1 + 0x38)))
        eax_4[-9] = fconvert.s(x87_r5_1)
        eax_4[-8] = fconvert.s(fconvert.t(arg2))
        i += 6
        eax_4[-7] = fconvert.s(float.t(*(arg1 + 0x34) + *(arg1 + 0x2c)) - x87_r7_4)
        eax_4[-6] = fconvert.s(fconvert.t(var_18_2))
        eax_4[-5] = fconvert.s(x87_r6_2)
        eax_4[-4] = fconvert.s(x87_r5_1)
        eax_4[-3] = 0xffffffff
        arg2 = fconvert.s(x87_r2_83 / float.t(*(arg1 + 0x38)))
        eax_4[-2] = fconvert.s(x87_r5_1)
        eax_4[-1] = fconvert.s(fconvert.t(arg2))
        x87_r7_4 = x87_r4

if (i s< *(arg1 + 8))
    long double x87_r4_30 = fconvert.t(-1024.5f)
    
    do
        *eax_4 = fconvert.s(x87_r4_30)
        i += 1
        eax_4[1] = fconvert.s(x87_r4_30)
        eax_4 = &eax_4[7]
        eax_4[-5] = fconvert.s(x87_r6_2)
        eax_4[-4] = fconvert.s(x87_r5_1)
        eax_4[-3] = 0xffffffff
        eax_4[-2] = fconvert.s(x87_r7_4)
        eax_4[-1] = fconvert.s(x87_r7_4)
    while (i s< *(arg1 + 8))

int32_t* esi_1 = *(arg1 + 4)

if (esi_1 != 0)
    (*(*esi_1 + 0x18))()

eax_4.b = 1
