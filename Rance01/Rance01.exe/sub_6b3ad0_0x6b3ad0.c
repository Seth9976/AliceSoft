// 函数: sub_6b3ad0
// 地址: 0x6b3ad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_16 = arg2

if (*(eax_16 + 0x15) != 0)
    sub_6b480c("invalid map/set<T> iterator")
    noreturn

sub_5cc250(&arg2)
int32_t* ecx = *eax_16
int32_t* esi
int32_t* edi

if (*(ecx + 0x15) == 0)
    if (*(eax_16[2] + 0x15) != 0)
        edi = ecx
        goto label_6b3b1d
    
    int32_t* eax_2 = arg2
    edi = eax_2[2]
    
    if (eax_2 == eax_16)
        goto label_6b3b1d
    
    ecx[1] = eax_2
    *eax_2 = *eax_16
    
    if (eax_2 != eax_16[2])
        esi = eax_2[1]
        
        if (*(edi + 0x15) == 0)
            edi[1] = esi
        
        *esi = edi
        eax_2[2] = eax_16[2]
        *(eax_16[2] + 4) = eax_2
    else
        esi = eax_2
    
    void* ecx_6 = data_797e30
    
    if (*(ecx_6 + 4) != eax_16)
        void** ecx_7 = eax_16[1]
        
        if (*ecx_7 != eax_16)
            ecx_7[2] = eax_2
        else
            *ecx_7 = eax_2
    else
        *(ecx_6 + 4) = eax_2
    
    eax_2[1] = eax_16[1]
    void* edx
    edx.b = eax_16[5].b
    int32_t ecx_8
    ecx_8.b = eax_2[5].b
    eax_2[5].b = edx.b
    eax_16[5].b = ecx_8.b
else
    edi = eax_16[2]
label_6b3b1d:
    esi = eax_16[1]
    
    if (*(edi + 0x15) == 0)
        edi[1] = esi
    
    void* eax_3 = data_797e30
    
    if (*(eax_3 + 4) == eax_16)
        *(eax_3 + 4) = edi
    else if (*esi != eax_16)
        esi[2] = edi
    else
        *esi = edi
    
    int32_t* edx_1 = data_797e30
    
    if (*edx_1 == eax_16)
        int32_t* ecx_1
        
        if (*(edi + 0x15) == 0)
            int32_t* eax_4 = *edi
            ecx_1 = edi
            
            while (*(eax_4 + 0x15) == 0)
                ecx_1 = eax_4
                eax_4 = *ecx_1
        else
            ecx_1 = esi
        
        *edx_1 = ecx_1
    
    void* ecx_3 = data_797e30
    
    if (*(ecx_3 + 8) == eax_16)
        if (*(edi + 0x15) == 0)
            *(data_797e30 + 8) = sub_58c3e0(edi)
        else
            *(ecx_3 + 8) = esi

if (eax_16[5].b == 1)
    if (edi != *(data_797e30 + 4))
        while (edi[5].b == 1)
            int32_t* ecx_9 = *esi
            
            if (edi != ecx_9)
                if (ecx_9[5].b == 0)
                    ecx_9[5].b = 1
                    esi[5].b = 0
                    sub_6b3de0(esi)
                    ecx_9 = *esi
                
                if (*(ecx_9 + 0x15) == 0)
                    if (*(ecx_9[2] + 0x14) != 1 || *(*ecx_9 + 0x14) != 1)
                        if (*(*ecx_9 + 0x14) == 1)
                            *(ecx_9[2] + 0x14) = 1
                            ecx_9[5].b = 0
                            sub_6b3d90(ecx_9)
                            ecx_9 = *esi
                        
                        void* edx_7
                        edx_7.b = esi[5].b
                        ecx_9[5].b = edx_7.b
                        esi[5].b = 1
                        *(*ecx_9 + 0x14) = 1
                        sub_6b3de0(esi)
                        break
                    
                    ecx_9[5].b = 0
            else
                ecx_9 = esi[2]
                
                if (ecx_9[5].b == 0)
                    ecx_9[5].b = 1
                    esi[5].b = 0
                    sub_6b3d90(esi)
                    ecx_9 = esi[2]
                
                if (*(ecx_9 + 0x15) == 0)
                    if (*(*ecx_9 + 0x14) != 1 || *(ecx_9[2] + 0x14) != 1)
                        if (*(ecx_9[2] + 0x14) == 1)
                            *(*ecx_9 + 0x14) = 1
                            ecx_9[5].b = 0
                            sub_6b3de0(ecx_9)
                            ecx_9 = esi[2]
                        
                        void* edx_5
                        edx_5.b = esi[5].b
                        ecx_9[5].b = edx_5.b
                        esi[5].b = 1
                        *(ecx_9[2] + 0x14) = 1
                        sub_6b3d90(esi)
                        break
                    
                    ecx_9[5].b = 0
            
            edi = esi
            esi = esi[1]
            
            if (edi == *(data_797e30 + 4))
                break
    
    edi[5].b = 1

int32_t* var_14 = eax_16
sub_6b4d5b()

if (data_797e34 u> 0)
    data_797e34 -= 1

*arg1 = arg2
return arg1
