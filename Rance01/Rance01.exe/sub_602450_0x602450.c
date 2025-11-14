// 函数: sub_602450
// 地址: 0x602450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = nullptr
int128_t* ebp = nullptr
int32_t edi = 0
int128_t* var_1c = nullptr
char* var_18 = nullptr
int32_t var_14 = 0
int32_t var_4 = 0
int32_t var_24 = 0
BOOL hFile

while (true)
    int32_t* arg_4
    int32_t* ebx_1 = arg_4
    hFile = *ebx_1
    uint8_t buffer
    uint32_t numberOfBytesRead
    
    if (hFile != 0xffffffff && ebx_1[1] + 1 u<= ebx_1[2]
            && ReadFile(hFile, &buffer, 1, &numberOfBytesRead, nullptr) != 0
            && numberOfBytesRead == 1)
        ebx_1[1] += 1
        int32_t* ecx_3
        
        if (&buffer u< esi && ebp u<= &buffer)
            void* ebx_2 = &buffer - ebp
            
            if (esi != edi)
            label_602537:
                
                if (esi == 0)
                    goto label_602596
                
                ecx_3.b = *(ebx_2 + ebp)
                *esi = ecx_3.b
                goto label_602596
            
            void* eax_4 = esi - ebp
            
            if (eax_4 u<= 0xfffffffe)
                ecx_3 = edi - ebp
                
                if (eax_4 + 1 u> ecx_3)
                    uint32_t edx_3 = ecx_3 u>> 1
                    void* ecx_5
                    
                    if (0xffffffff - edx_3 u>= ecx_3)
                        ecx_5 = ecx_3 + edx_3
                    else
                        ecx_5 = nullptr
                    
                    if (ecx_5 u< eax_4 + 1)
                        ecx_5 = eax_4 + 1
                    
                    sub_424860(&var_1c, ecx_5)
                    edi = var_14
                    esi = var_18
                    ebp = var_1c
                
                goto label_602537
        else if (esi != edi)
        label_602588:
            
            if (esi == 0)
                goto label_602596
            
            *esi = buffer
        label_602596:
            int32_t eax_10 = var_24 + 1
            esi = &esi[1]
            var_18 = esi
            var_24 = eax_10
            
            if (eax_10 s< 4)
                continue
            else
                arg_4.b = 0
                
                if (&arg_4 u>= esi || ebp u> &arg_4)
                    if (esi == edi)
                        void* eax_15 = esi - ebp
                        
                        if (eax_15 u> 0xfffffffe)
                            sub_6b47bf("vector<T> too long")
                            noreturn
                        
                        ecx_3 = edi - ebp
                        
                        if (eax_15 + 1 u> ecx_3)
                            uint32_t edx_9 = ecx_3 u>> 1
                            void* ecx_11
                            
                            if (0xffffffff - edx_9 u>= ecx_3)
                                ecx_11 = ecx_3 + edx_9
                            else
                                ecx_11 = nullptr
                            
                            if (ecx_11 u< eax_15 + 1)
                                ecx_11 = eax_15 + 1
                            
                            sub_424860(&var_1c, ecx_11)
                            esi = var_18
                            ebp = var_1c
                    
                    if (esi == 0)
                        goto label_60267d
                    
                    *esi = 0
                label_60267d:
                    char* eax_17 = ebp
                    void* var_18_1 = &esi[1]
                    
                    do
                        ecx_3.b = *eax_17
                        eax_17 = &eax_17[1]
                    while (ecx_3.b != 0)
                    
                    sub_401270(arg1, eax_17 - &eax_17[1], ebp)
                    
                    if (ebp != 0)
                        int128_t* var_40_7 = ebp
                        sub_6b4d5b()
                    
                    hFile.b = 1
                    break
                
                char* ebx_3 = &arg_4 - ebp
                
                if (esi != edi)
                label_60261f:
                    
                    if (esi == 0)
                        goto label_60267d
                    
                    *esi = *(ebx_3 + ebp)
                    goto label_60267d
                
                int32_t eax_12 = esi - ebp
                
                if (eax_12 u<= 0xfffffffe)
                    ecx_3 = edi - ebp
                    
                    if (eax_12 + 1 u> ecx_3)
                        uint32_t edx_7 = ecx_3 u>> 1
                        uint32_t ecx_9
                        
                        if (0xffffffff - edx_7 u>= ecx_3)
                            ecx_9 = ecx_3 + edx_7
                        else
                            ecx_9 = 0
                        
                        if (ecx_9 u< eax_12 + 1)
                            ecx_9 = eax_12 + 1
                        
                        sub_424860(&var_1c, ecx_9)
                        esi = var_18
                        ebp = var_1c
                    
                    goto label_60261f
        else
            void* eax_7 = esi - ebp
            
            if (eax_7 u<= 0xfffffffe)
                ecx_3 = edi - ebp
                
                if (eax_7 + 1 u> ecx_3)
                    uint32_t edx_5 = ecx_3 u>> 1
                    void* ecx_7
                    
                    if (0xffffffff - edx_5 u>= ecx_3)
                        ecx_7 = ecx_3 + edx_5
                    else
                        ecx_7 = nullptr
                    
                    if (ecx_7 u< eax_7 + 1)
                        ecx_7 = eax_7 + 1
                    
                    sub_424860(&var_1c, ecx_7)
                    edi = var_14
                    esi = var_18
                    ebp = var_1c
                
                goto label_602588
        sub_6b47bf("vector<T> too long")
        noreturn
    
    if (ebp != 0)
        int128_t* var_40_3 = ebp
        sub_6b4d5b()
    
    hFile.b = 0
    break

fsbase->NtTib.ExceptionList = ExceptionList
return hFile
