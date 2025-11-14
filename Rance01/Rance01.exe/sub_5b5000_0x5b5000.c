// 函数: sub_5b5000
// 地址: 0x5b5000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = *(arg2 + 0x1c)

if (edi == 0)
    return edi + 1

char eax_1 = (edi[0x392]).b
int128_t* esi = arg1
int128_t* eax_2
int32_t ecx
int32_t edx
eax_2, ecx, edx = sub_6bc670(esi, 0, 0x70)
void* eax_3
int32_t edx_1
eax_3, edx_1 = _calloc(eax_2, edx, ecx, 1, 0x88)
*(esi + 0x68) = eax_3
*(esi + 4) = arg2
uint32_t i = edi[2]
int32_t ecx_1 = 0

if (i != 0)
    uint32_t i_7 = i
    i -= 1
    
    if (i_7 != 1)
        do
            ecx_1 += 1
            i u>>= 1
        while (i != 0)

*(eax_3 + 0x2c) = ecx_1
int32_t* eax_4
int32_t ecx_2
int32_t edx_2
eax_4, ecx_2, edx_2 = _calloc(i, edx_1, ecx_1, 1, 4)
*(eax_3 + 0xc) = eax_4
int32_t eax_5
int32_t ecx_3
int32_t edx_3
eax_5, ecx_3, edx_3 = _calloc(eax_4, edx_2, ecx_2, 1, 4)
*(eax_3 + 0x10) = eax_5
int32_t eax_6
int32_t ecx_4
int32_t edx_4
eax_6, ecx_4, edx_4 = _calloc(eax_5, edx_3, ecx_3, 1, 0x14)
*eax_4 = eax_6
**(eax_3 + 0x10) = _calloc(eax_6, edx_4, ecx_4, 1, 0x14)
sub_5bbf40(**(eax_3 + 0xc), *edi s>> eax_1)
int32_t edx_9
int80_t st0_1
st0_1, edx_9 = sub_5bbf40(**(eax_3 + 0x10), edi[1] s>> eax_1)
int32_t eax_10 = *edi
int32_t ecx_10 = 0

if (eax_10 != 0)
    uint32_t i_1 = eax_10 - 1
    
    if (eax_10 != 1)
        do
            ecx_10 += 1
            i_1 u>>= 1
        while (i_1 != 0)

*(eax_3 + 4) = ecx_10 - 6
uint32_t i_2 = edi[1]
int32_t ecx_12 = 0

if (i_2 != 0)
    uint32_t i_8 = i_2
    i_2 -= 1
    
    if (i_8 != 1)
        do
            ecx_12 += 1
            i_2 u>>= 1
        while (i_2 != 0)

*(eax_3 + 8) = ecx_12 - 6

if (edi[0x2c8] == 0)
    int32_t ebp_3 = edi[6]
    int32_t eax_11
    int32_t edx_10
    eax_11, edx_10 = _calloc(i_2, edx_9, ecx_12 - 6, ebp_3, 0x38)
    edi[0x2c8] = eax_11
    int32_t var_4_1 = 0
    
    if (ebp_3 s> 0)
        int32_t var_8_1 = 0
        void* ebp_4 = &edi[0x1c8]
        
        while (true)
            int32_t* eax_12 = *ebp_4
            
            if (eax_12 != 0 && sub_5c15f0(eax_12, edx_10, edi[0x2c8] + var_8_1, eax_12) == 0)
                edx_10 = sub_5c1520(*ebp_4)
                var_8_1 += 0x38
                esi = arg1
                *ebp_4 = 0
                int32_t eax_15 = var_4_1 + 1
                ebp_4 += 4
                var_4_1 = eax_15
                
                if (eax_15 s>= edi[6])
                    break
                
                continue
            
            int32_t i_3 = 0
            
            if (edi[6] s> 0)
                void* ebx_2 = &edi[0x1c8]
                
                do
                    void* esi_4 = *ebx_2
                    
                    if (esi_4 != 0)
                        if (*(esi_4 + 0x24) != 0)
                            int32_t eax_39 = *(esi_4 + 0x20)
                            
                            if (eax_39 != 0)
                                __free_base(eax_39)
                            
                            int32_t eax_40 = *(esi_4 + 8)
                            
                            if (eax_40 != 0)
                                __free_base(eax_40)
                            
                            __builtin_memset(esi_4, 0, 0x28)
                            __free_base(esi_4)
                        
                        *ebx_2 = 0
                    
                    i_3 += 1
                    ebx_2 += 4
                while (i_3 s< edi[6])
                
                esi = arg1
            
            sub_5b5350(esi)
            return 0xffffffff

esi[1].d = edi[1]
*(esi + 8) = sub_6b5c43(*(arg2 + 4) * 4)
int32_t eax_20
int32_t ecx_19
eax_20, ecx_19 = sub_6b5c43(*(arg2 + 4) * 4)
void* edx_12 = arg2
int32_t i_4 = 0
*(esi + 0xc) = eax_20

if (*(edx_12 + 4) s> 0)
    do
        int32_t eax_21 = esi[1].d
        int32_t eax_22 = _calloc(eax_21, edx_12, ecx_19, eax_21, 4)
        ecx_19 = *(esi + 8)
        edx_12 = arg2
        *(ecx_19 + (i_4 << 2)) = eax_22
        i_4 += 1
    while (i_4 s< *(edx_12 + 4))

*(esi + 0x24) = 0
*(esi + 0x28) = 0
int32_t eax_24
int32_t edx_13
edx_13:eax_24 = sx.q(edi[1])
int32_t eax_26 = (eax_24 - edx_13) s>> 1
esi[3].d = eax_26
*(esi + 0x14) = eax_26
int32_t eax_27 = edi[4]
int32_t eax_28
int32_t edx_14
eax_28, edx_14 = _calloc(eax_27, edx_13, ecx_19, eax_27, 4)
*(eax_3 + 0x30) = eax_28
int32_t ecx_20 = edi[5]
int32_t i_5 = 0
*(eax_3 + 0x34) = _calloc(eax_28, edx_14, ecx_20, ecx_20, 4)

if (edi[4] s> 0)
    void* esi_2 = &edi[0xc8]
    
    do
        i_5 += 1
        *(*(eax_3 + 0x30) + esi_2 + 0xfffffce0 - edi) =
            (*(*((*esi_2 << 2) + &data_73fa78) + 8))(arg1, *(esi_2 + 0x100))
        esi_2 += 4
    while (i_5 s< edi[4])

int32_t i_6 = 0

if (edi[5] s> 0)
    void* esi_3 = &edi[0x148]
    
    do
        i_6 += 1
        *(*(eax_3 + 0x34) + 0xfffffae0 - edi + esi_3) =
            (*(*((*esi_3 << 2) + &data_737a6c) + 8))(arg1, *(esi_3 + 0x100))
        esi_3 += 4
    while (i_6 s< edi[5])

return 0
