// 函数: sub_5b12c0
// 地址: 0x5b12c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71680b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 s< 0x24)
    result.b = 0
else
    void* esi_1 = arg3
    result = esi_1 + arg1
    void* var_18 = esi_1
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    
    if (esi_1 + 4 u> result || esi_1 + 8 u> result)
        result.b = 0
    else
        result = ((zx.d(*(esi_1 + 7)) << 8 | zx.d(*(esi_1 + 6))) << 8 | zx.d(*(esi_1 + 5))) << 8
            | zx.d(*(esi_1 + 4))
        var_18 = esi_1 + 8
        
        if (result != 0)
            result.b = 0
        else
            int32_t* ecx_2 = &var_18
            uint32_t var_1c
            
            if (sub_5546f0(ecx_2, &var_1c).b == 0)
                result.b = 0
            else if (sub_5546f0(ecx_2, &var_1c).b == 0)
                result.b = 0
            else
                int32_t* ecx_3 = &var_18
                uint32_t var_30
                uint32_t var_20
                
                if (sub_5546f0(ecx_3, &var_30).b == 0)
                    result.b = 0
                else
                    uint32_t var_2c
                    
                    if (sub_5546f0(ecx_3, &var_20).b == 0)
                        result.b = 0
                    else if (sub_5546f0(ecx_3, &var_2c).b == 0)
                        result.b = 0
                    else
                        void** ecx_4 = &var_18
                        uint32_t var_28
                        uint32_t var_24
                        
                        if (sub_5546f0(ecx_4, &var_28).b == 0)
                            result.b = 0
                        else if (sub_5546f0(ecx_4, &var_24).b == 0)
                            result.b = 0
                        else
                            uint32_t ebx_3 = var_20
                            
                            if (var_2c s<= 0 || ebx_3 s< 0 || ebx_3 s>= arg1)
                                result.b = 0
                            else
                                result.b = 1
                            
                            char var_31_1
                            
                            if (var_24 s<= 0)
                                var_31_1 = 0
                            else
                                uint32_t ecx_5 = var_28
                                
                                if (ecx_5 s< 0)
                                    var_31_1 = 0
                                else
                                    var_31_1 = 1
                                    
                                    if (ecx_5 s>= arg1)
                                        var_31_1 = 0
                            
                            uint32_t ebp_1 = var_1c
                            int32_t* edi_1 = nullptr
                            
                            if (result.b == 0)
                                goto label_5b146e
                            
                            void* ebx_4 = ebx_3 + esi_1
                            sub_5b1230(ebx_4)
                            uint32_t eax_9 = operator new(0x1c)
                            var_1c = eax_9
                            struct ICGSurface::decodecg::CCGSurface::VTable** esi_2 = nullptr
                            int32_t var_4 = 0
                            
                            if (eax_9 != 0)
                                esi_2 = sub_5b1110(eax_9)
                            
                            int32_t var_4_1 = 0xffffffff
                            
                            if (sub_5b1ec0(ebp_1, var_30, esi_2, ebx_4, var_2c) != 0)
                                edi_1 = esi_2
                                sub_5b1230(ebx_4)
                                esi_1 = arg3
                            label_5b146e:
                                
                                if (var_31_1 != 0)
                                    void* esi_4 = esi_1 + var_28
                                    sub_5b1230(esi_4)
                                    int32_t* eax_16 = (*(*arg4 + 8))(esi_4, var_24)
                                    int32_t ecx_9
                                    result, ecx_9 = sub_5b1230(esi_4)
                                    
                                    if (eax_16 != 0)
                                        uint32_t edx_4 = var_30
                                        uint32_t var_4c_15 = ebp_1
                                        int32_t* eax_18
                                        
                                        if (edi_1 == 0)
                                            eax_18 = sub_5b3b30(result, edx_4, ecx_9)
                                        else
                                            eax_18 = sub_5b3b10(result, edx_4, ecx_9)
                                        
                                        if (eax_18 != 0)
                                            if (edi_1 != 0)
                                                sub_5b1550(eax_18, edi_1, ebp_1, var_30)
                                            
                                            sub_5b15e0(eax_18, eax_16, ebp_1, var_30)
                                            
                                            if (edi_1 != 0)
                                                (*(*edi_1 + 4))(eax_2)
                                            
                                            (*(*eax_16 + 4))(eax_2)
                                            arg2[4] = eax_18
                                            result.b = 1
                                        else
                                            if (edi_1 != 0)
                                                (*(*edi_1 + 4))(eax_2)
                                            
                                            (*(*eax_16 + 4))(eax_2)
                                            result.b = 0
                                    else if (edi_1 == 0)
                                        result.b = 0
                                    else
                                        (*(*edi_1 + 4))(eax_2)
                                        result.b = 0
                                else
                                    arg2[4] = edi_1
                                    result.b = 1
                            else
                                sub_5b1230(ebx_4)
                                
                                if (esi_2 != 0)
                                    sub_5b11a0(esi_2)
                                
                                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
