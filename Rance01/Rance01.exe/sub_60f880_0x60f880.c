// 函数: sub_60f880
// 地址: 0x60f880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_21 = arg3

if (*(eax_21 + 0xa5) != 0)
    sub_6b480c("invalid map/set<T> iterator")
    noreturn

void* ebx
void* var_4 = ebx
sub_60fcf0(&arg3)
int32_t* ecx = *eax_21
void* edx_1
int32_t* esi
int32_t* edi

if (*(ecx + 0xa5) == 0)
    if (*(eax_21[2] + 0xa5) != 0)
        edi = ecx
        goto label_60f8d9
    
    int32_t* eax_2 = arg3
    edi = eax_2[2]
    
    if (eax_2 == eax_21)
        goto label_60f8d9
    
    ecx[1] = eax_2
    *eax_2 = *eax_21
    
    if (eax_2 != eax_21[2])
        esi = eax_2[1]
        
        if (*(edi + 0xa5) == 0)
            edi[1] = esi
        
        *esi = edi
        eax_2[2] = eax_21[2]
        *(eax_21[2] + 4) = eax_2
    else
        esi = eax_2
    
    void** ecx_4 = *(arg1 + 4)
    
    if (ecx_4[1] != eax_21)
        ecx_4 = eax_21[1]
        
        if (*ecx_4 != eax_21)
            ecx_4[2] = eax_2
        else
            *ecx_4 = eax_2
    else
        ecx_4[1] = eax_2
    
    eax_2[1] = eax_21[1]
    int32_t edx_3
    edx_3.b = eax_21[0x29].b
    ecx_4.b = eax_2[0x29].b
    eax_2[0x29].b = edx_3.b
    edx_1 = arg1
    eax_21[0x29].b = ecx_4.b
else
    edi = eax_21[2]
label_60f8d9:
    esi = eax_21[1]
    
    if (*(edi + 0xa5) == 0)
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
        int32_t* eax_4
        
        if (*(edi + 0xa5) == 0)
            eax_4 = sub_60fcd0(edi)
            edx_1 = arg1
        else
            eax_4 = esi
        
        *ebx_1 = eax_4
    
    ebx = *(edx_1 + 4)
    
    if (*(ebx + 8) == eax_21)
        if (*(edi + 0xa5) == 0)
            edx_1 = arg1
            *(ebx + 8) = sub_60fcb0(edi)
        else
            *(ebx + 8) = esi

if (eax_21[0x29].b == 1)
    if (edi != *(*(edx_1 + 4) + 4))
        while (edi[0x29].b == 1)
            int32_t* ecx_5 = *esi
            
            if (edi != ecx_5)
                if (ecx_5[0x29].b == 0)
                    ecx_5[0x29].b = 1
                    esi[0x29].b = 0
                    sub_60fc50(esi, edx_1)
                    ecx_5 = *esi
                    edx_1 = arg1
                
                if (*(ecx_5 + 0xa5) == 0)
                    if (*(ecx_5[2] + 0xa4) != 1 || *(*ecx_5 + 0xa4) != 1)
                        if ((*ecx_5)[0x29].b == 1)
                            *(ecx_5[2] + 0xa4) = 1
                            ecx_5[0x29].b = 0
                            sub_60fc00(ecx_5, edx_1)
                            ecx_5 = *esi
                            edx_1 = arg1
                        
                        int32_t* eax_17
                        eax_17.b = esi[0x29].b
                        ecx_5[0x29].b = eax_17.b
                        esi[0x29].b = 1
                        *(*ecx_5 + 0xa4) = 1
                        sub_60fc50(esi, edx_1)
                        break
                    
                    ecx_5[0x29].b = 0
            else
                ecx_5 = esi[2]
                
                if (ecx_5[0x29].b == 0)
                    ecx_5[0x29].b = 1
                    esi[0x29].b = 0
                    sub_60fc00(esi, edx_1)
                    ecx_5 = esi[2]
                    edx_1 = arg1
                
                if (*(ecx_5 + 0xa5) == 0)
                    if (*(*ecx_5 + 0xa4) != 1 || *(ecx_5[2] + 0xa4) != 1)
                        if (*(ecx_5[2] + 0xa4) == 1)
                            *(*ecx_5 + 0xa4) = 1
                            ecx_5[0x29].b = 0
                            sub_60fc50(ecx_5, edx_1)
                            ecx_5 = esi[2]
                            edx_1 = arg1
                        
                        void* eax_13
                        eax_13.b = esi[0x29].b
                        ecx_5[0x29].b = eax_13.b
                        esi[0x29].b = 1
                        *(ecx_5[2] + 0xa4) = 1
                        sub_60fc00(esi, edx_1)
                        break
                    
                    ecx_5[0x29].b = 0
            
            edi = esi
            esi = esi[1]
            
            if (edi == *(*(edx_1 + 4) + 4))
                break
    
    edi[0x29].b = 1

sub_607f00(&eax_21[0xa])

if (eax_21[8] u>= 0x10)
    int32_t var_14_7 = eax_21[3]
    sub_6b4d5b()

eax_21[8] = 0xf
eax_21[7] = 0
int32_t* var_14_8 = eax_21
eax_21[3].b = 0
sub_6b4d5b()
int32_t eax_18 = *(arg1 + 8)

if (eax_18 != 0)
    *(arg1 + 8) = eax_18 - 1

*arg2 = arg3
return arg2
