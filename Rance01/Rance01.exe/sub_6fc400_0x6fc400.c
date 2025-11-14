// 函数: sub_6fc400
// 地址: 0x6fc400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg2
int32_t esi = *(arg1 + 8)
int32_t ecx = 0
int32_t ebx = 0
int32_t edi = *(ebp + 0x90)
int32_t edx = edi * 2

if (edx s> 0)
    int32_t eax_1 = 0
    
    do
        char* esi_2 = *(eax_1 + ebp + 0x373c)
        int32_t ebx_12 = ebx + zx.d(*esi_2) + zx.d(esi_2[1]) + zx.d(esi_2[2]) + zx.d(esi_2[3])
            + zx.d(esi_2[4]) + zx.d(esi_2[5]) + zx.d(esi_2[6]) + zx.d(esi_2[7]) + zx.d(esi_2[8])
            + zx.d(esi_2[9]) + zx.d(esi_2[0xa]) + zx.d(esi_2[0xb])
        ebx = ebx_12 + zx.d(esi_2[0xc]) + zx.d(esi_2[0xd]) + zx.d(esi_2[0xe]) + zx.d(esi_2[0xf])
        eax_1 += 0xc
        ecx += 1
    while (ecx s< edx)

char var_170
char* var_174 = &var_170
sub_6fb760(0xc4, &var_174)
sub_6fb780(edi * 0x22 + ebx + 2, &var_174)
int32_t result = (*(esi + 0x5c))(&var_170, 4, arg1)

if (result == 0 && *(ebp + 0x90) * 2 s> 0)
    int32_t ebx_17 = 0
    void* var_20_1 = ebp
    int32_t i_1 = 0
    int32_t i
    
    do
        char* edx_3 = *(ebx_17 + ebp + 0x373c)
        uint32_t eax_16 = zx.d(*edx_3) + zx.d(edx_3[1]) + zx.d(edx_3[2]) + zx.d(edx_3[3])
            + zx.d(edx_3[4]) + zx.d(edx_3[5]) + zx.d(edx_3[6]) + zx.d(edx_3[7]) + zx.d(edx_3[8])
            + zx.d(edx_3[9]) + zx.d(edx_3[0xa]) + zx.d(edx_3[0xb])
        uint32_t eax_19 = eax_16 + zx.d(edx_3[0xc]) + zx.d(edx_3[0xd]) + zx.d(edx_3[0xe])
        uint32_t esi_3 = zx.d(edx_3[0xf])
        uint32_t edi_17 = eax_19 + esi_3
        
        if (eax_19 + esi_3 + 0x11 s> 0x144)
            return 0xfffffffa
        
        var_174 = &var_170
        char edx_6 = (*(ebx_17 + ebp + 0x3744) << 4) + *(ebx_17 + ebp + 0x3745)
        char var_16f
        var_174 = &var_16f
        var_170 = edx_6
        char ecx_19 = **(ebx_17 + ebp + 0x373c)
        void var_16e
        var_174 = &var_16e
        var_16f = ecx_19
        void* edx_8
        edx_8.b = *(*(ebx_17 + ebp + 0x373c) + 1)
        char* ecx_20 = var_174
        var_174 = &ecx_20[1]
        *ecx_20 = edx_8.b
        void* edx_9
        edx_9.b = *(*(ebx_17 + ebp + 0x373c) + 2)
        char* ecx_21 = var_174
        var_174 = &ecx_21[1]
        *ecx_21 = edx_9.b
        void* edx_10
        edx_10.b = *(*(ebx_17 + ebp + 0x373c) + 3)
        char* ecx_22 = var_174
        var_174 = &ecx_22[1]
        *ecx_22 = edx_10.b
        void* edx_11
        edx_11.b = *(*(ebx_17 + ebp + 0x373c) + 4)
        char* ecx_23 = var_174
        var_174 = &ecx_23[1]
        *ecx_23 = edx_11.b
        void* edx_12
        edx_12.b = *(*(ebx_17 + ebp + 0x373c) + 5)
        char* ecx_24 = var_174
        var_174 = &ecx_24[1]
        *ecx_24 = edx_12.b
        void* edx_13
        edx_13.b = *(*(ebx_17 + ebp + 0x373c) + 6)
        char* ecx_25 = var_174
        var_174 = &ecx_25[1]
        *ecx_25 = edx_13.b
        void* edx_14
        edx_14.b = *(*(ebx_17 + ebp + 0x373c) + 7)
        char* ecx_26 = var_174
        var_174 = &ecx_26[1]
        *ecx_26 = edx_14.b
        void* edx_15
        edx_15.b = *(*(ebx_17 + ebp + 0x373c) + 8)
        char* ecx_27 = var_174
        var_174 = &ecx_27[1]
        *ecx_27 = edx_15.b
        void* edx_16
        edx_16.b = *(*(ebx_17 + ebp + 0x373c) + 9)
        char* ecx_28 = var_174
        var_174 = &ecx_28[1]
        *ecx_28 = edx_16.b
        void* edx_17
        edx_17.b = *(*(ebx_17 + ebp + 0x373c) + 0xa)
        char* ecx_29 = var_174
        var_174 = &ecx_29[1]
        *ecx_29 = edx_17.b
        void* edx_18
        edx_18.b = *(*(ebx_17 + ebp + 0x373c) + 0xb)
        char* ecx_30 = var_174
        var_174 = &ecx_30[1]
        *ecx_30 = edx_18.b
        void* edx_19
        edx_19.b = *(*(ebx_17 + ebp + 0x373c) + 0xc)
        char* ecx_31 = var_174
        var_174 = &ecx_31[1]
        *ecx_31 = edx_19.b
        void* edx_20
        edx_20.b = *(*(ebx_17 + ebp + 0x373c) + 0xd)
        char* ecx_32 = var_174
        var_174 = &ecx_32[1]
        *ecx_32 = edx_20.b
        void* edx_21
        edx_21.b = *(*(ebx_17 + ebp + 0x373c) + 0xe)
        char* ecx_33 = var_174
        var_174 = &ecx_33[1]
        *ecx_33 = edx_21.b
        void* edx_22
        edx_22.b = *(*(ebx_17 + ebp + 0x373c) + 0xf)
        char* edi_18 = var_174
        var_174 = &edi_18[1]
        *edi_18 = edx_22.b
        char* edx_23 = nullptr
        
        if (edi_17 s> 0)
            void* eax_20
            void* esi_27
            
            if (eax_19 + esi_3 s< 6)
                esi_27 = var_20_1 + 0x3740
            else
                void* var_2c_3 = eax_19 + esi_3 - 6
                
                do
                    eax_20.b = edx_23[*(ebx_17 + ebp + 0x3740)]
                    char* ecx_37 = var_174
                    var_174 = &ecx_37[1]
                    *ecx_37 = eax_20.b
                    int32_t eax_21
                    eax_21.b = edx_23[*(ebx_17 + ebp + 0x3740) + 1]
                    char* esi_23 = var_174
                    var_174 = &esi_23[1]
                    *esi_23 = eax_21.b
                    int32_t eax_22
                    eax_22.b = edx_23[*(ebx_17 + ebp + 0x3740) + 2]
                    char* esi_24 = var_174
                    var_174 = &esi_24[1]
                    *esi_24 = eax_22.b
                    void* ecx_39
                    ecx_39.b = edx_23[*(ebx_17 + ebp + 0x3740) + 3]
                    char* esi_25 = var_174
                    var_174 = &esi_25[1]
                    *esi_25 = ecx_39.b
                    int32_t eax_25
                    eax_25.b = edx_23[*(ebx_17 + ebp + 0x3740) + 4]
                    char* esi_26 = var_174
                    edx_23 = &edx_23[5]
                    var_174 = &esi_26[1]
                    *esi_26 = eax_25.b
                while (edx_23 s<= var_2c_3)
                
                esi_27 = var_20_1 + 0x3740
            
            do
                eax_20.b = edx_23[*esi_27]
                char* ebp_2 = var_174
                edx_23 = &edx_23[1]
                var_174 = &ebp_2[1]
                *ebp_2 = eax_20.b
            while (edx_23 s< edi_17)
            
            ebp = arg2
        
        result = (*(esi + 0x5c))(&var_170, eax_19 + esi_3 + 0x11, arg1)
        
        if (result != 0)
            break
        
        ebx_17 += 0xc
        i = i_1 + 1
        var_20_1 += 0xc
        i_1 = i
    while (i s< *(ebp + 0x90) * 2)

return result
