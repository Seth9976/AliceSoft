// 函数: sub_4ae500
// 地址: 0x4ae500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_717ebc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HANDLE result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_1fc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4ae7e0(arg1)
PSTR lpFileName

if (arg2[5] u< 0x10)
    lpFileName = arg2
else
    lpFileName = *arg2

WIN32_FIND_DATAA findFileData
HANDLE result = FindFirstFileA(lpFileName, &findFileData)

if (result == 0xffffffff)
    result.b = 1
else
    FindClose(result)
    
    if ((findFileData.dwFileAttributes.b & 0x10) != 0)
        result.b = 1
    else
        result = sub_59e250(0x7568c4)
        *(arg1 + 4) = result
        
        if (result == 0)
            result.b = 0
        else
            result_1 = 0xffffffff
            int32_t var_1e8_1 = 0
            int32_t var_1e4_1 = 0
            int32_t var_c_1 = 0
            
            if (sub_601f00(&result_1, arg2) == 0)
                goto label_4ae5fd
            
            int32_t var_1a0_1 = 0xf
            int32_t var_1a4_1 = 0
            char var_1b4 = 0
            var_c_1.b = 1
            
            if (sub_602270(&result_1, &var_1b4) != 0)
                if (sub_402680(0x7568d4, &var_1b4) == 0)
                label_4ae7bf:
                    sub_401110(&var_1b4)
                    sub_601e80(&result_1)
                    result.b = 0
                else
                    HANDLE* esi_2 = &result_1
                    int32_t var_1d0
                    
                    if (sub_602230(esi_2, &var_1d0) == 0 || var_1d0 != 0)
                        goto label_4ae7bf
                    
                    int32_t var_1d8
                    
                    if (sub_602230(esi_2, &var_1d8) == 0)
                        goto label_4ae7bf
                    
                    int32_t var_1dc_1 = 0
                    
                    if (var_1d8 s> 0)
                        while (true)
                            int32_t var_184_1 = 0xf
                            int32_t var_188_1 = 0
                            char var_198 = 0
                            HANDLE* esi_3 = &result_1
                            var_c_1.b = 2
                            int32_t var_1c4
                            char* ecx_1
                            int32_t var_1c8
                            
                            if (sub_602230(esi_3, &var_1c4) == 0)
                                ecx_1 = &var_198
                            else if (sub_602230(esi_3, &var_1c8) == 0)
                                ecx_1 = &var_198
                            else
                                ecx_1 = &var_198
                                int32_t var_1d4
                                
                                if (sub_602230(esi_3, &var_1d4) != 0)
                                    if (sub_602270(&result_1, &var_198) != 0)
                                        void var_17c
                                        sub_401c00(&var_17c, &var_198)
                                        var_c_1.b = 3
                                        int32_t edx_2 = var_1d4
                                        int32_t esi_4 = var_1c4
                                        int32_t ebx_1 = var_1c8
                                        void* eax_14 = sub_4aee30(arg1 + 0x24, &var_17c)
                                        *eax_14 = esi_4
                                        *(eax_14 + 4) = ebx_1
                                        *(eax_14 + 8) = edx_2
                                        sub_401110(&var_17c)
                                        var_c_1.b = 1
                                        sub_401110(&var_198)
                                        int32_t eax_16 = var_1dc_1 + 1
                                        var_1dc_1 = eax_16
                                        
                                        if (eax_16 s>= var_1d8)
                                            goto label_4ae75d
                                        
                                        continue
                                    
                                    ecx_1 = &var_198
                            sub_401110(ecx_1)
                            break
                        
                        goto label_4ae7bf
                    
                label_4ae75d:
                    HANDLE* esi_5 = &result_1
                    
                    if (sub_601f60(esi_5) == 0)
                        goto label_4ae7bf
                    
                    sub_401180(arg1 + 8, 0xffffffff, arg2, 0)
                    sub_401110(&var_1b4)
                    sub_601e80(esi_5)
                    result.b = 1
            else
                sub_401110(&var_1b4)
            label_4ae5fd:
                result = result_1
                
                if (result != 0xffffffff)
                    CloseHandle(result)
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
