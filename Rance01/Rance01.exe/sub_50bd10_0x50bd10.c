// 函数: sub_50bd10
// 地址: 0x50bd10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f8e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg2
*arg4 = 0
int32_t* result

if (sub_50d0f0(ebx, arg1) == 0)
    if (sub_4ae840(ebx, arg1 + 0x30) == 0)
        result = nullptr
    else
        struct IMemory::common::CIMemory::VTable** eax_21 = sub_4ae920(ebx, arg1 + 0x30)
        
        if (eax_21 != 0)
            void* ebp_2 = **(arg1 + 0x28)
            int32_t eax_25 = (*eax_21)->vFunc_6((*eax_21)->vFunc_5(eax_2))
            *(arg1 + 0x28)
            int32_t* eax_26 = (*(ebp_2 + 8))(eax_25)
            
            if (eax_26 != 0)
                (*eax_21)->vFunc_1()
                struct IMemory::common::CIMemory::VTable** var_34 = nullptr
                char eax_30 = sub_50c430(arg1, arg3, &var_34)
                struct IMemory::common::CIMemory::VTable** esi_12
                
                if (eax_30 != 0)
                    esi_12 = var_34
                
                if (eax_30 == 0 || esi_12 == 0)
                    (*(*eax_26 + 4))()
                    result = nullptr
                else
                    void* ebx_2 = **(arg1 + 0x28)
                    int32_t eax_35 = (*esi_12)->vFunc_6((*esi_12)->vFunc_5())
                    *(arg1 + 0x28)
                    int32_t* eax_36 = (*(ebx_2 + 8))(eax_35)
                    
                    if (eax_36 != 0)
                        (*esi_12)->vFunc_1()
                        int32_t* result_2 = sub_50c570(eax_36, arg1, eax_26)
                        
                        if (result_2 == 0)
                            void** ecx_29
                            
                            if (arg3[5] u< 0x10)
                                ecx_29 = arg3
                            else
                                ecx_29 = *arg3
                            
                            void** eax_43 = arg2
                            
                            if (eax_43[5] u>= 0x10)
                                eax_43 = *eax_43
                            
                            void** var_4c_19 = ecx_29
                            void** var_50_5 = eax_43
                            sub_51ddc0(0x7542a8)
                        
                        void* edx_21 = *eax_26
                        *arg4 = 1
                        (*(edx_21 + 4))()
                        (*(*eax_36 + 4))()
                        result = result_2
                    else
                        void** eax_37 = arg3
                        
                        if (eax_37[5] u>= 0x10)
                            eax_37 = *eax_37
                        
                        void** var_4c_17 = eax_37
                        sub_51ddc0(0x754284)
                        (*(*eax_26 + 4))()
                        (*esi_12)->vFunc_1()
                        result = nullptr
            else
                if (ebx[5] u>= 0x10)
                    ebx = *ebx
                
                void** var_4c_13 = ebx
                sub_51ddc0(0x754260)
                (*eax_21)->vFunc_1()
                result = nullptr
        else
            if (ebx[5] u>= 0x10)
                ebx = *ebx
            
            void** var_4c_10 = ebx
            sub_51ddc0(0x7542f8)
            result = nullptr
else
    int32_t var_30 = 0
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    int32_t var_4 = 0
    
    if (sub_50c390(ebx, arg1) != 0)
        int32_t edx_1 = var_30
        
        if (edx_1 != var_2c_1)
            int32_t* eax_9 = (*(**(arg1 + 0x28) + 8))(edx_1, var_2c_1 - edx_1)
            
            if (eax_9 == 0)
                sub_65ab60(&var_30)
                result = nullptr
            else
                void** ebx_1 = arg3
                
                if (sub_50d0f0(ebx_1, arg1) == 0)
                    (*(*eax_9 + 4))(eax_2)
                    
                    if (ebx_1[5] u>= 0x10)
                        ebx_1 = *ebx_1
                    
                    void** var_4c_9 = ebx_1
                    sub_51ddc0(0x75422c)
                    sub_65ab60(&var_30)
                    result = nullptr
                else
                    int32_t var_20 = 0
                    int32_t var_1c_1 = 0
                    int32_t var_18_1 = 0
                    var_4.b = 1
                    
                    if (sub_50c390(ebx_1, arg1) != 0)
                        int32_t eax_13 = var_20
                        int32_t* eax_15 = (*(**(arg1 + 0x28) + 8))(eax_13, var_1c_1 - eax_13)
                        
                        if (eax_15 == 0)
                            (*(*eax_9 + 4))(eax_2)
                            goto label_50be07
                        
                        int32_t* result_1 = sub_50c570(eax_15, arg1, eax_9)
                        (*(*eax_9 + 4))(eax_2)
                        (*(*eax_15 + 4))()
                        *arg4 = 1
                        sub_65ab60(&var_20)
                        sub_65ab60(&var_30)
                        result = result_1
                    else
                        (*(*eax_9 + 4))(eax_2)
                    label_50be07:
                        sub_65ab60(&var_20)
                        sub_65ab60(&var_30)
                        result = nullptr
        else if (edx_1 == 0)
            result = nullptr
        else
            int32_t var_4c_3 = edx_1
            sub_6b4d5b()
            result = nullptr
    else
        int32_t eax_6 = var_30
        
        if (eax_6 != 0)
            int32_t var_4c_2 = eax_6
            sub_6b4d5b()
        
        result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
