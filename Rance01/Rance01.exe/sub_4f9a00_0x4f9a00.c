// 函数: sub_4f9a00
// 地址: 0x4f9a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fbea
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4f8740(arg1)
void* arg_8
void* edi = arg_8
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x30c30c31, *(edi + 0x1c) - *(edi + 0x18))
int32_t edx_1 = edx s>> 4
int32_t ebx = 0
int32_t ebp_2 = (edx_1 u>> 0x1f) + edx_1
int32_t var_14 = 0
int32_t* eax_5 = sub_4fddf0(1)
*eax_5 = eax_5
eax_5[1] = eax_5
eax_5[2] = eax_5
int32_t* ecx_2 = eax_5
ecx_2[8].b = 1
*(eax_5 + 0x21) = 1
int32_t var_4 = 0
int32_t var_24 = 0
void var_1c

if (ebp_2 s> 0)
    do
        int32_t edx_4
        
        if (ebx s>= 0)
            ecx_2 = *(edi + 0x1c) - *(edi + 0x18)
            int32_t eax_8
            int32_t edx_3
            edx_3:eax_8 = muls.dp.d(0x30c30c31, ecx_2)
            edx_4 = edx_3 s>> 4
        
        int32_t eax_12
        
        if (ebx s< 0 || ebx s>= (edx_4 u>> 0x1f) + edx_4)
            eax_12 = 0xffffffff
        else
            ecx_2 = ebx * 0x54
            eax_12 = *(ecx_2 + *(edi + 0x18) + 0x1c)
        
        int32_t var_20 = eax_12
        void* var_40_1 = &var_1c
        int32_t* esi_1 = sub_4fc890(ecx_2, &var_20)
        int32_t eax_14 = esi_1[1]
        int32_t edx_7
        
        if (&var_24 u< eax_14)
            edx_7 = *esi_1
        
        if (&var_24 u>= eax_14 || edx_7 u> &var_24)
            ecx_2 = esi_1[2]
            
            if (eax_14 == ecx_2)
                int32_t edx_11 = *esi_1
                int32_t eax_20 = (eax_14 - edx_11) s>> 2
                
                if (eax_20 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                ecx_2 = (ecx_2 - edx_11) s>> 2
                
                if (eax_20 + 1 u> ecx_2)
                    uint32_t edx_13 = ecx_2 u>> 1
                    void* ecx_10
                    
                    if (0x3fffffff - edx_13 u>= ecx_2)
                        ecx_10 = ecx_2 + edx_13
                    else
                        ecx_10 = nullptr
                    
                    if (ecx_10 u< eax_20 + 1)
                        ecx_10 = eax_20 + 1
                    
                    ecx_2 = sub_6b0560(esi_1, ecx_10)
                    edi = arg_8
            
            int32_t* eax_22 = esi_1[1]
            
            if (eax_22 != 0)
                *eax_22 = ebx
        else
            int32_t ecx_5 = esi_1[2]
            
            if (eax_14 == ecx_5)
                int32_t eax_16 = (eax_14 - edx_7) s>> 2
                
                if (eax_16 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_7 = (ecx_5 - edx_7) s>> 2
                
                if (eax_16 + 1 u> ecx_7)
                    uint32_t edx_9 = ecx_7 u>> 1
                    int32_t ecx_8
                    
                    if (0x3fffffff - edx_9 u>= ecx_7)
                        ecx_8 = ecx_7 + edx_9
                    else
                        ecx_8 = 0
                    
                    if (ecx_8 u< eax_16 + 1)
                        ecx_8 = eax_16 + 1
                    
                    sub_6b0560(esi_1, ecx_8)
                    ebx = var_24
            
            int32_t** eax_18 = esi_1[1]
            ecx_2 = *esi_1 + ((&var_24 - edx_7) s>> 2 << 2)
            
            if (eax_18 != 0)
                ecx_2 = *ecx_2
                *eax_18 = ecx_2
            
            edi = arg_8
        
        esi_1[1] += 4
        ebx += 1
        var_24 = ebx
    while (ebx s< ebp_2)

int32_t* ecx_11 = eax_5
int32_t* i_1 = *ecx_11
int32_t result

while (i_1 != ecx_11)
    int32_t* i_5 = i_1[4]
    
    if (i_5 != i_1[5])
        int32_t* i = i_5
        
        do
            if (sub_4f9d10(*i, arg_8, arg1) == 0)
                int32_t var_4_2 = 1
                int32_t** eax_25 = eax_5
                sub_58df10(&var_1c, &arg_8, *eax_25, eax_25)
                int32_t* var_40_8 = eax_5
                sub_6b4d5b()
                result.b = 0
                goto label_4f9c62
            
            i = &i[1]
        while (i != i_1[5])
        
        ecx_11 = eax_5
    
    if (*(i_1 + 0x21) == 0)
        int32_t* i_2 = i_1[2]
        
        if (*(i_2 + 0x21) != 0)
            int32_t* i_4 = i_1[1]
            
            if (*(i_4 + 0x21) == 0)
                while (i_1 == i_4[2])
                    i_1 = i_4
                    i_4 = i_4[1]
                    
                    if (*(i_4 + 0x21) != 0)
                        break
            
            i_1 = i_4
        else
            i_1 = i_2
            int32_t* i_3 = *i_1
            
            while (*(i_3 + 0x21) == 0)
                i_1 = i_3
                i_3 = *i_1

int32_t var_4_1 = 2
sub_58df10(&var_1c, &arg_8, *ecx_11, ecx_11)
int32_t* var_40_6 = eax_5
sub_6b4d5b()
result.b = 1
label_4f9c62:
fsbase->NtTib.ExceptionList = ExceptionList
return result
