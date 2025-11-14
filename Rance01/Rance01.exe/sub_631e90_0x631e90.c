// 函数: sub_631e90
// 地址: 0x631e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72338e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = data_78c474 ^ &var_88
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = data_797dd0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(ebp + 0x48) != 0)
    result.b = 1
else
    struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = sub_597300(0x733a04)
    
    if (ebx_1 != 0)
        result = sub_5b3ab0(0x733a64)
        *(ebp + 0x14) = result
        
        if (result == 0)
            result.b = 0
        else
            uint32_t eax_6 = zx.d(sub_4022d0(0x733a54, 0x757578))
            int32_t eax_7 = neg.d(eax_6)
            result = sbb.d(eax_7, eax_7, eax_6 != 0) & data_797d3c
            *(ebp + 0x18) = result
            
            if (result == 0)
                result.b = 0
            else
                result = sub_597920()
                *(ebp + 0x1c) = result
                
                if (result == 0)
                    result.b = 0
                else
                    struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = (*ebx_1)->Next(0x733a14)
                    
                    if (esi_1 == 0)
                        result.b = 0
                    else
                        uint32_t eax_11 = zx.d(sub_4022d0(0x733a34, 0x7580fc))
                        int32_t eax_12 = neg.d(eax_11)
                        result = sbb.d(eax_12, eax_12, eax_11 != 0) & data_797d28
                        *(ebp + 0x10) = result
                        
                        if (result == 0)
                            result.b = 0
                        else
                            int32_t* eax_15 = (*ebx_1)->Next(0x733a24)
                            
                            if (eax_15 == 0)
                                *(ebp + 0xc) = 0
                            else
                                *(ebp + 0xc) = (**eax_15)(eax_4)
                            
                            (***(ebp + 0x18))(eax_4)
                            (***(ebp + 0x10))()
                            int32_t var_4 = 0
                            void var_48
                            void var_2c
                            sub_401940(&var_2c, sub_402be0(&var_48, (*esi_1)->__offset(0x14).d()), 
                                &var_48)
                            void* var_a0_1 = &var_2c
                            var_4.b = 1
                            void** var_64
                            sub_402c60(&var_64, "CG.afa", nullptr)
                            sub_401110(&var_2c)
                            int32_t var_6c_1 = 0xf
                            int32_t var_70_1 = 0
                            char var_80 = 0
                            ebx_1.b = 4
                            char* esi_2 = &var_80
                            var_4.b = 4
                            sub_586de0(esi_2)
                            sub_5870d0(&var_80)
                            sub_402000(esi_2, &var_64, 0, 0xffffffff)
                            
                            if (sub_602830(&var_80) != 0)
                                void** eax_27 = var_64
                                int32_t var_50
                                
                                if (var_50 u< 0x10)
                                    eax_27 = &var_64
                                
                                if ((*(**(ebp + 0x10) + 0xc))(2, eax_27) == 0)
                                    char* eax_30 = var_80.d
                                    
                                    if (var_6c_1 u< 0x10)
                                        eax_30 = &var_80
                                    
                                    char* var_a0_4 = eax_30
                                    sub_604c90("CGAFA")
                            
                            struct IInterface::cgmanager::CCGCache::VTable** eax_31 =
                                operator new(0x24)
                            struct IInterface::cgmanager::CCGCache::VTable** var_84_1 = eax_31
                            var_4.b = 5
                            struct IInterface::cgmanager::CCGCache::VTable** eax_32
                            
                            if (eax_31 == 0)
                                eax_32 = nullptr
                            else
                                eax_32 =
                                    sub_631620(*(ebp + 0x1c), *(ebp + 0x18), eax_31, *(ebp + 4))
                            
                            var_4.b = 4
                            ebx_1.b = *(ebp + 0xc)
                            *(ebp + 0x20) = eax_32
                            sub_632820(ebp + 0x24)
                            *(ebp + 0x24) = ebx_1.b
                            
                            if (ebx_1.b != 0)
                                sub_632970(ebp + 0x24)
                                sub_632ad0(ebp + 0x24)
                            
                            sub_4c1cf0(&var_80)
                            sub_401110(&var_64)
                            sub_401110(&var_48)
                            result.b = 1
    else
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_88)
return result
