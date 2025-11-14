// 函数: sub_601ea0
// 地址: 0x601ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hObject = *arg1

if (hObject == 0xffffffff)
    goto label_601ebc

BOOL result

if (CloseHandle(hObject) != 0)
    *arg1 = 0xffffffff
label_601ebc:
    int32_t* lpFileName
    
    if (arg2[5] u< 0x10)
        lpFileName = arg2
    else
        lpFileName = *arg2
    
    result = CreateFileA(lpFileName, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, nullptr)
    *arg1 = result
    
    if (result != 0xffffffff)
        arg1[1] = 0
        arg1[2] = 0xffffffff
        result.b = 1
        return result

result.b = 0
return result
