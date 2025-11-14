// 函数: sub_577760
// 地址: 0x577760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_3 = 0
int32_t eax_2 = sub_70c710(float.t(*(arg1 + 0x38) + 0xe0) * fconvert.t(arg2))
int32_t* ecx = *(arg1 + 4)
float ebp_2 = ((eax_2 + 0xf) & 0xfffffff0) - 0xe0
float var_4 = ebp_2
float* eax_3

if (ecx != 0)
    eax_3 = (*(*ecx + 0x14))()
else
    eax_3 = nullptr

if (eax_3 == 0)
    eax_3.b = 0
    return 

long double x87_r7_2 = fconvert.t(0.5)
float i = 2.1019477e-44f
long double x87_r6 = fconvert.t(0.5f)
int32_t ecx_1 = ebp_2
long double x87_r5 = float.t(1)
float i_2 = 2.1019477e-44f
long double x87_r4 = float.t(0)
int32_t var_10 = ecx_1

do
    if (ecx_1 s>= 0)
        int32_t edi_1 = *(arg1 + 0x38)
        
        if (ecx_1 s< edi_1)
            arg2 = i
            
            if (ecx_1 i+ i s> edi_1)
                float i_4 = edi_1 - ecx_1
                i = i_4
                arg2 = i_4
            
            *eax_3 = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_2)
            long double x87_r3_4 = fconvert.t(fconvert.s(float.t(var_10)))
            long double x87_r2_3 = fconvert.t(fconvert.s(x87_r3_4 - x87_r7_2))
            eax_3[1] = fconvert.s(x87_r2_3)
            eax_3[2] = fconvert.s(x87_r6)
            eax_3[3] = fconvert.s(x87_r5)
            eax_3[4] = 0xffffffff
            float var_10_3 = fconvert.s(x87_r3_4 / float.t(*(arg1 + 0x38)))
            eax_3[5] = fconvert.s(x87_r4)
            eax_3[6] = fconvert.s(fconvert.t(var_10_3))
            eax_3[7] = fconvert.s(
                fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c))))
                - x87_r7_2)
            eax_3[8] = fconvert.s(x87_r2_3)
            eax_3[9] = fconvert.s(x87_r6)
            eax_3[0xa] = fconvert.s(x87_r5)
            eax_3[0xb] = 0xffffffff
            float var_10_5 = fconvert.s(x87_r3_4 / float.t(*(arg1 + 0x38)))
            eax_3[0xc] = fconvert.s(x87_r5)
            eax_3[0xd] = fconvert.s(fconvert.t(var_10_5))
            eax_3[0xe] = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_2)
            arg2 = fconvert.s(fconvert.t(fconvert.s(float.t(arg2) + x87_r3_4)) - x87_r7_2)
            eax_3[0xf] = fconvert.s(fconvert.t(arg2))
            eax_3[0x10] = fconvert.s(x87_r6)
            eax_3[0x11] = fconvert.s(x87_r5)
            eax_3[0x12] = 0xffffffff
            float var_10_7 = fconvert.s(float.t(i i+ ecx_1))
            float var_8_1 = fconvert.s(fconvert.t(var_10_7) / float.t(*(arg1 + 0x38)))
            eax_3[0x13] = fconvert.s(x87_r4)
            eax_3[0x14] = fconvert.s(fconvert.t(var_8_1))
            eax_3[0x15] = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_2)
            eax_3[0x16] = fconvert.s(fconvert.t(arg2))
            eax_3[0x17] = fconvert.s(x87_r6)
            eax_3[0x18] = fconvert.s(x87_r5)
            eax_3[0x19] = 0xffffffff
            float var_8_2 = fconvert.s(fconvert.t(var_10_7) / float.t(*(arg1 + 0x38)))
            i = i_2
            ebp_2 = var_4
            eax_3[0x1a] = fconvert.s(x87_r4)
            eax_3 = &eax_3[0x2a]
            i_3 += 6
            eax_3[-0xf] = fconvert.s(fconvert.t(var_8_2))
            eax_3[-0xe] = fconvert.s(
                fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c))))
                - x87_r7_2)
            eax_3[-0xd] = fconvert.s(x87_r2_3)
            eax_3[-0xc] = fconvert.s(x87_r6)
            eax_3[-0xb] = fconvert.s(x87_r5)
            eax_3[-0xa] = 0xffffffff
            float var_8_4 = fconvert.s(x87_r3_4 / float.t(*(arg1 + 0x38)))
            eax_3[-9] = fconvert.s(x87_r5)
            eax_3[-8] = fconvert.s(fconvert.t(var_8_4))
            eax_3[-7] = fconvert.s(
                fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c))))
                - x87_r7_2)
            eax_3[-6] = fconvert.s(fconvert.t(arg2))
            eax_3[-5] = fconvert.s(x87_r6)
            eax_3[-4] = fconvert.s(x87_r5)
            eax_3[-3] = 0xffffffff
            arg2 = fconvert.s(fconvert.t(var_10_7) / float.t(*(arg1 + 0x38)))
            eax_3[-2] = fconvert.s(x87_r5)
            eax_3[-1] = fconvert.s(fconvert.t(arg2))
    
    i -= 1
    ecx_1 += 0x10
    var_10 = ecx_1
    i_2 = i
while (i s> 0)

if (ebp_2 s> 0)
    float ecx_2 = *(arg1 + 0x38)
    
    if (ecx_2 s> 0)
        arg2 = ebp_2
        
        if (ebp_2 s> ecx_2)
            arg2 = ecx_2
        
        *eax_3 = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_2)
        long double x87_r3_19 = float.t(0)
        float var_c_1 = fconvert.s(x87_r3_19 - x87_r7_2)
        long double x87_r2_20 = fconvert.t(var_c_1)
        eax_3[1] = fconvert.s(x87_r2_20)
        eax_3[2] = fconvert.s(x87_r6)
        eax_3[3] = fconvert.s(x87_r5)
        eax_3[4] = 0xffffffff
        float var_4_1 = fconvert.s(x87_r3_19 / float.t(*(arg1 + 0x38)))
        eax_3[5] = fconvert.s(x87_r4)
        eax_3[6] = fconvert.s(fconvert.t(var_4_1))
        eax_3[7] = fconvert.s(float.t(*(arg1 + 0x34) + *(arg1 + 0x2c)) - x87_r7_2)
        eax_3[8] = fconvert.s(x87_r2_20)
        eax_3[9] = fconvert.s(x87_r6)
        eax_3[0xa] = fconvert.s(x87_r5)
        eax_3[0xb] = 0xffffffff
        float var_4_3 = fconvert.s(x87_r3_19 / float.t(*(arg1 + 0x38)))
        eax_3[0xc] = fconvert.s(x87_r5)
        eax_3[0xd] = fconvert.s(fconvert.t(var_4_3))
        eax_3[0xe] = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_2)
        long double x87_r2_31 = fconvert.t(fconvert.s(float.t(arg2)))
        arg2 = fconvert.s(fconvert.t(fconvert.s(x87_r2_31 + x87_r3_19)) - x87_r7_2)
        eax_3[0xf] = fconvert.s(fconvert.t(arg2))
        eax_3[0x10] = fconvert.s(x87_r6)
        eax_3[0x11] = fconvert.s(x87_r5)
        eax_3[0x12] = 0xffffffff
        float var_4_4 = fconvert.s(x87_r2_31 / float.t(*(arg1 + 0x38)))
        eax_3[0x13] = fconvert.s(x87_r4)
        eax_3[0x14] = fconvert.s(fconvert.t(var_4_4))
        eax_3[0x15] = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r7_2)
        eax_3[0x16] = fconvert.s(fconvert.t(arg2))
        eax_3[0x17] = fconvert.s(x87_r6)
        eax_3[0x18] = fconvert.s(x87_r5)
        eax_3[0x19] = 0xffffffff
        float var_4_5 = fconvert.s(x87_r2_31 / float.t(*(arg1 + 0x38)))
        eax_3[0x1a] = fconvert.s(x87_r4)
        eax_3 = &eax_3[0x2a]
        eax_3[-0xf] = fconvert.s(fconvert.t(var_4_5))
        eax_3[-0xe] = fconvert.s(float.t(*(arg1 + 0x34) + *(arg1 + 0x2c)) - x87_r7_2)
        eax_3[-0xd] = fconvert.s(fconvert.t(var_c_1))
        eax_3[-0xc] = fconvert.s(x87_r6)
        eax_3[-0xb] = fconvert.s(x87_r5)
        eax_3[-0xa] = 0xffffffff
        float var_4_7 = fconvert.s(x87_r3_19 / float.t(*(arg1 + 0x38)))
        eax_3[-9] = fconvert.s(x87_r5)
        eax_3[-8] = fconvert.s(fconvert.t(var_4_7))
        i_3 += 6
        eax_3[-7] = fconvert.s(float.t(*(arg1 + 0x34) + *(arg1 + 0x2c)) - x87_r7_2)
        eax_3[-6] = fconvert.s(fconvert.t(arg2))
        eax_3[-5] = fconvert.s(x87_r6)
        eax_3[-4] = fconvert.s(x87_r5)
        eax_3[-3] = 0xffffffff
        arg2 = fconvert.s(x87_r2_31 / float.t(*(arg1 + 0x38)))
        eax_3[-2] = fconvert.s(x87_r5)
        eax_3[-1] = fconvert.s(fconvert.t(arg2))
        x87_r7_2 = x87_r4

int32_t i_1 = i_3

if (i_3 s< *(arg1 + 8))
    long double x87_r4_18 = fconvert.t(-1024.5f)
    
    do
        *eax_3 = fconvert.s(x87_r4_18)
        i_1 += 1
        eax_3[1] = fconvert.s(x87_r4_18)
        eax_3 = &eax_3[7]
        eax_3[-5] = fconvert.s(x87_r6)
        eax_3[-4] = fconvert.s(x87_r5)
        eax_3[-3] = 0xffffffff
        eax_3[-2] = fconvert.s(x87_r7_2)
        eax_3[-1] = fconvert.s(x87_r7_2)
    while (i_1 s< *(arg1 + 8))

int32_t* esi_1 = *(arg1 + 4)

if (esi_1 != 0)
    (*(*esi_1 + 0x18))()

eax_3.b = 1
