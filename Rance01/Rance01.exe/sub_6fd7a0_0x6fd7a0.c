// 函数: sub_6fd7a0
// 地址: 0x6fd7a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_4 = edi
void* eax = arg1
int32_t var_50 = *(arg2 + 8)
int32_t ebp = 0
int32_t ebx = *(eax + 0x37c0)
int32_t var_64 = 0
void var_60

if (ebx s> 0)
    int32_t ecx_1 = *(eax + 0x37cc)
    int32_t edx_1 = 0
    int32_t esi_1 = 0
    
    do
        int32_t edi_3 = *(edx_1 + ecx_1 + 8) * *(edx_1 + ecx_1 + 4)
        *(&var_60 + (esi_1 << 2)) = edi_3
        ebp += edi_3
        edx_1 += 0x10
        esi_1 += 1
    while (esi_1 s< ebx)

int32_t ebp_1 = ebp << 6
int32_t ecx_2 = *(eax + 0x78)
int32_t edx_3 = ebp_1 * ecx_2
void* var_46c
void* var_468
int16_t* var_464
int32_t var_460
int32_t var_45c
int32_t* var_458
int32_t* var_454
int32_t* var_450

if (arg3[2] != 0 || arg3[3] != 0)
    int32_t* esi_6 = arg3[0xd]
    int32_t* var_30_2 = esi_6
    int32_t esi_7 = *esi_6
    int32_t ebx_6 = sx.d(*(esi_7 + eax + 0x379c))
    int32_t ebx_7 = 0
    int32_t var_34_2 = 0
    
    if (esi_7 s> 0)
        if (esi_7 s>= 6)
            int32_t edi_13 = esi_7 - 6
            int32_t eax_6 = 0
            int32_t var_28_2 = edi_13
            
            do
                void var_5c
                void var_58
                void var_54
                int32_t eax_10 = eax_6 + *(&var_60 + (ebx_7 << 2)) + *(&var_5c + (ebx_7 << 2))
                    + *(&var_58 + (ebx_7 << 2)) + *(&var_54 + (ebx_7 << 2))
                eax_6 = eax_10 + (&var_50)[ebx_7]
                ebx_7 += 5
            while (ebx_7 s<= edi_13)
            
            var_34_2 = eax_6
            eax = arg1
        
        int32_t edi_14 = var_34_2
        
        do
            edi_14 += *(&var_60 + (ebx_7 << 2))
            ebx_7 += 1
        while (ebx_7 s< esi_7)
        
        var_34_2 = edi_14
    
    int32_t ebx_8 = *(eax + 0x7c)
    int32_t* esi_20
    
    if (ebx_8 s<= 0)
        esi_20 = arg4 + ebx_6 * 0x404
    else
        int32_t* var_24_1 = arg4 + ebx_6 * 0x404
        int32_t esi_13 = 0
        int32_t edi_20 = var_30_2[2]
        int32_t var_3c_2 = ecx_2
        
        do
            int32_t ecx_6 = 0
            
            if (edi_20 s> 0)
                int32_t ebp_5 = 0
                int32_t ebx_11 = var_3c_2
                
                while (true)
                    if (edi_20 * 8 * esi_13 + ebp_5 s>= *(eax + 0x50))
                        var_3c_2 = ebx_11
                        ebx_8 = *(eax + 0x7c)
                        break
                    
                    if (ebx_11 s> 0)
                        int32_t edx_19 = 0
                        int32_t var_18_1 = 0
                        int32_t ecx_7 = var_30_2[1]
                        int32_t ebp_12
                        
                        do
                            int32_t ebp_9 = 0
                            
                            if (ecx_7 s> 0)
                                int32_t ebx_12 = 0
                                int32_t esi_19 = (edi_20 << 7) * ecx_6 + (var_34_2 << 7)
                                    + *(eax + 0x4de4) + edx_3 * 2 * esi_13 + edx_19
                                
                                while (true)
                                    if (ecx_7 * 8 * var_18_1 + ebx_12 s>= *(arg1 + 0x4c))
                                        eax = arg1
                                        ebx_11 = *(eax + 0x78)
                                        edi_20 = var_30_2[2]
                                        break
                                    
                                    if (arg3[4] != 0)
                                        var_464 = arg3[2]
                                        var_460 = arg3[3]
                                        var_45c = arg3[5]
                                        void var_44c
                                        var_458 = &var_44c
                                        var_454 = &var_64
                                        var_450 = var_24_1
                                        sub_6d1320(arg2, esi_19, var_464, var_460, var_45c.b, 
                                            var_458, var_454, var_450)
                                    else
                                        var_464 = arg3[2]
                                        var_460 = arg3[3]
                                        var_45c = arg3[5]
                                        var_458 = var_24_1
                                        sub_6d11e0(arg2, esi_19, var_464, var_460, var_45c, var_458)
                                    
                                    esi_19 += 0x80
                                    ebx_12 += 8
                                    ebp_9 += 1
                                    int32_t* eax_21 = arg3[0xd]
                                    ecx_7 = eax_21[1]
                                    var_30_2 = eax_21
                                    
                                    if (ebp_9 s>= ecx_7)
                                        eax = arg1
                                        ebx_11 = *(eax + 0x78)
                                        edi_20 = var_30_2[2]
                                        break
                            
                            edx_19 += ebp_1 * 2
                            ebp_12 = var_18_1 + 1
                            var_18_1 = ebp_12
                        while (ebp_12 s< ebx_11)
                    
                    ebp_5 += 8
                    ecx_6 += 1
                    
                    if (ecx_6 s>= edi_20)
                        var_3c_2 = ebx_11
                        ebx_8 = *(eax + 0x7c)
                        break
            
            esi_13 += 1
        while (esi_13 s< ebx_8)
        
        esi_20 = var_24_1
    
    var_46c = arg2
    var_468 = esi_20
    sub_6d0ed0(var_46c, var_468)
    var_64 = 0
else
    int32_t ebx_3 = 0
    int32_t edi_4 = *(eax + 0x7c)
    
    if (edi_4 s> 0)
        do
            int32_t esi_4 = 0
            
            if (ecx_2 s> 0)
                int32_t edx_6 = *arg3
                int32_t ebp_3 = 0
                
                do
                    int32_t ebx_4 = 0
                    
                    if (edx_6 s> 0)
                        int32_t* ecx_4 = arg3
                        int16_t* var_28_1 = *(eax + 0x4de4) + edx_3 * 2 * ebx_3 + ebp_3
                        
                        do
                            int32_t i = 0
                            
                            if (*(&var_60 + (ebx_4 << 2)) s> 0)
                                int16_t* edi_12 = var_28_1
                                
                                do
                                    var_46c = sx.d(*(eax + ebx_4 + 0x37a0)) * 0x404 + arg4
                                    var_468 = &ecx_4[9]
                                    var_464 = edi_12
                                    var_460 = arg3[4]
                                    var_45c = arg3[5]
                                    sub_6d0d50(var_46c, var_468, var_464, var_460, var_45c.b)
                                    edi_12 = &edi_12[0x40]
                                    i += 1
                                while (i s< *(&var_60 + (ebx_4 << 2)))
                                
                                var_28_1 = edi_12
                                eax = arg1
                                edx_6 = *arg3
                            
                            ecx_4 = &ecx_4[1]
                            ebx_4 += 1
                        while (ebx_4 s< edx_6)
                        
                        ecx_2 = *(eax + 0x78)
                    
                    ebp_3 += ebp_1 * 2
                    esi_4 += 1
                while (esi_4 s< ecx_2)
                
                edi_4 = *(eax + 0x7c)
            
            ebx_3 += 1
        while (ebx_3 s< edi_4)

(*(var_50 + 0x18))(var_46c, var_468, var_464, var_460, var_45c, var_458, var_454, var_450)
return 0
