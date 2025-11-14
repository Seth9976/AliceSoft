// 函数: sub_5a9690
// 地址: 0x5a9690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t* ecx = *(arg2 + 0x180)
uint32_t* ecx_1 = *(arg2 + 0x188)
int32_t ecx_2 = *(arg2 + 0x18c)
int32_t ecx_3 = *(arg2 + 0x190)
int32_t ebx = *(arg2 + 0x174)
int32_t ecx_4 = *(arg2 + 0x194)
uint32_t i_23 = *arg3
int32_t edi = *(arg2 + 0x184)
int32_t ebp_2 = *(arg2 + 0x70) u>> 0xd & 1
int32_t var_4 = edi
int32_t var_18 = ebx
uint32_t edx_5

switch (zx.d(arg3[2].b))
    case 0
        switch (zx.d(*(arg3 + 9)) - 1)
            case 0
                char* edi_1 = arg1
                uint32_t edx_6 = 7
                
                if (i_23 != 0)
                    uint32_t i_26 = i_23
                    uint32_t i
                    
                    do
                        ebx.b = *edi_1
                        i_23.b = edx_6.b
                        arg1.b = ebx.b
                        arg1.b u>>= i_23.b
                        arg1.b &= 1
                        
                        if (zx.w(arg1.b) == *(arg2 + 0x1b0))
                            arg1.b = (0x7f7f s>> (7 - edx_6.b)).b & ebx.b
                            *edi_1 = arg1.b
                            ebx.b = *(arg2 + 0x15c)
                            ebx.b <<= edx_6.b
                            ebx.b |= arg1.b
                            *edi_1 = ebx.b
                        
                        if (edx_6 != 0)
                            edx_6 -= 1
                        else
                            edx_6 = 7
                            edi_1 = &edi_1[1]
                        
                        i = i_26
                        i_26 -= 1
                    while (i != 1)
            case 1
                char* edi_2 = arg1
                
                if (ecx == 0)
                    arg1 = 6
                    
                    if (i_23 != 0)
                        uint32_t i_28 = i_23
                        uint32_t i_1
                        
                        do
                            ebx.b = *edi_2
                            i_23.b = arg1.b
                            edx_5.b = ebx.b
                            edx_5.b u>>= i_23.b
                            edx_5.b &= 3
                            
                            if (zx.w(edx_5.b) == *(arg2 + 0x1b0))
                                edx_5.b = (0x3f3f s>> (6 - arg1.b)).b & ebx.b
                                *edi_2 = edx_5.b
                                ebx.b = *(arg2 + 0x15c)
                                ebx.b <<= arg1.b
                                ebx.b |= edx_5.b
                                *edi_2 = ebx.b
                            
                            if (arg1 != 0)
                                arg1 -= 2
                            else
                                arg1 = 6
                                edi_2 = &edi_2[1]
                            
                            i_1 = i_28
                            i_28 -= 1
                        while (i_1 != 1)
                else
                    uint32_t edx_7 = 6
                    
                    if (i_23 != 0)
                        uint32_t i_27 = i_23
                        uint32_t i_2
                        
                        do
                            ebx.b = *edi_2
                            i_23.b = edx_7.b
                            arg1.b = ebx.b
                            arg1.b u>>= i_23.b
                            arg1.b &= 3
                            
                            if (zx.w(arg1.b) != *(arg2 + 0x1b0))
                                uint32_t eax = zx.d(arg1.b)
                                arg1.b = *((((((eax << 2 | eax) * 4) | eax) * 4) | eax) + ecx)
                                arg1.b u>>= 6
                                ebx.b = (0x3f3f s>> (6 - edx_7.b)).b & *edi_2
                                arg1.b <<= edx_7.b
                            else
                                arg1.b = (0x3f3f s>> (6 - edx_7.b)).b & ebx.b
                                *edi_2 = arg1.b
                                ebx.b = *(arg2 + 0x15c)
                                ebx.b <<= edx_7.b
                            
                            ebx.b |= arg1.b
                            *edi_2 = ebx.b
                            
                            if (edx_7 != 0)
                                edx_7 -= 2
                            else
                                edx_7 = 6
                                edi_2 = &edi_2[1]
                            
                            i_2 = i_27
                            i_27 -= 1
                        while (i_2 != 1)
            case 3
                void* edi_3 = arg1
                uint32_t edx_8 = 4
                
                if (ecx == 0)
                    if (i_23 != 0)
                        uint32_t i_30 = i_23
                        uint32_t i_3
                        
                        do
                            ebx.b = *edi_3
                            i_23.b = edx_8.b
                            arg1.b = ebx.b
                            arg1.b u>>= i_23.b
                            arg1.b &= 0xf
                            
                            if (zx.w(arg1.b) == *(arg2 + 0x1b0))
                                arg1.b = (0xf0f s>> (4 - edx_8.b)).b & ebx.b
                                *edi_3 = arg1.b
                                ebx.b = *(arg2 + 0x15c)
                                ebx.b <<= edx_8.b
                                ebx.b |= arg1.b
                                *edi_3 = ebx.b
                            
                            if (edx_8 != 0)
                                edx_8 -= 4
                            else
                                edx_8 = 4
                                edi_3 += 1
                            
                            i_3 = i_30
                            i_30 -= 1
                        while (i_3 != 1)
                else if (i_23 != 0)
                    uint32_t i_29 = i_23
                    uint32_t i_4
                    
                    do
                        ebx.b = *edi_3
                        i_23.b = edx_8.b
                        arg1.b = ebx.b
                        arg1.b u>>= i_23.b
                        arg1.b &= 0xf
                        
                        if (zx.w(arg1.b) != *(arg2 + 0x1b0))
                            uint32_t eax_1 = zx.d(arg1.b)
                            arg1.b = *((eax_1 << 4 | eax_1) + ecx)
                            arg1.b u>>= 4
                            ebx.b = (0xf0f s>> (4 - edx_8.b)).b & *edi_3
                            arg1.b <<= edx_8.b
                        else
                            arg1.b = (0xf0f s>> (4 - edx_8.b)).b & ebx.b
                            *edi_3 = arg1.b
                            ebx.b = *(arg2 + 0x15c)
                            ebx.b <<= edx_8.b
                        
                        ebx.b |= arg1.b
                        *edi_3 = ebx.b
                        
                        if (edx_8 != 0)
                            edx_8 -= 4
                        else
                            edx_8 = 4
                            edi_3 += 1
                        
                        i_4 = i_29
                        i_29 -= 1
                    while (i_4 != 1)
            case 7
                if (ecx == 0)
                    if (i_23 != 0)
                        uint32_t i_5
                        
                        do
                            if (zx.w(*arg1) == *(arg2 + 0x1b0))
                                uint16_t edx_9
                                edx_9.b = *(arg2 + 0x15c)
                                *arg1 = edx_9.b
                            
                            arg1 += 1
                            i_5 = i_23
                            i_23 -= 1
                        while (i_5 != 1)
                else if (i_23 != 0)
                    uint32_t i_6
                    
                    do
                        edx_5.b = *arg1
                        
                        if (zx.w(edx_5.b) != *(arg2 + 0x1b0))
                            edx_5.b = *(zx.d(edx_5.b) + ecx)
                        else
                            edx_5.b = *(arg2 + 0x15c)
                        
                        *arg1 = edx_5.b
                        arg1 += 1
                        i_6 = i_23
                        i_23 -= 1
                    while (i_6 != 1)
            case 0xf
                if (edi == 0)
                    if (i_23 != 0)
                        uint32_t i_7
                        
                        do
                            if (zx.w(*arg1) * 0x100 + zx.w(*(arg1 + 1)) == *(arg2 + 0x1b0))
                                *arg1 = *(arg2 + 0x15d)
                                *(arg1 + 1) = *(arg2 + 0x15c)
                            
                            arg1 += 2
                            i_7 = i_23
                            i_23 -= 1
                        while (i_7 != 1)
                else if (i_23 != 0)
                    uint32_t i_22 = i_23
                    uint32_t i_8
                    
                    do
                        i_23.b = *(arg1 + 1)
                        edx_5.b = *arg1
                        arg3.b = i_23.b
                        i_23.w = zx.w(edx_5.b) * 0x100
                        i_23.w += zx.w(arg3.b)
                        
                        if (i_23.w != *(arg2 + 0x1b0))
                            i_23.b = ebx.b
                            i_23 = zx.d(
                                *(*(edi + (zx.d(arg3.b) u>> i_23.b << 2)) + (zx.d(edx_5.b) << 1)))
                            *arg1 = (i_23 u>> 8).b
                        else
                            edx_5.b = *(arg2 + 0x15d)
                            *arg1 = edx_5.b
                            i_23.b = *(arg2 + 0x15c)
                        
                        *(arg1 + 1) = i_23.b
                        arg1 += 2
                        i_8 = i_22
                        i_22 -= 1
                    while (i_8 != 1)
    case 2
        uint32_t* edx_15
        
        if (*(arg3 + 9) != 8)
            if (edi == 0)
                if (i_23 != 0)
                    void* eax_5 = arg1 + 2
                    uint32_t i_9
                    
                    do
                        if (zx.w(*(eax_5 - 2)) * 0x100 + zx.w(*(eax_5 - 1)) == *(arg2 + 0x1aa)
                                && zx.w(*eax_5) * 0x100 + zx.w(*(eax_5 + 1)) == *(arg2 + 0x1ac)
                                && zx.w(*(eax_5 + 2)) * 0x100 + zx.w(*(eax_5 + 3))
                                == *(arg2 + 0x1ae))
                            *(eax_5 - 2) = *(arg2 + 0x157)
                            *(eax_5 - 1) = *(arg2 + 0x156)
                            *eax_5 = *(arg2 + 0x159)
                            *(eax_5 + 1) = *(arg2 + 0x158)
                            *(eax_5 + 2) = *(arg2 + 0x15b)
                            *(eax_5 + 3) = *(arg2 + 0x15a)
                        
                        eax_5 += 6
                        i_9 = i_23
                        i_23 -= 1
                    while (i_9 != 1)
            else if (i_23 != 0)
                char* eax_4 = arg1 + 2
                arg3 = i_23
                uint32_t* i_10
                
                do
                    edx_15.b = eax_4[0xfffffffe]
                    i_23.b = eax_4[0xffffffff]
                    
                    if (zx.w(edx_15.b) * 0x100 + zx.w(i_23.b) != *(arg2 + 0x1aa)
                            || zx.w(*eax_4) * 0x100 + zx.w(eax_4[1]) != *(arg2 + 0x1ac)
                            || zx.w(eax_4[2]) * 0x100 + zx.w(eax_4[3]) != *(arg2 + 0x1ae))
                        char edx_34 = ebx.b
                        uint32_t ebx_5 = zx.d(i_23.b)
                        i_23.b = edx_34
                        uint32_t ecx_29 = zx.d(
                            *(*(edi + (ebx_5 u>> i_23.b << 2)) + (zx.d(eax_4[0xfffffffe]) << 1)))
                        eax_4[0xfffffffe] = (ecx_29 u>> 8).b
                        uint32_t ebx_10 = zx.d(eax_4[1])
                        eax_4[0xffffffff] = ecx_29.b
                        ecx_29.b = edx_34
                        uint32_t ecx_31 =
                            zx.d(*(*(edi + (ebx_10 u>> ecx_29.b << 2)) + (zx.d(*eax_4) << 1)))
                        *eax_4 = (ecx_31 u>> 8).b
                        uint32_t ebx_15 = zx.d(eax_4[3])
                        eax_4[1] = ecx_31.b
                        ecx_31.b = edx_34
                        i_23 = zx.d(*(*(edi + (ebx_15 u>> ecx_31.b << 2)) + (zx.d(eax_4[2]) << 1)))
                        ebx = var_18
                        eax_4[2] = (i_23 u>> 8).b
                        eax_4[3] = i_23.b
                    else
                        eax_4[0xfffffffe] = *(arg2 + 0x157)
                        eax_4[0xffffffff] = *(arg2 + 0x156)
                        *eax_4 = *(arg2 + 0x159)
                        eax_4[1] = *(arg2 + 0x158)
                        eax_4[2] = *(arg2 + 0x15b)
                        eax_4[3] = *(arg2 + 0x15a)
                    
                    eax_4 = &eax_4[6]
                    i_10 = arg3
                    arg3 -= 1
                while (i_10 != 1)
        else if (ecx == 0)
            if (i_23 != 0)
                void* eax_3 = arg1 + 2
                uint32_t i_11
                
                do
                    if (zx.w(*(eax_3 - 2)) == *(arg2 + 0x1aa)
                            && zx.w(*(eax_3 - 1)) == *(arg2 + 0x1ac)
                            && zx.w(*eax_3) == *(arg2 + 0x1ae))
                        *(eax_3 - 2) = *(arg2 + 0x156)
                        *(eax_3 - 1) = *(arg2 + 0x158)
                        *eax_3 = *(arg2 + 0x15a)
                    
                    eax_3 += 3
                    i_11 = i_23
                    i_23 -= 1
                while (i_11 != 1)
        else if (i_23 != 0)
            char* eax_2 = arg1 + 2
            uint32_t i_12
            
            do
                edx_15.b = eax_2[0xfffffffe]
                
                if (zx.w(edx_15.b) != *(arg2 + 0x1aa) || zx.w(eax_2[0xffffffff]) != *(arg2 + 0x1ac)
                        || zx.w(*eax_2) != *(arg2 + 0x1ae))
                    eax_2[0xfffffffe] = *(zx.d(edx_15.b) + ecx)
                    eax_2[0xffffffff] = *(zx.d(eax_2[0xffffffff]) + ecx)
                    edx_15 = zx.d(*(zx.d(*eax_2) + ecx))
                else
                    eax_2[0xfffffffe] = *(arg2 + 0x156)
                    eax_2[0xffffffff] = *(arg2 + 0x158)
                    edx_15 = zx.d(*(arg2 + 0x15a))
                
                *eax_2 = edx_15.b
                eax_2 = &eax_2[3]
                i_12 = i_23
                i_23 -= 1
            while (i_12 != 1)
    case 4
        if (*(arg3 + 9) != 8)
            if (edi == 0 || ecx_3 == 0 || ecx_4 == 0)
                if (i_23 != 0)
                    void* edx_50 = arg1 + 1
                    uint32_t i_31 = i_23
                    uint32_t i_13
                    
                    do
                        uint32_t eax_19 = zx.d(zx.w(*(edx_50 + 1)) * 0x100 + zx.w(*(edx_50 + 2)))
                        
                        if (eax_19.w == 0)
                            eax_19.b = *(arg2 + 0x15d)
                            *(edx_50 - 1) = eax_19.b
                            uint16_t ecx_54
                            ecx_54.b = *(arg2 + 0x15c)
                            *edx_50 = ecx_54.b
                        else if (eax_19.w u< 0xffff)
                            int32_t edi_22 = zx.d(*(arg2 + 0x166)) * (0xffff - eax_19)
                                + zx.d(zx.w(*(edx_50 - 1)) * 0x100 + zx.w(*edx_50)) * eax_19
                                + 0x8000
                            eax_19 = ((edi_22 u>> 0x10) + edi_22) u>> 0x10
                            *(edx_50 - 1) = (eax_19 u>> 8).b
                            *edx_50 = eax_19.b
                        
                        edx_50 += 4
                        i_13 = i_31
                        i_31 -= 1
                    while (i_13 != 1)
            else if (i_23 != 0)
                void* edx_49 = arg1 + 1
                arg3 = i_23
                uint32_t* i_14
                
                do
                    uint32_t eax_10 = zx.d(zx.w(*(edx_49 + 1)) * 0x100 + zx.w(*(edx_49 + 2)))
                    
                    if (eax_10.w == 0xffff)
                        eax_10 = zx.d(
                            *(*(edi + (zx.d(*edx_49) u>> ebx.b << 2)) + (zx.d(*(edx_49 - 1)) << 1)))
                        *edx_49 = eax_10.b
                        *(edx_49 - 1) = (eax_10 u>> 8).b
                    else if (eax_10.w != 0)
                        int32_t ecx_48 = zx.d(*(*(ecx_4 + (zx.d(*edx_49) u>> ebx.b << 2))
                            + (zx.d(*(edx_49 - 1)) << 1))) * eax_10
                        ebx = var_18
                        int32_t ecx_49 = ecx_48 + zx.d(*(arg2 + 0x166)) * (0xffff - eax_10) + 0x8000
                        eax_10 = ((ecx_49 u>> 0x10) + ecx_49) u>> 0x10
                        
                        if (ebp_2 == 0)
                            ecx_49.b = ebx.b
                            eax_10 = zx.d(*(*(ecx_3 + (zx.d(eax_10.b) u>> ecx_49.b << 2))
                                + (eax_10 u>> 8 << 1)))
                        
                        edi = var_4
                        *edx_49 = eax_10.b
                        *(edx_49 - 1) = (eax_10 u>> 8).b
                    else
                        eax_10.b = *(arg2 + 0x15d)
                        *(edx_49 - 1) = eax_10.b
                        *edx_49 = *(arg2 + 0x15c)
                    
                    edx_49 += 4
                    i_14 = arg3
                    arg3 -= 1
                while (i_14 != 1)
        else if (ecx_2 != 0 && ecx_1 != 0 && ecx != 0)
            void* edx_47 = arg1
            
            if (i_23 != 0)
                arg3 = i_23
                uint32_t* i_15
                
                do
                    uint32_t eax_6 = zx.d(*(edx_47 + 1))
                    
                    if (eax_6.w == 0xff)
                        eax_6.b = *(zx.d(*edx_47) + ecx)
                        *edx_47 = eax_6.b
                    else if (eax_6.w != 0)
                        uint32_t eax_7 = zx.d((0xff - eax_6.w) * *(arg2 + 0x166)
                            + zx.w(*(zx.d(*edx_47) + ecx_2)) * eax_6.w + 0x80)
                        eax_6 = (eax_7 + (eax_7 u>> 8)) s>> 8
                        
                        if (ebp_2 != 0)
                            *edx_47 = eax_6.b
                        else
                            eax_6.b = *(zx.d(eax_6.b) + ecx_1)
                            *edx_47 = eax_6.b
                    else
                        *edx_47 = *(arg2 + 0x15c)
                    
                    edx_47 += 2
                    i_15 = arg3
                    arg3 -= 1
                while (i_15 != 1)
        else if (i_23 != 0)
            uint32_t i_32 = i_23
            uint32_t i_16
            
            do
                uint32_t* edx_46
                edx_46.b = *(arg1 + 1)
                
                if (edx_46.b == 0)
                    edx_46.b = *(arg2 + 0x15c)
                    *arg1 = edx_46.b
                else if (edx_46.b u< 0xff)
                    uint16_t edx_48 = zx.w(edx_46.b)
                    edx_46 = zx.d((0xff - edx_48) * *(arg2 + 0x166) + zx.w(*arg1) * edx_48 + 0x80)
                    *arg1 = (((edx_46 u>> 8) + edx_46) s>> 8).b
                
                arg1 += 2
                i_16 = i_32
                i_32 -= 1
            while (i_16 != 1)
    case 6
        if (*(arg3 + 9) == 8)
            uint32_t* edx_51
            
            if (ecx_2 != 0 && ecx_1 != 0)
                edx_51 = ecx
            
            if (ecx_2 == 0 || ecx_1 == 0 || edx_51 == 0)
                if (i_23 != 0)
                    void* eax_24 = arg1 + 1
                    uint32_t i_24 = i_23
                    uint32_t i_17
                    
                    do
                        i_23.b = *(eax_24 + 2)
                        
                        if (i_23.b == 0)
                            *(eax_24 - 1) = *(arg2 + 0x156)
                            edx_51.b = *(arg2 + 0x158)
                            *eax_24 = edx_51.b
                            *(eax_24 + 1) = *(arg2 + 0x15a)
                        else if (i_23.b u< 0xff)
                            uint16_t ecx_81 = zx.w(i_23.b)
                            uint32_t ebp_10 = zx.d(*(arg2 + 0x156) * (0xff - ecx_81)
                                + zx.w(*(eax_24 - 1)) * ecx_81 + 0x80)
                            uint16_t ebp_11 = zx.w(*eax_24) * ecx_81
                            *(eax_24 - 1) = (((ebp_10 u>> 8) + ebp_10) s>> 8).b
                            uint32_t ebp_12 =
                                zx.d(*(arg2 + 0x158) * (0xff - ecx_81) + ebp_11 + 0x80)
                            *eax_24 = (((ebp_12 u>> 8) + ebp_12) s>> 8).b
                            i_23 = zx.d(*(arg2 + 0x15a) * (0xff - ecx_81)
                                + zx.w(*(eax_24 + 1)) * ecx_81 + 0x80)
                            *(eax_24 + 1) = (((i_23 u>> 8) + i_23) s>> 8).b
                        
                        eax_24 += 4
                        i_17 = i_24
                        i_24 -= 1
                    while (i_17 != 1)
            else if (i_23 != 0)
                char* eax_23 = arg1 + 1
                arg3 = i_23
                uint32_t* i_18
                
                do
                    i_23.b = eax_23[2]
                    
                    if (i_23.b == 0xff)
                        eax_23[0xffffffff] = *(zx.d(eax_23[0xffffffff]) + edx_51)
                        *eax_23 = *(zx.d(*eax_23) + edx_51)
                        i_23 = zx.d(*(zx.d(eax_23[1]) + edx_51))
                    else if (i_23.b != 0)
                        uint16_t edx_52 = zx.w(i_23.b)
                        int32_t ebx_24
                        ebx_24.w = *(arg2 + 0x160)
                        ebx_24.w *= 0xff - edx_52
                        uint32_t ecx_68 = zx.d(zx.w(*(zx.d(eax_23[0xffffffff]) + ecx_2)) * edx_52
                            + ebx_24.w + 0x80)
                        int32_t ecx_70 = (ecx_68 + (ecx_68 u>> 8)) s>> 8
                        
                        if (ebp_2 == 0)
                            ecx_70.b = *(zx.d(ecx_70.b) + ecx_1)
                        
                        eax_23[0xffffffff] = ecx_70.b
                        int32_t ebx_28
                        ebx_28.w = *(arg2 + 0x162)
                        ebx_28.w *= 0xff - edx_52
                        uint32_t ecx_73 =
                            zx.d(zx.w(*(zx.d(*eax_23) + ecx_2)) * edx_52 + ebx_28.w + 0x80)
                        int32_t ecx_75 = (ecx_73 + (ecx_73 u>> 8)) s>> 8
                        
                        if (ebp_2 == 0)
                            ecx_75.b = *(zx.d(ecx_75.b) + ecx_1)
                        
                        *eax_23 = ecx_75.b
                        uint32_t ecx_78 = zx.d(zx.w(*(zx.d(eax_23[1]) + ecx_2)) * edx_52
                            + *(arg2 + 0x164) * (0xff - edx_52) + 0x80)
                        i_23 = (ecx_78 + (ecx_78 u>> 8)) s>> 8
                        
                        if (ebp_2 == 0)
                            i_23.b = *(zx.d(i_23.b) + ecx_1)
                        
                        edx_51 = ecx
                    else
                        eax_23[0xffffffff] = *(arg2 + 0x156)
                        *eax_23 = *(arg2 + 0x158)
                        i_23 = zx.d(*(arg2 + 0x15a))
                    
                    eax_23[1] = i_23.b
                    eax_23 = &eax_23[4]
                    i_18 = arg3
                    arg3 -= 1
                while (i_18 != 1)
        else if (edi == 0 || ecx_3 == 0 || ecx_4 == 0)
            if (i_23 != 0)
                arg1 += 1
                uint32_t i_25 = i_23
                uint32_t i_19
                
                do
                    uint32_t ecx_121 = zx.d(zx.w(*(arg1 + 5)) * 0x100 + zx.w(*(arg1 + 6)))
                    
                    if (ecx_121.w == 0)
                        *(arg1 - 1) = *(arg2 + 0x157)
                        *arg1 = *(arg2 + 0x156)
                        *(arg1 + 1) = *(arg2 + 0x159)
                        *(arg1 + 2) = *(arg2 + 0x158)
                        *(arg1 + 3) = *(arg2 + 0x15b)
                        *(arg1 + 4) = *(arg2 + 0x15a)
                    else if (ecx_121.w u< 0xffff)
                        int32_t edx_115 = zx.d(zx.w(*(arg1 - 1)) * 0x100 + zx.w(*arg1)) * ecx_121
                            + zx.d(*(arg2 + 0x156)) * (0xffff - ecx_121) + 0x8000
                        uint32_t ecx_131 = ((edx_115 u>> 0x10) + edx_115) u>> 0x10
                        *arg1 = ecx_131.b
                        uint16_t ecx_132 = zx.w(*(arg1 + 1))
                        *(arg1 - 1) = (ecx_131 u>> 8).b
                        int32_t edx_121 = zx.d(ecx_132 * 0x100 + zx.w(*(arg1 + 2))) * ecx_121
                            + zx.d(*(arg2 + 0x158)) * (0xffff - ecx_121) + 0x8000
                        uint32_t ecx_138 = ((edx_121 u>> 0x10) + edx_121) u>> 0x10
                        *(arg1 + 2) = ecx_138.b
                        uint16_t ecx_139 = zx.w(*(arg1 + 3))
                        *(arg1 + 1) = (ecx_138 u>> 8).b
                        int32_t edx_127 = zx.d(ecx_139 * 0x100 + zx.w(*(arg1 + 4))) * ecx_121
                            + zx.d(*(arg2 + 0x15a)) * (0xffff - ecx_121) + 0x8000
                        uint32_t ecx_145 = ((edx_127 u>> 0x10) + edx_127) u>> 0x10
                        *(arg1 + 3) = (ecx_145 u>> 8).b
                        *(arg1 + 4) = ecx_145.b
                    
                    arg1 += 8
                    i_19 = i_25
                    i_25 -= 1
                while (i_19 != 1)
        else if (i_23 != 0)
            void* eax_25 = arg1 + 1
            uint32_t i_21 = i_23
            uint32_t i_20
            
            do
                uint32_t edx_71 = zx.d(zx.w(*(eax_25 + 5)) * 0x100 + zx.w(*(eax_25 + 6)))
                uint32_t ecx_89
                
                if (edx_71.w == 0xffff)
                    char edx_72 = ebx.b
                    uint32_t ecx_85 = zx.d(
                        *(*(edi + (zx.d(*eax_25) u>> edx_72 << 2)) + (zx.d(*(eax_25 - 1)) << 1)))
                    *(eax_25 - 1) = (ecx_85 u>> 8).b
                    uint32_t ebx_38 = zx.d(*(eax_25 + 2))
                    *eax_25 = ecx_85.b
                    ecx_85.b = edx_72
                    uint32_t ecx_87 =
                        zx.d(*(*(edi + (ebx_38 u>> ecx_85.b << 2)) + (zx.d(*(eax_25 + 1)) << 1)))
                    *(eax_25 + 1) = (ecx_87 u>> 8).b
                    uint32_t ebx_43 = zx.d(*(eax_25 + 4))
                    *(eax_25 + 2) = ecx_87.b
                    ecx_87.b = edx_72
                    ecx_89 =
                        zx.d(*(*(edi + (ebx_43 u>> ecx_87.b << 2)) + (zx.d(*(eax_25 + 3)) << 1)))
                    ebx = var_18
                    *(eax_25 + 4) = ecx_89.b
                    *(eax_25 + 3) = (ecx_89 u>> 8).b
                else if (edx_71.w != 0)
                    char ecx_93 = ebx.b
                    int32_t edx_83 = zx.d(
                        *(*(ecx_4 + (zx.d(*eax_25) u>> ecx_93 << 2)) + (zx.d(*(eax_25 - 1)) << 1)))
                        * edx_71 + zx.d(*(arg2 + 0x160)) * (0xffff - edx_71) + 0x8000
                    uint32_t ecx_100 = ((edx_83 u>> 0x10) + edx_83) u>> 0x10
                    
                    if (ebp_2 == 0)
                        uint32_t edx_84 = ecx_100
                        ecx_100.b = var_18.b
                        ecx_100 = zx.d(
                            *(*(ecx_3 + (zx.d(edx_84.b) u>> ecx_100.b << 2)) + (edx_84 u>> 8 << 1)))
                    
                    uint8_t edx_87 = (ecx_100 u>> 8).b
                    *eax_25 = ecx_100.b
                    ecx_100.b = ecx_93
                    *(eax_25 - 1) = edx_87
                    int32_t edx_93 = zx.d(*(*(ecx_4 + (zx.d(*(eax_25 + 2)) u>> ecx_100.b << 2))
                        + (zx.d(*(eax_25 + 1)) << 1))) * edx_71
                        + zx.d(*(arg2 + 0x162)) * (0xffff - edx_71) + 0x8000
                    uint32_t ecx_109 = ((edx_93 u>> 0x10) + edx_93) u>> 0x10
                    
                    if (ebp_2 == 0)
                        uint32_t edx_94 = ecx_109
                        ecx_109.b = var_18.b
                        ecx_109 = zx.d(
                            *(*(ecx_3 + (zx.d(edx_94.b) u>> ecx_109.b << 2)) + (edx_94 u>> 8 << 1)))
                    
                    uint8_t edx_97 = (ecx_109 u>> 8).b
                    *(eax_25 + 2) = ecx_109.b
                    ecx_109.b = ecx_93
                    *(eax_25 + 1) = edx_97
                    ebx = var_18
                    int32_t edx_103 = zx.d(*(*(ecx_4 + (zx.d(*(eax_25 + 4)) u>> ecx_109.b << 2))
                        + (zx.d(*(eax_25 + 3)) << 1))) * edx_71
                        + zx.d(*(arg2 + 0x164)) * (0xffff - edx_71) + 0x8000
                    ecx_89 = ((edx_103 u>> 0x10) + edx_103) u>> 0x10
                    
                    if (ebp_2 == 0)
                        uint32_t edx_104 = ecx_89
                        ecx_89.b = ebx.b
                        ecx_89 = zx.d(*
                            (*(ecx_3 + (zx.d(edx_104.b) u>> ecx_89.b << 2)) + (edx_104 u>> 8 << 1)))
                    
                    edi = var_4
                    *(eax_25 + 4) = ecx_89.b
                    *(eax_25 + 3) = (ecx_89 u>> 8).b
                else
                    *(eax_25 - 1) = *(arg2 + 0x157)
                    *eax_25 = *(arg2 + 0x156)
                    *(eax_25 + 1) = *(arg2 + 0x159)
                    *(eax_25 + 2) = *(arg2 + 0x158)
                    *(eax_25 + 3) = *(arg2 + 0x15b)
                    *(eax_25 + 4) = *(arg2 + 0x15a)
                eax_25 += 8
                i_20 = i_21
                i_21 -= 1
            while (i_20 != 1)
