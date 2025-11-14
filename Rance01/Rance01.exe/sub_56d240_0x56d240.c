// 函数: sub_56d240
// 地址: 0x56d240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_713cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3
struct IGraphEngine::graphengine::CGraphEngine::VTable** ecx
eax_3, ecx = sub_56d520(arg1)
void* esi_1 = *arg1

if (esi_1 != 0)
    eax_3 = sub_562b10(ecx, esi_1, arg6)
    arg1[2] = eax_3
    
    if (eax_3 != 0 && (*(*eax_3 + 8))(eax_2).b != 0)
        arg1[0xf].b = arg8
        arg1[6] = arg2
        int32_t eax_7 = (*(*arg2 + 0x10))()
        int32_t* ecx_3 = arg1[6]
        arg1[7] = eax_7
        int32_t eax_9 = (*(*ecx_3 + 0x14))()
        int32_t i = 1
        arg1[8] = eax_9
        
        if (arg1[7] s> 1)
            do
                i *= 2
            while (i s< arg1[7])
        
        arg1[9] = i
        int32_t ecx_4 = 1
        
        if (eax_9 s> 1)
            do
                ecx_4 *= 2
            while (ecx_4 s< eax_9)
        
        arg1[0xa] = ecx_4
        arg1[0xb] = arg4
        arg1[0xc] = arg5
        sub_56d730(arg1)
        char eax_12
        
        if (arg1[0xf].b != 0 || (arg1[0xb] s<= arg1[7] && arg1[0xc] s<= arg1[8]))
            eax_12 = 0
        else
            eax_12 = 1
        
        arg1[0x12].b = eax_12
        
        if (arg3 == 0)
            goto label_56d3d6
        
        eax_3 = (*(*arg1[2] + 0x28))()
        arg1[3] = eax_3
        
        if (eax_3 != 0)
            void* esi_3 = *eax_3
            int32_t eax_15 = (*(*arg1[2] + 0x5c))(1)
            arg1[3]
            
            if ((*(esi_3 + 8))(arg1[9], arg1[0xa], 1, 1, eax_15) != 0)
                eax_3 = (*(*arg1[2] + 0x38))()
                arg1[4] = eax_3
                
                if (eax_3 != 0)
                    (*(*eax_3 + 0x28))(0, 0, arg1[7], arg1[8], fconvert.s(float.t(0)), 
                        fconvert.s(float.t(1)))
                label_56d3d6:
                    eax_3 = (*(*arg1[2] + 0x2c))()
                    arg1[5] = eax_3
                    
                    if (eax_3 != 0)
                        if ((*(*eax_3 + 8))(arg2, 0) == 0)
                            sub_604c90(0x74b5d0)
                            enum MESSAGEBOX_RESULT eax_21
                            eax_21.b = 0
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_21
                        
                        eax_3 = (*(*arg1[2] + 0x30))()
                        arg1[0x10] = eax_3
                        
                        if (eax_3 != 0)
                            int32_t var_28 = 0
                            int32_t var_24 = 0
                            int32_t var_20 = 0
                            int32_t var_c_1 = 0
                            int32_t var_2c = 0
                            int32_t* edi = &var_28
                            sub_61b5a0(&var_2c, edi)
                            var_2c = 4
                            sub_61b5a0(&var_2c, edi)
                            var_2c = 6
                            sub_61b5a0(&var_2c, edi)
                            int32_t eax_26 = var_28
                            
                            if ((*(*arg1[0x10] + 8))(4, eax_26, (var_24 - eax_26) s>> 2, 0) != 0)
                                if (sub_56d5a0(arg1) != 0)
                                    if (arg7 != 1 || arg6 == 0)
                                    label_56d4f9:
                                        arg1[0x13] = arg7
                                        sub_65ab60(&var_28)
                                        int32_t eax_34
                                        eax_34.b = 1
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return eax_34
                                    
                                    if ((*(*arg1[2] + 0x68))() == 0)
                                        goto label_56d4f9
                                    
                                    if (sub_56e120(arg1, arg6) != 0)
                                        goto label_56d4f9
                                    
                                    sub_604c90(0x74b620)
                            else
                                sub_604c90(0x74b5fc)
                            
                            sub_65ab60(&var_28)
                            int32_t eax_29
                            eax_29.b = 0
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_29
            else
                int32_t var_40_3 = arg1[0xa]
                int32_t var_44_1 = arg1[9]
                sub_604c90(0x74b598)

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
