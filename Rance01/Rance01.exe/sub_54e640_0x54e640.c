// 函数: sub_54e640
// 地址: 0x54e640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_21 = arg3

if (*(eax_21 + 0x21) != 0)
    sub_6b480c("invalid map/set<T> iterator")
    noreturn

void* ebx
void* var_4 = ebx
sub_58bba0(&arg3)
int32_t* ecx = *eax_21
void* edx_1
int32_t* esi
int32_t* edi

if (*(ecx + 0x21) == 0)
    if (*(eax_21[2] + 0x21) != 0)
        edi = ecx
        goto label_54e68d
    
    int32_t* eax_2 = arg3
    edi = eax_2[2]
    
    if (eax_2 == eax_21)
        goto label_54e68d
    
    ecx[1] = eax_2
    *eax_2 = *eax_21
    
    if (eax_2 != eax_21[2])
        esi = eax_2[1]
        
        if (*(edi + 0x21) == 0)
            edi[1] = esi
        
        *esi = edi
        eax_2[2] = eax_21[2]
        *(eax_21[2] + 4) = eax_2
    else
        esi = eax_2
    
    void** ecx_5 = *(arg1 + 4)
    
    if (ecx_5[1] != eax_21)
        ecx_5 = eax_21[1]
        
        if (*ecx_5 != eax_21)
            ecx_5[2] = eax_2
        else
            *ecx_5 = eax_2
    else
        ecx_5[1] = eax_2
    
    eax_2[1] = eax_21[1]
    int32_t edx_3
    edx_3.b = eax_21[8].b
    ecx_5.b = eax_2[8].b
    eax_2[8].b = edx_3.b
    edx_1 = arg1
    eax_21[8].b = ecx_5.b
else
    edi = eax_21[2]
label_54e68d:
    esi = eax_21[1]
    
    if (*(edi + 0x21) == 0)
        edi[1] = esi
    
    edx_1 = arg1
    void* eax_3 = *(edx_1 + 4)
    
    if (*(eax_3 + 4) == eax_21)
        *(eax_3 + 4) = edi
    else if (*esi != eax_21)
        esi[2] = edi
    else
        *esi = edi
    
    int32_t* ebx_1 = *(edx_1 + 4)
    
    if (*ebx_1 == eax_21)
        int32_t* ecx_1
        
        if (*(edi + 0x21) == 0)
            int32_t* eax_4 = *edi
            ecx_1 = edi
            
            while (*(eax_4 + 0x21) == 0)
                ecx_1 = eax_4
                eax_4 = *ecx_1
        else
            ecx_1 = esi
        
        *ebx_1 = ecx_1
    
    ebx = *(edx_1 + 4)
    
    if (*(ebx + 8) == eax_21)
        if (*(edi + 0x21) == 0)
            edx_1 = arg1
            *(ebx + 8) = sub_40f930(edi)
        else
            *(ebx + 8) = esi

if (eax_21[8].b == 1)
    if (edi != *(*(edx_1 + 4) + 4))
        while (edi[8].b == 1)
            int32_t* ecx_6 = *esi
            
            if (edi != ecx_6)
                if (ecx_6[8].b == 0)
                    ecx_6[8].b = 1
                    esi[8].b = 0
                    sub_54e960(esi, edx_1)
                    ecx_6 = *esi
                    edx_1 = arg1
                
                if (*(ecx_6 + 0x21) == 0)
                    if (*(ecx_6[2] + 0x20) != 1 || *(*ecx_6 + 0x20) != 1)
                        if ((*ecx_6)[8].b == 1)
                            *(ecx_6[2] + 0x20) = 1
                            ecx_6[8].b = 0
                            sub_58c2a0(ecx_6, edx_1)
                            ecx_6 = *esi
                            edx_1 = arg1
                        
                        int32_t* eax_16
                        eax_16.b = esi[8].b
                        ecx_6[8].b = eax_16.b
                        esi[8].b = 1
                        *(*ecx_6 + 0x20) = 1
                        sub_54e960(esi, edx_1)
                        break
                    
                    ecx_6[8].b = 0
            else
                ecx_6 = esi[2]
                
                if (ecx_6[8].b == 0)
                    ecx_6[8].b = 1
                    esi[8].b = 0
                    sub_58c2a0(esi, edx_1)
                    ecx_6 = esi[2]
                    edx_1 = arg1
                
                if (*(ecx_6 + 0x21) == 0)
                    if (*(*ecx_6 + 0x20) != 1 || *(ecx_6[2] + 0x20) != 1)
                        if (*(ecx_6[2] + 0x20) == 1)
                            *(*ecx_6 + 0x20) = 1
                            ecx_6[8].b = 0
                            sub_54e960(ecx_6, edx_1)
                            ecx_6 = esi[2]
                            edx_1 = arg1
                        
                        void* eax_12
                        eax_12.b = esi[8].b
                        ecx_6[8].b = eax_12.b
                        esi[8].b = 1
                        *(ecx_6[2] + 0x20) = 1
                        sub_58c2a0(esi, edx_1)
                        break
                    
                    ecx_6[8].b = 0
            
            edi = esi
            esi = esi[1]
            
            if (edi == *(*(edx_1 + 4) + 4))
                break
    
    edi[8].b = 1

int32_t* eax_17 = eax_21[4]

if (eax_17 != 0)
    sub_405780(eax_17, eax_21[5])
    int32_t var_14_7 = eax_21[4]
    sub_6b4d5b()

int32_t* var_14_8 = eax_21
eax_21[4] = 0
eax_21[5] = 0
eax_21[6] = 0
sub_6b4d5b()
int32_t eax_18 = *(arg1 + 8)

if (eax_18 u> 0)
    *(arg1 + 8) = eax_18 - 1

*arg2 = arg3
return arg2
