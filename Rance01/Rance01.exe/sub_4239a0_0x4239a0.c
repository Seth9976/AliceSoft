// 函数: sub_4239a0
// 地址: 0x4239a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_720860
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result
int128_t* lpBuffer_1
int32_t var_5c

if (InternetAttemptConnect(0) == 0)
    int32_t hInternet = InternetOpenA("Downloader", 0, nullptr, nullptr, 0)
    
    if (hInternet != 0)
        PSTR lpszServerName
        
        if (*(arg1 + 0x1c) u< 0x10)
            lpszServerName = arg1 + 8
        else
            lpszServerName = *(arg1 + 8)
        
        int32_t eax_11 =
            InternetConnectA(hInternet, lpszServerName, 0x50, nullptr, nullptr, 3, 0, 0)
        
        if (eax_11 != 0)
            PSTR lpszReferrer
            
            if (*(arg1 + 0x1c) u< 0x10)
                lpszReferrer = arg1 + 8
            else
                lpszReferrer = *(arg1 + 8)
            
            PSTR lpszObjectName
            
            if (*(arg1 + 0x38) u< 0x10)
                lpszObjectName = arg1 + 0x24
            else
                lpszObjectName = *(arg1 + 0x24)
            
            void* lpszVerb
            
            if (*(arg1 + 0x70) u< 0x10)
                lpszVerb = arg1 + 0x5c
            else
                lpszVerb = *(arg1 + 0x5c)
            
            int32_t eax_15 = HttpOpenRequestA(eax_11, lpszVerb, lpszObjectName, nullptr, 
                lpszReferrer, nullptr, 0x80000000, 0)
            
            if (eax_15 != 0)
                int32_t var_40_1 = 0xf
                uint32_t dwHeadersLength = 0
                uint8_t var_54 = 0
                int32_t var_c_5 = 4
                
                if (sub_402680("POST", arg1 + 0x5c) != 0)
                    sub_401140(0, "Content-Type: application/x-www-form-urlencoded", &var_54)
                
                uint32_t dwOptionalLength = *(arg1 + 0x50)
                void* lpOptional
                
                if (dwOptionalLength != 0)
                    lpOptional = arg1 + 0x40
                    
                    if (*(arg1 + 0x54) u>= 0x10)
                        lpOptional = *lpOptional
                else
                    lpOptional = nullptr
                
                uint8_t* lpszHeaders
                
                if (dwHeadersLength != 0)
                    lpszHeaders = var_54.d
                    
                    if (var_40_1 u< 0x10)
                        lpszHeaders = &var_54
                else
                    lpszHeaders = nullptr
                
                if (HttpSendRequestA(eax_15, lpszHeaders, dwHeadersLength, lpOptional, 
                        dwOptionalLength) != 0)
                    lpBuffer_1 = nullptr
                    int32_t var_6c_1 = 0
                    int32_t var_68_1 = 0
                    sub_404f60(0x1000, &lpBuffer_1)
                    var_c_5.b = 6
                    sub_404fc0(arg1 + 0x78)
                    int128_t* lpBuffer = lpBuffer_1
                    
                    while (true)
                        HANDLE hHandle = *(arg1 + 4)
                        
                        if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_OBJECT_0)
                            var_c_5.b = 7
                            sub_402000(arg1 + 0x88, sub_4104a0("EventStop\n"), 0, 0xffffffff)
                            void var_38
                            sub_401110(&var_38)
                            InternetCloseHandle(eax_15)
                            InternetCloseHandle(eax_11)
                            InternetCloseHandle(hInternet)
                            sub_65ab60(&lpBuffer_1)
                            sub_401110(&var_54)
                            result.b = 0
                            break
                        
                        uint32_t lpdwNumberOfBytesRead
                        
                        if (InternetReadFile(eax_15, lpBuffer, var_6c_1 - lpBuffer, 
                                &lpdwNumberOfBytesRead) != 0)
                            uint32_t lpdwNumberOfBytesRead_2 = lpdwNumberOfBytesRead
                            
                            if (lpdwNumberOfBytesRead_2 != 0)
                                sub_404f60(
                                    *(arg1 + 0x7c) - *(arg1 + 0x78) + lpdwNumberOfBytesRead_2, 
                                    arg1 + 0x78)
                                uint32_t lpdwNumberOfBytesRead_1 = lpdwNumberOfBytesRead
                                sub_6c02a0(*(arg1 + 0x7c) - lpdwNumberOfBytesRead_1, lpBuffer, 
                                    lpdwNumberOfBytesRead_1, eax_4)
                                continue
                        
                        InternetCloseHandle(eax_15)
                        InternetCloseHandle(eax_11)
                        InternetCloseHandle(hInternet)
                        sub_65ab60(&lpBuffer_1)
                        sub_401110(&var_54)
                        result.b = 1
                        break
                else
                    enum WIN32_ERROR var_98_10 = GetLastError()
                    var_c_5.b = 5
                    sub_402000(arg1 + 0x88, sub_4104a0("HttpSendRequest error %d\n"), 0, 0xffffffff)
                    sub_401110(&lpBuffer_1)
                    InternetCloseHandle(eax_15)
                    InternetCloseHandle(eax_11)
                    InternetCloseHandle(hInternet)
                    sub_401110(&var_54)
                    result.b = 0
            else
                enum WIN32_ERROR var_98_5 = GetLastError()
                int32_t var_c_4 = 3
                sub_402000(arg1 + 0x88, sub_4104a0("HttpOpenRequest error %d\n"), 0, 0xffffffff)
                sub_401110(&lpBuffer_1)
                InternetCloseHandle(eax_11)
                InternetCloseHandle(hInternet)
                result.b = 0
        else
            enum WIN32_ERROR var_98_3 = GetLastError()
            int32_t var_c_3 = 2
            sub_402000(arg1 + 0x88, sub_4104a0("InternetConnect error %d\n"), eax_11, 0xffffffff)
            
            if (var_5c u>= 0x10)
                int128_t* lpBuffer_4 = lpBuffer_1
                sub_6b4d5b()
            
            InternetCloseHandle(hInternet)
            result.b = 0
    else
        enum WIN32_ERROR var_98_2 = GetLastError()
        int32_t var_c_2 = 1
        sub_402000(arg1 + 0x88, sub_4104a0("InternetOpen error %d\n"), 0, 0xffffffff)
        
        if (var_5c u< 0x10)
            result.b = 0
        else
            int128_t* lpBuffer_3 = lpBuffer_1
            sub_6b4d5b()
            result.b = 0
else
    uint32_t var_98_1 = InternetAttemptConnect(0)
    int32_t var_c_1 = 0
    sub_402000(arg1 + 0x88, sub_4104a0("InternetAttemptConnect error %d\n"), 0, 0xffffffff)
    
    if (var_5c u>= 0x10)
        int128_t* lpBuffer_2 = lpBuffer_1
        sub_6b4d5b()
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return result
