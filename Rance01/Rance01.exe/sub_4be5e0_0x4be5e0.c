// 函数: sub_4be5e0
// 地址: 0x4be5e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7153a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_1 = 0
int32_t* edi = arg1
int32_t* var_24 = arg1
int32_t i

do
    void* ebp_3 = *edi * 0x2c + *(arg3 + 0x60)
    int32_t esi_1 = 0
    int32_t* ecx_1 = nullptr
    int32_t var_1c = 0
    int32_t* var_18_1 = nullptr
    int32_t var_14_1 = 0
    int32_t var_4 = 0
    int32_t* j = *(ebp_3 + 0xc)
    int32_t* j_1 = j
    
    if (j != *(ebp_3 + 0x10))
        int32_t ebx_1 = 0
        
        do
            int32_t* edi_1 = *arg2 + (*j << 2)
            
            if (edi_1 u>= ecx_1 || esi_1 u> edi_1)
                if (ecx_1 == ebx_1)
                    int32_t eax_12 = (ecx_1 - esi_1) s>> 2
                    
                    if (eax_12 u> 0x3ffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t edx_9 = (ebx_1 - esi_1) s>> 2
                    
                    if (eax_12 + 1 u> edx_9)
                        uint32_t ecx_5 = edx_9 u>> 1
                        int32_t edx_10
                        
                        if (0x3fffffff - ecx_5 u>= edx_9)
                            edx_10 = edx_9 + ecx_5
                        else
                            edx_10 = 0
                        
                        if (edx_10 u< eax_12 + 1)
                            edx_10 = eax_12 + 1
                        
                        sub_6b0560(&var_1c, edx_10)
                        ebx_1 = var_14_1
                        ecx_1 = var_18_1
                        esi_1 = var_1c
                
                if (ecx_1 != 0)
                    *ecx_1 = *edi_1
            else
                int32_t edi_3 = (edi_1 - esi_1) s>> 2
                
                if (ecx_1 == ebx_1)
                    int32_t eax_8 = (ecx_1 - esi_1) s>> 2
                    
                    if (eax_8 u> 0x3ffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t edx_4 = (ebx_1 - esi_1) s>> 2
                    
                    if (eax_8 + 1 u> edx_4)
                        uint32_t ecx_3 = edx_4 u>> 1
                        int32_t edx_5
                        
                        if (0x3fffffff - ecx_3 u>= edx_4)
                            edx_5 = edx_4 + ecx_3
                        else
                            edx_5 = 0
                        
                        if (edx_5 u< eax_8 + 1)
                            edx_5 = eax_8 + 1
                        
                        sub_6b0560(&var_1c, edx_5)
                        ebx_1 = var_14_1
                        ecx_1 = var_18_1
                        esi_1 = var_1c
                
                if (ecx_1 != 0)
                    *ecx_1 = *(esi_1 + (edi_3 << 2))
            
            j = &j_1[1]
            ecx_1 = &ecx_1[1]
            var_18_1 = ecx_1
            j_1 = j
        while (j != *(ebp_3 + 0x10))
        
        edi = var_24
    
    sub_4b55f0(&edi[0xe], &var_1c)
    sub_4b55f0(&edi[0x12], ebp_3 + 0x1c)
    int32_t var_4_1 = 0xffffffff
    
    if (esi_1 != 0)
        int32_t var_48_5 = esi_1
        sub_6b4d5b()
    
    i = i_1 + 1
    edi = &edi[0x16]
    var_1c = 0
    int32_t var_18_2 = 0
    int32_t var_14_2 = 0
    i_1 = i
    var_24 = edi
while (i s< 3)

i.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return i
