// 函数: sub_596200
// 地址: 0x596200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_3c
int32_t eax_1 = data_78c474 ^ &var_3c
int32_t* lpFileName = arg5
*arg3 = 0
*arg4 = 0
*arg6 = 0
*arg7 = 0
*arg1 = 0
*arg2 = 0
*arg8 = 0

if (lpFileName[5] u>= 0x10)
    lpFileName = *lpFileName

HANDLE eax_2 = CreateFileA(lpFileName, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
    FILE_ATTRIBUTE_NORMAL, nullptr)
FILETIME var_28

if (eax_2 != 0xffffffff)
    FILETIME var_20
    
    if (GetFileTime(eax_2, &var_28, nullptr, nullptr) != 0)
        SYSTEMTIME systemTime
        
        if (FileTimeToLocalFileTime(&var_28, &var_20) == 0)
            CloseHandle(eax_2)
        else if (FileTimeToSystemTime(&var_20, &systemTime) == 0)
            CloseHandle(eax_2)
        else if (CloseHandle(eax_2) != 0)
            uint32_t wMonth = zx.d(systemTime.wMonth)
            uint32_t wDay = zx.d(systemTime.wDay)
            *arg3 = zx.d(systemTime.wYear)
            uint32_t wDayOfWeek = zx.d(systemTime.wDayOfWeek)
            *arg4 = wMonth
            uint32_t wHour = zx.d(systemTime.wHour)
            *arg6 = wDay
            *arg7 = wDayOfWeek
            uint32_t wMinute = zx.d(systemTime.wMinute)
            *arg1 = wHour
            uint32_t wSecond = zx.d(systemTime.wSecond)
            *arg2 = wMinute
            *arg8 = wSecond
            uint32_t* eax_7
            eax_7.b = 1
            sub_6b4885(eax_1 ^ &var_3c)
            return eax_7
    else
        CloseHandle(eax_2)
eax_2.b = 0
sub_6b4885(eax_1 ^ &var_3c)
return eax_2
