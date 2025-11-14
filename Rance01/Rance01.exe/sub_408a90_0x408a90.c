// 函数: sub_408a90
// 地址: 0x408a90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722c5e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_esi
int32_t eax_4 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_797d2c
struct IInterface::chipmunk::CErrorMessage::VTable** eax_5 = operator new(0xc)

if (eax_5 == 0)
    eax_5 = nullptr
else
    *eax_5 = &chipmunk::CErrorMessage::`vftable'{for `IInterface'}
    eax_5[1] = 1
    eax_5[2] = 0

*(esi + 0x38) = eax_5
*(esi + 0x10) = arg1
uint32_t eax_7 = zx.d(sub_4022d0(0x7577ec, 0x757578))
int32_t eax_8 = neg.d(eax_7)
int32_t* result = sbb.d(eax_8, eax_8, eax_7 != 0) & data_797d3c
*(esi + 0x1c) = result

if (result == 0)
    result.b = 0
else
    char eax_10 = sub_4022d0(0x75787c, 0x74ad08)
    int32_t* ecx_1
    
    if (eax_10 != 0)
        ecx_1 = data_797d64
    
    if (eax_10 == 0 || ecx_1 == 0)
        result = nullptr
    else
        (**ecx_1)(eax_4)
        result = data_797d64
    
    *(esi + 0x20) = result
    
    if (result == 0)
        result.b = 0
    else
        int32_t ebx_1 = data_797d38
        
        if (ebx_1 != 0)
            uint32_t eax_13 = zx.d(sub_4022d0(0x7577cc, 0x757598))
            int32_t eax_14 = neg.d(eax_13)
            result = sbb.d(eax_14, eax_14, eax_13 != 0) & ebx_1
        else
            result = nullptr
        
        *(esi + 0x28) = result
        
        if (result == 0)
            result.b = 0
        else
            result = (**arg1)(0x7577fc)
            result_1 = result
            
            if (result == 0)
                result.b = 0
            else
                int32_t* eax_17 = operator new(0x2f8)
                int32_t* var_68_1 = eax_17
                int32_t var_4 = 0
                int32_t* eax_18
                
                if (eax_17 == 0)
                    eax_18 = nullptr
                else
                    eax_18 = sub_40ac30(eax_17)
                
                int32_t var_4_1 = 0xffffffff
                *(esi + 0x30) = eax_18
                *(esi + 0x24) = (**arg1)(0x75780c)
                *(esi + 0x2c) = (**arg1)(0x75783c)
                result = (**arg1)(0x75786c)
                *(esi + 0x14) = result
                
                if (result == 0)
                    result.b = 0
                else
                    result = (**arg1)(0x75784c)
                    
                    if (result == 0)
                        result.b = 0
                    else
                        void var_48
                        sub_402be0(&var_48, (*(*result + 0x14))(eax_4))
                        int32_t var_4_2 = 1
                        
                        if ((**arg1)(0x75782c) == 0)
                            sub_401110(&var_48)
                            result.b = 0
                        else
                            ebx_1.b = 1
                            int32_t var_50_1 = 0xf
                            int32_t var_54_1 = 0
                            char var_64 = 0
                            var_4_2.b = 2
                            
                            if (*(esi + 0x24) == 0)
                                ebx_1.b = 0
                                sub_402cb0(&var_64, "ITimer", 0xf)
                            
                            char* ecx_9
                            int32_t edx_10
                            
                            if (*(esi + 0x2c) == 0)
                                sub_402cb0(&var_64, 0x75789c, 0xc)
                            label_408c94:
                                char* eax_32 = var_64.d
                                
                                if (var_50_1 u< 0x10)
                                    eax_32 = &var_64
                                
                                char* var_80_2 = eax_32
                                char* eax_33
                                eax_33, edx_10 = sub_4104a0("SACT")
                                var_4_2.b = 3
                                ecx_9 = eax_33
                                goto label_408cba
                            
                            if (ebx_1.b == 0)
                                goto label_408c94
                            
                            int32_t* eax_36 = (**arg1)(0x75785c)
                            
                            if (eax_36 == 0)
                                *(esi + 0x3c) = 0
                            else
                                *(esi + 0x3c) = (**eax_36)()
                            
                            struct IChangeNumToISurface2::chipmunk::CGetSurface::VTable** ebp_1 =
                                operator new(0x14)
                            struct IChangeNumToISurface2::chipmunk::CGetSurface::VTable** 
                                var_68_2 = ebp_1
                            var_4_2.b = 4
                            
                            if (ebp_1 == 0)
                                ebp_1 = nullptr
                            else
                                int32_t* ecx_15 = *(esi + 0x38)
                                int32_t eax_40 = *(esi + 0x30)
                                ebp_1[1] = &IInterface::`vftable'
                                *ebp_1 =
                                    &chipmunk::CGetSurface::`vftable'{for `IChangeNumToISurface2'}
                                ebp_1[1] = &chipmunk::CGetSurface::`vftable'{for `IInterface'}
                                ebp_1[2] = 1
                                ebp_1[3] = eax_40
                                ebp_1[4] = ecx_15
                                
                                if (ecx_15 != 0)
                                    (**ecx_15)()
                            
                            var_4_2.b = 2
                            int32_t eax_42 = *(esi + 0x2c)
                            void* ecx_16 = *(esi + 0x38)
                            *(esi + 0x34) = ebp_1
                            *(ecx_16 + 8) = eax_42
                            void var_2c
                            
                            if (sub_40af00(*(esi + 0x30), result_1, *(esi + 0x1c), *(esi + 0x20), 
                                    *(esi + 0x24), &var_48) != 0)
                                if ((*(**(esi + 0x1c) + 8))() == 0)
                                    edx_10 = sub_402be0(&var_2c, "Graph3")
                                    var_4_2.b = 6
                                    ecx_9 = &var_2c
                                    goto label_408cba
                                
                                (*(**(esi + 0x28) + 8))(0x75779c, *(esi + 0x34))
                                (*(**(esi + 0x28) + 8))(0x7577ac, *(esi + 0x34))
                                int32_t* eax_54 = (**arg1)(0x75781c)
                                
                                if (eax_54 == 0)
                                    goto label_408ccc
                                
                                (**eax_54)(esi + 8)
                                sub_408ff0(esi)
                                sub_401110(&var_64)
                                sub_401110(&var_48)
                                result.b = 1
                            else
                                edx_10 = sub_402be0(&var_2c, "SactEngine")
                                var_4_2.b = 5
                                ecx_9 = &var_2c
                            label_408cba:
                                sub_406ae0(*(esi + 0x38), edx_10, ecx_9)
                                sub_401110(&var_2c)
                            label_408ccc:
                                sub_401110(&var_64)
                                sub_401110(&var_48)
                                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
