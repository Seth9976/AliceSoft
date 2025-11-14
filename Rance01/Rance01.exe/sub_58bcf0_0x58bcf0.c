// 函数: sub_58bcf0
// 地址: 0x58bcf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716a88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_18 = ebx
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t** arg_c
int32_t** eax_3 = arg_c

if (*(eax_3 + 0x21) != 0)
    sub_6b480c("invalid map/set<T> iterator")
    noreturn

int32_t* ebp = eax_3
sub_58bba0(&arg_c)
int32_t** ecx = *ebp
int32_t* edx_1
int32_t** esi
int32_t** edi

if (*(ecx + 0x21) == 0)
    if (*(ebp[2] + 0x21) != 0)
        edi = ecx
        goto label_58bd60
    
    int32_t** eax_6 = arg_c
    edi = eax_6[2]
    
    if (eax_6 == ebp)
        goto label_58bd60
    
    ecx[1] = eax_6
    *eax_6 = *ebp
    
    if (eax_6 != ebp[2])
        esi = eax_6[1]
        
        if (*(edi + 0x21) == 0)
            edi[1] = esi
        
        *esi = edi
        eax_6[2] = ebp[2]
        *(ebp[2] + 4) = eax_6
    else
        esi = eax_6
    
    void** ecx_7 = arg1[1]
    
    if (ecx_7[1] != ebp)
        ecx_7 = ebp[1]
        
        if (*ecx_7 != ebp)
            ecx_7[2] = eax_6
        else
            *ecx_7 = eax_6
    else
        ecx_7[1] = eax_6
    
    eax_6[1] = ebp[1]
    edx_1.b = ebp[8].b
    ecx_7.b = eax_6[8].b
    eax_6[8].b = edx_1.b
    ebp[8].b = ecx_7.b
else
    edi = ebp[2]
label_58bd60:
    esi = ebp[1]
    
    if (*(edi + 0x21) == 0)
        edi[1] = esi
    
    void* eax_7 = arg1[1]
    
    if (*(eax_7 + 4) == ebp)
        *(eax_7 + 4) = edi
    else if (*esi != ebp)
        esi[2] = edi
    else
        *esi = edi
    
    edx_1 = arg1[1]
    
    if (*edx_1 == ebp)
        int32_t* ecx_2
        
        if (*(edi + 0x21) == 0)
            int32_t* eax_8 = *edi
            ecx_2 = edi
            
            while (*(eax_8 + 0x21) == 0)
                ecx_2 = eax_8
                eax_8 = *ecx_2
        else
            ecx_2 = esi
        
        *edx_1 = ecx_2
    
    ebx = arg1[1]
    
    if (*(ebx + 8) == ebp)
        if (*(edi + 0x21) == 0)
            *(ebx + 8) = sub_40f930(edi)
        else
            *(ebx + 8) = esi

if (ebp[8].b == 1)
    if (edi != *(arg1[1] + 4))
        while (edi[8].b == 1)
            int32_t* ecx_9 = *esi
            int32_t* eax_12
            
            if (edi != ecx_9)
                if (ecx_9[8].b == 0)
                    ecx_9[8].b = 1
                    esi[8].b = 0
                    sub_54e960(esi, arg1)
                    ecx_9 = *esi
                
                if (*(ecx_9 + 0x21) == 0)
                    if (*(ecx_9[2] + 0x20) != 1 || (*ecx_9)[8].b != 1)
                        if (*(*ecx_9 + 0x20) == 1)
                            *(ecx_9[2] + 0x20) = 1
                            ecx_9[8].b = 0
                            sub_58c2a0(ecx_9, arg1)
                            ecx_9 = *esi
                        
                        eax_12.b = esi[8].b
                        ecx_9[8].b = eax_12.b
                        esi[8].b = 1
                        *(*ecx_9 + 0x20) = 1
                        sub_54e960(esi, arg1)
                        break
                    
                    ecx_9[8].b = 0
            else
                ecx_9 = esi[2]
                
                if (ecx_9[8].b == 0)
                    ecx_9[8].b = 1
                    esi[8].b = 0
                    eax_12, edx_1 = sub_58c2a0(esi, arg1)
                    ecx_9 = esi[2]
                
                if (*(ecx_9 + 0x21) == 0)
                    if ((*ecx_9)[8].b != 1 || ecx_9[2][8].b != 1)
                        if (*(ecx_9[2] + 0x20) == 1)
                            *(*ecx_9 + 0x20) = 1
                            ecx_9[8].b = 0
                            sub_54e960(ecx_9, arg1)
                            ecx_9 = esi[2]
                        
                        edx_1.b = esi[8].b
                        ecx_9[8].b = edx_1.b
                        esi[8].b = 1
                        *(ecx_9[2] + 0x20) = 1
                        sub_58c2a0(esi, arg1)
                        break
                    
                    ecx_9[8].b = 0
            edi = esi
            esi = esi[1]
            
            if (edi == arg1[1][1])
                break
    
    edi[8].b = 1

void* var_14 = &ebp[4]
int32_t var_4 = 0
int32_t* eax_18 = ebp[5]
void var_10
sub_4365a0(&ebp[4], &var_10, *eax_18, eax_18)
int32_t var_2c_8 = ebp[5]
sub_6b4d5b()
int32_t* var_30_1 = ebp
sub_6b4d5b()
int32_t eax_21 = arg1[2]

if (eax_21 != 0)
    arg1[2] = eax_21 - 1

*arg2 = arg_c
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
