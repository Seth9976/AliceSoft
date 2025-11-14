// 函数: sub_601f00
// 地址: 0x601f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hObject = *arg1

if (hObject == 0xffffffff)
    goto label_601f1c

BOOL hFile

if (CloseHandle(hObject) != 0)
    *arg1 = 0xffffffff
label_601f1c:
    int32_t* lpFileName
    
    if (arg2[5] u< 0x10)
        lpFileName = arg2
    else
        lpFileName = *arg2
    
    hFile = CreateFileA(lpFileName, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
        FILE_ATTRIBUTE_NORMAL, nullptr)
    *arg1 = hFile
    
    if (hFile != 0xffffffff)
        arg1[2] = GetFileSize(hFile, nullptr)
        arg1[1] = 0
        uint32_t eax
        eax.b = 1
        return eax

hFile.b = 0
return hFile
