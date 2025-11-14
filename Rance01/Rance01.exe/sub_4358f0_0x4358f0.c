// 函数: sub_4358f0
// 地址: 0x4358f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715522
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** arg_4
int32_t* ebx = arg_4
int32_t var_14 = 0
int32_t* i_2 = sub_416b10(1)
*i_2 = i_2
i_2[1] = i_2
i_2[2] = i_2
i_2[4].b = 1
*(i_2 + 0x11) = 1
int32_t var_4 = 0
int32_t* i = *ebx
void var_1c
int32_t* j_1

if (i != ebx[1])
    int32_t* j_4 = j_1
    
    do
        void** ecx_1 = j_4[3]
        void** eax_6 = ecx_1[1]
        int32_t edx_1 = *i
        
        while (*(eax_6 + 0x15) == 0)
            if (eax_6[3] s>= edx_1)
                ecx_1 = eax_6
                eax_6 = *eax_6
            else
                eax_6 = eax_6[2]
        
        void** eax_7 = j_4[3]
        arg_4 = ecx_1
        void*** eax_8
        
        if (ecx_1 == eax_7 || edx_1 s< ecx_1[3])
            void** var_30 = eax_7
            eax_8 = &var_30
        else
            eax_8 = &arg_4
        
        void** eax_9 = *eax_8
        int32_t edi_1 = j_4[3]
        
        if (eax_9 != edi_1)
            void* eax_10 = eax_9[4]
            
            if (eax_10 != 0)
                void** eax_11 = *(eax_10 + 0x24)
                void** var_28 = eax_11
                
                if (eax_11 != 0xffffffff)
                    arg_4 = eax_11
                    int32_t* var_2c
                    sub_42e070(&j_4[2], &var_2c, &arg_4)
                    int32_t* eax_13 = var_2c
                    
                    if (eax_13 != edi_1)
                        void* eax_14 = eax_13[4]
                        int32_t* var_24
                        
                        if (eax_14 != 0 && *(eax_14 + 0xcc) != 0)
                            sub_416880(&var_1c, &var_28, &var_24)
        
        i = &i[1]
    while (i != ebx[1])

int32_t* i_1 = i_2
int32_t* j = *i_1
j_1 = j

for (; j != i_1; i_1 = i_2)
    int32_t* edx_3 = *ebx
    int32_t eax_16 = ebx[1]
    int32_t* ecx_5 = edx_3
    int32_t* edi_2 = &j[3]
    
    if (ecx_5 == eax_16)
    label_435a49:
        
        if (edi_2 u>= eax_16 || edx_3 u> edi_2)
            int32_t ecx_12 = ebx[2]
            
            if (eax_16 == ecx_12)
                int32_t eax_22 = (eax_16 - edx_3) s>> 2
                
                if (eax_22 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_14 = (ecx_12 - edx_3) s>> 2
                
                if (eax_22 + 1 u> ecx_14)
                    uint32_t edx_8 = ecx_14 u>> 1
                    int32_t ecx_15
                    
                    if (0x3fffffff - edx_8 u>= ecx_14)
                        ecx_15 = ecx_14 + edx_8
                    else
                        ecx_15 = 0
                    
                    if (ecx_15 u< eax_22 + 1)
                        ecx_15 = eax_22 + 1
                    
                    sub_6b0560(ebx, ecx_15)
                    j = j_1
            
            int32_t* eax_24 = ebx[1]
            
            if (eax_24 != 0)
                *eax_24 = *edi_2
        else
            int32_t ecx_6 = ebx[2]
            
            if (eax_16 == ecx_6)
                int32_t eax_18 = (eax_16 - edx_3) s>> 2
                
                if (eax_18 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_8 = (ecx_6 - edx_3) s>> 2
                
                if (eax_18 + 1 u> ecx_8)
                    uint32_t edx_5 = ecx_8 u>> 1
                    int32_t ecx_9
                    
                    if (0x3fffffff - edx_5 u>= ecx_8)
                        ecx_9 = ecx_8 + edx_5
                    else
                        ecx_9 = 0
                    
                    if (ecx_9 u< eax_18 + 1)
                        ecx_9 = eax_18 + 1
                    
                    sub_6b0560(ebx, ecx_9)
                    j = j_1
            
            int32_t* eax_20 = ebx[1]
            
            if (eax_20 != 0)
                *eax_20 = *(*ebx + ((edi_2 - edx_3) s>> 2 << 2))
        
        ebx[1] += 4
    else
        while (*ecx_5 != *edi_2)
            ecx_5 = &ecx_5[1]
            
            if (ecx_5 == eax_16)
                break
        
        if (ecx_5 == eax_16)
            goto label_435a49
    
    if (*(j + 0x11) == 0)
        int32_t* j_3 = j[2]
        
        if (*(j_3 + 0x11) != 0)
            int32_t* j_2 = j[1]
            
            if (*(j_2 + 0x11) == 0)
                for (; j == j_2[2]; j = j_1)
                    j_1 = j_2
                    j_2 = j_2[1]
                    
                    if (*(j_2 + 0x11) != 0)
                        break
            
            j_1 = j_2
        else
            int32_t* j_5 = *j_3
            
            while (*(j_5 + 0x11) == 0)
                j_3 = j_5
                j_5 = *j_3
            
            j_1 = j_3
        
        j = j_1

int32_t var_4_1 = 1
sub_58bc40(&var_1c, &j_1, *i_1, i_1)
int32_t* i_3 = i_2
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
