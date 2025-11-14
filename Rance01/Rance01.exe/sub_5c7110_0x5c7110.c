// 函数: sub_5c7110
// 地址: 0x5c7110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7141eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_3c
__builtin_memset(&var_3c, 0, 0x1e)
int32_t var_1c = 0

if (sub_5c7ba0(arg1, &var_3c) != 0)
    int32_t esi_1 = (*(*arg1 + 0x10))(eax_2)
    int32_t var_84_1 = esi_1
    void* eax_7 = (*(*arg1 + 0x14))()
    void* var_88_1 = eax_7
    int32_t var_34
    
    if (esi_1 s> var_34)
        var_84_1 = var_34
        esi_1 = var_34
    
    if (esi_1 s> 0)
        void* var_30
        
        if (eax_7 s> var_30)
            var_88_1 = var_30
            eax_7 = var_30
        
        if (eax_7 s> 0)
            int16_t* ecx_6 = eax_7 & 1
            void* eax_8 = eax_7 + ecx_6
            int32_t edi_3 = esi_1 & 1
            int32_t edx_3 = edi_3 + esi_1
            int16_t* var_6c = nullptr
            int32_t var_68_1 = 0
            int32_t var_64_1 = 0
            int32_t ebx_2 = eax_8 * edx_3
            void* var_78 = eax_8
            sub_404f60((ebx_2 << 4) + 0x444, &var_6c)
            int32_t var_c_1 = 0
            int32_t var_80 = 0
            int16_t var_20
            
            if (var_20.b == 0)
                goto label_5c732d
            
            int32_t var_2c
            
            if (var_2c == 0x18 || var_2c == 0x20)
                int32_t var_4c = 0
                int32_t var_48_1 = 0
                int32_t var_44_1 = 0
                sub_404f60(ebx_2 * 3, &var_4c)
                var_c_1.b = 1
                
                if (sub_5c7560(&var_4c, &var_3c, 0, 0, var_84_1, var_88_1, edi_3, ecx_6) == 0)
                    sub_65ab60(&var_4c)
                else
                    int32_t var_5c = 0
                    int32_t var_58_1 = 0
                    int32_t var_54_1 = 0
                    sub_404f60(ebx_2 * 3, &var_5c)
                    var_c_1.b = 2
                    sub_5c7790(edx_3, &var_5c, &var_4c, var_78)
                    int32_t edx_6 = var_5c
                    int16_t* esi_5 = var_6c
                    int32_t* esi_7 = &var_5c
                    
                    if (sub_5c74d0(&esi_5[0x22], var_68_1 - esi_5 - 0x44, edx_6, var_58_1 - edx_6, 
                            &var_80) != 0)
                        sub_65ab60(esi_7)
                        var_c_1.b = 0
                        sub_65ab60(&var_4c)
                    label_5c732d:
                        void* esi_13 = nullptr
                        var_78 = nullptr
                        int16_t* ebx_3
                        
                        if (var_20:1.b == 0)
                            ebx_3 = var_6c
                        label_5c7413:
                            sub_5c7a80(var_88_1, esi_13, ebx_3, 0, 0, var_84_1, var_88_1, var_80)
                            void* ecx_22 = esi_13 + var_80 + 0x44
                            struct IMemory::common::CIMemory::VTable** eax_31 = operator new(0x20)
                            struct IMemory::common::CIMemory::VTable** var_74_2 = eax_31
                            var_c_1.b = 4
                            struct IMemory::common::CIMemory::VTable** result
                            
                            if (eax_31 == 0)
                                result = nullptr
                            else
                                result = sub_631440(eax_31)
                            
                            var_c_1.b = 0
                            bool cond:1 = (*result)->vFunc_2(ecx_22) != 0
                            struct IMemory::common::CIMemory::VTable* eax_35 = *result
                            
                            if (cond:1)
                                sub_6c02a0((*result)->vFunc_6(ebx_3, eax_35->vFunc_5()))
                                sub_65ab60(&var_6c)
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return result
                            
                            eax_35->vFunc_1()
                            sub_65ab60(&var_6c)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return 0
                        
                        var_5c = 0
                        int32_t var_58_2 = 0
                        int32_t var_54_2 = 0
                        int32_t* esi_11 = &var_5c
                        sub_404f60(ebx_2, esi_11)
                        var_c_1.b = 3
                        
                        if (sub_5c7860(&var_5c, &var_3c, 0, nullptr, var_84_1, var_88_1, edi_3, 
                                ecx_6) == 0)
                            sub_65ab60(esi_11)
                            sub_65ab60(&var_6c)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return 0
                        
                        int32_t edx_8 = var_5c
                        ebx_3 = var_6c
                        int32_t ecx_19 = var_80
                        int32_t* esi_8 = &var_5c
                        
                        if (sub_5c74d0(ebx_3 + ecx_19 + 0x44, var_68_1 - ebx_3 - ecx_19 - 0x44, 
                                edx_8, var_58_2 - edx_8, &var_78) != 0)
                            var_c_1.b = 0
                            sub_65ab60(esi_8)
                            esi_13 = var_78
                            goto label_5c7413
                        
                        sub_65ab60(esi_8)
                    else
                        sub_65ab60(esi_7)
                        sub_65ab60(&var_4c)
            
            sub_65ab60(&var_6c)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
