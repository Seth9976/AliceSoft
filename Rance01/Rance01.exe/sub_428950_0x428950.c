// 函数: sub_428950
// 地址: 0x428950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722bc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_50 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 == 0 || arg3 s<= 0)
    result.b = 0
else
    sub_4286c0(arg1)
    result = arg2 + arg3
    var_3c = arg2
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    
    if (arg2 u>= result)
    label_428b68:
        result.b = 1
    else
        while (true)
            int32_t var_1c_1 = 0xf
            int32_t var_20_1 = 0
            char var_30 = 0
            int32_t var_4 = 0
            sub_401270(&var_30, nullptr, 0x72db23)
            
            if (sub_40ff90(&var_3c, &var_30, 4) != 0)
                char* ecx = var_3c
                
                if (&ecx[4] u<= result_1)
                    uint32_t eax_12 =
                        ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
                    var_3c = &ecx[4]
                    
                    if (&ecx[4 + eax_12] u<= result_1)
                        int32_t eax_13 = var_20_1
                        
                        if (var_20_1 u>= 4)
                            eax_13 = 4
                        
                        char* edx_2 = var_30.d
                        
                        if (var_1c_1 u< 0x10)
                            edx_2 = &var_30
                        
                        int32_t eax_14 = sub_402320(eax_13, edx_2, "FLAT", eax_13)
                        bool cond:0_1 = eax_14 == 0
                        
                        if (eax_14 == 0)
                            if (var_20_1 u>= 4)
                                eax_14.b = var_20_1 != 4
                            else
                                eax_14 = 0xffffffff
                            
                            cond:0_1 = eax_14 == 0
                        
                        eax_14.b = cond:0_1
                        
                        if (eax_14.b == 0)
                            int32_t eax_16 = var_20_1
                            
                            if (var_20_1 u>= 4)
                                eax_16 = 4
                            
                            char* edx_3 = var_30.d
                            
                            if (var_1c_1 u< 0x10)
                                edx_3 = &var_30
                            
                            int32_t eax_17 = sub_402320(eax_16, edx_3, "MTLC", eax_16)
                            bool cond:1_1 = eax_17 == 0
                            
                            if (eax_17 == 0)
                                if (var_20_1 u>= 4)
                                    eax_17.b = var_20_1 != 4
                                else
                                    eax_17 = 0xffffffff
                                
                                cond:1_1 = eax_17 == 0
                            
                            eax_17.b = cond:1_1
                            
                            if (eax_17.b == 0)
                                if (sub_402680("LIBL", &var_30).b == 0)
                                    goto label_428b42
                                
                                result = sub_428c60(arg1, &var_3c)
                                goto label_428b3e
                            
                            struct IInterface::partsengine::CFlatTimeLineData::VTable** eax_18 =
                                operator new(0x1c)
                            
                            if (eax_18 == 0)
                                eax_18 = nullptr
                            else
                                *eax_18 =
                                    &partsengine::CFlatTimeLineData::`vftable'{for `IInterface'}
                                eax_18[1] = 1
                                eax_18[2] = 0
                                eax_18[3] = 0
                                eax_18[4] = 0
                                eax_18[6] = 0xffffffff
                            
                            *(arg1 + 0x24) = eax_18
                            result = sub_42f6d0(eax_18, &var_3c)
                        else
                            result = sub_428ba0(arg1, &var_3c)
                        
                    label_428b3e:
                        
                        if (result.b != 0)
                        label_428b42:
                            int32_t var_4_1 = 0xffffffff
                            
                            if (var_1c_1 u>= 0x10)
                                int32_t var_54_5 = var_30.d
                                sub_6b4d5b()
                            
                            if (var_3c u>= result_1)
                                goto label_428b68
                            
                            continue
            
            sub_401110(&var_30)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
