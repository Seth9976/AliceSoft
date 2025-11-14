// 函数: sub_6df730
// 地址: 0x6df730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = *(arg1 + 0x4834)
int32_t esi = *(arg1 + 0x3814)
int32_t i_3 = 8
void* ebx = 8

if (*(arg1 + 0x78) - 1 != arg2)
    *(arg1 + 0x3814) = esi + (*(arg1 + 0x30) << 3)
else
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(*(arg1 + 0x24))
    int32_t i_4 = ((((eax_3 ^ edx) - edx) & 7) ^ edx) - edx
    
    if (i_4 != 0)
        i_3 = i_4
    
    *(arg1 + 0x3814) = arg3 * 8 * *(arg1 + 0x3c) + *(arg1 + 0x20) + (*(arg1 + 0x3c) << 3)

if (arg3 == *(arg1 + 0x7c) - 1)
    int32_t eax_13
    int32_t edx_10
    edx_10:eax_13 = sx.q(*(arg1 + 0x28))
    int32_t eax_16
    int32_t edx_11
    edx_11:eax_16 = sx.q((eax_13 ^ edx_10) - edx_10)
    void* eax_21 = ((((eax_16 ^ edx_11) - edx_11) & 7) ^ edx_11) - edx_11
    
    if (eax_21 != 0)
        ebx = eax_21

int32_t eax_25

if (*(arg1 + 0x58) == 4)
    eax_25 = *(arg1 + 0x34)

void* i_1

if (*(arg1 + 0x58) == 4 && (eax_25 == 1 || eax_25 == 2))
    int32_t edx_42 = 0
    
    if (ebx s> 0)
        void* eax_29 = ebp + (i_3 << 1)
        void* eax_30 = nullptr
        int32_t var_48_2 = 0
        void* var_4c_2 = ebx
        
        do
            int32_t ebx_15 = 0
            
            if (i_3 s> 0)
                do
                    int32_t edx_43 = *(arg1 + 0x30)
                    int32_t eax_31 = *(arg1 + 0x3c)
                    uint32_t ecx_32
                    uint32_t ebp_19
                    uint32_t edi_20
                    
                    if (*(arg1 + 0x34) == 1)
                        void* edx_50 = edx_43 * ebx_15
                        int32_t eax_38 = eax_31 * edx_42 + esi
                        edi_20 = zx.d(*(edx_50 + eax_38))
                        ecx_32 = zx.d(*(edx_50 + eax_38 + 1))
                        ebp_19 = zx.d(*(edx_50 + eax_38 + 2))
                    else
                        void* edx_44 = edx_43 * ebx_15
                        int32_t eax_33 = eax_31 * edx_42 + esi
                        ebp_19 = zx.d(*(edx_44 + eax_33))
                        ecx_32 = zx.d(*(edx_44 + eax_33 + 1))
                        edi_20 = zx.d(*(edx_44 + eax_33 + 2))
                    
                    *(ebp + eax_30 + (ebx_15 << 1)) =
                        ((edi_20 * 0x4d + ecx_32 * 0x96 + ebp_19 * 0x1d - 0x7f80) s>> 8).w
                    ebx_15 += 1
                while (ebx_15 s< i_3)
            
            int32_t i = i_3
            
            if (i_3 s< 8)
                void* esi_23
                void* edi_25
                
                if (neg.d(i_3) + 8 s< 6)
                    edi_25 = ebp + eax_30
                    esi_23 = eax_30 + eax_29
                else
                    int32_t ebx_18 = edx_42 << 4
                    esi_23 = ebx_18 + eax_29
                    edi_25 = ebp + ebx_18
                    
                    do
                        *(edi_25 + (i << 1)) = *(eax_29 + ebx_18 - 2)
                        *(edi_25 + (i << 1) + 2) = *(eax_29 + ebx_18 - 2)
                        *(edi_25 + (i << 1) + 4) = *(eax_29 + ebx_18 - 2)
                        *(edi_25 + (i << 1) + 6) = *(eax_29 + ebx_18 - 2)
                        *(edi_25 + (i << 1) + 8) = *(eax_29 + ebx_18 - 2)
                        i += 5
                    while (i s< 2)
                
                do
                    *(edi_25 + (i << 1)) = *(esi_23 - 2)
                    i += 1
                while (i s< 8)
            
            eax_30 += 0x10
            edx_42 += 1
            ebx = var_4c_2
        while (edx_42 s< ebx)
    
    i_1 = ebx * 2
    
    if (i_1 * 4 s< 0x40)
        int32_t ebx_20 = ebx << 4
        i_1 = ebp + (i_1 << 3)
        
        do
            *i_1 = *(ebx_20 + ebp - 0x10)
            *(i_1 + 2) = *(ebx_20 + ebp - 0xe)
            *(i_1 + 4) = *(ebx_20 + ebp - 0xc)
            *(i_1 + 6) = *(ebx_20 + ebp - 0xa)
            *(i_1 + 8) = *(ebx_20 + ebp - 8)
            *(i_1 + 0xa) = *(ebx_20 + ebp - 6)
            *(i_1 + 0xc) = *(ebx_20 + ebp - 4)
            *(i_1 + 0xe) = *(ebx_20 + ebp - 2)
            i_1 += 0x10
        while (ebp + 0x80 s> i_1)
else
    int32_t i_2 = 0
    
    if (*(arg1 + 0x54) s> 0)
        int32_t edx_13 = ebx * 2
        int32_t edx_17 = ebx << 4
        void* ebp_1 = ebp
        
        do
            int32_t ecx = 0
            
            if (ebx s> 0)
                void* edx_24 = nullptr
                void* var_4c_1 = ebx
                void* var_3c_1 = ebp_1 + i_3 * 2
                int32_t j_3 = i_3
                
                do
                    int32_t j = 0
                    void* edi_1
                    
                    if (j_3 s> 0)
                        void* var_48_1
                        
                        if (j_3 s< 5)
                            var_48_1 = ebp_1 + edx_24
                        else
                            var_48_1 = ebp_1 + edx_24
                            int32_t ebp_3 = 2
                            int32_t ebx_2 = 3
                            int32_t var_38_1 = 1
                            j = 0
                            
                            do
                                *(var_48_1 + (j << 1)) =
                                    zx.w(*(*(arg1 + 0x3c) * ecx + *(arg1 + 0x30) * j + esi))
                                *(var_48_1 + (j << 1) + 2) =
                                    zx.w(*(*(arg1 + 0x3c) * ecx + *(arg1 + 0x30) * var_38_1 + esi))
                                int32_t edi_10 = *(arg1 + 0x30) * ebp_3 + esi
                                ebp_3 += 4
                                *(var_48_1 + (j << 1) + 4) = zx.w(*(*(arg1 + 0x3c) * ecx + edi_10))
                                edi_1 = *(arg1 + 0x30) * ebx_2 + esi
                                ebx_2 += 4
                                *(var_48_1 + (j << 1) + 6) = zx.w(*(*(arg1 + 0x3c) * ecx + edi_1))
                                j += 4
                                var_38_1 += 4
                            while (j s<= i_3 - 5)
                            
                            j_3 = i_3
                        
                        int32_t j_4 = j
                        
                        do
                            *(var_48_1 + (j_4 << 1)) =
                                zx.w(*(ecx * *(arg1 + 0x3c) + *(arg1 + 0x30) * j_4 + esi))
                            j_4 += 1
                        while (j_4 s< j_3)
                    
                    int32_t j_1 = j_3
                    
                    if (j_3 s< 8)
                        void* esi_3
                        
                        if (neg.d(i_3) + 8 s< 6)
                            edi_1 = ebp_1 + edx_24
                            esi_3 = edx_24 + var_3c_1
                        else
                            int32_t ebx_6 = ecx << 4
                            edi_1 = ebp_1 + ebx_6
                            esi_3 = ebx_6 + var_3c_1
                            
                            do
                                *(edi_1 + (j_1 << 1)) = *(var_3c_1 + ebx_6 - 2)
                                *(edi_1 + (j_1 << 1) + 2) = *(var_3c_1 + ebx_6 - 2)
                                *(edi_1 + (j_1 << 1) + 4) = *(var_3c_1 + ebx_6 - 2)
                                *(edi_1 + (j_1 << 1) + 6) = *(var_3c_1 + ebx_6 - 2)
                                *(edi_1 + (j_1 << 1) + 8) = *(var_3c_1 + ebx_6 - 2)
                                j_1 += 5
                            while (j_1 s< 2)
                            
                            j_3 = i_3
                        
                        do
                            *(edi_1 + (j_1 << 1)) = *(esi_3 - 2)
                            j_1 += 1
                        while (j_1 s< 8)
                    
                    edx_24 += 0x10
                    ecx += 1
                    ebx = var_4c_1
                while (ecx s< ebx)
            
            if (edx_13 * 4 s< 0x40)
                void* edi_16 = ebp_1 + edx_17
                void* j_2 = ebp_1 + (edx_13 << 3)
                
                do
                    *j_2 = *(edi_16 - 0x10)
                    *(j_2 + 2) = *(edi_16 - 0xe)
                    *(j_2 + 4) = *(edi_16 - 0xc)
                    *(j_2 + 6) = *(edi_16 - 0xa)
                    *(j_2 + 8) = *(edi_16 - 8)
                    *(j_2 + 0xa) = *(edi_16 - 6)
                    *(j_2 + 0xc) = *(edi_16 - 4)
                    *(j_2 + 0xe) = *(edi_16 - 2)
                    j_2 += 0x10
                while (ebp_1 + 0x80 s> j_2)
            
            ebp_1 += 0x80
            esi += 1
            i_2 += 1
        while (i_2 s< *(arg1 + 0x54))
    
    void* edx_33 = ebp + 0x80
    
    do
        i_1 = nullptr
        int32_t var_1c_2 = 0
        
        do
            int32_t edx_35 = *(arg1 + 0x34)
            int32_t ecx_25
            int32_t edx_39
            int32_t ebx_11
            void* edi_19
            
            if (edx_35 == 2)
                edi_19 = ebp + var_1c_2
                edx_39 = sx.d(*(ebp + (i_1 << 1)))
                ebx_11 = sx.d(*(ebp + (i_1 << 1) + 0x80))
                ecx_25 = sx.d(*(ebp + (i_1 << 1) + 0x100))
            else
                void* edi_18 = i_1 * 2
                
                if (edx_35 == 1)
                    edi_19 = edi_18 + ebp
                    ecx_25 = sx.d(*edi_19)
                    ebx_11 = sx.d(*(edi_19 + 0x80))
                    edx_39 = sx.d(*(edi_19 + 0x100))
                else
                    edi_19 = edi_18 + ebp
                    ecx_25 = sx.d((neg.d(sx.d(*edi_19))).w + 0xff)
                    ebx_11 = sx.d((neg.d(sx.d(*(edi_19 + 0x80)))).w + 0xff)
                    edx_39 = sx.d((neg.d(sx.d(*(edi_19 + 0x100)))).w + 0xff)
                    *(edi_19 + 0x180) -= 0x80
            
            *edi_19 = ((ecx_25 * 0x4d + ebx_11 * 0x96 + edx_39 * 0x1d - 0x7f80) s>> 8).w
            *(edi_19 + 0x80) =
                ((ecx_25 * 0xffffffd5 + ebx_11 * 0xffffffab + (edx_39 << 7) + 0x80) s>> 8).w
            *(edi_19 + 0x100) =
                (((ecx_25 << 7) + ebx_11 * 0xffffff95 + edx_39 * 0xffffffeb + 0x80) s>> 8).w
            i_1 += 1
            var_1c_2 += 2
        while (i_1 s< 8)
        
        ebp += 0x10
    while (edx_33 s> ebp)

return i_1
