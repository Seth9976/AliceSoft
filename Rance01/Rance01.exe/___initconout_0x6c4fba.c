// 函数: ___initconout
// 地址: 0x6c4fba
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE result = CreateFileW(CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
data_78d580 = result
return result
