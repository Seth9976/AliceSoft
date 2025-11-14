// 函数: sub_4afc90
// 地址: 0x4afc90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7240ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDrawD3DPlugin::sealengine::CPlugin::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_797d4c
int32_t* ecx = *(ebx + 0xc)

if (ecx != 0)
    if (*(ebx + 0x10) != 0)
    label_4afcf5:
        
        if (sub_4afaf0(ebx) != 0)
            HANDLE hHandle = *(ebx + 0x34)
            enum WAIT_EVENT eax_8
            
            if (hHandle != 0)
                eax_8 = WaitForSingleObject(hHandle, 0)
            
            char eax_10
            
            if (hHandle == 0 || eax_8 != WAIT_TIMEOUT)
                eax_10 = sub_576620(ebx + 0x18)
            
            if ((hHandle != 0 && eax_8 == WAIT_TIMEOUT) || eax_10 != 0)
                if (*(ebx + 0x3c) == 0)
                    int32_t eax_12 = (*(**(ebx + 0xc) + 0xc))(0x756880)
                    
                    if (eax_12 == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                    
                    *(ebx + 0x3c) = eax_12
                    int32_t* ecx_5 = *(ebx + 0x3c)
                    
                    if (ecx_5 == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                    
                    if ((**ecx_5)(ebx + 4) == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                
                struct IDrawD3DPlugin::sealengine::CPlugin::VTable** ebp_1 = operator new(0x21c)
                var_10 = ebp_1
                int32_t var_4 = 0
                
                if (ebp_1 == 0)
                    ebp_1 = nullptr
                else
                    *ebp_1 = &sealengine::CPlugin::`vftable'{for `IDrawD3DPlugin'}
                    ebp_1[1] = 1
                    ebp_1[2] = 0xffffffff
                    ebp_1[3] = ebx + 0x18
                    sub_504ae0(&ebp_1[4], ebx + 0x18)
                
                int32_t var_4_1 = 0xffffffff
                int32_t edx_5 = *(ebx + 0xc)
                int32_t* ecx_6 = *(ebx + 0x10)
                int32_t var_28_2 = *(ebx + 0x14)
                var_10 = ebp_1
                
                if (sub_504b90(ecx_6, &ebp_1[4], edx_5) != 0)
                    int32_t ecx_10 = *(ebx + 0x44)
                    void** eax_22 = *(ebx + 0x40)
                    
                    if (eax_22 != ecx_10)
                        while (*eax_22 != 0)
                            eax_22 = &eax_22[1]
                            
                            if (eax_22 == ecx_10)
                                break
                        
                        if (eax_22 != ecx_10)
                            *eax_22 = ebp_1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return (eax_22 - *(ebx + 0x40)) s>> 2
                    
                    sub_61b5a0(&var_10, ebx + 0x40)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return ((*(ebx + 0x44) - *(ebx + 0x40)) s>> 2) - 1
                
                (*ebp_1)->vFunc_1(eax_2)
    else
        int32_t* eax_4 = (*(*ecx + 8))(eax_2)
        
        if (eax_4 != 0)
            int32_t eax_6 = (**eax_4)(0x756870)
            *(ebx + 0x10) = eax_6
            
            if (eax_6 != 0)
                goto label_4afcf5

fsbase->NtTib.ExceptionList = ExceptionList
return 0xffffffff
