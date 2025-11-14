// 函数: sub_6fcea0
// 地址: 0x6fcea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg1
int32_t* ebx = arg3
int32_t result = 0
int32_t ecx_1 = *(arg2 + 8)
int32_t eax = 0
int32_t var_54 = 0
int32_t edx = *ebx
int32_t var_a4[0x4]
int32_t var_94[0x4]
int32_t var_84[0x4]
int32_t var_74[0x4]

if (edx s> 0)
    int32_t esi_1 = 0
    int32_t edx_1 = 0
    int32_t ebx_1 = 0
    int32_t result_1 = 0
    
    while (true)
        if (*(edi + 0x37e0) == 0)
            arg3[eax + 9] = 0
        
        int32_t ebp = arg3[0xd]
        int32_t ecx_6 = *(edx_1 + ebp + 8) * *(edx_1 + ebp + 4)
        ebx_1 += ecx_6
        int32_t ebp_1 = sx.d(*(edi + eax + 0x379c))
        var_a4[eax] = ecx_6
        int32_t ecx_8 = *(edi + (sx.d(*(edi + eax + 0x37a0)) << 2) + 0x3704)
        var_94[eax] = ecx_8
        int32_t ebp_2 = *(edi + (ebp_1 << 2) + 0x36f4)
        var_84[eax] = ebp_2
        
        if (ecx_8 == 0 || ebp_2 == 0)
            result = 0xffffffef
            goto label_6fd3a2
        
        int32_t ecx_10 = *(edi + (*(esi_1 + *(edi + 0x37cc) + 0xc) << 2) + 0x36e4)
        var_74[eax] = ecx_10
        
        if (ecx_10 == 0)
            result = 0xffffffee
            goto label_6fd3a2
        
        esi_1 += 0x10
        edx_1 += 0x18
        eax += 1
        int32_t ecx_12 = *arg3
        
        if (eax s< ecx_12)
            continue
        
        var_54 = ebx_1
        edx = ecx_12
        result = result_1
        ebx = arg3
        break

int32_t esi_2 = ebx[8]
int32_t eax_1 = *(edi + 0x7c)
void* var_bc
int32_t var_b8
int32_t var_b4
void* var_b0
void* var_ac

if (esi_2 s< eax_1)
    int32_t result_2 = result
    int32_t var_14_1 = *(edi + 0x78)
    int32_t var_1c_1 = edx
    int32_t ecx_13 = eax_1
    
    while (true)
        int32_t eax_3 = ebx[7]
        
        if (eax_3 s< var_14_1)
            int32_t edx_4 = var_54 << 6
            int32_t ebp_5 = esi_2 << 7
            int32_t var_44_1 = eax_3
            int32_t var_48_1 = esi_2
            int32_t eax_4 = var_1c_1
            
            while (true)
                void* ebp_14 = *(edi + 0x4834)
                int32_t* ecx_15 = *(edi + 0x4ddc)
                
                if (ecx_15 == 0)
                    var_bc = edi
                    var_b8 = var_44_1
                    var_b4 = var_48_1
                    (*(ecx_1 + 0x60))(var_bc, var_b8, var_b4, var_b0, var_ac)
                    ecx_15 = *(edi + 0x4ddc)
                else
                    int32_t edx_5 = 0
                    
                    if (eax_4 s> 0)
                        void* var_5c_1 = ebp_14
                        int32_t* var_4c_1 = ecx_15
                        int32_t ecx_16 = ebx[0xd]
                        
                        do
                            int32_t ebp_6 = 0
                            esi_2 = edx_5 * 0x18
                            int32_t ebx_4 = *(esi_2 + ecx_16 + 8)
                            
                            if (ebx_4 s> 0)
                                int32_t* edi_2 = var_4c_1
                                int32_t var_18_1 = esi_2
                                int32_t edx_6 = *(esi_2 + ecx_16 + 4)
                                
                                do
                                    esi_2 = 0
                                    
                                    if (edx_6 s> 0)
                                        int32_t eax_9 = var_14_1
                                        
                                        while (true)
                                            int32_t ebp_12 = (esi_2 << 4) + edi_2[edx_5 + 1] +
                                                *(*(arg1 + 0x37cc) + (edx_5 << 4) + 4)
                                                * (var_44_1 << 4) + ebx_4 * eax_9 * ebp_5 * edx_6
                                            int32_t ebp_13 = ebp_12 + edx_6 * eax_9 * (ebp_6 << 7)
                                            int32_t i = 0
                                            void* esi_7 = var_5c_1
                                            
                                            do
                                                var_bc = esi_7
                                                var_b8 = ebp_13
                                                var_b4 = 0x10
                                                data_797c48(var_bc, var_b8, 0x10, var_b0, var_ac)
                                                eax_9 = *(arg1 + 0x78)
                                                ecx_16 = arg3[0xd]
                                                edx_6 = *(var_18_1 + ecx_16 + 4)
                                                ebp_13 += (eax_9 << 4) * edx_6
                                                esi_7 += 0x10
                                                i += 1
                                            while (i s< 8)
                                            
                                            var_5c_1 = esi_7
                                            esi_2 += 1
                                            
                                            if (esi_2 s>= edx_6)
                                                break
                                            
                                            edi_2 = *(arg1 + 0x4ddc)
                                            ebx_4 = *(var_18_1 + ecx_16 + 8)
                                        
                                        var_14_1 = eax_9
                                        edi_2 = *(arg1 + 0x4ddc)
                                        ebx_4 = *(var_18_1 + ecx_16 + 8)
                                    
                                    ebp_6 += 1
                                while (ebp_6 s< ebx_4)
                                
                                var_4c_1 = edi_2
                                eax_4 = *arg3
                            
                            edx_5 += 1
                        while (edx_5 s< eax_4)
                        
                        ecx_15 = var_4c_1
                        ebx = arg3
                        edi = arg1
                        ebp_14 = *(edi + 0x4834)
                    
                    if (*ecx_15 != 0)
                        int32_t i_1 = edx_4 - 1
                        
                        if (edx_4 != 0)
                            do
                                *ebp_14 -= 0x80
                                ebp_14 += 2
                                i_1 -= 1
                            while (i_1 != 0xffffffff)
                            
                            ebp_14 = *(edi + 0x4834)
                            ecx_15 = *(edi + 0x4ddc)
                
                if ((ecx_15 == 0 || *ecx_15 != 0) && var_54 s> 0)
                    void* esi_10 = ebp_14
                    int32_t ebx_8 = 0
                    
                    do
                        var_bc = esi_10
                        (*(ecx_1 + 0x44))(var_bc, var_b8, var_b4, var_b0, var_ac)
                        esi_10 += 0x80
                        ebx_8 += 1
                    while (ebx_8 s< var_54)
                    
                    ebx = arg3
                    edi = arg1
                
                esi_2 = 0
                eax_4 = *ebx
                
                if (eax_4 s> 0)
                    int32_t* edx_10 = ebx
                    
                    do
                        if (var_a4[esi_2] s> 0)
                            int32_t i_2 = 0
                            int32_t result_3
                            
                            do
                                int32_t* eax_19 = *(arg1 + 0x4ddc)
                                
                                if (eax_19 == 0 || *eax_19 != 0)
                                    (*(ecx_1 + 0x104))(ebp_14, var_74[esi_2], var_b4, var_b0, 
                                        var_ac)
                                
                                var_bc = arg2
                                var_b8 = var_94[esi_2]
                                var_b4 = var_84[esi_2]
                                var_b0 = &edx_10[9]
                                var_ac = ebp_14
                                result_3 = (*(ecx_1 + 0xf0))(var_bc, var_b8, var_b4, var_b0, var_ac)
                                
                                if (result_3 != 0)
                                    result = result_3
                                    ecx_1 = ecx_1
                                    goto label_6fd3a2
                                
                                ebp_14 += 0x80
                                i_2 += 1
                            while (i_2 s< var_a4[esi_2])
                            
                            result_2 = result_3
                            ebx = arg3
                            eax_4 = *ebx
                        
                        edx_10 = &edx_10[1]
                        esi_2 += 1
                    while (esi_2 s< eax_4)
                    
                    edi = arg1
                
                if (*(edi + 0x1c) != 0)
                    ecx_1 = ecx_1
                    *(edi + 0xc) = var_44_1
                    int32_t ebp_16 = *(edi + 0x78)
                    *(edi + 0x10) = var_48_1
                    int32_t temp1_1 = mods.dp.d(sx.q(var_44_1 + 1), ebp_16)
                    ebx[7] = temp1_1
                    
                    if (temp1_1 != 0)
                        ebx[8] = var_48_1
                    else
                        ebx[8] = var_48_1 + 1
                    
                    result = 1
                    break
                
                int32_t ecx_27 = var_44_1 + 1
                int32_t edx_13 = *(edi + 0x78)
                var_44_1 = ecx_27
                var_14_1 = edx_13
                
                if (ecx_27 s>= edx_13)
                    var_1c_1 = eax_4
                    esi_2 = var_48_1
                    ecx_13 = *(edi + 0x7c)
                    goto label_6fd391
            
            break
        
    label_6fd391:
        esi_2 += 1
        
        if (esi_2 s>= ecx_13)
            result = result_2
            ecx_1 = ecx_1
            break

label_6fd3a2:
(*(ecx_1 + 0x18))(var_bc, var_b8, var_b4, var_b0, var_ac)
return result
