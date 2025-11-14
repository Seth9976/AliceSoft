// 函数: sub_6fdd80
// 地址: 0x6fdd80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = arg1
int32_t* ebx = arg2
int32_t result = 0
int32_t eax = ebx[2]
int32_t ebp = 0
int32_t esi = 0
int32_t edx = *(ecx + 0x37c0)
int32_t var_64 = 0
void var_60

if (edx s> 0)
    int32_t eax_1 = *(ecx + 0x37cc)
    int32_t eax_2 = 0
    esi = 0
    
    do
        int32_t ecx_2 = *(eax_2 + eax_1 + 8) * *(eax_2 + eax_1 + 4)
        *(&var_60 + (ebp << 2)) = ecx_2
        esi += ecx_2
        eax_2 += 0x10
        ebp += 1
    while (ebp s< edx)
    
    ebx = arg2
    ecx = arg1

int32_t esi_3 = esi << 6
int32_t i = 0
int32_t ebp_2 = esi_3 * *(ecx + 0x78)

if (*arg3 s> 0)
    int32_t* eax_4 = nullptr
    
    do
        int32_t ebx_3 = *(eax_4 + arg3[0xd])
        arg3[i + 9] = 0
        i += 1
        *(eax_4 + arg3[0xd] + 0xc) = *(ecx + (sx.d(*(ebx_3 + ecx + 0x37a0)) << 2) + 0x3704)
        *(eax_4 + arg3[0xd] + 0x10) = *(ecx + (sx.d(*(ebx_3 + ecx + 0x379c)) << 2) + 0x36f4)
        eax_4 = &eax_4[6]
    while (i s< *arg3)
    
    ebx = arg2

int32_t eax_13 = 8
ebx[3] = 8
int32_t* var_46c
void* var_468
void* var_464
int16_t* var_460
int32_t* var_45c
int32_t var_458
char* var_454
int32_t* var_450
uint32_t var_50

if (arg3[2] != 0 || arg3[3] != 0)
    int32_t* eax_14 = arg3[0xd]
    int32_t* var_38_1 = eax_14
    int32_t eax_15 = *eax_14
    int32_t i_3 = 0
    int32_t edx_9 = 0
    int32_t var_40_1 = 0
    
    if (eax_15 s> 0)
        if (eax_15 s>= 6)
            int32_t i_1 = 0
            edx_9 = 0
            
            do
                void var_5c
                void var_58
                void var_54
                int32_t edx_14 = edx_9 + *(&var_60 + (i_1 << 2)) + *(&var_5c + (i_1 << 2))
                    + *(&var_58 + (i_1 << 2)) + *(&var_54 + (i_1 << 2))
                edx_9 = edx_14 + (&var_50)[i_1]
                i_1 += 5
            while (i_1 s<= eax_15 - 6)
            
            int32_t var_40_2 = edx_9
            ebx = arg2
            i_3 = i_1
        
        int32_t ecx_9 = edx_9
        int32_t i_4 = i_3
        
        do
            ecx_9 += *(&var_60 + (i_4 << 2))
            i_4 += 1
        while (i_4 s< eax_15)
        
        var_40_1 = ecx_9
        ecx = arg1
    
    int32_t eax_16 = *(ecx + 0x7c)
    void var_44c
    
    if (eax_16 s> 0)
        int32_t ebx_9 = 0
        int32_t edx_19 = var_38_1[2]
        
        do
            int32_t esi_7 = 0
            
            if (edx_19 s> 0)
                int32_t eax_17 = 0
                int32_t* edi_5 = var_38_1
                
                while (true)
                    if (edx_19 * 8 * ebx_9 + eax_17 s>= *(ecx + 0x50))
                        var_38_1 = edi_5
                        eax_16 = *(ecx + 0x7c)
                        break
                    
                    int32_t var_34_1 = 0
                    int32_t ebx_15 = *(ecx + 0x78)
                    
                    if (ebx_15 s> 0)
                        int32_t var_30_2 = 0
                        int32_t eax_18 = edi_5[1]
                        bool cond:3_1
                        
                        do
                            int32_t var_1c_2 = 0
                            
                            if (eax_18 s> 0)
                                int32_t ebp_16 = 0
                                int32_t esi_13 = (edx_19 << 7) * esi_7 + (var_40_1 << 7)
                                    + *(ecx + 0x4de4) + ebp_2 * 2 * ebx_9 + var_30_2
                                
                                while (true)
                                    if (eax_18 * 8 * var_34_1 + ebp_16 s>= *(arg1 + 0x4c))
                                        ecx = arg1
                                        ebx_15 = *(ecx + 0x78)
                                        edx_19 = edi_5[2]
                                        break
                                    
                                    if (arg3[4] != 0)
                                        var_460 = arg3[2]
                                        var_45c = arg3[3]
                                        var_458 = arg3[5]
                                        var_454 = &var_44c
                                        var_450 = &var_64
                                        sub_6d1790(arg2, edi_5[4], esi_13, var_460, var_45c, 
                                            var_458.b, var_454, var_450)
                                    else
                                        var_460 = arg3[2]
                                        var_45c = arg3[3]
                                        var_458 = arg3[5]
                                        sub_6d1590(arg2, edi_5[4], esi_13, var_460, var_45c, 
                                            var_458.b)
                                    
                                    esi_13 += 0x80
                                    ebp_16 += 8
                                    int32_t edx_24 = var_1c_2 + 1
                                    edi_5 = arg3[0xd]
                                    eax_18 = edi_5[1]
                                    var_1c_2 = edx_24
                                    
                                    if (edx_24 s>= eax_18)
                                        ecx = arg1
                                        ebx_15 = *(ecx + 0x78)
                                        edx_19 = edi_5[2]
                                        break
                            
                            cond:3_1 = var_34_1 + 1 s< ebx_15
                            var_30_2 += esi_3 * 2
                            var_34_1 += 1
                        while (cond:3_1)
                    
                    eax_17 += 8
                    esi_7 += 1
                    
                    if (esi_7 s>= edx_19)
                        var_38_1 = edi_5
                        eax_16 = *(ecx + 0x7c)
                        break
            
            ebx_9 += 1
        while (ebx_9 s< eax_16)
        
        ebx = arg2
    
    sub_6d0f30(ebx, var_38_1[4])
    var_46c = ebx
    var_468 = &var_44c
    var_464 = &var_64
    sub_6d1170(var_46c, var_468, var_464)
    var_64 = 0
    eax_13 = ebx[3]
else
    int32_t edx_3 = *(ecx + 0x7c)
    
    if (edx_3 s> 0)
        int32_t edx_4 = *(ecx + 0x78)
        int32_t eax_5 = edx_3
        int32_t ebp_7 = 0
        
        do
            int32_t edi_1 = 0
            
            if (edx_4 s> 0)
                int32_t eax_7 = *arg3
                int32_t esi_5 = 0
                
                do
                    int32_t ebx_7 = 0
                    int16_t* ebp_10 = *(ecx + 0x4de4) + ebp_2 * 2 * ebp_7 + esi_5
                    
                    if (eax_7 s> 0)
                        int32_t* edx_6 = arg3
                        
                        do
                            if (*(&var_60 + (ebx_7 << 2)) s> 0)
                                int32_t i_2 = 0
                                
                                do
                                    var_46c = arg2
                                    var_468 = *(ebx_7 * 0x18 + arg3[0xd] + 0xc)
                                    var_464 = &edx_6[9]
                                    var_460 = ebp_10
                                    var_45c = arg3[4]
                                    var_458 = arg3[5]
                                    sub_6d0d90(var_46c, var_468, var_464, var_460, var_45c, 
                                        var_458.b)
                                    ebp_10 = &ebp_10[0x40]
                                    i_2 += 1
                                while (i_2 s< *(&var_60 + (ebx_7 << 2)))
                                
                                eax_7 = *arg3
                            
                            edx_6 = &edx_6[1]
                            ebx_7 += 1
                        while (ebx_7 s< eax_7)
                        
                        ecx = arg1
                        edx_4 = *(ecx + 0x78)
                    
                    esi_5 += esi_3 * 2
                    edi_1 += 1
                while (edi_1 s< edx_4)
                
                eax_5 = *(ecx + 0x7c)
            
            ebp_7 += 1
        while (ebp_7 s< eax_5)
        
        ebx = arg2
        eax_13 = ebx[3]

if (eax_13 s< 8)
    char* edx_26 = ebx[4]
    
    if (edx_26 u< ebx[6])
        goto label_6fe430
    
    int32_t* eax_26 = ebx[0xf]
    
    if (eax_26 != 0)
        var_46c = eax_26
        var_468 = &ebx[0x10]
        var_464 = 0x1000
        var_460 = &var_50
        
        if (sub_6ca7f0(var_46c, var_468, 0x1000, var_460) == 0 || var_50 != 0x1000)
            result = 0xffffffe9
        else
            edx_26 = ebx[5]
        label_6fe430:
            uint32_t eax_29 = zx.d(*ebx)
            ebx[4] = &edx_26[1]
            *edx_26 = eax_29.b
            ebx[7] += 1
            
            if (eax_29 == 0xff)
                char* eax_30 = ebx[4]
                ebx[4] = &eax_30[1]
                *eax_30 = 0
                ebx[7] += 1
            
            bool cond:2_1 = ebx[0xd] s<= 2
            *ebx = 0
            ebx[1] = 0
            
            if (cond:2_1)
                ebx[3] = 8
            else
                ebx[3] = 0
    else
        result = 0xffffffe4

(*(eax + 0x18))(var_46c, var_468, var_464, var_460, var_45c, var_458, var_454, var_450)
return result
