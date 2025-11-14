// 函数: sub_51b970
// 地址: 0x51b970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = __chkstk(0x4008)
int32_t arg_4004 = data_78c474 ^ &__return_addr
int32_t ebx
int32_t var_4 = ebx
int32_t ebp
int32_t var_8 = ebp
int32_t esi
int32_t var_c = esi
int32_t i = ecx[2]
__return_addr = arg1
void* result = *ecx
int32_t edi
int32_t var_10 = edi
int32_t* esp = &var_10
ecx[1] = result
char arg_4
char* edx = &arg_4

if (result u< i)
    do
        char* edi_2 = *ecx
        result.b = *edi_2
        
        if (result.b u<= 0x20 || result.b == 0x7f)
            *ecx = &edi_2[1]
        else
            if (&edi_2[1] u>= i)
                break
            
            if (result.b != 0x2f)
                break
            
            if (edi_2[1] != result.b)
                break
            
            *ecx = &edi_2[2]
            
            if (&edi_2[2] u< i)
                void* edi_4
                
                do
                    char* edi_3 = *ecx
                    void* eax_3
                    eax_3.b = *edi_3
                    
                    if (eax_3.b u< 0x81)
                        if (eax_3.b u< 0xe0)
                            goto label_51b9eb
                        
                        edi_4 = &edi_3[2]
                    else if (eax_3.b u<= 0x9f || eax_3.b u>= 0xe0)
                        edi_4 = &edi_3[2]
                    else
                    label_51b9eb:
                        
                        if (eax_3.b == 0xa)
                            *ecx += 1
                            break
                        
                        edi_4 = &edi_3[1]
                    
                    *ecx = edi_4
                while (edi_4 u< i)
    while (*ecx u< i)

char* ebx_2 = *ecx

if (ebx_2 u< i)
    result.b = *ebx_2
    char arg_5
    
    if ((result.b u>= 0x61 && result.b u<= 0x7a) || (result.b u>= 0x41 && result.b u<= 0x5a)
            || (result.b u>= 0x81 && result.b u<= 0x9f) || result.b u>= 0xe0)
        char* edi_6
        
        do
            edi_6 = *ecx
            result.b = *edi_6
            
            if ((result.b u< 0x61 || result.b u> 0x7a) && (result.b u< 0x41 || result.b u> 0x5a)
                    && (result.b u< 0x30 || result.b u> 0x39))
                if (result.b u< 0x81)
                    if (result.b u< 0xe0)
                        break
                else if (result.b u> 0x9f && result.b u< 0xe0)
                    break
                
                edi_6 = &edi_6[1]
                *edx = result.b
                *ecx = edi_6
                result.b = *edi_6
                edx[1] = result.b
                edx = &edx[2]
            else
                *edx = result.b
                edx = &edx[1]
            
            *ecx = &edi_6[1]
        while (&edi_6[1] u< i)
        char* eax_4 = &arg_4
        *edx = 0
        
        do
            ecx.b = *eax_4
            eax_4 = &eax_4[1]
        while (ecx.b != 0)
        
        sub_401270(__return_addr, eax_4 - &arg_5, &arg_4)
        esp = &var_10
        *arg2 = 4
        result.b = 1
    else if ((result.b u>= 0x30 && result.b u<= 0x39) || result.b == 0x2d)
        arg_4 = result.b
        void* eax_6 = &ebx_2[1]
        ebx_2.b = 0
        char* edi_9 = &arg_5
        *ecx = eax_6
        
        while (eax_6 u< i)
            edx.b = *eax_6
            
            if (edx.b u< 0x30 || edx.b u> 0x39)
                if (edx.b != 0x2e)
                    break
                
                if (ebx_2.b != 0)
                    break
                
                ebx_2.b = 1
            
            eax_6 += 1
            *edi_9 = edx.b
            edi_9 = &edi_9[1]
            *ecx = eax_6
        
        char* eax_7 = &arg_4
        *edi_9 = 0
        
        do
            ecx.b = *eax_7
            eax_7 = &eax_7[1]
        while (ecx.b != 0)
        
        sub_401270(__return_addr, eax_7 - &arg_5, &arg_4)
        esp = &var_10
        int32_t edx_1
        edx_1.b = ebx_2.b != 0
        result.b = 1
        *arg2 = edx_1 + 2
    else if (sx.d(result.b) - 0x22 u> 0x5b)
    label_51bb5a:
        *arg2 = 0
        result.b = 0
    else
        switch (result.b)
            case 0x22
                *ecx = &ebx_2[1]
                
                if (&ebx_2[1] u>= i)
                    goto label_51bb5a
                
                while (true)
                    char* edi_15 = *ecx
                    result.b = *edi_15
                    
                    if (result.b == 0x22)
                        *ecx += 1
                        int32_t* __return_addr_1 = __return_addr
                        *edx = 0
                        sub_401140(__return_addr_1.b, &arg_4, __return_addr_1)
                        esp = &var_10
                        *arg2 = 5
                        result.b = 1
                        break
                    
                    if (result.b u< 0x81)
                        if (result.b u>= 0xe0)
                            goto label_51bbaa
                        
                        *edx = result.b
                        edx = &edx[1]
                    else if (result.b u<= 0x9f || result.b u>= 0xe0)
                    label_51bbaa:
                        edi_15 = &edi_15[1]
                        *edx = result.b
                        *ecx = edi_15
                        result.b = *edi_15
                        edx[1] = result.b
                        edx = &edx[2]
                    else
                        *edx = result.b
                        edx = &edx[1]
                    
                    *ecx = &edi_15[1]
                    
                    if (&edi_15[1] u>= i)
                        goto label_51bb5a
            case 0x23, 0x24, 0x25, 0x26, 0x27, 0x2e, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 
                    0x37, 0x38, 0x39, 0x3a, 0x3c, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 
                    0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 
                    0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0x61, 
                    0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 
                    0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7c
                goto label_51bb5a
            case 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2f, 0x3d, 0x5b, 0x5d, 0x7b, 0x7d
                void* const __return_addr_3 = __return_addr
                arg_4 = result.b
                *ecx = &ebx_2[1]
                arg_5 = 0
                sub_401140(ecx.b, &arg_4, __return_addr_3)
                esp = &var_10
                *arg2 = 6
                result.b = 1
            case 0x3b
                while (true)
                    char* edx_3 = *ecx
                    result.b = *edx_3
                    void* edx_4
                    
                    if (result.b u< 0x81)
                        if (result.b u< 0xe0)
                            goto label_51bb4f
                        
                        edx_4 = &edx_3[2]
                    else if (result.b u<= 0x9f || result.b u>= 0xe0)
                        edx_4 = &edx_3[2]
                    else
                    label_51bb4f:
                        
                        if (result.b == 0xa)
                            void* const __return_addr_2 = __return_addr
                            *ecx += 1
                            void* const __return_addr_4 = __return_addr_2
                            esp = &__return_addr_4
                            result = sub_51b970(__return_addr_4, arg2)
                            break
                        
                        edx_4 = &edx_3[1]
                    
                    *ecx = edx_4
                    
                    if (edx_4 u>= i)
                        goto label_51bb5a
else
    *arg2 = 1
    result.b = 0

*esp
esp[1]
esp[2]
esp[3]
sub_6b4885(esp[0x1005] ^ &esp[4])
return result
