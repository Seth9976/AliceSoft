// 函数: sub_6e0620
// 地址: 0x6e0620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg1
void* edx = *(ebx + 0x4834)
int32_t edi = *(ebx + 0x3814)
int32_t j_3 = 8
void* ecx = 8

if (*(ebx + 0x78) - 1 != arg2)
    *(ebx + 0x3814) = edi + (*(ebx + 0x30) << 3)
else
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(*(ebx + 0x24))
    int32_t j_4 = ((((eax_3 ^ edx_1) - edx_1) & 7) ^ edx_1) - edx_1
    
    if (j_4 != 0)
        j_3 = j_4
    
    *(ebx + 0x3814) = arg3 * 8 * *(ebx + 0x3c) + *(ebx + 0x20) + (*(ebx + 0x3c) << 3)

if (arg3 == *(ebx + 0x7c) - 1)
    int32_t eax_14
    int32_t edx_5
    edx_5:eax_14 = sx.q(*(ebx + 0x28))
    int32_t eax_17
    int32_t edx_6
    edx_6:eax_17 = sx.q((eax_14 ^ edx_5) - edx_5)
    void* eax_22 = ((((eax_17 ^ edx_6) - edx_6) & 7) ^ edx_6) - edx_6
    
    if (eax_22 != 0)
        ecx = eax_22

int32_t i = 0
int16_t* j_1 = *(ebx + 0x54)

if (j_1 s> 0)
    void* eax_23 = ecx * 2
    void* esi = edx
    
    do
        int32_t eax_29
        
        if (*(ebx + 0x34) == 2 && *(ebx + 0x58) == 1)
            eax_29 = edi - i + 2
        else
            eax_29 = edi + i
        
        int32_t ecx_1 = 0
        
        if (ecx s> 0)
            void* edi_1 = esi + j_3 * 2
            void* edx_14 = nullptr
            int32_t j_2 = j_3
            
            do
                int32_t ebx_1 = 0
                
                if (j_2 s> 0)
                    int32_t ebp_7 = esi + edx_14
                    
                    do
                        if (i == 0 || *(arg1 + 0x34) != 4 || *(arg1 + 0x58) != 3)
                            *(ebp_7 + (ebx_1 << 1)) =
                                zx.w(*(*(arg1 + 0x30) * ebx_1 + eax_29)) - 0x80
                        else
                            *(ebp_7 + (ebx_1 << 1)) = 0
                        
                        ebx_1 += 1
                    while (ebx_1 s< j_2)
                
                int32_t j = j_2
                
                if (j_2 s< 8)
                    void* var_20_1
                    void* var_1c_1
                    
                    if (neg.d(j_3) + 8 s< 6)
                        var_20_1 = esi + edx_14
                        var_1c_1 = edx_14 + edi_1
                    else
                        int32_t ebp_10 = ecx_1 << 4
                        var_20_1 = esi + ebp_10
                        var_1c_1 = ebp_10 + edi_1
                        
                        do
                            *(var_20_1 + (j << 1)) = *(edi_1 + ebp_10 - 2)
                            *(var_20_1 + (j << 1) + 2) = *(edi_1 + ebp_10 - 2)
                            *(var_20_1 + (j << 1) + 4) = *(edi_1 + ebp_10 - 2)
                            *(var_20_1 + (j << 1) + 6) = *(edi_1 + ebp_10 - 2)
                            *(var_20_1 + (j << 1) + 8) = *(edi_1 + ebp_10 - 2)
                            j += 5
                        while (j s< 2)
                    
                    do
                        *(var_20_1 + (j << 1)) = *(var_1c_1 - 2)
                        j += 1
                    while (j s< 8)
                    
                    j_2 = j_3
                
                edx_14 += 0x10
                ecx_1 += 1
                eax_29 += *(arg1 + 0x3c)
            while (ecx_1 s< ecx)
            
            ebx = arg1
        
        j_1 = eax_23 * 4
        
        if (j_1 s< 0x40)
            void* ecx_5 = esi + (ecx << 4)
            j_1 = esi + (eax_23 << 3)
            
            do
                *j_1 = *(ecx_5 - 0x10)
                j_1[1] = *(ecx_5 - 0xe)
                j_1[2] = *(ecx_5 - 0xc)
                j_1[3] = *(ecx_5 - 0xa)
                j_1[4] = *(ecx_5 - 8)
                j_1[5] = *(ecx_5 - 6)
                j_1[6] = *(ecx_5 - 4)
                j_1[7] = *(ecx_5 - 2)
                j_1 = &j_1[8]
            while (esi + 0x80 s> j_1)
        
        esi += 0x80
        i += 1
    while (i s< *(ebx + 0x54))

return j_1
