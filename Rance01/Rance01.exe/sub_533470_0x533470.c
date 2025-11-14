// 函数: sub_533470
// 地址: 0x533470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711602
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t* i_2 = sub_416b10(1)
*i_2 = i_2
i_2[1] = i_2
i_2[2] = i_2
i_2[4].b = 1
*(i_2 + 0x11) = 1
int32_t var_4 = 0
void var_24
void var_1c

for (int32_t* i = *arg1; i != arg1[1]; i = &i[5])
    if (*i != 0)
        sub_4c33d0(&var_1c, i, &var_24)

int128_t* ecx_2 = arg1[0x15]
int128_t* edi_1 = arg1[0x14]

if (edi_1 != ecx_2)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi_1, ecx_2, ebp_1, eax_2)
    arg1[0x15] = ebp_1 + edi_1

int32_t* i_1 = i_2

for (int32_t* j = *i_1; j != i_1; i_1 = i_2)
    int32_t eax_10 = arg1[0x15]
    int32_t edx_1
    
    if (&j[3] u< eax_10)
        edx_1 = arg1[0x14]
    
    if (&j[3] u>= eax_10 || edx_1 u> &j[3])
        int32_t ecx_9 = arg1[0x16]
        
        if (eax_10 == ecx_9)
            int32_t edx_4 = arg1[0x14]
            int32_t eax_17 = (eax_10 - edx_4) s>> 2
            
            if (eax_17 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_11 = (ecx_9 - edx_4) s>> 2
            
            if (eax_17 + 1 u> ecx_11)
                uint32_t edx_6 = ecx_11 u>> 1
                int32_t ecx_12
                
                if (0x3fffffff - edx_6 u>= ecx_11)
                    ecx_12 = ecx_11 + edx_6
                else
                    ecx_12 = 0
                
                if (ecx_12 u< eax_17 + 1)
                    ecx_12 = eax_17 + 1
                
                sub_6b0560(&arg1[0x14], ecx_12)
        
        int32_t* eax_19 = arg1[0x15]
        
        if (eax_19 != 0)
            *eax_19 = j[3]
    else
        int32_t ecx_3 = arg1[0x16]
        
        if (eax_10 == ecx_3)
            int32_t eax_12 = (eax_10 - edx_1) s>> 2
            
            if (eax_12 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_5 = (ecx_3 - edx_1) s>> 2
            
            if (eax_12 + 1 u> ecx_5)
                uint32_t edx_3 = ecx_5 u>> 1
                int32_t ecx_6
                
                if (0x3fffffff - edx_3 u>= ecx_5)
                    ecx_6 = ecx_5 + edx_3
                else
                    ecx_6 = 0
                
                if (ecx_6 u< eax_12 + 1)
                    ecx_6 = eax_12 + 1
                
                sub_6b0560(&arg1[0x14], ecx_6)
        
        int32_t* eax_15 = arg1[0x15]
        
        if (eax_15 != 0)
            *eax_15 = *(arg1[0x14] + ((&j[3] - edx_1) s>> 2 << 2))
    
    arg1[0x15] += 4
    
    if (*(j + 0x11) == 0)
        int32_t* j_2 = j[2]
        
        if (*(j_2 + 0x11) != 0)
            int32_t* j_1 = j[1]
            
            if (*(j_1 + 0x11) == 0)
                while (j == j_1[2])
                    j = j_1
                    j_1 = j_1[1]
                    
                    if (*(j_1 + 0x11) != 0)
                        break
            
            j = j_1
        else
            int32_t* j_3 = *j_2
            
            while (*(j_3 + 0x11) == 0)
                j_2 = j_3
                j_3 = *j_2
            
            j = j_2

int32_t var_4_1 = 1
sub_58bc40(&var_1c, &var_24, *i_1, i_1)
int32_t* i_3 = i_2
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
