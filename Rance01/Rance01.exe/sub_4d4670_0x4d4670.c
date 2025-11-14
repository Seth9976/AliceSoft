// 函数: sub_4d4670
// 地址: 0x4d4670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg3

if (*(ebp + 0x39) != 0)
    sub_6b480c("invalid map/set<T> iterator")
    noreturn

void* ebx
void* var_8 = ebx
sub_4d3e20(&arg3)
int32_t** ecx = *ebp
void* edx_1
int32_t** esi
int32_t** edi

if (*(ecx + 0x39) == 0)
    if (*(ebp[2] + 0x39) != 0)
        edi = ecx
        goto label_4d46bb
    
    int32_t** eax_2 = arg3
    edi = eax_2[2]
    
    if (eax_2 == ebp)
        goto label_4d46bb
    
    ecx[1] = eax_2
    *eax_2 = *ebp
    
    if (eax_2 != ebp[2])
        esi = eax_2[1]
        
        if (*(edi + 0x39) == 0)
            edi[1] = esi
        
        *esi = edi
        eax_2[2] = ebp[2]
        *(ebp[2] + 4) = eax_2
    else
        esi = eax_2
    
    void** ecx_5 = *(arg1 + 4)
    
    if (ecx_5[1] != ebp)
        ecx_5 = ebp[1]
        
        if (*ecx_5 != ebp)
            ecx_5[2] = eax_2
        else
            *ecx_5 = eax_2
    else
        ecx_5[1] = eax_2
    
    eax_2[1] = ebp[1]
    int32_t edx_3
    edx_3.b = ebp[0xe].b
    ecx_5.b = eax_2[0xe].b
    eax_2[0xe].b = edx_3.b
    edx_1 = arg1
    ebp[0xe].b = ecx_5.b
else
    edi = ebp[2]
label_4d46bb:
    esi = ebp[1]
    
    if (*(edi + 0x39) == 0)
        edi[1] = esi
    
    edx_1 = arg1
    void* eax_3 = *(edx_1 + 4)
    
    if (*(eax_3 + 4) == ebp)
        *(eax_3 + 4) = edi
    else if (*esi != ebp)
        esi[2] = edi
    else
        *esi = edi
    
    int32_t* ebx_1 = *(edx_1 + 4)
    
    if (*ebx_1 == ebp)
        int32_t** ecx_1
        
        if (*(edi + 0x39) == 0)
            int32_t* eax_4 = *edi
            ecx_1 = edi
            
            while (*(eax_4 + 0x39) == 0)
                ecx_1 = eax_4
                eax_4 = *ecx_1
        else
            ecx_1 = esi
        
        *ebx_1 = ecx_1
    
    ebx = *(edx_1 + 4)
    
    if (*(ebx + 8) == ebp)
        if (*(edi + 0x39) == 0)
            edx_1 = arg1
            *(ebx + 8) = sub_4d5130(edi)
        else
            *(ebx + 8) = esi

if (ebp[0xe].b == 1)
    if (edi != *(*(edx_1 + 4) + 4))
        while (edi[0xe].b == 1)
            int32_t* ecx_6 = *esi
            
            if (edi != ecx_6)
                if (ecx_6[0xe].b == 0)
                    ecx_6[0xe].b = 1
                    esi[0xe].b = 0
                    sub_4d5150(esi, edx_1)
                    ecx_6 = *esi
                    edx_1 = arg1
                
                if (*(ecx_6 + 0x39) == 0)
                    if (*(ecx_6[2] + 0x38) != 1 || *(*ecx_6 + 0x38) != 1)
                        if ((*ecx_6)[0xe].b == 1)
                            *(ecx_6[2] + 0x38) = 1
                            ecx_6[0xe].b = 0
                            sub_4d51a0(ecx_6, edx_1)
                            ecx_6 = *esi
                            edx_1 = arg1
                        
                        int32_t* eax_16
                        eax_16.b = esi[0xe].b
                        ecx_6[0xe].b = eax_16.b
                        esi[0xe].b = 1
                        *(*ecx_6 + 0x38) = 1
                        sub_4d5150(esi, edx_1)
                        break
                    
                    ecx_6[0xe].b = 0
            else
                ecx_6 = esi[2]
                
                if (ecx_6[0xe].b == 0)
                    ecx_6[0xe].b = 1
                    esi[0xe].b = 0
                    sub_4d51a0(esi, edx_1)
                    ecx_6 = esi[2]
                    edx_1 = arg1
                
                if (*(ecx_6 + 0x39) == 0)
                    if (*(*ecx_6 + 0x38) != 1 || *(ecx_6[2] + 0x38) != 1)
                        if (*(ecx_6[2] + 0x38) == 1)
                            *(*ecx_6 + 0x38) = 1
                            ecx_6[0xe].b = 0
                            sub_4d5150(ecx_6, edx_1)
                            ecx_6 = esi[2]
                            edx_1 = arg1
                        
                        void* eax_12
                        eax_12.b = esi[0xe].b
                        ecx_6[0xe].b = eax_12.b
                        esi[0xe].b = 1
                        *(ecx_6[2] + 0x38) = 1
                        sub_4d51a0(esi, edx_1)
                        break
                    
                    ecx_6[0xe].b = 0
            
            edi = esi
            esi = esi[1]
            
            if (edi == *(*(edx_1 + 4) + 4))
                break
    
    edi[0xe].b = 1

void* i = ebp[0xa]

if (i != 0)
    for (int32_t ecx_14 = ebp[0xb]; i != ecx_14; i += 0x20)
        *(i + 8) = &sealengine::CFrameAddColor::`vftable'
    
    int32_t var_14_7 = ebp[0xa]
    sub_6b4d5b()

ebp[0xa] = 0
ebp[0xb] = 0
ebp[0xc] = 0

if (ebp[8] u>= 0x10)
    int32_t var_14_8 = ebp[3]
    sub_6b4d5b()

ebp[8] = 0xf
ebp[7] = 0
int32_t* var_14_9 = ebp
ebp[3].b = 0
sub_6b4d5b()
int32_t eax_18 = *(arg1 + 8)

if (eax_18 u> 0)
    *(arg1 + 8) = eax_18 - 1

*arg2 = arg3
return arg2
