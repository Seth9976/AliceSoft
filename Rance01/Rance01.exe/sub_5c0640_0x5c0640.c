// 函数: sub_5c0640
// 地址: 0x5c0640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* i_3 = arg5
int32_t esi = 0

if (i_3 s<= 0)
    return 

int32_t* eax_1 = arg3
void* i

do
    if (*(arg4 - arg3 + eax_1) != 0)
        arg3[esi] = *eax_1
        esi += 1
    
    eax_1 = &eax_1[1]
    i = i_3
    i_3 -= 1
while (i != 1)

if (esi == 0)
    return 

int32_t* ebp = *arg2
int32_t edx_3 = ebp[3]
int32_t i_6 = ebp[2]
int32_t temp0 = divs.dp.d(sx.q(ebp[1] - *ebp), i_6)
void* ebx_2 = *(arg1 + 0x48)
void* edi_3 = ((esi << 2) + 7) & 0xfffffff8
int32_t* var_24 = ebp
int32_t i_5 = i_6

if (ebx_2 + edi_3 s> *(arg1 + 0x4c))
    if (*(arg1 + 0x44) != 0)
        int32_t* eax_8 = sub_6b5c43(8)
        int32_t ecx = *(arg1 + 0x54)
        *(arg1 + 0x50) += ebx_2
        eax_8[1] = ecx
        *eax_8 = *(arg1 + 0x44)
        *(arg1 + 0x54) = eax_8
    
    *(arg1 + 0x4c) = edi_3
    int32_t eax_9
    eax_9, i_6 = sub_6b5c43(edi_3)
    *(arg1 + 0x44) = eax_9
    *(arg1 + 0x48) = 0

void* eax_10 = *(arg1 + 0x48)
void* edx_8 = *(arg1 + 0x44) + eax_10
int32_t edi_4 = 0
arg5 = edx_8
*(arg1 + 0x48) = eax_10 + edi_3

if (esi s> 0)
    uint32_t ebx_7 = (temp0 * 4 + 7) & 0xfffffff8
    
    do
        int32_t ebp_1 = *(arg1 + 0x48)
        
        if (ebx_7 + ebp_1 s> *(arg1 + 0x4c))
            if (*(arg1 + 0x44) != 0)
                int32_t* eax_13 = sub_6b5c43(8)
                int32_t ecx_2 = *(arg1 + 0x54)
                *(arg1 + 0x50) += ebp_1
                eax_13[1] = ecx_2
                *eax_13 = *(arg1 + 0x44)
                *(arg1 + 0x54) = eax_13
            
            *(arg1 + 0x4c) = ebx_7
            edx_8 = arg5
            *(arg1 + 0x44) = sub_6b5c43(ebx_7)
            *(arg1 + 0x48) = 0
        
        int32_t ecx_3 = *(arg1 + 0x48)
        int128_t* eax_16 = *(arg1 + 0x44) + ecx_3
        *(arg1 + 0x48) = ecx_3 + ebx_7
        *(edx_8 + (edi_4 << 2)) = eax_16
        sub_6bc670(eax_16, 0, temp0 * 4)
        edx_8 = arg5
        edi_4 += 1
    while (edi_4 s< esi)
    
    ebp = var_24

int32_t ecx_8 = 0
int32_t var_20 = 0

if (temp0 s> 0)
    int32_t var_10_1 = 0
    int32_t eax_26
    
    do
        int32_t eax_18 = *ebp + ecx_8
        int32_t var_8_1 = eax_18
        
        if (esi s> 0)
            void* ecx_10 = arg3 - edx_8
            void* ebp_2 = edx_8
            void* var_c_1 = ecx_10
            int32_t var_14_1 = esi
            
            while (true)
                int32_t i_4 = i_5
                int32_t edi_5 = 0
                int32_t ebx_8 = 0
                int32_t var_18_1 = 0
                
                if (i_4 s> 0)
                    int32_t* ecx_12 = *(ecx_10 + ebp_2) + (eax_18 << 2)
                    int32_t i_1
                    
                    do
                        int32_t eax_20
                        int32_t edx_11
                        edx_11:eax_20 = sx.q(*ecx_12)
                        int32_t eax_22 = (eax_20 ^ edx_11) - edx_11
                        
                        if (eax_22 s> ebx_8)
                            ebx_8 = eax_22
                        
                        edi_5 += eax_22
                        ecx_12 = &ecx_12[1]
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
                    var_18_1 = edi_5
                
                int32_t eax_23 = sub_70c710(float.t(var_18_1)
                    * fconvert.t(fconvert.s(fconvert.t(100.0) / float.t(i_5))))
                int32_t i_2 = 0
                
                if (edx_3 - 1 s> 0)
                    void* edx_13 = &var_24[0x286]
                    
                    do
                        if (ebx_8 s<= *(edx_13 - 0x100))
                            int32_t esi_2 = *edx_13
                            
                            if (esi_2 s< 0)
                                break
                            
                            if (eax_23 s< esi_2)
                                break
                        
                        i_2 += 1
                        edx_13 += 4
                    while (i_2 s< edx_3 - 1)
                
                int32_t edx_14 = *ebp_2
                ebp_2 += 4
                int32_t temp3_1 = var_14_1
                var_14_1 -= 1
                *(edx_14 + (var_20 << 2)) = i_2
                
                if (temp3_1 == 1)
                    break
                
                ecx_10 = var_c_1
                eax_18 = var_8_1
            
            edx_8 = arg5
            ebp = var_24
        
        ecx_8 = var_10_1 + i_5
        eax_26 = var_20 + 1
        var_20 = eax_26
        var_10_1 = ecx_8
    while (eax_26 s< temp0)

arg2[0xa] += 1
