// 函数: sub_426d20
// 地址: 0x426d20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71367b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx = __chkstk(0x4e88)
int32_t eax_2 = data_78c474 ^ &ExceptionList
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
int32_t arg_4e7c
fsbase->NtTib.ExceptionList = &arg_4e7c
void arg_c
int32_t* result

if (sub_6c6f00(&arg_c) != 0)
    result = nullptr
else
    int32_t arg_30 = ecx
    int32_t arg_34 = arg3
    
    if (arg4 s<= 0 || arg5 s<= 0)
        if (sub_6c8080(&arg_c, 1) == 0)
            goto label_426dbe
        
        sub_6c7690(&arg_c)
        result = nullptr
    else
        arg1 = arg4
        arg2 = arg5
    label_426dbe:
        
        if (sub_4022d0(0x756bc8, 0x74ad08) == 0)
            sub_6c7690(&arg_c)
            result = nullptr
        else
            int32_t* ecx_2 = data_797d64
            
            if (ecx_2 == 0)
                sub_6c7690(&arg_c)
                result = nullptr
            else
                (**ecx_2)(eax_4)
                int32_t* ebp_1 = data_797d64
                
                if (ebp_1 != 0)
                    int32_t* result_1 = (*(*ebp_1 + 0xc))(arg1, arg2, 0x20)
                    
                    if (result_1 != 0)
                        int32_t edi_2 = (arg1 * 3 + 0xf) & 0xfffffff0
                        var_4 = nullptr
                        __builtin_memset(&__return_addr, 0, 8)
                        int32_t* esi_1 = &var_4
                        sub_404f60(edi_2 * arg2, esi_1)
                        int32_t arg_4e84 = 0
                        int32_t arg_18 = arg2
                        int32_t arg_14 = arg1
                        char* arg_10 = var_4
                        int32_t arg_20 = 3
                        int32_t arg_24 = 2
                        int32_t arg_1c = edi_2 - arg1 * 3
                        
                        if (sub_6c8080(&arg_c, 3) == 0)
                            (*(*ebp_1 + 4))()
                            sub_6c7690(&arg_c)
                            int32_t j_2 = (*(*result_1 + 0x10))()
                            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 =
                                (*(*result_1 + 0x14))()
                            void* edx_11 = *result_1
                            ExceptionList = ExceptionList_1
                            char* esi_2 = (*(edx_11 + 8))(0, 0)
                            int32_t eax_25 = (*(*result_1 + 0x1c))()
                            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = ExceptionList
                            char* ecx_17 = var_4
                            
                            if (ExceptionList_2 s> 0)
                                ExceptionList = ExceptionList_2
                                struct _EXCEPTION_REGISTRATION_RECORD* i
                                
                                do
                                    if (j_2 s> 0)
                                        int32_t j_1 = j_2
                                        int32_t j
                                        
                                        do
                                            *esi_2 = *ecx_17
                                            esi_2[1] = ecx_17[1]
                                            esi_2[2] = ecx_17[2]
                                            esi_2[3] = 0xff
                                            esi_2 = &esi_2[4]
                                            ecx_17 = &ecx_17[3]
                                            j = j_1
                                            j_1 -= 1
                                        while (j != 1)
                                    
                                    ecx_17 = &ecx_17[edi_2 - j_2 * 3]
                                    esi_2 = &esi_2[eax_25 - (j_2 << 2)]
                                    i = ExceptionList
                                    ExceptionList -= 1
                                while (i != 1)
                            
                            char* eax_27 = var_4
                            
                            if (eax_27 != 0)
                                char* var_24_5 = eax_27
                                sub_6b4d5b()
                            
                            result = result_1
                        else
                            (*(*result_1 + 4))()
                            (*(*ebp_1 + 4))()
                            sub_6c7690(&arg_c)
                            sub_65ab60(esi_1)
                            result = nullptr
                    else
                        (*(*ebp_1 + 4))()
                        sub_6c7690(&arg_c)
                        result = nullptr
                else
                    sub_6c7690(&arg_c)
                    result = nullptr

fsbase->NtTib.ExceptionList = arg_4e7c
sub_6b4885(eax_2 ^ &ExceptionList)
return result
