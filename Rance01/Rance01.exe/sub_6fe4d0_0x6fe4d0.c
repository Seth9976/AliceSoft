// 函数: sub_6fe4d0
// 地址: 0x6fe4d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg1
int32_t* ebp = arg3
int32_t var_3c = 0
int32_t result = 0
int32_t ecx_1 = *(arg2 + 8)
int32_t eax = 0
int32_t edx = *ebp
int32_t var_30 = edx
int32_t var_a4[0x4]
int32_t var_94[0x4]
int32_t var_84[0x4]
int32_t var_74[0x4]

if (edx s> 0)
    int32_t edi_1 = 0
    int32_t edx_1 = 0
    int32_t result_1 = 0
    int32_t ecx_2 = 0
    
    do
        if (*(ebx + 0x37e0) == 0)
            arg3[eax + 9] = 0
            var_30 = *arg3
        
        int32_t esi_1 = arg3[0xd]
        int32_t ebp_4 = *(edi_1 + esi_1 + 8) * *(edi_1 + esi_1 + 4)
        ecx_2 += ebp_4
        edi_1 += 0x18
        var_a4[eax] = ebp_4
        var_94[eax] = *(ebx + (sx.d(*(ebx + eax + 0x37a0)) << 2) + 0x3704)
        var_84[eax] = *(ebx + (sx.d(*(ebx + eax + 0x379c)) << 2) + 0x36f4)
        int32_t ebp_11 = *(ebx + (*(edx_1 + *(ebx + 0x37cc) + 0xc) << 2) + 0x36e4)
        edx_1 += 0x10
        var_74[eax] = ebp_11
        eax += 1
    while (eax s< var_30)
    
    var_3c = ecx_2
    result = result_1
    ebp = arg3

int32_t edi_2 = ebp[8]
int32_t edx_2 = *(ebx + 0x7c)
void* var_bc
void* var_b8
int32_t var_b4
void* var_b0
void* var_ac

if (edi_2 s< edx_2)
    int32_t result_2 = result
    int32_t var_60_1 = *(ebx + 0x78)
    int32_t eax_2 = var_3c
    
    do
        void* esi_2 = ebp[7]
        void* var_64_1 = esi_2
        
        if (esi_2 s< var_60_1)
            int32_t ecx_5 = eax_2 << 6
            int32_t ecx_6 = var_30
            
            while (true)
                void* esi_14 = *(ebx + 0x4834)
                int32_t* eax_3 = *(ebx + 0x4ddc)
                
                if (eax_3 == 0)
                    var_bc = ebx
                    var_b8 = var_64_1
                    var_b4 = edi_2
                    (*(ecx_1 + 0x60))(var_bc, var_b8, var_b4, var_b0, var_ac)
                    eax_3 = *(ebx + 0x4ddc)
                else
                    int32_t edx_5 = 0
                    
                    if (ecx_6 s> 0)
                        void* var_50_1 = esi_14
                        int32_t* var_2c_1 = eax_3
                        int32_t edi_6 = ebp[0xd]
                        
                        do
                            int32_t eax_4 = 0
                            int32_t ebp_13 = edx_5 * 0x18
                            int32_t ebx_3 = *(ebp_13 + edi_6 + 8)
                            
                            if (ebx_3 s> 0)
                                int32_t* esi_6 = var_2c_1
                                int32_t edx_6 = *(ebp_13 + edi_6 + 4)
                                
                                do
                                    int32_t ecx_9 = 0
                                    
                                    if (edx_6 s> 0)
                                        int32_t eax_5 = var_60_1
                                        
                                        while (true)
                                            void* ebp_20 = (ecx_9 << 4) + esi_6[edx_5 + 1] +
                                                *(*(arg1 + 0x37cc) + (edx_5 << 4) + 4)
                                                * (var_64_1 << 4)
                                                + ebx_3 * eax_5 * (edi_2 << 7) * edx_6
                                            void* ebp_21 = ebp_20 + edx_6 * eax_5 * (eax_4 << 7)
                                            int32_t i = 0
                                            void* esi_13 = var_50_1
                                            
                                            do
                                                var_bc = esi_13
                                                var_b8 = ebp_21
                                                var_b4 = 0x10
                                                data_797c48(var_bc, var_b8, 0x10, var_b0, var_ac)
                                                eax_5 = *(arg1 + 0x78)
                                                edi_6 = arg3[0xd]
                                                edx_6 = *(ebp_13 + edi_6 + 4)
                                                ebp_21 += (eax_5 << 4) * edx_6
                                                esi_13 += 0x10
                                                i += 1
                                            while (i s< 8)
                                            
                                            var_50_1 = esi_13
                                            ecx_9 += 1
                                            
                                            if (ecx_9 s>= edx_6)
                                                break
                                            
                                            esi_6 = *(arg1 + 0x4ddc)
                                            ebx_3 = *(ebp_13 + edi_6 + 8)
                                        
                                        var_60_1 = eax_5
                                        esi_6 = *(arg1 + 0x4ddc)
                                        ebx_3 = *(ebp_13 + edi_6 + 8)
                                    
                                    eax_4 += 1
                                while (eax_4 s< ebx_3)
                                
                                var_2c_1 = esi_6
                                ecx_6 = *arg3
                            
                            edx_5 += 1
                        while (edx_5 s< ecx_6)
                        
                        eax_3 = var_2c_1
                        ebp = arg3
                        ebx = arg1
                        esi_14 = *(ebx + 0x4834)
                    
                    if (*eax_3 != 0)
                        int32_t i_1 = ecx_5 - 1
                        
                        if (ecx_5 != 0)
                            do
                                *esi_14 -= 0x80
                                esi_14 += 2
                                i_1 -= 1
                            while (i_1 != 0xffffffff)
                            
                            esi_14 = *(ebx + 0x4834)
                            eax_3 = *(ebx + 0x4ddc)
                
                if ((eax_3 == 0 || *eax_3 != 0) && var_3c s> 0)
                    int32_t ebx_6 = 0
                    void* edi_15 = esi_14
                    
                    do
                        var_bc = edi_15
                        (*(ecx_1 + 0x44))(var_bc, var_b8, var_b4, var_b0, var_ac)
                        edi_15 += 0x80
                        ebx_6 += 1
                    while (ebx_6 s< var_3c)
                    
                    ebp = arg3
                    ebx = arg1
                
                int32_t edi_16 = 0
                ecx_6 = *ebp
                
                if (ecx_6 s> 0)
                    int32_t* eax_10 = ebp
                    
                    do
                        int32_t i_2 = 0
                        
                        if (var_a4[edi_16] s> 0)
                            int32_t result_3
                            
                            do
                                int32_t* eax_12 = *(arg1 + 0x4ddc)
                                
                                if (eax_12 == 0 || *eax_12 != 0)
                                    (*(ecx_1 + 0x104))(esi_14, var_74[edi_16], var_b4, var_b0, 
                                        var_ac)
                                
                                var_bc = arg2
                                var_b8 = var_94[edi_16]
                                var_b4 = var_84[edi_16]
                                var_b0 = &eax_10[9]
                                var_ac = esi_14
                                result_3 = (*(ecx_1 + 0xf0))(var_bc, var_b8, var_b4, var_b0, var_ac)
                                
                                if (result_3 != 0)
                                    result = result_3
                                    ecx_1 = ecx_1
                                    goto label_6fea1c
                                
                                esi_14 += 0x80
                                i_2 += 1
                            while (i_2 s< var_a4[edi_16])
                            
                            result_2 = result_3
                            ebp = arg3
                            ecx_6 = *ebp
                        
                        eax_10 = &eax_10[1]
                        edi_16 += 1
                    while (edi_16 s< ecx_6)
                    
                    ebx = arg1
                
                int32_t edi_18 = ebp[6] + 1
                ebp[6] = edi_18
                int32_t esi_17 = *(ebx + 0x37d0)
                
                if (modu.dp.d(0:edi_18, esi_17) == 0)
                    void* eax_23 = (divu.dp.d(0:edi_18, esi_17) - 1) & 7
                    
                    if (eax_23 == 7)
                        ebp[6] = 0
                    
                    var_bc = eax_23
                    var_b8 = arg2
                    int32_t result_4 = sub_6fcd00(var_bc, var_b8, var_b4, var_b0, var_ac)
                    result_2 = result_4
                    
                    if (result_4 != 0)
                        result = result_4
                        ecx_1 = ecx_1
                        goto label_6fea1c
                    
                    int32_t eax_25 = 0
                    ecx_6 = *ebp
                    
                    if (ecx_6 s> 0)
                        do
                            ebp[eax_25 + 9] = 0
                            ecx_6 = *ebp
                            eax_25 += 1
                        while (eax_25 s< ecx_6)
                
                if (*(ebx + 0x1c) != 0)
                    ecx_1 = ecx_1
                    *(ebx + 0xc) = var_64_1
                    *(ebx + 0x10) = edi_2
                    int32_t temp1_3 = mods.dp.d(sx.q(var_64_1 + 1), *(ebx + 0x78))
                    ebp[7] = temp1_3
                    
                    if (temp1_3 != 0)
                        ebp[8] = edi_2
                    else
                        ebp[8] = edi_2 + 1
                    
                    result = 1
                    goto label_6fea1c
                
                void* eax_28 = var_64_1 + 1
                int32_t edx_18 = *(ebx + 0x78)
                var_64_1 = eax_28
                var_60_1 = edx_18
                
                if (eax_28 s>= edx_18)
                    var_30 = ecx_6
                    eax_2 = var_3c
                    edx_2 = *(ebx + 0x7c)
                    break
        
        edi_2 += 1
    while (edi_2 s< edx_2)
    
    result = result_2
    ecx_1 = ecx_1

label_6fea1c:
(*(ecx_1 + 0x18))(var_bc, var_b8, var_b4, var_b0, var_ac)
return result
