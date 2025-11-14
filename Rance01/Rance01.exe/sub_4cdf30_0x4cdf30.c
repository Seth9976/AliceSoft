// 函数: sub_4cdf30
// 地址: 0x4cdf30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7204d3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4ce2c0(arg1)
void* ebp = arg2
int32_t esi = 0
int32_t ebx_2 = (*(ebp + 0x54) - *(ebp + 0x50)) s>> 2
int32_t edi = 0
int32_t var_20 = ebx_2
int32_t var_38 = 0
int32_t var_34 = 0
int32_t result

if (ebx_2 s> 0)
    while (true)
        if (edi s>= 0 && edi s< (*(ebp + 0x54) - *(ebp + 0x50)) s>> 2)
            int32_t* edx_2 = *(*(ebp + 0x50) + (edi << 2))
            
            if (edx_2 != 0)
                int32_t ecx_4 = edx_2[0xa]
                result = edx_2[0xb]
                
                if (ecx_4 == result)
                label_4ce258:
                    edi += 1
                    var_34 = edi
                    
                    if (edi s>= ebx_2)
                        break
                    
                    continue
                else
                    struct sealengine::CDrawInstance::sealengine::CMesh::VTable** edi_1 = edx_2[7]
                    int32_t eax_4 = result - ecx_4
                    struct sealengine::CDrawInstance::sealengine::CMesh::VTable** var_28 = edx_2[8]
                    int32_t eax_5
                    int32_t edx_4
                    edx_4:eax_5 = muls.dp.d(0xb60b60b7, eax_4)
                    struct sealengine::CDrawInstance::sealengine::CMesh::VTable** var_40 = edi_1
                    float var_1c = 0f
                    int32_t var_18_1 = 0
                    int32_t var_14_1 = 0
                    sub_4cf240(eax_4 s/ 0xb4, (edx_4 + eax_4) s>> 7, eax_4, &var_1c)
                    int32_t var_4 = 0
                    float ebp_1 = var_1c
                    int32_t ebx_5 = (var_18_1 i- ebp_1) s/ 0x114
                    
                    if (ebx_5 s<= 0)
                    label_4ce04f:
                        void** ecx_10 = *(arg3 + 4)
                        void** eax_12 = ecx_10[1]
                        
                        while (*(eax_12 + 0x15) == 0)
                            if (eax_12[3] s>= var_40)
                                ecx_10 = eax_12
                                eax_12 = *eax_12
                            else
                                eax_12 = eax_12[2]
                        
                        void** edi_4 = *(arg3 + 4)
                        void** var_30 = ecx_10
                        void*** eax_14
                        
                        if (ecx_10 == edi_4 || var_40 s< ecx_10[3])
                            void** var_2c = edi_4
                            eax_14 = &var_2c
                        else
                            eax_14 = &var_30
                        
                        void** eax_17 = *eax_14
                        char* esi_2
                        
                        if (eax_17 != edi_4)
                            esi_2 = eax_17[4]
                            
                            if (esi_2 != 0 && *esi_2 != 0)
                                char** edx_10 = *(esi_2 + 0x30)
                                eax_17 = (*(esi_2 + 0x34) - edx_10) s>> 2
                                
                                if (eax_17 s> 0)
                                    struct sealengine::CDrawInstance::sealengine::CMesh::VTable** 
                                        ecx_11 = var_28
                                    char* ecx_12
                                    
                                    if (ecx_11 s>= 0 && ecx_11 s< eax_17)
                                        ecx_12 = edx_10[ecx_11]
                                    
                                    if (ecx_11 s>= 0 && ecx_11 s< eax_17 && ecx_12 != 0)
                                        esi_2 = ecx_12
                                    else if (eax_17 s> 0)
                                        ecx_12 = *edx_10
                                        
                                        if (ecx_12 != 0)
                                            esi_2 = ecx_12
                        else
                            esi_2 = nullptr
                        
                        eax_17.b = *(edx_2 + 0x25)
                        int32_t ebp_2 = 0
                        
                        if (eax_17.b != 0)
                            if (esi_2 != 0 && *esi_2 == 0)
                                var_28 = var_40
                                int32_t* var_24
                                sub_42e070(arg3, &var_24, &var_28)
                                int32_t* eax_19 = var_24
                                
                                if (eax_19 != edi_4)
                                    esi_2 = eax_19[4]
                                    
                                    if (esi_2 != 0)
                                        int32_t eax_22 = (*(esi_2 + 0x34) - *(esi_2 + 0x30)) s>> 2
                                        
                                        if (eax_22 s> 1)
                                            ebp_2 = *(*(esi_2 + 0x30) + 4)
                                        else
                                            ebp_2 = 0
                                        
                                        if (eax_22 s> 0)
                                            esi_2 = **(esi_2 + 0x30)
                                        else
                                            esi_2 = nullptr
                                else
                                    esi_2 = nullptr
                            else if (eax_17.b != 0 && esi_2 != 0 && *esi_2 != 0)
                                char** ecx_16 = *(esi_2 + 0x30)
                                int32_t eax_25 = (*(esi_2 + 0x34) - ecx_16) s>> 2
                                
                                if (eax_25 s> 1)
                                    ebp_2 = ecx_16[1]
                                else
                                    ebp_2 = 0
                                
                                if (eax_25 s> 0)
                                    esi_2 = *ecx_16
                                else
                                    esi_2 = nullptr
                        
                        struct sealengine::CDrawInstance::sealengine::CMesh::VTable** eax_26 =
                            operator new(0xfc)
                        var_28 = eax_26
                        var_4.b = 1
                        struct sealengine::CDrawInstance::sealengine::CMesh::VTable** edi_5
                        
                        if (eax_26 == 0)
                            edi_5 = nullptr
                        else
                            edi_5 = sub_4cd140(eax_26)
                        
                        var_4.b = 0
                        var_40 = edi_5
                        
                        if (sub_4cd350(edi_5, esi_2, ebp_2, &var_1c, var_38, arg2, arg4, edx_2)
                                == 0)
                            if (edi_5 != 0)
                                sub_4cd2a0(edi_5)
                                struct sealengine::CDrawInstance::sealengine::CMesh::VTable** 
                                    var_58_8 = edi_5
                                sub_6b4d5b()
                            
                            int32_t var_4_3 = 0xffffffff
                            sub_4bf0f0(&var_1c)
                            result.b = 0
                            goto label_4ce26b
                        
                        int32_t eax_31 = arg1[1]
                        int32_t ecx_18
                        
                        if (&var_40 u< eax_31)
                            ecx_18 = *arg1
                        
                        if (&var_40 u>= eax_31 || ecx_18 u> &var_40)
                            if (eax_31 == arg1[2])
                                sub_4307a0(arg1)
                            
                            struct sealengine::CDrawInstance::sealengine::CMesh::VTable*** eax_36 =
                                arg1[1]
                            
                            if (eax_36 != 0)
                                *eax_36 = edi_5
                        else
                            if (eax_31 == arg1[2])
                                sub_4307a0(arg1)
                            
                            int32_t* eax_34 = arg1[1]
                            
                            if (eax_34 != 0)
                                *eax_34 = *(*arg1 + ((&var_40 - ecx_18) s>> 2 << 2))
                        
                        arg1[1] += 4
                        var_38 += ebx_5 * 3
                        int32_t var_4_1 = 0xffffffff
                        sub_4bf0f0(&var_1c)
                        ebp = arg2
                        edi = var_34
                        ebx_2 = var_20
                        esi = 0
                        goto label_4ce258
                    
                    int32_t edi_3 = 0
                    
                    while (true)
                        int32_t edx_8
                        edx_8.b = edx_2[0x1f].b
                        
                        if (sub_4be390(edx_2[0xa] + edi_3, edx_8.b, ebp_1) == 0)
                            int32_t var_4_2 = 0xffffffff
                            sub_4bf0f0(&var_1c)
                            break
                        
                        esi += 1
                        edi_3 += 0xb4
                        ebp_1 += 0x114
                        
                        if (esi s>= ebx_5)
                            goto label_4ce04f
        
        result.b = 0
        goto label_4ce26b

result.b = 1
label_4ce26b:
fsbase->NtTib.ExceptionList = ExceptionList
return result
