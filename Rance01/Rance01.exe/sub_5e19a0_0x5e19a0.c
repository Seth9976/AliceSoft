// 函数: sub_5e19a0
// 地址: 0x5e19a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_725e41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_204
int32_t eax_2 = data_78c474 ^ &var_204
int32_t __saved_edi
int32_t var_214 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_1b4
sub_5e6030(arg1 + 0x28, &var_1b4, *(arg1 + 0x28), *(arg1 + 0x2c))
char* ecx_1 = *arg2
void** result

if (&ecx_1[4] u> arg2[1])
labelid_b:
    result.b = 0
else
    uint32_t eax_12 =
        ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
    var_1b4 = eax_12
    *arg2 = &ecx_1[4]
    int32_t var_1e8_1 = 0
    uint32_t result_1
    uint32_t var_1bc
    
    if (eax_12 s> 0)
        int32_t eax_234
        
        do
            struct partsengine::CConstructionSpriteData::VTable* var_e8
            sub_5e6570(&var_e8)
            int32_t var_c_1 = 0
            sub_5e5f90(&var_e8, arg1 + 0x28)
            sub_5e6630(&var_e8)
            long double x87_r7_1 = float.t(0)
            float var_178_1 = fconvert.s(x87_r7_1)
            float var_174_1 = fconvert.s(x87_r7_1)
            int32_t var_164_1 = 0xff
            uint32_t var_1a4 = 0
            uint32_t var_1a0 = 0
            uint32_t var_1a8 = 0
            uint32_t var_19c = 0
            uint32_t var_1b0 = 0
            uint32_t var_200 = 0
            var_204 = 0
            var_1bc = 0
            result_1 = 0
            uint32_t var_1fc = 0
            uint32_t var_1f8 = 0
            uint32_t var_1ec = 0
            uint32_t var_1f0 = 0
            uint32_t var_1f4 = 0
            uint32_t var_1e0 = 0
            uint32_t var_1d8 = 0
            uint32_t var_1dc = 0
            uint32_t var_1d0 = 0
            uint32_t var_1c8 = 0
            uint32_t var_1ac = 0
            uint32_t var_1b8 = 0
            uint32_t var_1c0 = 0
            uint32_t var_190 = 0
            int32_t var_18c_1
            __builtin_memcpy(&var_18c_1, 
                "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 
                0x14)
            int32_t var_170_1 = 0
            int32_t var_16c_1 = 0
            int32_t var_168_1 = 0
            int32_t var_f0_1 = 0xf
            int32_t var_f4_1 = 0
            char var_104 = 0
            int32_t var_c_2 = 1
            int32_t var_10c_1 = 0xf
            int32_t var_110_1 = 0
            char var_120 = 0
            var_c_2.b = 2
            char* ecx_6 = *arg2
            char var_1d4 = 0
            
            if (&ecx_6[4] u> arg2[1])
                goto label_5e2c9a_2
            
            uint32_t eax_20 =
                ((zx.d(ecx_6[3]) << 8 | zx.d(ecx_6[2])) << 8 | zx.d(ecx_6[1])) << 8 | zx.d(*ecx_6)
            *arg2 = &ecx_6[4]
            
            if (eax_20 u<= 0x10)
                float var_198
                float var_194
                
                switch (eax_20)
                    case 0
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                        label_5e2c89:
                            sub_401110(&var_120)
                            sub_401110(&var_104)
                            goto label_5e2c9a_2
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        void* eax_25 = var_1e8_1 * 0xc4 + *(arg1 + 0x28)
                        uint32_t edx_3 = var_1fc
                        uint32_t ecx_10 = var_1f8
                        *(eax_25 + 4) = 0
                        *(eax_25 + 0x2c) = edx_3
                        *(eax_25 + 0x30) = ecx_10
                    case 1
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        void* eax_30 = var_1e8_1 * 0xc4 + *(arg1 + 0x28)
                        uint32_t edx_4 = var_1fc
                        uint32_t ecx_13 = var_1f8
                        *(eax_30 + 4) = 1
                        *(eax_30 + 0x2c) = edx_4
                        *(eax_30 + 0x30) = ecx_13
                    case 2
                        if (sub_410070(arg2, &var_120) == 0)
                            goto label_5e2c89
                        
                        void* eax_34 = var_1e8_1 * 0xc4 + *(arg1 + 0x28)
                        *(eax_34 + 4) = 2
                        sub_401180(eax_34 + 0xa4, 0xffffffff, &var_120, 0)
                    case 3
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ec) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f4) == 0)
                            goto label_5e2c89
                        
                        sub_5e66a0(var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_204, var_1fc, 
                            var_1f8, var_1ec, var_1f0, var_1f4)
                    case 4
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ec) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f4) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1e0) == 0)
                            goto label_5e2c89
                        
                        sub_5e66e0(var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_204, var_1fc, 
                            var_1f8, var_1ec, var_1f0, var_1f4, var_1e0)
                    case 5
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1e0) == 0)
                            goto label_5e2c89
                        
                        void* eax_67 = var_1e8_1 * 0xc4 + *(arg1 + 0x28)
                        uint32_t edx_11 = var_204
                        *(eax_67 + 0x1c) = var_200
                        uint32_t ecx_34 = var_1fc
                        *(eax_67 + 0x20) = edx_11
                        uint32_t edx_12 = var_1f8
                        *(eax_67 + 0x2c) = ecx_34
                        uint32_t ecx_35 = var_1e0
                        *(eax_67 + 4) = 5
                        *(eax_67 + 0x30) = edx_12
                        *(eax_67 + 0x40) = ecx_35
                    case 6
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ec) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f4) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1e0) == 0)
                            goto label_5e2c89
                        
                        sub_5e6720(var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_204, var_1fc, 
                            var_1f8, var_1ec, var_1f0, var_1f4, var_1e0)
                    case 7
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_410070(arg2, &var_104) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1b8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1c0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ec) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f4) == 0)
                            goto label_5e2c89
                        
                        if (sub_40ff40(arg2, arg2, &var_194) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1d8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1dc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1d0) == 0)
                            goto label_5e2c89
                        
                        if (sub_40ff40(arg2, arg2, &var_198) == 0)
                            goto label_5e2c89
                        
                        uint32_t edx_18 = var_1c0
                        uint32_t esi_3 = var_1f4
                        var_190 = var_1b8
                        uint32_t var_18c_2 = edx_18
                        void var_160
                        int32_t* eax_94 = sub_407320(var_1ec, var_1f0, esi_3, 0xff, &var_160)
                        float var_178_2 = fconvert.s(fconvert.t(var_194))
                        int32_t var_188_1 = *eax_94
                        int32_t var_184_1 = eax_94[1]
                        int32_t var_180_1 = eax_94[2]
                        int32_t var_17c_1 = eax_94[3]
                        void var_140
                        int32_t* eax_95 = sub_407320(var_1d8, var_1dc, var_1d0, 0xff, &var_140)
                        float var_174_2 = fconvert.s(fconvert.t(var_198))
                        int32_t var_170_2 = *eax_95
                        int32_t var_16c_2 = eax_95[1]
                        int32_t var_168_2 = eax_95[2]
                        int32_t var_164_2 = eax_95[3]
                        
                        if (sub_5546f0(arg2, &var_1c8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ac) == 0)
                            goto label_5e2c89
                        
                        sub_5e69c0(var_204, var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), &var_104, 
                            &var_190, var_1c8, var_1ac)
                    case 8
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_410070(arg2, &var_104) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1b8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1c0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ec) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f4) == 0)
                            goto label_5e2c89
                        
                        if (sub_40ff40(&var_194, arg2, &var_194) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1d8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1dc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1d0) == 0)
                            goto label_5e2c89
                        
                        if (sub_40ff40(arg2, arg2, &var_198) == 0)
                            goto label_5e2c89
                        
                        uint32_t esi_5 = var_1f4
                        uint32_t var_18c_3 = var_1c0
                        uint32_t ecx_70 = var_1ec
                        uint32_t edx_28 = var_1f0
                        var_190 = var_1b8
                        void var_130
                        int32_t* eax_115 = sub_407320(ecx_70, edx_28, esi_5, 0xff, &var_130)
                        float var_178_3 = fconvert.s(fconvert.t(var_194))
                        int32_t var_188_2 = *eax_115
                        int32_t var_184_2 = eax_115[1]
                        int32_t var_180_2 = eax_115[2]
                        int32_t var_17c_2 = eax_115[3]
                        void var_150
                        int32_t* eax_116 = sub_407320(var_1d8, var_1dc, var_1d0, 0xff, &var_150)
                        float var_174_3 = fconvert.s(fconvert.t(var_198))
                        int32_t var_170_3 = *eax_116
                        int32_t var_16c_3 = eax_116[1]
                        int32_t var_168_3 = eax_116[2]
                        int32_t var_164_3 = eax_116[3]
                        
                        if (sub_5546f0(arg2, &var_1c8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ac) == 0)
                            goto label_5e2c89
                        
                        sub_5e6a10(var_204, var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), &var_104, 
                            &var_190, var_1c8, var_1ac)
                    case 9
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ec) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f4) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1d8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1dc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1d0) == 0)
                            goto label_5e2c89
                        
                        sub_5e6760(var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_204, var_1fc, 
                            var_1f8, var_1ec, var_1f0, var_1f4, var_1d8, var_1dc, var_1d0)
                    case 0xa
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ec) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f4) == 0)
                            goto label_5e2c89
                        
                        sub_5e67b0(var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_204, var_1fc, 
                            var_1f8, var_1ec, var_1f0, var_1f4)
                    case 0xb
                        if (sub_410070(arg2, &var_120) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1a0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1a8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_19c) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1b0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1a4) == 0)
                            goto label_5e2c89
                        
                        sub_5e67f0(&var_120, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_200, var_204, 
                            var_1fc, var_1f8, var_1a0, var_1a8, var_19c, var_1b0, var_1a4)
                    case 0xc
                        if (sub_410070(arg2, &var_120) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1a0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1a8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_19c) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1b0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1a4) == 0)
                            goto label_5e2c89
                        
                        sub_5e6850(&var_120, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_200, var_204, 
                            var_1fc, var_1f8, var_1a0, var_1a8, var_19c, var_1b0, var_1a4)
                    case 0xd
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_40fea0(arg2, &var_1d4) == 0)
                            goto label_5e2c89
                        
                        sub_5e68b0(var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_204, var_1fc, 
                            var_1f8, (var_1d4.d).b)
                    case 0xe
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ec) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f4) == 0)
                            goto label_5e2c89
                        
                        if (sub_40fea0(arg2, &var_1d4) == 0)
                            goto label_5e2c89
                        
                        sub_5e68e0(var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_204, var_1fc, 
                            var_1f8, var_1ec, var_1f0, var_1f4, (var_1d4.d).b)
                    case 0xf
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1fc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f8) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ec) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f4) == 0)
                            goto label_5e2c89
                        
                        if (sub_40fea0(arg2, &var_1d4) == 0)
                            goto label_5e2c89
                        
                        sub_5e6930(var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_204, var_1fc, 
                            var_1f8, var_1ec, var_1f0, var_1f4, (var_1d4.d).b)
                    case 0x10
                        if (sub_5546f0(arg2, &var_200) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_204) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1bc) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &result_1) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1ec) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f0) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1f4) == 0)
                            goto label_5e2c89
                        
                        if (sub_5546f0(arg2, &var_1e0) == 0)
                            goto label_5e2c89
                        
                        sub_5e6980(var_200, var_1e8_1 * 0xc4 + *(arg1 + 0x28), var_204, var_1bc, 
                            result_1, var_1ec, var_1f0, var_1f4, var_1e0)
                
                if (var_10c_1 u>= 0x10)
                    int32_t var_218_147 = var_120.d
                    sub_6b4d5b()
            
            int32_t var_c_3 = 0xffffffff
            int32_t var_10c_2 = 0xf
            int32_t var_110_2 = 0
            var_120 = 0
            
            if (var_f0_1 u>= 0x10)
                int32_t var_218_148 = var_104.d
                sub_6b4d5b()
            
            eax_234 = var_1e8_1 + 1
            int32_t var_f0_2 = 0xf
            int32_t var_f4_2 = 0
            var_104 = 0
            var_1e8_1 = eax_234
        while (eax_234 s< var_1b4)
    
    char* edi_5 = *arg2
    
    if (&edi_5[4] u> arg2[1])
    labelid_b:
        result.b = 0
    else
        int32_t edx_59 = arg2[1]
        var_1bc = ((zx.d(edi_5[3]) << 8 | zx.d(edi_5[2])) << 8 | zx.d(edi_5[1])) << 8 | zx.d(*edi_5)
        *arg2 = &edi_5[4]
        
        if (&edi_5[8] u> edx_59)
        label_5e2c9a:
            result.b = 0
        else
            uint32_t edi_8 = zx.d(edi_5[4])
            uint32_t ecx_151 = ((zx.d(edi_5[7]) << 8 | zx.d(edi_5[6])) << 8 | zx.d(edi_5[5])) << 8
            *arg2 = &edi_5[8]
            result_1 = ecx_151 | edi_8
            
            if (&edi_5[0xc] u> edx_59)
            label_5e2c9a_1:
                result.b = 0
            else
                char* eax_236 = *arg2
                uint32_t edi_15 =
                    ((zx.d(eax_236[3]) << 8 | zx.d(eax_236[2])) << 8 | zx.d(eax_236[1])) << 8
                    | zx.d(*eax_236)
                *arg2 = &eax_236[4]
                
                if (&eax_236[8] u> edx_59)
                label_5e2c9a_2:
                    result.b = 0
                else
                    uint32_t edx_62 = zx.d(eax_236[4])
                    uint32_t ecx_162 =
                        ((zx.d(eax_236[7]) << 8 | zx.d(eax_236[6])) << 8 | zx.d(eax_236[5])) << 8
                    *arg2 = &eax_236[8]
                    var_1b4 = ecx_162 | edx_62
                    sub_5e4050(arg1)
                    
                    if (edi_15 s>= 0)
                        uint32_t edx_63 = var_1b4
                        
                        if (edx_63 s>= 0)
                            uint32_t ecx_164 = var_1bc
                            
                            if (ecx_164 s>= 0)
                                result = result_1
                                
                                if (result s>= 0)
                                    *(arg1 + 0x38) = ecx_164
                                    *(arg1 + 0x3c) = result
                                    *(arg1 + 0x40) = edi_15
                                    *(arg1 + 0x44) = edx_63
                                    *(arg1 + 0x48) = 1
                    
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_204)
return result
