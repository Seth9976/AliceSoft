// 函数: sub_5aa650
// 地址: 0x5aa650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *(arg3 + 0x184)
void* eax = arg5
int32_t ebp = *(arg3 + 0x180)
char ecx = (*(arg3 + 0x174)).b
int32_t* edi = arg4
int32_t ebx
ebx.b = *(edi + 9)
int32_t i_11 = *edi

if (ebx.b u<= 8 && ebp != 0)
label_5aa69c:
    uint32_t ecx_1
    
    switch (zx.d(edi[2].b))
        case 0
            if (ebx.b == 2)
                void* var_10_1 = eax
                
                if (i_11 != 0)
                    int32_t i_10 = ((i_11 - 1) u>> 2) + 1
                    int32_t i
                    
                    do
                        uint32_t ecx_36 = zx.d(*eax)
                        int32_t edi_31 = ecx_36 & 0xc
                        int32_t ecx_37 = ecx_36 & 3
                        int32_t ebx_8
                        ebx_8.b = (((edi_31 << 2 | edi_31) * 4) | edi_31 s>> 2 | edi_31)[ebp]
                        ecx_37.b = (((((ecx_37 << 2 | ecx_37) * 4) | ecx_37) * 4) | ecx_37)[ebp]
                        int32_t esi_1 = ecx_36 & 0x30
                        ecx_37.b u>>= 2
                        ebx_8.b &= 0xcf
                        ebx_8.b |= ecx_37.b
                        int32_t edx_9 = ecx_36 & 0xc0
                        char* eax_20
                        eax_20.b = ((esi_1 s>> 2 | esi_1) s>> 2 | esi_1 << 2 | esi_1)[ebp]
                        ebx_8.b u>>= 2
                        eax_20.b &= 0xc3
                        ebx_8.b |= eax_20.b
                        edx_9.b = *((((edx_9 s>> 2 | edx_9) s>> 2 | edx_9) s>> 2 | edx_9) + ebp)
                        ebx_8.b u>>= 2
                        edx_9.b &= 0xc0
                        ebx_8.b |= edx_9.b
                        *var_10_1 = ebx_8.b
                        eax = var_10_1 + 1
                        i = i_10
                        i_10 -= 1
                        var_10_1 = eax
                    while (i != 1)
                    eax = arg5
                    edi = arg4
            
            ecx_1.b = *(edi + 9)
            
            if (ecx_1.b == 4)
                void* edx_10 = eax
                
                if (i_11 != 0)
                    int32_t i_12 = ((i_11 - 1) u>> 1) + 1
                    int32_t eax_23
                    int32_t i_1
                    
                    do
                        uint32_t eax_22 = zx.d(*edx_10)
                        int32_t ecx_46 = eax_22 & 0xf0
                        ecx_46.b = (ecx_46 s>> 4 | ecx_46)[ebp]
                        eax_23 = eax_22 & 0xf
                        eax_23.b = (eax_23 << 4 | eax_23)[ebp]
                        ecx_46.b &= 0xf0
                        eax_23.b u>>= 4
                        ecx_46.b |= eax_23.b
                        *edx_10 = ecx_46.b
                        edx_10 += 1
                        i_1 = i_12
                        i_12 -= 1
                    while (i_1 != 1)
                    return eax_23
            else if (ecx_1.b != 8)
                if (ecx_1.b == 0x10 && i_11 != 0)
                    int32_t i_2
                    
                    do
                        uint32_t ecx_48
                        ecx_48.b = ecx
                        ecx_48 = zx.d(
                            *(*(edx + (zx.d(*(eax + 1)) u>> ecx_48.b << 2)) + (zx.d(*eax) << 1)))
                        *eax = (ecx_48 u>> 8).b
                        *(eax + 1) = ecx_48.b
                        eax += 2
                        i_2 = i_11
                        i_11 -= 1
                    while (i_2 != 1)
            else if (i_11 != 0)
                int32_t i_3
                
                do
                    edx.b = *(zx.d(*eax) + ebp)
                    *eax = edx.b
                    eax += 1
                    i_3 = i_11
                    i_11 -= 1
                while (i_3 != 1)
        case 2
            if (ebx.b != 8)
                if (i_11 != 0)
                    int32_t i_4
                    
                    do
                        ecx_1.b = ecx
                        int32_t* edi_4 = zx.d(
                            *(*(edx + (zx.d(*(eax + 1)) u>> ecx_1.b << 2)) + (zx.d(*eax) << 1)))
                        *eax = (edi_4 u>> 8).b
                        *(eax + 1) = edi_4.b
                        int32_t* edi_8 = zx.d(
                            *(*(edx + (zx.d(*(eax + 3)) u>> ecx << 2)) + (zx.d(*(eax + 2)) << 1)))
                        *(eax + 2) = (edi_8 u>> 8).b
                        *(eax + 3) = edi_8.b
                        int32_t* edi_12 = zx.d(
                            *(*(edx + (zx.d(*(eax + 5)) u>> ecx << 2)) + (zx.d(*(eax + 4)) << 1)))
                        *(eax + 4) = (edi_12 u>> 8).b
                        *(eax + 5) = edi_12.b
                        eax += 6
                        i_4 = i_11
                        i_11 -= 1
                    while (i_4 != 1)
            else if (i_11 != 0)
                int32_t i_5
                
                do
                    *eax = *(zx.d(*eax) + ebp)
                    *(eax + 1) = *(zx.d(*(eax + 1)) + ebp)
                    *(eax + 2) = *(zx.d(*(eax + 2)) + ebp)
                    eax += 3
                    i_5 = i_11
                    i_11 -= 1
                while (i_5 != 1)
        case 4
            if (ebx.b != 8)
                if (i_11 != 0)
                    int32_t i_6
                    
                    do
                        int32_t* ecx_31
                        ecx_31.b = ecx
                        ecx_31 = zx.d(
                            *(*(edx + (zx.d(*(eax + 1)) u>> ecx_31.b << 2)) + (zx.d(*eax) << 1)))
                        *eax = (ecx_31 u>> 8).b
                        *(eax + 1) = ecx_31.b
                        eax += 4
                        i_6 = i_11
                        i_11 -= 1
                    while (i_6 != 1)
            else if (i_11 != 0)
                int32_t i_7
                
                do
                    ecx_1.b = zx.d(*eax)[ebp]
                    *eax = ecx_1.b
                    eax += 2
                    i_7 = i_11
                    i_11 -= 1
                while (i_7 != 1)
        case 6
            if (ebx.b != 8)
                if (i_11 != 0)
                    int32_t i_8
                    
                    do
                        ecx_1.b = ecx
                        int32_t* edi_17 = zx.d(
                            *(*(edx + (zx.d(*(eax + 1)) u>> ecx_1.b << 2)) + (zx.d(*eax) << 1)))
                        *eax = (edi_17 u>> 8).b
                        *(eax + 1) = edi_17.b
                        int32_t* edi_21 = zx.d(
                            *(*(edx + (zx.d(*(eax + 3)) u>> ecx << 2)) + (zx.d(*(eax + 2)) << 1)))
                        *(eax + 2) = (edi_21 u>> 8).b
                        *(eax + 3) = edi_21.b
                        int32_t* edi_25 = zx.d(
                            *(*(edx + (zx.d(*(eax + 5)) u>> ecx << 2)) + (zx.d(*(eax + 4)) << 1)))
                        *(eax + 4) = (edi_25 u>> 8).b
                        *(eax + 5) = edi_25.b
                        eax += 8
                        i_8 = i_11
                        i_11 -= 1
                    while (i_8 != 1)
            else if (i_11 != 0)
                int32_t i_9
                
                do
                    *eax = *(zx.d(*eax) + ebp)
                    *(eax + 1) = *(zx.d(*(eax + 1)) + ebp)
                    *(eax + 2) = *(zx.d(*(eax + 2)) + ebp)
                    eax += 4
                    i_9 = i_11
                    i_11 -= 1
                while (i_9 != 1)
else if (ebx.b == 0x10 && edx != 0)
    goto label_5aa69c

return eax
