// 函数: sub_4b58e0
// 地址: 0x4b58e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7133db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* ecx = *(arg2 + 0x18)
int128_t* edi = *(arg2 + 0x14)

if (edi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    int32_t __saved_edi
    sub_6b49d0(edi, ecx, ebx_1, data_78c474 ^ &__saved_edi)
    *(arg2 + 0x18) = ebx_1 + edi

void* edi_2 = arg2 + 4
void* var_c0 = edi_2
int32_t i_4
sub_4b5f30(edi_2, &i_4, *(arg2 + 4), *(arg2 + 8))
int32_t* i = *arg1

while (i != arg1[1])
    struct sealengine::CBone::VTable* var_b8
    struct sealengine::CBone::VTable** eax_7 = &var_b8
    sub_4b4650((i - *arg1) s>> 2, eax_7, *i)
    int32_t var_4 = 0
    sub_4b5eb0(eax_7, edi_2)
    edi_2 = var_c0
    i = &i[1]
    int32_t var_4_1 = 0xffffffff

int32_t i_3

for (int32_t i_1 = *edi_2; i_1 != *(arg2 + 8); i_1 += 0xac)
    int32_t eax_9 = *(arg2 + 0x18)
    i_3 = i_1
    int32_t edx_2
    
    if (&i_3 u< eax_9)
        edx_2 = *(arg2 + 0x14)
    
    if (&i_3 u>= eax_9 || edx_2 u> &i_3)
        int32_t ecx_12 = *(arg2 + 0x1c)
        
        if (eax_9 == ecx_12)
            int32_t edx_6 = *(arg2 + 0x14)
            int32_t eax_15 = (eax_9 - edx_6) s>> 2
            
            if (eax_15 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_14 = (ecx_12 - edx_6) s>> 2
            
            if (eax_15 + 1 u> ecx_14)
                uint32_t edx_8 = ecx_14 u>> 1
                int32_t ecx_15
                
                if (0x3fffffff - edx_8 u>= ecx_14)
                    ecx_15 = ecx_14 + edx_8
                else
                    ecx_15 = 0
                
                if (ecx_15 u< eax_15 + 1)
                    ecx_15 = eax_15 + 1
                
                sub_6b0560(arg2 + 0x14, ecx_15)
        
        int32_t* eax_17 = *(arg2 + 0x18)
        
        if (eax_17 != 0)
            *eax_17 = i_1
    else
        int32_t ecx_7 = *(arg2 + 0x1c)
        
        if (eax_9 == ecx_7)
            int32_t eax_11 = (eax_9 - edx_2) s>> 2
            
            if (eax_11 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_9 = (ecx_7 - edx_2) s>> 2
            
            if (eax_11 + 1 u> ecx_9)
                uint32_t edx_4 = ecx_9 u>> 1
                int32_t ecx_10
                
                if (0x3fffffff - edx_4 u>= ecx_9)
                    ecx_10 = ecx_9 + edx_4
                else
                    ecx_10 = 0
                
                if (ecx_10 u< eax_11 + 1)
                    ecx_10 = eax_11 + 1
                
                sub_6b0560(arg2 + 0x14, ecx_10)
        
        int32_t* eax_13 = *(arg2 + 0x18)
        
        if (eax_13 != 0)
            *eax_13 = *(*(arg2 + 0x14) + ((&i_3 - edx_2) s>> 2 << 2))
    
    *(arg2 + 0x18) += 4

int32_t ebx_7 = (*(arg2 + 0x18) - *(arg2 + 0x14)) s>> 2
int32_t j

if (ebx_7 - 1 s> 0)
    int32_t i_5 = 1
    int32_t* esi_5 = nullptr
    i_3 = 1
    i_4 = ebx_7 - 1
    int32_t i_2
    
    do
        if (i_5 s< ebx_7)
            do
                int32_t eax_18 = *(arg2 + 0x14)
                void* ecx_16 = *(eax_18 + (i_5 << 2))
                void* edx_10 = *(esi_5 + eax_18)
                int32_t eax_19
                
                if (edx_10 != ecx_16)
                    eax_19 = *(ecx_16 + 8)
                
                if (edx_10 == ecx_16 || eax_19 == 0xffffffff)
                label_4b5af5:
                    j = *(arg2 + 0x14)
                    void* ecx_19 = *(esi_5 + j)
                    void* edx_12 = *(j + (i_5 << 2))
                    
                    if (edx_12 != ecx_19)
                        j = *(ecx_19 + 8)
                        
                        if (j != 0xffffffff)
                            int32_t ecx_21 = *var_c0
                            
                            do
                                int32_t eax_20 = j * 0xac
                                
                                if (*(edx_12 + 4) == *(eax_20 + ecx_21 + 4))
                                    j = *(arg2 + 0x14)
                                    int32_t ecx_22 = *(esi_5 + j)
                                    *(esi_5 + j) = *(j + (i_5 << 2))
                                    *(j + (i_5 << 2)) = ecx_22
                                    break
                                
                                j = *(eax_20 + ecx_21 + 8)
                            while (j != 0xffffffff)
                else
                    int32_t ecx_18 = *var_c0
                    
                    while (true)
                        j = eax_19 * 0xac
                        
                        if (*(edx_10 + 4) == *(j + ecx_18 + 4))
                            break
                        
                        eax_19 = *(j + ecx_18 + 8)
                        
                        if (eax_19 == 0xffffffff)
                            goto label_4b5af5
                
                i_5 += 1
            while (i_5 s< ebx_7)
            
            i_5 = i_3
        
        i_5 += 1
        esi_5 = &esi_5[1]
        i_2 = i_4
        i_4 -= 1
        i_3 = i_5
    while (i_2 != 1)

j.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return j
