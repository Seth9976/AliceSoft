// 函数: sub_5d6f00
// 地址: 0x5d6f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71250b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    int32_t __saved_edi
    (**arg1)(data_78c474 ^ &__saved_edi)
    bool cond:0_1 = (*(*arg1 + 8))(arg3) != 0
    void* eax_7 = *arg1
    
    if (cond:0_1)
        bool cond:1_1 = (*(eax_7 + 0xc))() s> 1
        eax_7 = *arg1
        
        if (not(cond:1_1))
            int32_t ebp = (*(eax_7 + 0x10))()
            int32_t ebx = 0
            int32_t var_18 = ebp
            int32_t var_20 = 0
            
            if (ebp s> 0)
                void** eax_11 = arg2 + 8
                
                do
                    int32_t eax_13 = (*(*arg1 + 0x1c))(ebx, 3)
                    arg3 = eax_13
                    
                    if (eax_13 s> 0)
                        arg3 = 1
                    
                    void* eax_15 = (*(*arg1 + 0x1c))(ebx, 4)
                    arg2 = eax_15
                    
                    if (eax_15 s<= 0)
                        arg2 = 0x64
                    
                    struct kiwi::CBGIInfo::VTable** edi_1 = operator new(0x18)
                    struct kiwi::CBGIInfo::VTable** var_10_1 = edi_1
                    int32_t var_4 = 0
                    
                    if (edi_1 == 0)
                        edi_1 = nullptr
                    else
                        int32_t eax_18 = (*(*arg1 + 0x1c))(ebx, 2)
                        int32_t eax_20 = (*(*arg1 + 0x1c))(ebx, 1)
                        edi_1[1] = (*(*arg1 + 0x1c))(ebx, 0)
                        edi_1[3] = eax_18
                        ebp = var_18
                        *edi_1 = &kiwi::CBGIInfo::`vftable'
                        edi_1[2] = eax_20
                        edi_1[4] = arg3
                        edi_1[5] = arg2
                    
                    int32_t var_4_1 = 0xffffffff
                    ebx += 1
                    *sub_4ccf80(eax_11, &var_20) = edi_1
                    var_20 = ebx
                while (ebx s< ebp)
            
            (*(*arg1 + 4))()
            int32_t eax_27
            eax_27.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_27
    
    (*(eax_7 + 4))()

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
