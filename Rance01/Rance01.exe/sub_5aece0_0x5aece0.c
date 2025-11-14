// 函数: sub_5aece0
// 地址: 0x5aece0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
uint32_t ebx = zx.d(*(ebp + 0x143))
char* eax_1 = *(ebp + 0x108) + 1
uint32_t eax_2 = zx.d(*(ebp + 0x139))
int32_t esi = *(ebp + 0xe4)
uint32_t var_14 = eax_2
char* var_c = nullptr
arg1.b = 0

if (ebx == 0)
    sub_5a5c60(ebp, "internal row logic error")
    noreturn

int32_t edx = *(ebp + 0x11c)

if (edx != 0)
    uint32_t ecx_3
    
    if (ebx u< 8)
        ecx_3 = (esi * ebx + 7) u>> 3
    else
        ecx_3 = (ebx u>> 3) * esi
    
    if (edx != ecx_3)
        sub_5a5c60(ebp, "internal row size calculation error")
        noreturn

if (esi == 0)
    sub_5a5c60(ebp, "internal row width error")
    noreturn

int32_t edi_1 = esi * ebx
int32_t ecx_8 = edi_1 & 7
char var_10 = ecx_8.b

if (ecx_8 != 0)
    uint32_t edx_3
    
    if (ebx u< 8)
        edx_3 = (edi_1 + 7) u>> 3
    else
        edx_3 = (ebx u>> 3) * esi
    
    var_c = &arg2[edx_3 - 1]
    char* edx_5
    edx_5.b = arg2[edx_3 - 1]
    arg1.b = edx_5.b
    
    if ((*(ebp + 0x74) & 0x10000) == 0)
        var_10 = (0xff s>> ecx_8.b).b
    else
        var_10 = (0xff << ecx_8.b).b
    
    eax_2 = var_14

int32_t ecx_9

if (*(ebp + 0x138) != 0)
    ecx_9 = *(ebp + 0x74)

char* edx_21

if (*(ebp + 0x138) == 0 || (ecx_9.b & 2) == 0 || eax_2 u>= 6
        || (arg3 != 0 && (arg3 != 1 || (arg3.b & eax_2.b) == 0)))
    void* ebx_6
    
    if (ebx u< 8)
        ebx_6 = (edi_1 + 7) u>> 3
    else
        ebx_6 = (ebx u>> 3) * esi
    
    eax_2, edx_21 = sub_6c02a0(arg2, eax_1, ebx_6)
label_5af1b1:
    
    if (var_c != 0)
        eax_2.b = var_10
        edx_21.b = eax_2.b
        eax_2.b &= arg1.b
        edx_21.b = not.b(edx_21.b)
        edx_21.b &= *var_c
        edx_21.b |= eax_2.b
        *var_c = edx_21.b
else
    int32_t edx_12 = (eax_2 & 1) << (3 - ((eax_2 + 1) u>> 1).b) & 7
    
    if (esi u> edx_12)
        if (ebx u< 8)
            eax_2 = divu.dp.d(0:8, ebx)
            uint32_t var_4_1 = eax_2
            int32_t ebp_1
            
            if ((ecx_9 & 0x10000) == 0)
                if (arg3 == 0)
                    int32_t ecx_21 = 0
                    
                    if (ebx != 1)
                        ecx_21.b = ebx != 2
                        ecx_21 += 1
                    
                    ebp_1 = *(((var_14 + ecx_21 * 6) << 2) + &data_7462c8)
                else
                    int32_t edx_18 = 0
                    
                    if (ebx != 1)
                        edx_18.b = ebx != 2
                        edx_18 += 1
                    
                    ebp_1 = *((((var_14 u>> 1) + edx_18 * 3) << 2) + &data_746334)
            else if (arg3 == 0)
                int32_t ecx_15 = 0
                
                if (ebx != 1)
                    ecx_15.b = ebx != 2
                    ecx_15 += 1
                
                ebp_1 = *(((var_14 + ecx_15 * 6) << 2) + &data_746280)
            else
                int32_t edx_15 = 0
                
                if (ebx != 1)
                    edx_15.b = ebx != 2
                    edx_15 += 1
                
                ebp_1 = *((((var_14 u>> 1) + edx_15 * 3) << 2) + &data_746310)
            
            char* edi_2 = arg2
            edx_21 = eax_1
            
            while (true)
                char ecx_24 = ebp_1.b
                ebp_1 = ror.d(ebp_1, 8)
                uint32_t ecx_25 = zx.d(ecx_24)
                
                if (ecx_25 != 0)
                    if (ecx_25 == 0xff)
                        ecx_25.b = *edx_21
                        *edi_2 = ecx_25.b
                    else
                        ebx.b = *edx_21
                        eax_2.b = ecx_25.b
                        eax_2.b = not.b(eax_2.b)
                        eax_2.b &= *edi_2
                        ebx.b &= ecx_25.b
                        eax_2.b |= ebx.b
                        *edi_2 = eax_2.b
                        eax_2 = var_4_1
                
                if (esi u<= eax_2)
                    break
                
                esi -= eax_2
                edi_2 = &edi_2[1]
                edx_21 = &edx_21[1]
            
            goto label_5af1b1
        
        if ((ebx.b & 7) != 0)
            sub_5a5c60(ebp, "invalid user transform pixel depth")
            noreturn
        
        uint32_t ebx_1 = ebx u>> 3
        int32_t edx_22 = edx_12 * ebx_1
        arg2 = &arg2[edx_22]
        void* var_18_1 = &eax_1[edx_22]
        void* i_4 = esi * ebx_1 - edx_22
        
        if (arg3 == 0)
            arg1 = ebx_1
        else
            void* edx_24 = (1 << ((6 - eax_2) u>> 1).b) * ebx_1
            arg1 = edx_24
            
            if (edx_24 u> i_4)
                arg1 = i_4
        
        void* edx_25 = arg1
        int32_t ebx_3 = (1 << ((7 - eax_2) u>> 1).b) * ebx_1
        
        if (edx_25 == 1)
            char* edi_9 = var_18_1
            edx_25.b = *edi_9
            eax_2 = arg2
            *eax_2 = edx_25.b
            
            if (i_4 u> ebx_3)
                do
                    uint8_t ecx_29 = edi_9[ebx_3]
                    edi_9 = &edi_9[ebx_3]
                    eax_2 += ebx_3
                    i_4 -= ebx_3
                    *eax_2 = ecx_29
                while (i_4 u> ebx_3)
        else if (edx_25 == 2)
            eax_2 = arg2
            char* edi_8 = var_18_1
            
            while (true)
                *eax_2 = *edi_8
                edx_25.b = edi_8[1]
                *(eax_2 + 1) = edx_25.b
                
                if (i_4 u<= ebx_3)
                    break
                
                i_4 -= ebx_3
                edi_8 = &edi_8[ebx_3]
                eax_2 += ebx_3
                
                if (i_4 u<= 1)
                    *eax_2 = *edi_8
                    return eax_2
        else if (edx_25 == 3)
            void* edi_7 = var_18_1
            eax_2 = arg2
            *eax_2 = *edi_7
            edx_25.b = *(edi_7 + 1)
            *(eax_2 + 1) = edx_25.b
            *(eax_2 + 2) = *(edi_7 + 2)
            
            if (i_4 u> ebx_3)
                do
                    char edx_28 = *(edi_7 + ebx_3)
                    edi_7 += ebx_3
                    eax_2 += ebx_3
                    *eax_2 = edx_28
                    *(eax_2 + 1) = *(edi_7 + 1)
                    i_4 -= ebx_3
                    *(eax_2 + 2) = *(edi_7 + 2)
                while (i_4 u> ebx_3)
        else
            if (edx_25 u< 0x10)
                eax_2 = arg2
            
            if (edx_25 u>= 0x10 || (eax_2.b & 1) != 0 || (var_18_1.b & 1) != 0
                    || (edx_25.b & 1) != 0 || (ebx_3.b & 1) != 0)
                eax_2 = sub_6c02a0(arg2, var_18_1, arg1)
                
                if (i_4 u> ebx_3)
                    int128_t* eax_16
                    
                    do
                        var_18_1 += ebx_3
                        arg2 = &arg2[ebx_3]
                        i_4 -= ebx_3
                        
                        if (arg1 u> i_4)
                            arg1 = i_4
                        
                        eax_16 = sub_6c02a0(arg2, var_18_1, arg1)
                    while (i_4 u> ebx_3)
                    
                    return eax_16
            else if ((eax_2.b & 3) != 0 || (var_18_1.b & 3) != 0 || (edx_25.b & 3) != 0
                    || (ebx_3.b & 3) != 0)
                int16_t* edi_5 = var_18_1
                uint32_t ebp_7 = (ebx_3 - edx_25) u>> 1
                
                while (true)
                    arg1 = edx_25
                    void* i
                    
                    do
                        void* ecx_30
                        ecx_30.w = *edi_5
                        *eax_2 = ecx_30.w
                        eax_2 += 2
                        edi_5 = &edi_5[1]
                        i = arg1
                        arg1 -= 2
                    while (i != 2)
                    
                    if (i_4 u<= ebx_3)
                        break
                    
                    i_4 -= ebx_3
                    eax_2 += ebp_7 << 1
                    edi_5 = &edi_5[ebp_7]
                    
                    if (edx_25 u> i_4)
                        void* edi_6 = edi_5 - eax_2
                        void* i_1
                        
                        do
                            edx_25.b = *(edi_6 + eax_2)
                            *eax_2 = edx_25.b
                            eax_2 += 1
                            i_1 = i_4
                            i_4 -= 1
                        while (i_1 != 1)
                        return eax_2
            else
                void* edi_3 = var_18_1
                
                while (true)
                    arg1 = edx_25
                    void* i_2
                    
                    do
                        *eax_2 = *edi_3
                        eax_2 += 4
                        edi_3 += 4
                        i_2 = arg1
                        arg1 -= 4
                    while (i_2 != 4)
                    
                    if (i_4 u<= ebx_3)
                        break
                    
                    uint32_t ecx_32 = (ebx_3 - edx_25) u>> 2 << 2
                    i_4 -= ebx_3
                    eax_2 += ecx_32
                    edi_3 += ecx_32
                    
                    if (edx_25 u> i_4)
                        void* edi_4 = edi_3 - eax_2
                        void* i_3
                        
                        do
                            edx_25.b = *(edi_4 + eax_2)
                            *eax_2 = edx_25.b
                            eax_2 += 1
                            i_3 = i_4
                            i_4 -= 1
                        while (i_3 != 1)
                        return eax_2
return eax_2
