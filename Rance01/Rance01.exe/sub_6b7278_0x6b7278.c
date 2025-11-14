// 函数: sub_6b7278
// 地址: 0x6b7278
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_14
sub_6b5cd7(&var_14, arg3)
void* var_10
char* eax_1
void* var_c
char var_8

if (*(var_10 + 8) != 0)
    if (arg2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0
    
    if (*arg2 == 0)
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return arg1
    
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return nullptr
    
    int32_t edi
    int32_t var_20_1 = edi
    char* edi_1 = arg1
    void* ebx_2 = arg1 - _strlen(arg2)
    void* eax_11
    void* edx_1
    eax_11, edx_1 = _strlen(arg1)
    int32_t eax_12 = eax_11 + ebx_2
    
    if (*arg1 == 0)
    label_6b737d:
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        eax_1 = nullptr
    else
        void* esi_2 = arg1 - arg2
        
        while (true)
            if (edi_1 u> eax_12)
                goto label_6b737d
            
            ebx_2.b = *edi_1
            char* ecx_4 = arg2
            
            if (ebx_2.b == 0)
            label_6b735b:
                
                if (*ecx_4 != 0)
                    uint32_t ecx_5
                    ecx_5.b = *(zx.d(ebx_2.b) + var_10 + 0x1d)
                    edi_1 = &edi_1[1]
                    esi_2 += 1
                    ecx_5.b &= 4
                    
                    if (ecx_5.b != 0)
                        if (*edi_1 == 0)
                            goto label_6b737d
                        
                        edi_1 = &edi_1[1]
                        esi_2 += 1
                    
                    if (*edi_1 == 0)
                        goto label_6b737d
                    
                    continue
            else
                while (true)
                    edx_1.b = *ecx_4
                    
                    if (edx_1.b == 0)
                        break
                    
                    if (*(esi_2 + ecx_4) != edx_1.b)
                        goto label_6b735b
                    
                    ecx_4 = &ecx_4[1]
                    
                    if (*(esi_2 + ecx_4) == 0)
                        goto label_6b735b
            
            if (var_8 != 0)
                *(var_c + 0x70) &= 0xfffffffd
            
            eax_1 = edi_1
            break
else
    eax_1 = sub_6c0f90(arg1, arg2)
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
return eax_1
