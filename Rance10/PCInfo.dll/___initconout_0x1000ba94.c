// 函数: ___initconout
// 地址: 0x1000ba94
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

HANDLE result = CreateFileW(CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
data_10016750 = result
return result
