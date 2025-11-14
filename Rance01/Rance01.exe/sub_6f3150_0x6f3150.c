// 函数: sub_6f3150
// 地址: 0x6f3150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_34 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0
uint32_t var_28

if (sub_6f2b00(&arg1[0xdfa], &var_28) == 0)
    uint32_t eax_1 = var_28
    
    if (eax_1 s>= 2)
        var_28 = eax_1 - 2
        
        if (eax_1 - 2 s>= 0xe && eax_1 - 2 s<= 0x3000e)
            if (sub_6f2920(&arg1[0xdfa], eax_1 - 2, &var_30, &var_34, &var_2c) != 0)
                if (var_2c != 0)
                    int32_t eax_8 = var_30
                    
                    if (eax_8 != 0)
                        int32_t var_4c_3 = eax_8
                        sub_6b4d5b()
                
                return 0xffffffeb
            
            if (arg1[0xdf7] != 0)
                char* ecx_1 = var_34
                int32_t eax_10
                eax_10.b = *ecx_1
                int32_t ecx_3
                void* edx_4
                
                if (eax_10.b == 0x4a && ecx_1[1] == 0x46 && ecx_1[2] == 0x58 && ecx_1[3] == 0x58
                        && ecx_1[4] == 0)
                    var_34 = &ecx_1[5]
                    void* eax_27
                    eax_27.b = ecx_1[5]
                    
                    if (eax_27.b != 0x10)
                        if (eax_27.b == 0x11)
                            var_34 = &ecx_1[7]
                            uint32_t esi_9 = zx.d(ecx_1[6])
                            var_34 = &ecx_1[8]
                            uint32_t ebx_3 = zx.d(ecx_1[7])
                            int32_t eax_29 = *arg1
                            
                            if ((eax_29 == 0x14 || eax_29 == 0x15)
                                    && esi_9 * ebx_3 + 0x308 s<= var_28)
                                arg1[0x19] = ebx_3
                                arg1[0x18] = esi_9
                                void* i_1 = operator new(0x300)
                                
                                if (i_1 != 0)
                                    void* i = i_1
                                    
                                    do
                                        void* ebx_4 = var_34
                                        var_34 = ebx_4 + 1
                                        ebx_4.b = *ebx_4
                                        *i = ebx_4.b
                                        void* ebx_5 = var_34
                                        var_34 = ebx_5 + 1
                                        ebx_5.b = *ebx_5
                                        *(i + 1) = ebx_5.b
                                        void* edi_7 = var_34
                                        var_34 = edi_7 + 1
                                        void* ebx_6
                                        ebx_6.b = *edi_7
                                        *(i + 2) = ebx_6.b
                                        void* ebp_3 = var_34
                                        var_34 = ebp_3 + 1
                                        ebx_6.b = *ebp_3
                                        *(i + 3) = ebx_6.b
                                        i += 4
                                    while (i_1 + 0x300 s> i)
                                    
                                    uint32_t ebx_7 = ebx_3
                                    uint32_t edx_12 = 0
                                    
                                    if (ebx_7 s> 0)
                                        uint32_t edi_8 = esi_9 * 3
                                        
                                        do
                                            if (edi_8 s> 0)
                                                void* ecx_13 = var_34
                                                uint32_t var_1c_1 = edx_12
                                                uint32_t var_24_3 = ebx_7
                                                char* esi_12 = nullptr
                                                
                                                do
                                                    uint32_t edi_9 = zx.d(*ecx_13) * 3
                                                    ebx_7.b = *(edi_9 + i_1)
                                                    char var_18_1 = ebx_7.b
                                                    edx_12.b = *(edi_9 + i_1 + 1)
                                                    ebx_7.b = *(edi_9 + i_1 + 2)
                                                    char var_14_1 = edx_12.b
                                                    
                                                    if (arg1[0xd] == 1)
                                                        int32_t edx_13
                                                        edx_13.b = var_18_1
                                                        esi_12[arg1[0xf] * var_1c_1 + arg1[8]] =
                                                            edx_13.b
                                                        int32_t ecx_19
                                                        ecx_19.b = var_14_1
                                                        esi_12[arg1[0xf] * var_1c_1 + arg1[8]
                                                            + 1] = ecx_19.b
                                                        esi_12[arg1[0xf] * var_1c_1 + arg1[8]
                                                            + 2] = ebx_7.b
                                                    else
                                                        esi_12[arg1[0xf] * var_1c_1 + arg1[8]] =
                                                            ebx_7.b
                                                        ebx_7.b = var_14_1
                                                        esi_12[arg1[0xf] * var_1c_1 + arg1[8]
                                                            + 1] = ebx_7.b
                                                        int32_t edx_16
                                                        edx_16.b = var_18_1
                                                        esi_12[arg1[0xf] * var_1c_1 + arg1[8]
                                                            + 2] = edx_16.b
                                                    
                                                    esi_12 = &esi_12[3]
                                                    ecx_13 = var_34 + 1
                                                    var_34 = ecx_13
                                                while (esi_12 s< edi_8)
                                                
                                                edx_12 = var_1c_1
                                                ebx_7 = var_24_3
                                            
                                            edx_12 += 1
                                        while (edx_12 s< ebx_7)
                                    
                                    void* i_2 = i_1
                                    sub_6b4d5b()
                        else if (eax_27.b == 0x13)
                            edx_4 = &ecx_1[6]
                            ecx_3 = 8
                            goto label_6f32cd
                else if (eax_10.b == 0x4a)
                    eax_10.b = ecx_1[1]
                    
                    if (eax_10.b == 0x46)
                        eax_10.b = ecx_1[2]
                        
                        if (eax_10.b == 0x49)
                            eax_10.b = ecx_1[3]
                            
                            if (eax_10.b == 0x46)
                                eax_10.b = ecx_1[4]
                                
                                if (eax_10.b == 0)
                                    arg1[0x137e] = 1
                                    var_34 = &ecx_1[7]
                                    arg1[0x137f].w = (zx.d(ecx_1[5]) << 8).w | zx.w(ecx_1[6])
                                    var_34 = &ecx_1[8]
                                    void* ebx
                                    ebx.b = ecx_1[7]
                                    *(arg1 + 0x4dfe) = ebx.b
                                    var_34 = &ecx_1[0xa]
                                    edx_4 = &ecx_1[0xc]
                                    arg1[0x1380].w = (zx.d(ecx_1[8]) << 8).w | zx.w(ecx_1[9])
                                    var_34 = edx_4
                                    ecx_3 = 0xe
                                    *(arg1 + 0x4e02) = (zx.d(ecx_1[0xa]) << 8).w | zx.w(ecx_1[0xb])
                                label_6f32cd:
                                    var_34 = edx_4 + 1
                                    uint32_t edi_4 = zx.d(*edx_4)
                                    void* eax_18 = edx_4 + 2
                                    var_34 = eax_18
                                    uint32_t edx_5 = zx.d(*(edx_4 + 1))
                                    
                                    if (edi_4 != 0 && edx_5 != 0)
                                        int32_t ebx_1 = *arg1
                                        
                                        if (ebx_1 == 0x14 || ebx_1 == 0x15)
                                            uint32_t ebx_2 = edi_4 * 3
                                            
                                            if (ecx_3 + edx_5 * ebx_2 s<= var_28)
                                                arg1[0x19] = edx_5
                                                bool cond:2_1 = arg1[0xd] == 1
                                                arg1[0x18] = edi_4
                                                
                                                if (cond:2_1)
                                                    int32_t edi_6 = 0
                                                    
                                                    if (edx_5 s> 0)
                                                        do
                                                            data_797c48(
                                                                edi_6 * arg1[0xf] + arg1[8], eax_18, 
                                                                ebx_2)
                                                            eax_18 = var_34 + ebx_2
                                                            edi_6 += 1
                                                            var_34 = eax_18
                                                        while (edi_6 s< edx_5)
                                                else
                                                    int32_t esi_6 = 0
                                                    
                                                    if (edx_5 s> 0)
                                                        do
                                                            int32_t edi_5 = 0
                                                            
                                                            if (ebx_2 s> 0)
                                                                do
                                                                    eax_18.b = *(eax_18 + 2)
                                                                    (arg1[0xf] * esi_6)[arg1[8] + edi_5] =
                                                                        eax_18.b
                                                                    char* edx_7
                                                                    edx_7.b = *(var_34 + 1)
                                                                    *(arg1[0xf] * esi_6 + arg1[8] + edi_5
                                                                        + 1) = edx_7.b
                                                                    int32_t ecx_9
                                                                    ecx_9.b = *var_34
                                                                    *(arg1[0xf] * esi_6 + arg1[8] + edi_5
                                                                        + 2) = ecx_9.b
                                                                    eax_18 = var_34 + 3
                                                                    var_34 = eax_18
                                                                    edi_5 += 3
                                                                while (edi_5 s< ebx_2)
                                                            
                                                            esi_6 += 1
                                                        while (esi_6 s< edx_5)
                                            else
                                                arg1[0x18] = edi_4
                                                arg1[0x19] = edx_5
                                        else
                                            arg1[0x18] = edi_4
                                            arg1[0x19] = edx_5

if (var_2c != 0)
    int32_t eax_4 = var_30
    
    if (eax_4 != 0)
        int32_t var_4c_1 = eax_4
        sub_6b4d5b()

return 0
