// 函数: sub_5dae20
// 地址: 0x5dae20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7198d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
BOOL result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE result_2 = 0xffffffff
int32_t var_40 = 0
int32_t var_3c = 0
int32_t var_4 = 0
BOOL result

if (sub_601ea0(&result_2, arg1) != 0)
    result = *arg2
    bool cond:0_1 = result == arg2[1]
    HANDLE result_3 = result_2
    result_1 = result
    
    if (not(cond:0_1))
        while (true)
            result = *result
            uint32_t nNumberOfBytesToWrite_1 = *(result + 0x10)
            
            if (nNumberOfBytesToWrite_1 s<= 0)
                goto label_5daefd
            
            if (*(result + 0x14) u>= 0x10)
                result = *result
            
            if (result_3 != 0xffffffff)
                uint32_t numberOfBytesWritten_1
                result = WriteFile(result_3, result, nNumberOfBytesToWrite_1, 
                    &numberOfBytesWritten_1, nullptr)
                
                if (result != 0 && nNumberOfBytesToWrite_1 == numberOfBytesWritten_1)
                    var_40 += nNumberOfBytesToWrite_1
                label_5daefd:
                    int32_t var_18_1 = 0xf
                    BOOL nNumberOfBytesToWrite = 0
                    uint8_t var_2c = 0
                    sub_401270(&var_2c, 2, 0x736590)
                    
                    if (nNumberOfBytesToWrite s<= 0)
                        result.b = 1
                    else
                        uint8_t* lpBuffer = var_2c.d
                        
                        if (var_18_1 u< 0x10)
                            lpBuffer = &var_2c
                        
                        uint32_t numberOfBytesWritten
                        
                        if (result_3 != 0xffffffff)
                            result = WriteFile(result_3, lpBuffer, nNumberOfBytesToWrite, 
                                &numberOfBytesWritten, nullptr)
                        
                        if (result_3 == 0xffffffff || result == 0
                                || nNumberOfBytesToWrite != numberOfBytesWritten)
                            result.b = 0
                        else
                            var_40 += nNumberOfBytesToWrite
                            result.b = 1
                    
                    if (var_18_1 u>= 0x10)
                        int32_t var_60_2 = var_2c.d
                        sub_6b4d5b()
                    
                    if (result.b == 0)
                        goto label_5daf8c
                    
                    result = result_1 + 4
                    result_1 = result
                    
                    if (result == arg2[1])
                        break
                    
                    continue
                
            label_5daf8c:
                
                if (result_3 != 0xffffffff)
                    CloseHandle(result_3)
            
            result.b = 0
            goto label_5dafbb
    
    if (result_3 != 0xffffffff)
        result = CloseHandle(result_3)
    
    if (result_3 == 0xffffffff || result != 0)
        result.b = 1
    else
        CloseHandle(result_3)
        result.b = 0
else
    result = result_2
    
    if (result != 0xffffffff)
        CloseHandle(result)
    
    result.b = 0

label_5dafbb:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
