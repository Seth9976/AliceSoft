// 函数: sub_6ca8f0
// 地址: 0x6ca8f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1
int32_t ebx
ebx.b = 0
int32_t* ebp = &esi[0xdfa]
int32_t* eax = esi[0xdfc]
uint32_t var_24 = 0
void* eax_1 = esi[0xdf8]
int32_t edx_1

if (eax_1 != 0)
    edx_1 = esi[0x1d]

if (eax_1 == 0 || edx_1 == 1)
    if (eax_1 == 0)
        sub_6fa7c0(ebp)
        eax_1 = esi[0xdf8]
        edx_1 = esi[0x1d]
    else if (*(eax_1 + 0x1c) != 0)
        edx_1 = esi[0x1d]
    else if (*(eax_1 + 0x20) == 0)
        sub_6fa7c0(ebp)
        eax_1 = esi[0xdf8]
        edx_1 = esi[0x1d]
    else
        edx_1 = esi[0x1d]

if (edx_1 != 1 || (eax_1 != 0 && (*(eax_1 + 0x1c) != 0 || *(eax_1 + 0x20) != 0)))
    goto label_6ca93a

esi[0xdfa] = 0
esi[0xdfb] = 0
int32_t eax_32 = *esi

if (eax_32 != 2 && eax_32 != 6 && eax_32 != 0xe && eax_32 != 0x12 && eax_32 != 0x10)
    int32_t eax_33 = esi[0xe02]
    esi[0xdfe] = esi[0x11]
    esi[0xe01] = 0
    esi[0xe03] = eax_33
    eax_1 = esi[0xdf8]
    goto label_6ca93a

HANDLE edx_53 = esi[0xe09]
esi[0xe01] = 0

if (sub_6ca810(edx_53, 0, FILE_BEGIN) == 0)
    return 0xffffffe9

int32_t result = sub_6fa810(ebp)

if (result == 0)
    eax_1 = esi[0xdf8]
label_6ca93a:
    
    if (eax_1 != 0)
        ebx.b = 1
    
    int32_t eax_2 = *esi
    
    if (eax_2 != 6 && eax_2 != 7 && eax_2 != 0xe && eax_2 != 0xf && eax_2 != 0x11 && eax_2 != 0x10
            && eax_2 != 0x13 && eax_2 != 0x12 && esi[2] == 0 && esi[4] == 0 && esi[3] == 0
            && esi[1] == 0)
        esi[0xe01] = 0
    
    if (esi[0xdf7] == 0)
        result = sub_6fa9d0(esi)
    
    if (esi[0xdf7] != 0 || result == 0)
        int32_t eax_8 = *esi
        
        if (eax_8 == 1 || eax_8 == 0 || eax_8 == 5 || eax_8 == 4 || eax_8 == 0x15 || eax_8 == 0x14)
            result = sub_6f2b80(ebp, &var_24)
            
            if (result == 0)
                if (var_24 != 0xd8)
                    return 0xfffffff3
                
                goto label_6ca9f2
        else
        label_6ca9f2:
            
            if (esi[0x1378] == 0)
                esi[0xdf6] = 0
                esi[0xdf5] = 0
            
            int32_t* eax_12 = esi[0xdf8]
            uint32_t edx_22
            
            if (eax_12 == 0)
            label_6caeef:
                
                while (true)
                    result = sub_6f2b80(ebp, &var_24)
                    
                    if (result != 0)
                        return result
                    
                    edx_22 = var_24
                    
                    if (edx_22 == 0x100)
                        return 0
                    
                label_6cabe0:
                    
                    if (edx_22 u<= 0x100)
                        break
                    
                    result = sub_6f2c00(ebp)
                    
                    if (result != 0)
                        return result
                
                jump(*((edx_22 << 2) + &data_79a860))
            
            int32_t eax_13 = esi[0x1d]
            
            if (eax_13 == 1 && (eax_13 != 1 || (eax_12[7] == 0 && eax_12[8] == 0)))
                goto label_6caeef
            
            int32_t* ebp_1 = eax_12
            
            if (ebp_1 == 0 || ebx.b == 0)
                ebp_1 = operator new(0x38)
                
                if (ebp_1 == 0)
                    return 0xfffffffb
                
                __builtin_memset(&ebp_1[7], 0, 0x18)
                result = sub_6ca840(ebp, ebp_1, esi)
                
                if (result == 0)
                    switch (*esi)
                        case 0
                            int32_t* var_14_6 = ebp_1
                            goto label_6cb240
                        case 1
                            int32_t* var_14_11 = ebp_1
                        label_6cb240:
                            esi[0xe01] -= *eax
                            int32_t* var_34_17 = ebp_1
                            sub_6b4d5b()
                            return 0
                        case 4
                            int32_t* var_14_9 = ebp_1
                            goto label_6cb240
                        case 5
                            int32_t* var_14_10 = ebp_1
                            goto label_6cb240
                        case 0x14
                            int32_t* var_14_5 = ebp_1
                            goto label_6cb240
                        case 0x15
                            int32_t* var_14_8 = ebp_1
                            goto label_6cb240
                    
                    int32_t ecx_10 = *ebp_1
                    ebp_1[6] = esi[0xdf4]
                    
                    if (ecx_10 s>= esi[0xdf0] || esi[0x1378] != 0)
                        esi[0x1d] = 0
                    else
                        esi[0x1d] = 1
                    
                    sub_6fa9d0(esi)
                    int32_t edx_37 = ebp_1[2]
                    int32_t ecx_11
                    int32_t edi_8
                    
                    if (edx_37 == 0)
                        if (ebp_1[3] != 0x3f)
                            ecx_11 = esi[0x1378]
                            edi_8 = ebp_1[5]
                            goto label_6cb0fe
                        
                        if (ebp_1[4] != 0)
                            ecx_11 = esi[0x1378]
                            edi_8 = ebp_1[5]
                            goto label_6cb0fe
                        
                        edi_8 = ebp_1[5]
                        
                        if (edi_8 != 0)
                            ecx_11 = esi[0x1378]
                            goto label_6cb0fe
                        
                        ecx_11 = esi[0x1378]
                        
                        if (ecx_11 != 0)
                            goto label_6cb0fe
                    else
                        ecx_11 = esi[0x1378]
                        edi_8 = ebp_1[5]
                    label_6cb0fe:
                        
                        if (edx_37 != 0 || ebp_1[3] != 0)
                            if (edi_8 == 0 && ebp_1[3] == 0x3f)
                                esi[0xdf6] += 1
                        else if (edi_8 == 0)
                            esi[0xdf5] += *ebp_1
                        
                        esi[0x1378] = ecx_11 + 1
                        
                        if (ecx_11 == 0)
                            int32_t edx_41 = 0
                            int32_t eax_23 = 0
                            int32_t edi_9 = esi[0xdf0]
                            
                            if (edi_9 s> 0)
                                void* ecx_14 = esi[0xdf3]
                                
                                do
                                    eax_23 += 1
                                    edx_41 += *(ecx_14 + 4) * *(ecx_14 + 8)
                                    ecx_14 += 0x10
                                while (eax_23 s< edi_9)
                                
                                esi = arg1
                            
                            int32_t eax_24 = operator new((edx_41 << 6) * esi[0x1e] * esi[0x1f] * 2)
                            esi[0x1379] = eax_24
                            
                            if (eax_24 == 0)
                                int32_t* var_14_4 = ebp_1
                                int32_t var_34_15 = ebp_1[0xd]
                                sub_6b4d5b()
                                ebp_1[0xd] = 0
                                int32_t* var_34_16 = ebp_1
                                sub_6b4d5b()
                                esi[0xdf8] = 0
                                return 0xfffffffb
                    goto label_6cafea
                
                int32_t* var_14_7 = ebp_1
                int32_t* var_34_18 = ebp_1
                sub_6b4d5b()
            else
                ebx.b = 0
            label_6cafea:
                
                if (esi[0x1d] == 1 && esi[0x1378] == 0)
                    esi[0xdf6] += *ebp_1
                
                esi[0xdf8] = ebp_1
                
                if (esi[0x137a] == 1)
                    int32_t edx_4 = 0
                    int32_t eax_14 = 0
                    int32_t edi_1 = esi[0xdf0]
                    
                    if (edi_1 s> 0)
                        void* ecx_1 = esi[0xdf3]
                        
                        do
                            eax_14 += 1
                            edx_4 += *(ecx_1 + 4) * *(ecx_1 + 8)
                            ecx_1 += 0x10
                        while (eax_14 s< edi_1)
                        
                        esi = arg1
                    
                    int32_t edi_5 = (edx_4 << 7) + (edx_4 << 6) * esi[0x1e]
                    
                    if (esi[0x137b] == 0)
                        int32_t eax_15 = operator new(0x14)
                        esi[0x137b] = eax_15
                        
                        if (eax_15 == 0)
                            return 0xfffffffb
                        
                        *esi[0x137b] = operator new(edi_5 * 8)
                        int32_t* edx_12 = esi[0x137b]
                        int32_t ecx_2 = *edx_12
                        
                        if (ecx_2 == 0)
                            int32_t* var_34_8 = edx_12
                            sub_6b4d5b()
                            esi[0x137b] = 0
                            return 0xfffffffb
                        
                        edx_12[1] = ecx_2 + (edi_5 << 1)
                        void* ecx_4 = esi[0x137b]
                        *(ecx_4 + 8) = *(ecx_4 + 4) + (edi_5 << 1)
                        void* ecx_5 = esi[0x137b]
                        *(ecx_5 + 0xc) = *(ecx_5 + 8) + (edi_5 << 1)
                        *(esi[0x137b] + 0x10) = 0
                
                result = sub_6fa280(&var_24, ebp, ebp_1, esi)
                
                if (result == 1)
                    int32_t* var_14_3 = ebp_1
                label_6caf5a:
                    
                    if (esi[0x1378] != 0 && esi[7] == 0)
                        esi[0xdf6] += 1
                        esi[0xdf8] = ebp_1
                        esi[7] = 0
                    else if (esi[0x1d] == 1 && result == 2)
                        if (esi[0x1a] != 0)
                            sub_6e4020(esi)
                        
                        int32_t var_34_10 = ebp_1[0xd]
                        sub_6b4d5b()
                        ebp_1[0xd] = 0
                        int32_t* var_34_11 = ebp_1
                        sub_6b4d5b()
                        esi[0xdf8] = 0
                    else
                        esi[0xdf8] = ebp_1
                        esi[7] = 0
                else
                    if (result == 2)
                        int32_t* var_14_2 = ebp_1
                        goto label_6caf5a
                    
                    if (esi[0x1378] == 0)
                        esi[0xe08] += *ebp_1
                    
                    void* edx_19 = esi[0xdf8]
                    
                    if (edx_19 != 0 && result == 0)
                        int32_t var_34_4 = *(edx_19 + 0x34)
                        sub_6b4d5b()
                        *(esi[0xdf8] + 0x34) = 0
                        int32_t var_34_5 = esi[0xdf8]
                        sub_6b4d5b()
                        esi[0xdf8] = 0
                    label_6cabb0:
                        edx_22 = var_24
                        
                        if (edx_22 != 0)
                            goto label_6cabe0
                        
                        goto label_6caeef
                    
                    if (result s>= 0)
                        goto label_6cabb0

return result
