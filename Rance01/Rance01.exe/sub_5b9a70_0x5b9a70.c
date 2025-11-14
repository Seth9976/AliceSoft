// 函数: sub_5b9a70
// 地址: 0x5b9a70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *arg1
int128_t* var_1c = arg1[2]
uint32_t ecx_1 = zx.d(*(edi + 4))
uint32_t ecx_2 = zx.d(*(edi + 5))
void* var_2c = arg1[3]
int32_t var_24 = 0
int32_t var_18 = ecx_2 & 2
int32_t eax
int32_t edx_5
eax, edx_5 = sub_5b95e0(arg1)
uint32_t ebx = zx.d(*(edi + 0x11))
uint32_t ecx_4 = zx.d(*(edi + 0xe))
uint32_t eax_1 = zx.d(*(edi + 0xf))
uint32_t edx_8 = zx.d(*(edi + 0x1a))
uint32_t ebp_6 = ((zx.d(*(edi + 0x15)) << 8 | zx.d(*(edi + 0x14))) << 8 | zx.d(*(edi + 0x13))) << 8
    | zx.d(*(edi + 0x12))
uint32_t var_28 = edx_8

if (arg2 != 0 && *arg2 != 0)
    void* ecx_6 = arg2[3]
    int32_t eax_4 = arg2[9]
    int32_t var_20_1 = eax_4
    
    if (ecx_6 != 0)
        int32_t temp0_1 = arg2[2]
        arg2[2] -= ecx_6
        edx_8 = arg2[2]
        
        if (temp0_1 != ecx_6)
            int128_t* eax_5 = *arg2
            edx_8 = sub_6b49d0(eax_5, ecx_6 + eax_5, edx_8)
            eax_4 = var_20_1
        
        arg2[3] = 0
    
    if (eax_4 != 0)
        int32_t edx_9 = arg2[7]
        edx_8 = edx_9 - eax_4
        
        if (edx_9 != eax_4)
            int128_t* ecx_8 = arg2[4]
            sub_6b49d0(ecx_8, ecx_8 + (eax_4 << 2), edx_8 * 4)
            int128_t* ecx_9 = arg2[5]
            edx_8 = sub_6b49d0(ecx_9, ecx_9 + (var_20_1 << 3), (arg2[7] - var_20_1) * 8)
            eax_4 = var_20_1
        
        arg2[7] -= eax_4
        arg2[8] -= eax_4
        arg2[9] = 0
    
    if ((((ebx << 8 | zx.d(*(edi + 0x10))) << 8 | eax_1) << 8 | ecx_4) == arg2[0x54] && ecx_1 s<= 0)
        int32_t eax_11
        int32_t* edx_17
        eax_11, edx_17 = sub_5b97b0(var_28 + 1, edx_8, arg2)
        
        if (eax_11 == 0)
            if (ebp_6 != arg2[0x55])
                int32_t i = arg2[8]
                
                if (i s< arg2[7])
                    int32_t ecx_11 = arg2[2]
                    edx_17 = arg2[4] + (i << 2)
                    
                    do
                        ecx_11 -= zx.d((*edx_17).b)
                        i += 1
                        arg2[2] = ecx_11
                        edx_17 = &edx_17[1]
                    while (i s< arg2[7])
                    
                    i = arg2[8]
                
                bool cond:1_1 = arg2[0x55] == 0xffffffff
                arg2[7] = i
                
                if (not(cond:1_1))
                    *(arg2[4] + (i << 2)) = 0x400
                    arg2[7] += 1
                    arg2[8] += 1
            
            int32_t eax_12
            
            if ((ecx_2 & 1) != 0)
                eax_12 = arg2[7]
                
                if (eax_12 s>= 1)
                    edx_17 = arg2[4]
            
            uint32_t ecx_13
            int32_t ebx_10
            
            if ((ecx_2 & 1) == 0 || (eax_12 s>= 1 && edx_17[eax_12 - 1] != 0x400))
                ecx_13 = var_28
                ebx_10 = 0
            else
                ecx_13 = var_28
                var_18 = 0
                
                if (ecx_13 s<= 0)
                    ebx_10 = 0
                else
                    do
                        uint32_t eax_13 = zx.d(*(edi + var_24 + 0x1b))
                        var_1c += eax_13
                        var_2c -= eax_13
                        ebx_10 = var_24 + 1
                        
                        if (eax_13 s< 0xff)
                            break
                        
                        var_24 = ebx_10
                    while (ebx_10 s< ecx_13)
            
            if (var_2c == 0)
                goto label_5b9cb5
            
            if (sub_5b9760(var_2c, edx_17, arg2) == 0)
                sub_6c02a0(arg2[2] + *arg2, var_1c, var_2c)
                ecx_13 = var_28
                arg2[2] += var_2c
            label_5b9cb5:
                int32_t var_1c_1 = 0xffffffff
                
                if (ebx_10 s< ecx_13)
                    int32_t ecx_19
                    
                    do
                        uint32_t edx_21 = zx.d(*(edi + ebx_10 + 0x1b))
                        *(arg2[4] + (arg2[7] << 2)) = edx_21
                        int32_t eax_19 = arg2[5]
                        int32_t ecx_17 = arg2[7]
                        *(eax_19 + (ecx_17 << 3)) = 0xffffffff
                        *(eax_19 + (ecx_17 << 3) + 4) = 0xffffffff
                        
                        if (var_18 != 0)
                            int32_t ecx_18 = arg2[7]
                            int32_t eax_20 = arg2[4]
                            *(eax_20 + (ecx_18 << 2)) |= 0x100
                            var_18 = 0
                        
                        if (edx_21 s>= 0xff)
                            ecx_19 = var_1c_1
                        else
                            ecx_19 = arg2[7]
                            var_1c_1 = ecx_19
                        
                        arg2[7] += 1
                        ebx_10 += 1
                        
                        if (edx_21 s< 0xff)
                            arg2[8] = arg2[7]
                    while (ebx_10 s< var_28)
                    
                    if (ecx_19 != 0xffffffff)
                        int32_t eax_23 = arg2[5]
                        *(eax_23 + (ecx_19 << 3)) = eax
                        *(eax_23 + (ecx_19 << 3) + 4) = edx_5
                
                if ((ecx_2 & 4) != 0)
                    int32_t eax_24 = arg2[7]
                    arg2[0x52] = 1
                    
                    if (eax_24 s> 0)
                        int32_t ecx_20 = arg2[4]
                        *(ecx_20 + (eax_24 << 2) - 4) |= 0x200
                
                arg2[0x55] = ebp_6 + 1
                return 0

return 0xffffffff
