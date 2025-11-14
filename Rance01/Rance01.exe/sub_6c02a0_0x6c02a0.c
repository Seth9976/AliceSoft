// 函数: sub_6c02a0
// 地址: 0x6c02a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* esi = arg2
void* ecx = arg3
int128_t* edi = arg1
void* eax_1

if (edi u> esi && edi u< ecx + esi)
    void* esi_2 = ecx + esi - 4
    void* edi_2 = ecx + edi - 4
    void* edx_2
    uint32_t ecx_4
    
    if ((edi_2 & 3) == 0)
        ecx_4 = ecx u>> 2
        edx_2 = ecx & 3
        
        if (ecx_4 u>= 8)
            edi_2, esi_2 = __builtin_memcpy(edi_2 - (ecx_4 << 2), esi_2 - (ecx_4 << 2), ecx_4 << 2)
            
            switch (edx_2)
                case nullptr
                    return arg1
                case 1
                    goto label_6c05c4
                case 2
                    goto label_6c05d4
                case 3
                    goto label_6c05e8
    else if (ecx u< 4)
        switch (ecx)
            case nullptr
                return arg1
            case 1
            label_6c05c4:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                return arg1
            case 2
            label_6c05d4:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                return arg1
            case 3
            label_6c05e8:
                eax_1.b = *(esi_2 + 3)
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                eax_1.b = *(esi_2 + 1)
                *(edi_2 + 1) = eax_1.b
                return arg1
    else
        eax_1 = edi_2 & 3
        void* ecx_6 = ecx - eax_1
        
        switch (jump_table_6c04b0[eax_1])
            case 0x6c04c0
                eax_1.b = *(esi_2 + 3)
                edx_2 = 3 & ecx_6
                *(edi_2 + 3) = eax_1.b
                esi_2 -= 1
                ecx_4 = ecx_6 u>> 2
                edi_2 -= 1
                
                if (ecx_4 u>= 8)
                    edi_2, esi_2 =
                        __builtin_memcpy(edi_2 - (ecx_4 << 2), esi_2 - (ecx_4 << 2), ecx_4 << 2)
                    
                    switch (edx_2)
                        case nullptr
                            return arg1
                        case 1
                            goto label_6c05c4
                        case 2
                            goto label_6c05d4
                        case 3
                            goto label_6c05e8
            case 0x6c04e4
                eax_1.b = *(esi_2 + 3)
                edx_2 = 3 & ecx_6
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                ecx_4 = ecx_6 u>> 2
                *(edi_2 + 2) = eax_1.b
                esi_2 -= 2
                edi_2 -= 2
                
                if (ecx_4 u>= 8)
                    edi_2, esi_2 =
                        __builtin_memcpy(edi_2 - (ecx_4 << 2), esi_2 - (ecx_4 << 2), ecx_4 << 2)
                    
                    switch (edx_2)
                        case nullptr
                            return arg1
                        case 1
                            goto label_6c05c4
                        case 2
                            goto label_6c05d4
                        case 3
                            goto label_6c05e8
            case 0x6c050c
                eax_1.b = *(esi_2 + 3)
                edx_2 = 3 & ecx_6
                *(edi_2 + 3) = eax_1.b
                eax_1.b = *(esi_2 + 2)
                *(edi_2 + 2) = eax_1.b
                eax_1.b = *(esi_2 + 1)
                ecx_4 = ecx_6 u>> 2
                *(edi_2 + 1) = eax_1.b
                esi_2 -= 3
                edi_2 -= 3
                
                if (ecx_4 u>= 8)
                    edi_2, esi_2 =
                        __builtin_memcpy(edi_2 - (ecx_4 << 2), esi_2 - (ecx_4 << 2), ecx_4 << 2)
                    
                    switch (edx_2)
                        case nullptr
                            return arg1
                        case 1
                            goto label_6c05c4
                        case 2
                            goto label_6c05d4
                        case 3
                            goto label_6c05e8
    
    switch (edx_2)
        case nullptr
            return arg1
        case 1
            goto label_6c05c4
        case 2
            goto label_6c05d4
        case 3
            goto label_6c05e8

if (ecx u>= 0x80 && data_798208 != 0 && (edi & 0xf) == (esi & 0xf))
    int128_t* var_10_2 = edi
    void* eax_19 = esi & 0xf
    
    if (eax_19 != 0)
        void* i_9 = (0x10 - eax_19) & 3
        
        if (i_9 != 0)
            void* i
            
            do
                void* edx_6
                edx_6.b = *esi
                *edi = edx_6.b
                esi += 1
                edi += 1
                i = i_9
                i_9 -= 1
            while (i != 1)
        
        uint32_t i_6 = (0x10 - eax_19) u>> 2
        
        if (i_6 != 0)
            uint32_t i_1
            
            do
                *edi = *esi
                esi += 4
                edi += 4
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
        
        ecx -= 0x10 - eax_19
    
    void* ecx_7 = ecx & 0x7f
    uint32_t i_10 = ecx u>> 7
    
    if (i_10 != 0)
        uint32_t i_2
        
        do
            int128_t xmm1_1 = esi[1]
            int128_t xmm2_1 = esi[2]
            int128_t xmm3_1 = esi[3]
            *edi = *esi
            edi[1] = xmm1_1
            edi[2] = xmm2_1
            edi[3] = xmm3_1
            int128_t xmm5_1 = esi[5]
            int128_t xmm6_1 = esi[6]
            int128_t xmm7_1 = esi[7]
            edi[4] = esi[4]
            edi[5] = xmm5_1
            edi[6] = xmm6_1
            edi[7] = xmm7_1
            esi = &esi[8]
            edi = &edi[8]
            i_2 = i_10
            i_10 -= 1
        while (i_2 != 1)
    
    if (ecx_7 != 0)
        uint32_t i_11 = ecx_7 u>> 4
        
        if (i_11 != 0)
            uint32_t i_3
            
            do
                *edi = *esi
                esi = &esi[1]
                edi = &edi[1]
                i_3 = i_11
                i_11 -= 1
            while (i_3 != 1)
        
        void* ecx_8 = ecx_7 & 0xf
        
        if (ecx_8 != 0)
            uint32_t i_7 = ecx_8 u>> 2
            
            if (i_7 != 0)
                uint32_t i_4
                
                do
                    *edi = *esi
                    esi += 4
                    edi += 4
                    i_4 = i_7
                    i_7 -= 1
                while (i_4 != 1)
            
            void* i_8 = ecx_8 & 3
            
            if (i_8 != 0)
                void* i_5
                
                do
                    void* eax_20
                    eax_20.b = *esi
                    *edi = eax_20.b
                    esi += 1
                    edi += 1
                    i_5 = i_8
                    i_8 -= 1
                while (i_5 != 1)
    
    return var_10_2

uint32_t ecx_1
void* edx_1

if ((edi & 3) != 0)
    if (ecx u< 4)
        jump(*(((ecx - 4) << 2) + &data_6c0420))
    
    eax_1 = edi & 3
    void* ecx_3 = ecx - 4 + eax_1
    
    switch (jump_table_6c0324[eax_1])
        case 0x6c0334
            edx_1 = 3 & ecx_3
            eax_1.b = *esi
            *edi = eax_1.b
            eax_1.b = *(esi + 1)
            *(edi + 1) = eax_1.b
            eax_1.b = *(esi + 2)
            ecx_1 = ecx_3 u>> 2
            *(edi + 2) = eax_1.b
            esi += 3
            edi += 3
            
            if (ecx_1 u>= 8)
                edi, esi = __builtin_memcpy(edi, esi, ecx_1 << 2)
                
                switch (edx_1)
                    case nullptr
                        return arg1
                    case 1
                        goto label_6c0428
                    case 2
                        goto label_6c0434
                    case 3
                        goto label_6c0448
        case 0x6c0360
            edx_1 = 3 & ecx_3
            eax_1.b = *esi
            *edi = eax_1.b
            eax_1.b = *(esi + 1)
            ecx_1 = ecx_3 u>> 2
            *(edi + 1) = eax_1.b
            esi += 2
            edi += 2
            
            if (ecx_1 u>= 8)
                edi, esi = __builtin_memcpy(edi, esi, ecx_1 << 2)
                
                switch (edx_1)
                    case nullptr
                        return arg1
                    case 1
                        goto label_6c0428
                    case 2
                        goto label_6c0434
                    case 3
                        goto label_6c0448
        case 0x6c0384
            edx_1 = 3 & ecx_3
            eax_1.b = *esi
            *edi = eax_1.b
            esi += 1
            ecx_1 = ecx_3 u>> 2
            edi += 1
            
            if (ecx_1 u>= 8)
                edi, esi = __builtin_memcpy(edi, esi, ecx_1 << 2)
                
                switch (edx_1)
                    case nullptr
                        return arg1
                    case 1
                        goto label_6c0428
                    case 2
                        goto label_6c0434
                    case 3
                        goto label_6c0448
else
    ecx_1 = ecx u>> 2
    edx_1 = ecx & 3
    
    if (ecx_1 u>= 8)
        edi, esi = __builtin_memcpy(edi, esi, ecx_1 << 2)
        
        switch (edx_1)
            case nullptr
                return arg1
            case 1
                goto label_6c0428
            case 2
                goto label_6c0434
            case 3
                goto label_6c0448

switch (ecx_1)
    case 0
        goto label_6c0407
    case 1
        goto label_6c03f8
    case 2
        goto label_6c03f0
    case 3
        goto label_6c03e8
    case 4
        goto label_6c03e0
    case 5
        goto label_6c03d8
    case 6
        goto label_6c03d0
    case 7
        *(edi + (ecx_1 << 2) - 0x1c) = *(esi + (ecx_1 << 2) - 0x1c)
    label_6c03d0:
        *(edi + (ecx_1 << 2) - 0x18) = *(esi + (ecx_1 << 2) - 0x18)
    label_6c03d8:
        *(edi + (ecx_1 << 2) - 0x14) = *(esi + (ecx_1 << 2) - 0x14)
    label_6c03e0:
        *(edi + (ecx_1 << 2) - 0x10) = *(esi + (ecx_1 << 2) - 0x10)
    label_6c03e8:
        *(edi + (ecx_1 << 2) - 0xc) = *(esi + (ecx_1 << 2) - 0xc)
    label_6c03f0:
        *(edi + (ecx_1 << 2) - 8) = *(esi + (ecx_1 << 2) - 8)
    label_6c03f8:
        *(edi + (ecx_1 << 2) - 4) = *(esi + (ecx_1 << 2) - 4)
        eax_1 = ecx_1 << 2
        esi += eax_1
        edi += eax_1
    label_6c0407:
        
        switch (edx_1)
            case nullptr
                return arg1
            case 1
            label_6c0428:
                eax_1.b = *esi
                *edi = eax_1.b
                return arg1
            case 2
            label_6c0434:
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = *(esi + 1)
                *(edi + 1) = eax_1.b
                return arg1
            case 3
            label_6c0448:
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = *(esi + 1)
                *(edi + 1) = eax_1.b
                eax_1.b = *(esi + 2)
                *(edi + 2) = eax_1.b
                return arg1
