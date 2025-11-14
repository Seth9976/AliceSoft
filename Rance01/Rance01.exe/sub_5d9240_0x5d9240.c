// 函数: sub_5d9240
// 地址: 0x5d9240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71250b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    int32_t __saved_edi
    (**arg1)(data_78c474 ^ &__saved_edi)
    int32_t arg_8
    bool cond:0_1 = (*(*arg1 + 8))(arg_8) == 0
    void* eax_7 = *arg1
    
    if (not(cond:0_1))
        bool cond:1_1 = (*(eax_7 + 0xc))() s> 1
        eax_7 = *arg1
        
        if (not(cond:1_1))
            int32_t edi_1 = (*(eax_7 + 0x14))()
            int32_t var_20_1 = edi_1
            
            if (edi_1 == 3 || edi_1 == 4)
                int32_t eax_11 = (*(*arg1 + 0x10))()
                int32_t ebx = 0
                arg_8 = 0
                
                if (eax_11 s> 0)
                    while (true)
                        int32_t ebp_1
                        
                        if (edi_1 != 3)
                            ebp_1 = (*(*arg1 + 0x1c))(ebx, 3)
                        
                        if (edi_1 == 3 || ebp_1 s<= 0)
                            ebp_1 = 0x64
                        
                        struct kiwi::CWAIInfo::VTable** edi_2 = operator new(0x14)
                        struct kiwi::CWAIInfo::VTable** var_10_1 = edi_2
                        int32_t var_4 = 0
                        
                        if (edi_2 == 0)
                            edi_2 = nullptr
                        else
                            int32_t eax_18 = (*(*arg1 + 0x1c))(ebx, 2)
                            void* eax_20 = (*(*arg1 + 0x1c))(ebx, 1)
                            int32_t eax_22 = (*(*arg1 + 0x1c))(ebx, 0)
                            *edi_2 = &kiwi::CWAIInfo::`vftable'
                            edi_2[1] = eax_22
                            edi_2[2] = eax_20
                            edi_2[3] = eax_18
                            edi_2[4] = ebp_1
                        
                        int32_t var_4_1 = 0xffffffff
                        ebx += 1
                        *sub_4ccf80(arg2 + 8, &arg_8) = edi_2
                        arg_8 = ebx
                        
                        if (ebx s>= eax_11)
                            break
                        
                        edi_1 = var_20_1
                
                (*(*arg1 + 4))()
                int32_t eax_26
                eax_26.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_26
            
            eax_7 = *arg1
    
    (*(eax_7 + 4))()

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
