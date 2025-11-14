// 函数: sub_634ee0
// 地址: 0x634ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx = __chkstk(0x4004)
int32_t eax_1 = data_78c474 ^ &__return_addr
int32_t* esi = ecx
void* const* edi = &__return_addr
char* result

if (sub_634e40(ecx, arg1).b == 0)
    result.b = 0
else
    char* ecx_1 = *(arg1 + 0x10)
    result.b = *ecx_1
    
    if ((result.b u>= 0x61 && result.b u<= 0x7a) || (result.b u>= 0x41 && result.b u<= 0x5a))
        __return_addr.b = result.b
        void* edx_1 = &__return_addr:1
        *(arg1 + 0x10) = &ecx_1[1]
        void* i
        
        if (&ecx_1[1] u< *(arg1 + 0x14))
            i = &ecx_1[1]
            
            do
                result.b = *i
                
                if ((result.b u< 0x61 || result.b u> 0x7a)
                        && (result.b u< 0x41 || result.b u> 0x5a))
                    if (result.b u< 0x30)
                        break
                    
                    if (result.b u> 0x39)
                        break
                
                i += 1
                *edx_1 = result.b
                edx_1 += 1
                *(arg1 + 0x10) = i
            while (i u< *(arg1 + 0x14))
        
        char* eax_2 = &__return_addr
        *edx_1 = 0
        
        do
            i.b = *eax_2
            eax_2 = &eax_2[1]
        while (i.b != 0)
        
        sub_401270(esi, eax_2 - &__return_addr:1, &__return_addr)
        result.b = 1
    else if ((result.b u>= 0x30 && result.b u<= 0x39) || result.b == 0x2d)
        __return_addr.b = result.b
        void* i_1 = &ecx_1[1]
        void* edx
        edx.b = 0
        void* edi_2 = &__return_addr:1
        *(arg1 + 0x10) = i_1
        
        while (i_1 u< *(arg1 + 0x14))
            ecx_1.b = *i_1
            
            if (ecx_1.b u< 0x30 || ecx_1.b u> 0x39)
                if (ecx_1.b != 0x2e)
                    break
                
                if (edx.b != 0)
                    break
                
                edx.b = 1
            
            i_1 += 1
            *edi_2 = ecx_1.b
            edi_2 += 1
            *(arg1 + 0x10) = i_1
        
        void* const* eax_4 = &__return_addr
        *edi_2 = 0
        
        do
            ecx_1.b = *eax_4
            eax_4 += 1
        while (ecx_1.b != 0)
        
        sub_401270(esi, eax_4 - &__return_addr:1, &__return_addr)
        result.b = 1
    else if (sx.d(result.b) - 0x22 u> 0x5b)
    label_6350a1:
        sub_401270(esi, nullptr, 0x72d7e9)
        *(arg1 + 0x18) = 1
        result.b = 0
    else
        switch (result.b)
            case 0x22
                *(arg1 + 0x10) = &ecx_1[1]
                
                if (&ecx_1[1] u>= *(arg1 + 0x14))
                label_635064:
                    sub_401140(ecx_1.b, 0x72d7d7, esi)
                    *(arg1 + 0x18) = 1
                    result.b = 0
                else
                    while (true)
                        ecx_1 = *(arg1 + 0x10)
                        void* eax_6
                        eax_6.b = *ecx_1
                        
                        if (eax_6.b == 0x22)
                            *(arg1 + 0x10) += 1
                            *edi = nullptr
                            sub_401140(ecx_1.b, &__return_addr, esi)
                            result.b = 1
                            break
                        
                        if (eax_6.b u< 0x81)
                            if (eax_6.b u< 0xe0)
                                goto label_63504f
                            
                            goto label_635039
                        
                        if (eax_6.b u<= 0x9f || eax_6.b u>= 0xe0)
                        label_635039:
                            *edi = eax_6.b
                            char* eax_7 = &ecx_1[1]
                            *(arg1 + 0x10) = eax_7
                            ecx_1.b = *eax_7
                            *(edi + 1) = ecx_1.b
                            edi += 2
                            *(arg1 + 0x10) = &eax_7[1]
                        else
                        label_63504f:
                            *edi = eax_6.b
                            edi += 1
                            ecx_1 = &ecx_1[1]
                            *(arg1 + 0x10) = ecx_1
                        
                        if (*(arg1 + 0x10) u>= *(arg1 + 0x14))
                            goto label_635064
            case 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2e, 0x2f, 0x30, 0x31, 
                    0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3e, 0x3f, 
                    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 
                    0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 
                    0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
                    0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 
                    0x76, 0x77, 0x78, 0x79, 0x7a, 0x7c
                goto label_6350a1
            case 0x2c, 0x3d, 0x5b, 0x5d, 0x7b, 0x7d
                __return_addr.b = result.b
                *(arg1 + 0x10) = &ecx_1[1]
                __return_addr:1.b = 0
                sub_401140((&ecx_1[1]).b, &__return_addr, esi)
                result.b = 1

sub_6b4885(eax_1 ^ &__return_addr)
return result
