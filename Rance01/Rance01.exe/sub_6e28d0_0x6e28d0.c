// 函数: sub_6e28d0
// 地址: 0x6e28d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1
int32_t edi = arg5
void* ebx = nullptr
void* var_74
int32_t var_6c_1
int32_t eax_1
int32_t edx

if (*(esi + 0x4de8) == 1)
    edx = *(esi + 0x37b8)
    
    if (edx == 2)
        eax_1 = *(esi + 0x37bc)
        
        if (eax_1 != 1)
            var_6c_1 = 0
            var_74 = nullptr
        else
            int32_t var_74_2 = 0
            int32_t ecx_34 = *(esi + 0x37c0)
            int32_t i = ecx_34 - 1
            
            if (ecx_34 != 0)
                int32_t ecx_35 = *(esi + 0x37cc)
                int32_t ecx_37 = i << 4
                int32_t esi_19 = 0
                
                do
                    i -= 1
                    esi_19 += *(ecx_37 + ecx_35 + 4) * *(ecx_37 + ecx_35 + 8)
                    ecx_37 -= 0x10
                while (i != 0xffffffff)
                
                var_74_2 = esi_19
                ebx = nullptr
                edi = arg5
                esi = arg1
            
            int32_t ecx_44 = arg3 * 2 * (var_74_2 << 6) + *(*(esi + 0x4dec) + 4)
            var_6c_1 = ecx_44
            var_74 = (var_74_2 << 8) + ecx_44
    else
        eax_1 = *(esi + 0x37bc)
        var_6c_1 = 0
        var_74 = nullptr
else
    edx = *(esi + 0x37b8)
    eax_1 = *(esi + 0x37bc)
    var_6c_1 = 0
    var_74 = nullptr

int32_t var_70 = *(esi + 0x4834)
int32_t var_8c
void* result = sub_6e0940(esi + 4, edx * edi, eax_1 * edi, arg3, arg4, *(esi + 0x30), 
    *(esi + 0x3c), *(esi + 0x20), *(esi + 0x24), *(esi + 0x28), arg2 + 0x2c, &var_8c)

if (result == 0)
    int32_t ebp_1 = *(esi + 0x34)
    int32_t var_24_1 = *(arg2 + 0x2c)
    
    if (ebp_1 == 2 && *(esi + 0x58) == 1)
        int32_t eax_56 = *(arg2 + 0x38)
        
        if (eax_56 == 0)
            var_24_1 += 2
        else if (eax_56 == 1)
            var_24_1 += 1
    
    int32_t eax_11 = *(esi + 0x37c0)
    int32_t ecx_5 = edi << 5
    int32_t i_6 = 0
    int32_t i_5
    
    while (true)
        int32_t edx_4
        
        if (ebp_1 == 3)
            edx_4 = 3
        else
            edx_4 = *(esi + 0x30)
        
        int32_t ecx_6
        
        if (eax_11 s< edx_4)
            ecx_6 = eax_11
        else if (ebp_1 == 3)
            ecx_6 = 3
        else
            ecx_6 = *(esi + 0x30)
        
        i_5 = i_6
        
        if (i_5 s>= ecx_6)
            break
        
        if (*(esi + 0x58) != 4 || i_6 s<= 0)
            int32_t eax_12 = *(esi + 0x37b8)
            int32_t ecx_8 = i_6 << 4
            void* ecx_9 = ecx_8 + *(esi + 0x37cc)
            int32_t ebx_1 = *(ecx_9 + 4)
            int32_t var_5c_1 = ebx_1
            int32_t temp0_1 = divs.dp.d(sx.q(eax_12), ebx_1)
            int32_t eax_15 = *(esi + 0x37bc)
            int32_t ecx_10 = *(ecx_9 + 8)
            ebx_1.b = arg6
            int32_t temp0_2 = divs.dp.d(sx.q(eax_15), ecx_10)
            void var_58c
            
            if (ebx_1.b != 0)
                if (ecx_10 s> 0)
                    int32_t eax_27 = temp0_2 * arg5
                    int32_t edi_9 = temp0_1 * arg5
                    int32_t ebp_10 = 0
                    int32_t var_4c_2 = 0
                    int32_t esi_5 = 0
                    int32_t eax_28 = var_5c_1
                    void* edx_19 = ecx_9
                    
                    do
                        int32_t ebx_10 = 0
                        
                        if (eax_28 s> 0)
                            void* var_48_3 = &var_58c + esi_5
                            int32_t ecx_17 = edi_9
                            int32_t edi_11 = eax_27
                            int32_t ebp_11 = var_70
                            
                            do
                                int32_t esi_6 = 0
                                
                                if (edi_11 s> 0)
                                    int32_t eax_29 = 0
                                    int32_t edx_20 = 0
                                    
                                    do
                                        int32_t i_1 = 0
                                        
                                        if (ecx_17 s> 0)
                                            void* var_64_3
                                            int32_t ebp_15
                                            
                                            if (ecx_17 s< 6)
                                                var_64_3 = var_48_3 + eax_29
                                                ebp_15 = ebp_11 + edx_20
                                            else
                                                var_64_3 = var_48_3 + eax_29
                                                ebp_15 = ebp_11 + edx_20
                                                int32_t var_60_4 = edx_20
                                                int32_t var_5c_3 = eax_29
                                                
                                                do
                                                    eax_29.b = *(ebp_15 + (i_1 << 1))
                                                    *(var_64_3 + i_1) = eax_29.b
                                                    eax_29.b = *(ebp_15 + (i_1 << 1) + 2)
                                                    *(var_64_3 + i_1 + 1) = eax_29.b
                                                    ecx_17.b = *(ebp_15 + (i_1 << 1) + 4)
                                                    *(var_64_3 + i_1 + 2) = ecx_17.b
                                                    edx_20.b = *(ebp_15 + (i_1 << 1) + 6)
                                                    *(var_64_3 + i_1 + 3) = edx_20.b
                                                    eax_29.b = *(ebp_15 + (i_1 << 1) + 8)
                                                    *(var_64_3 + i_1 + 4) = eax_29.b
                                                    i_1 += 5
                                                while (i_1 s<= edi_9 - 6)
                                                
                                                edx_20 = var_60_4
                                                eax_29 = var_5c_3
                                                ecx_17 = edi_9
                                            
                                            int32_t var_5c_4 = eax_29
                                            
                                            do
                                                eax_29.b = *(ebp_15 + (i_1 << 1))
                                                *(var_64_3 + i_1) = eax_29.b
                                                i_1 += 1
                                            while (i_1 s< ecx_17)
                                            
                                            eax_29 = var_5c_4
                                            edi_11 = eax_27
                                        
                                        eax_29 += 0x20
                                        edx_20 += 0x10
                                        esi_6 += 1
                                    while (esi_6 s< edi_11)
                                    
                                    edx_19 = *(arg1 + 0x37cc) + ecx_8
                                    eax_28 = *(edx_19 + 4)
                                
                                var_48_3 += ecx_17
                                ebp_11 += 0x80
                                ebx_10 += 1
                            while (ebx_10 s< eax_28)
                            
                            var_70 = ebp_11
                            ecx_10 = *(edx_19 + 8)
                        
                        esi_5 += ecx_5 * temp0_2
                        ebp_10 += 1
                    while (ebp_10 s< ecx_10)
                    
                    esi = arg1
                    ebp_1 = *(esi + 0x34)
            else if (*(esi + 0x4de8) == 1 && eax_12 == 2 && eax_15 == 1 && arg5 != 1)
                int32_t edx_29 = arg5 * 8
                void* var_4c_4 = &var_58c
                
                if (var_5c_1 s> 0)
                    int32_t eax_31 = var_5c_1
                    int32_t ecx_23 = var_70
                    void* esi_10 = var_74
                    int32_t edx_30 = 0
                    int32_t edi_17 = var_6c_1
                    
                    do
                        int32_t ebp_18 = 0
                        
                        if (edx_29 s> 0)
                            int32_t eax_33 = ecx_23 + (arg5 << 1)
                            int32_t ebx_15 = 0
                            int32_t esi_11 = arg5
                            
                            do
                                int32_t eax_34 = ebp_18 * 2
                                
                                if (temp0_1 == 2)
                                    int32_t edx_32 = ebp_18 * 2
                                    int16_t* edi_19 = ecx_23 + (ebp_18 << 1)
                                    int16_t* var_3c_2 = edi_19
                                    int32_t edx_35 = sx.d(*edi_19) * 3
                                    void* ecx_28 = var_4c_4 + (eax_34 << 1)
                                    void* var_38_2 = ecx_28
                                    *ecx_28 = ((sx.d(*(edi_17 + (arg5 << 1) + (ebp_18 << 1) - 2))
                                        + edx_35 + 1) s>> 2).b
                                    *(ecx_28 + 1) = ((sx.d(edi_19[1]) + edx_35 + 2) s>> 2).b
                                    int32_t ecx_29 = eax_34 * 2
                                    
                                    if (arg5 - 1 s> 1)
                                        void* i_2 = &edi_19[1]
                                        void* esi_15
                                        
                                        do
                                            ecx_29 += 2
                                            int32_t edi_20 = sx.d(*i_2) * 3
                                            esi_15 = var_4c_4 + ecx_29
                                            *esi_15 = ((sx.d(*(i_2 - 2)) + edi_20 + 1) s>> 2).b
                                            *(esi_15 + 1) =
                                                ((sx.d(*(i_2 + 2)) + edi_20 + 2) s>> 2).b
                                            i_2 += 2
                                        while (i_2 s< &edi_19[esi_11 - 1])
                                        
                                        var_38_2 = esi_15
                                        esi_11 = arg5
                                    
                                    int32_t edx_41 = sx.d(*(eax_33 + edx_32 - 2)) * 3
                                    *(var_38_2 + 2) =
                                        ((sx.d(*(eax_33 + edx_32 - 4)) + edx_41 + 1) s>> 2).b
                                    *(var_38_2 + 3) =
                                        ((sx.d(*(esi_10 + edx_32)) + edx_41 + 2) s>> 2).b
                                else
                                    int32_t i_3 = 0
                                    
                                    if (esi_11 s> 0)
                                        int32_t eax_35
                                        int32_t ecx_26
                                        void* edi_18
                                        
                                        if (esi_11 s< 6)
                                            edi_18 = var_4c_4 + (eax_34 << 1)
                                            ecx_26 = ecx_23 + ebx_15
                                        else
                                            edi_18 = var_4c_4 + (eax_34 << 1)
                                            ecx_26 = ecx_23 + ebx_15
                                            int32_t var_30_2 = ebx_15
                                            
                                            do
                                                eax_35.b = *(ecx_26 + (i_3 << 1))
                                                *(edi_18 + i_3) = eax_35.b
                                                ebx_15.b = *(ecx_26 + (i_3 << 1) + 2)
                                                *(edi_18 + i_3 + 1) = ebx_15.b
                                                eax_35.b = *(ecx_26 + (i_3 << 1) + 4)
                                                *(edi_18 + i_3 + 2) = eax_35.b
                                                eax_35.b = *(ecx_26 + (i_3 << 1) + 6)
                                                *(edi_18 + i_3 + 3) = eax_35.b
                                                eax_35.b = *(ecx_26 + (i_3 << 1) + 8)
                                                *(edi_18 + i_3 + 4) = eax_35.b
                                                i_3 += 5
                                            while (i_3 s<= arg5 - 6)
                                            
                                            ebx_15 = var_30_2
                                            esi_11 = arg5
                                        
                                        do
                                            eax_35.b = *(ecx_26 + (i_3 << 1))
                                            *(edi_18 + i_3) = eax_35.b
                                            i_3 += 1
                                        while (i_3 s< esi_11)
                                
                                ebx_15 += 0x10
                                ebp_18 += 8
                            while (ebp_18 s< edx_29)
                            
                            eax_31 = *(ecx_8 + *(arg1 + 0x37cc) + 4)
                        
                        ecx_23 += 0x80
                        esi_10 += 0x80
                        edi_17 += 0x80
                        edx_30 += 1
                        var_4c_4 += temp0_1 * arg5
                    while (edx_30 s< eax_31)
                    
                    var_70 = ecx_23
                    var_74 = esi_10
                    var_6c_1 = edi_17
                    esi = arg1
                    ebp_1 = *(esi + 0x34)
            else if (ecx_10 s> 0)
                int32_t eax_18 = temp0_2 << 5
                void* esi_1 = ecx_9
                int32_t var_44_2 = 0
                int32_t ebp_3 = 0
                int32_t edi_2 = 0
                int32_t eax_19 = var_5c_1
                
                do
                    void* ebx_4 = &var_58c + ebp_3
                    int32_t edx_12 = 0
                    
                    if (eax_19 s> 0)
                        int32_t ecx_11 = var_70
                        void* var_60_2 = esi_1
                        int32_t esi_2 = eax_18
                        
                        do
                            int32_t edi_3 = 0
                            
                            if (arg5 s> 0)
                                int32_t eax_20 = 0
                                int32_t ebp_5 = temp0_1
                                int32_t ebx_5 = arg5
                                
                                do
                                    int32_t ecx_12 = 0
                                    
                                    if (ebx_5 s> 0)
                                        int32_t edx_15 = 0
                                        
                                        do
                                            void* eax_21 = nullptr
                                            
                                            if (esi_2 s> 0)
                                                void* edi_5 = ebx_4 + eax_20 + edx_15
                                                
                                                do
                                                    int32_t edx_16 = 0
                                                    
                                                    if (ebp_5 s> 0)
                                                        char* ecx_16
                                                        char* ebx_8
                                                        
                                                        if (ebp_5 s< 5)
                                                            ebx_8 =
                                                                (edi_3 << 4) + ecx_11 + (ecx_12 << 1)
                                                            ecx_16 = eax_21 + edi_5
                                                        else
                                                            int32_t edi_8 = (edi_3 << 4) + ecx_11
                                                            int32_t var_58_1 = 0
                                                            char* var_5c_2 = eax_21 + edi_5
                                                            char* var_60_3 = edi_8 + (ecx_12 << 1)
                                                            bool cond:4_1
                                                            
                                                            do
                                                                int32_t eax_22
                                                                eax_22.b = *(edi_8 + (ecx_12 << 1))
                                                                var_5c_2[var_58_1] = eax_22.b
                                                                int32_t eax_23
                                                                eax_23.b = *(edi_8 + (ecx_12 << 1))
                                                                var_5c_2[var_58_1 + 1] = eax_23.b
                                                                char* ebx_7
                                                                ebx_7.b = *(edi_8 + (ecx_12 << 1))
                                                                var_5c_2[var_58_1 + 2] = ebx_7.b
                                                                edx_16.b = *(edi_8 + (ecx_12 << 1))
                                                                var_5c_2[var_58_1 + 3] = edx_16.b
                                                                cond:4_1 = var_58_1 + 4 s<= temp0_1 - 5
                                                                var_58_1 += 4
                                                            while (cond:4_1)
                                                            ebp_5 = temp0_1
                                                            esi_2 = eax_18
                                                            edx_16 = var_58_1
                                                            ecx_16 = var_5c_2
                                                            ebx_8 = var_60_3
                                                        
                                                        void* var_64_2 = eax_21
                                                        
                                                        do
                                                            eax_21.b = *ebx_8
                                                            ecx_16[edx_16] = eax_21.b
                                                            edx_16 += 1
                                                        while (edx_16 s< ebp_5)
                                                        
                                                        eax_21 = var_64_2
                                                    
                                                    eax_21 += 0x20
                                                while (eax_21 s< esi_2)
                                                
                                                ebx_5 = arg5
                                            
                                            edx_15 += ebp_5
                                            ecx_12 += 1
                                        while (ecx_12 s< ebx_5)
                                    
                                    eax_20 += esi_2
                                    edi_3 += 1
                                while (edi_3 s< ebx_5)
                                
                                void* ebp_8 = *(arg1 + 0x37cc) + ecx_8
                                eax_19 = *(ebp_8 + 4)
                                var_60_2 = ebp_8
                            
                            ebx_4 += temp0_1 * arg5
                            ecx_11 += 0x80
                            edx_12 += 1
                        while (edx_12 s< eax_19)
                        
                        var_70 = ecx_11
                        esi_1 = var_60_2
                        ecx_10 = *(esi_1 + 8)
                    
                    ebp_3 += ecx_5 * temp0_2
                    edi_2 += 1
                while (edi_2 s< ecx_10)
                
                esi = arg1
                ebp_1 = *(esi + 0x34)
            
            ebx = &var_58c
            
            if (ebp_1 == 3 && i_6 != 0)
                if (i_6 == 2)
                    var_24_1 += 1
                
                int32_t var_88
                int32_t edx_44 = var_88
                int32_t var_80
                int32_t eax_52 = var_80
                
                if (edx_44 s< eax_52)
                    int32_t var_84
                    int32_t ebp_22 = var_84
                    int32_t edi_23 = edx_44 << 5
                    
                    do
                        int32_t ecx_32 = var_8c
                        
                        if (ecx_32 s< ebp_22)
                            char* eax_53 = ebx + edi_23
                            void* var_7c_4 = ebx
                            
                            do
                                ebx.b = eax_53[ecx_32]
                                *(edx_44 * *(arg1 + 0x3c) + var_24_1 + (ecx_32 << 1)) = ebx.b
                                ecx_32 += 2
                                ebp_22 = var_84
                            while (ecx_32 s< ebp_22)
                            
                            ebx = var_7c_4
                            eax_52 = var_80
                        
                        edi_23 += 0x20
                        edx_44 += 1
                    while (edx_44 s< eax_52)
                    
                    esi = arg1
                    ebp_1 = *(esi + 0x34)
            else
                sub_6e43e0(esi, &var_8c, i_6, var_24_1, &var_58c)
                ebp_1 = *(esi + 0x34)
            
            if (ebp_1 == 2 && *(esi + 0x58) == 1)
                var_24_1 -= 1
                eax_11 = *(esi + 0x37c0)
            else
                var_24_1 += 1
                eax_11 = *(esi + 0x37c0)
        
        i_6 += 1
    
    result = *(esi + 0x74)
    
    if (result != 0)
        i_5 = *(esi + 0x54)
        result = arg2
        
        if (i_5 - 1 != *(result + 0x38))
            i_5 = *(esi + 0x30)
    
    if (ebp_1 == 0xff)
        result = *(esi + 0x58)
    
    if ((ebp_1 != 0xff || result != 0xff) && i_5 s< *(esi + 0x30))
        int32_t i_4 = i_5
        int32_t edi_27 = var_24_1
        
        do
            sub_6e43e0(esi, &var_8c, i_4, edi_27, ebx)
            result = *(esi + 0x34)
            
            if (result == 2)
                result = *(esi + 0x58)
                
                if (result != 1)
                    edi_27 += 1
                else
                    edi_27 -= 1
            else
                edi_27 += 1
            
            i_4 += 1
        while (i_4 s< *(esi + 0x30))

return result
