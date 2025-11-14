// 函数: sub_6ca780
// 地址: 0x6ca780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

enum FILE_CREATION_DISPOSITION dwCreationDisposition

if ((arg2 & 0x40000000) == 0)
    dwCreationDisposition = OPEN_EXISTING
else
    dwCreationDisposition = CREATE_ALWAYS

HANDLE result = CreateFileA(arg1, arg2, FILE_SHARE_READ, nullptr, dwCreationDisposition, 
    SECURITY_ANONYMOUS, nullptr)

if (result != 0xffffffff)
    return result

return nullptr
