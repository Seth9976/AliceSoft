// 函数: sub_4cf830
// 地址: 0x4cf830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax_3 = *arg1
float* ebx = arg2

if (&eax_3[4] u> arg1[1])
label_4cfade:
    eax_3.b = 0
    return 

uint32_t ebp_7 = ((zx.d(eax_3[3]) << 8 | zx.d(eax_3[2])) << 8 | zx.d(eax_3[1])) << 8 | zx.d(*eax_3)
uint32_t var_1c_1 = ebp_7
*arg1 = &eax_3[4]
sub_4cfbd0(ebp_7, &ebx[3])
int32_t var_28_1 = 0
int32_t eax_2

if (ebp_7 s> 0)
    int32_t var_34_1 = 0
    
    do
        int32_t* edi_3 = ebx[3] i+ var_34_1
        
        if (sub_410070(arg1, edi_3).b == 0)
            goto label_4cfade
        
        eax_3 = *arg1
        
        if (&eax_3[4] u> arg1[1])
            goto label_4cfade
        
        edi_3[7] =
            ((zx.d(eax_3[3]) << 8 | zx.d(eax_3[2])) << 8 | zx.d(eax_3[1])) << 8 | zx.d(*eax_3)
        *arg1 += 4
        eax_3 = *arg1
        
        if (&eax_3[4] u> arg1[1])
            goto label_4cfade
        
        edi_3[8] =
            ((zx.d(eax_3[3]) << 8 | zx.d(eax_3[2])) << 8 | zx.d(eax_3[1])) << 8 | zx.d(*eax_3)
        *arg1 += 4
        sub_4cfb60(ebx[2], &edi_3[9])
        eax_3 = ebx[2]
        
        if (eax_3 * 0x2c + *arg1 u> arg1[1])
            goto label_4cfade
        
        int32_t i_1 = 0
        
        if (eax_3 s> 0)
            int32_t var_2c_1 = 0
            int32_t i
            
            do
                char* ecx_10 = *arg1
                uint32_t eax_13 =
                    ((zx.d(ecx_10[3]) << 8 | zx.d(ecx_10[2])) << 8 | zx.d(ecx_10[1])) << 8
                    | zx.d(*ecx_10)
                *arg1 = &ecx_10[4]
                uint32_t eax_20 =
                    ((zx.d(ecx_10[7]) << 8 | zx.d(ecx_10[6])) << 8 | zx.d(ecx_10[5])) << 8
                    | zx.d(ecx_10[4])
                *arg1 = &ecx_10[8]
                uint32_t eax_25 =
                    (zx.d(ecx_10[0xb]) << 8 | zx.d(ecx_10[0xa])) << 8 | zx.d(ecx_10[9])
                uint32_t edx_25 = zx.d(ecx_10[8])
                *arg1 = &ecx_10[0xc]
                uint32_t eax_34 =
                    ((zx.d(ecx_10[0xf]) << 8 | zx.d(ecx_10[0xe])) << 8 | zx.d(ecx_10[0xd])) << 8
                    | zx.d(ecx_10[0xc])
                *arg1 = &ecx_10[0x10]
                uint32_t ecx_18 =
                    (zx.d(ecx_10[0x13]) << 8 | zx.d(ecx_10[0x12])) << 8 | zx.d(ecx_10[0x11])
                uint32_t edi_7 = zx.d(ecx_10[0x10])
                *arg1 = &ecx_10[0x14]
                uint32_t edx_36 =
                    ((zx.d(ecx_10[0x17]) << 8 | zx.d(ecx_10[0x16])) << 8 | zx.d(ecx_10[0x15])) << 8
                    | zx.d(ecx_10[0x14])
                *arg1 = &ecx_10[0x18]
                uint32_t ebp_10 = zx.d(ecx_10[0x18])
                uint32_t ebx_7 =
                    ((zx.d(ecx_10[0x1b]) << 8 | zx.d(ecx_10[0x1a])) << 8 | zx.d(ecx_10[0x19])) << 8
                *arg1 = &ecx_10[0x1c]
                
                if (&ecx_10[0x2c] u<= arg1[1])
                    *arg1 = &ecx_10[0x2c]
                
                long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*arg2)))
                void* edi_17 = edi_3[9] + var_2c_1
                *(edi_17 + 4) = ecx_18 << 8 | edi_7
                *(edi_17 + 8) = edx_36
                *(edi_17 + 0xc) = ebx_7 | ebp_10
                ebx = arg2
                *(edi_17 + 0x10) = eax_34
                *(edi_17 + 0x14) = fconvert.s(x87_r7_2 * fconvert.t(eax_13))
                i = i_1 + 1
                *(edi_17 + 0x18) = fconvert.s(x87_r7_2 * fconvert.t(eax_20))
                i_1 = i
                var_2c_1 += 0x20
                *(edi_17 + 0x1c) = fconvert.s(x87_r7_2 * fconvert.t(eax_25 << 8 | edx_25))
            while (i s< ebx[2])
            ebp_7 = var_1c_1
        
        var_34_1 += 0x34
        eax_2 = var_28_1 + 1
        var_28_1 = eax_2
    while (eax_2 s< ebp_7)

eax_2.b = 1
