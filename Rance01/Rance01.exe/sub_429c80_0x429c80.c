// 函数: sub_429c80
// 地址: 0x429c80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** eax_18 = arg3

if (*(eax_18 + 0x2d) != 0)
    sub_6b480c("invalid map/set<T> iterator")
    noreturn

void* ebx
void* var_4 = ebx
int32_t* ebp = eax_18
sub_4c1d20(&arg3)
int32_t** ecx = *ebp
int32_t* edx_1
int32_t** esi
int32_t** edi

if (*(ecx + 0x2d) == 0)
    if (*(ebp[2] + 0x2d) != 0)
        edi = ecx
        goto label_429ccd
    
    int32_t** eax_2 = arg3
    edi = eax_2[2]
    
    if (eax_2 == ebp)
        goto label_429ccd
    
    ecx[1] = eax_2
    *eax_2 = *ebp
    
    if (eax_2 != ebp[2])
        esi = eax_2[1]
        
        if (*(edi + 0x2d) == 0)
            edi[1] = esi
        
        *esi = edi
        eax_2[2] = ebp[2]
        *(ebp[2] + 4) = eax_2
    else
        esi = eax_2
    
    void** ecx_7 = arg1[1]
    
    if (ecx_7[1] != ebp)
        ecx_7 = ebp[1]
        
        if (*ecx_7 != ebp)
            ecx_7[2] = eax_2
        else
            *ecx_7 = eax_2
    else
        ecx_7[1] = eax_2
    
    eax_2[1] = ebp[1]
    edx_1.b = ebp[0xb].b
    ecx_7.b = eax_2[0xb].b
    eax_2[0xb].b = edx_1.b
    ebp[0xb].b = ecx_7.b
else
    edi = ebp[2]
label_429ccd:
    esi = ebp[1]
    
    if (*(edi + 0x2d) == 0)
        edi[1] = esi
    
    void* eax_3 = arg1[1]
    
    if (*(eax_3 + 4) == ebp)
        *(eax_3 + 4) = edi
    else if (*esi != ebp)
        esi[2] = edi
    else
        *esi = edi
    
    edx_1 = arg1[1]
    
    if (*edx_1 == ebp)
        int32_t* ecx_2
        
        if (*(edi + 0x2d) == 0)
            int32_t* eax_4 = *edi
            ecx_2 = edi
            
            while (*(eax_4 + 0x2d) == 0)
                ecx_2 = eax_4
                eax_4 = *ecx_2
        else
            ecx_2 = esi
        
        *edx_1 = ecx_2
    
    ebx = arg1[1]
    
    if (*(ebx + 8) == ebp)
        if (*(edi + 0x2d) == 0)
            *(ebx + 8) = sub_429f70(edi)
        else
            *(ebx + 8) = esi

if (ebp[0xb].b == 1)
    if (edi != *(arg1[1] + 4))
        while (edi[0xb].b == 1)
            int32_t* ecx_9 = *esi
            int32_t* eax_8
            
            if (edi != ecx_9)
                if (ecx_9[0xb].b == 0)
                    ecx_9[0xb].b = 1
                    esi[0xb].b = 0
                    sub_429f90(esi, arg1)
                    ecx_9 = *esi
                
                if (*(ecx_9 + 0x2d) == 0)
                    if (*(ecx_9[2] + 0x2c) != 1 || (*ecx_9)[0xb].b != 1)
                        if (*(*ecx_9 + 0x2c) == 1)
                            *(ecx_9[2] + 0x2c) = 1
                            ecx_9[0xb].b = 0
                            sub_429f20(ecx_9, arg1)
                            ecx_9 = *esi
                        
                        eax_8.b = esi[0xb].b
                        ecx_9[0xb].b = eax_8.b
                        esi[0xb].b = 1
                        *(*ecx_9 + 0x2c) = 1
                        sub_429f90(esi, arg1)
                        break
                    
                    ecx_9[0xb].b = 0
            else
                ecx_9 = esi[2]
                
                if (ecx_9[0xb].b == 0)
                    ecx_9[0xb].b = 1
                    esi[0xb].b = 0
                    eax_8, edx_1 = sub_429f20(esi, arg1)
                    ecx_9 = esi[2]
                
                if (*(ecx_9 + 0x2d) == 0)
                    if ((*ecx_9)[0xb].b != 1 || ecx_9[2][0xb].b != 1)
                        if (*(ecx_9[2] + 0x2c) == 1)
                            *(*ecx_9 + 0x2c) = 1
                            ecx_9[0xb].b = 0
                            sub_429f90(ecx_9, arg1)
                            ecx_9 = esi[2]
                        
                        edx_1.b = esi[0xb].b
                        ecx_9[0xb].b = edx_1.b
                        esi[0xb].b = 1
                        *(ecx_9[2] + 0x2c) = 1
                        sub_429f20(esi, arg1)
                        break
                    
                    ecx_9[0xb].b = 0
            edi = esi
            esi = esi[1]
            
            if (edi == arg1[1][1])
                break
    
    edi[0xb].b = 1

if (ebp[8] u>= 0x10)
    int32_t var_14_7 = ebp[3]
    sub_6b4d5b()

ebp[8] = 0xf
ebp[7] = 0
int32_t* var_14_8 = ebp
ebp[3].b = 0
sub_6b4d5b()
int32_t eax_15 = arg1[2]

if (eax_15 != 0)
    arg1[2] = eax_15 - 1

*arg2 = arg3
return arg2
