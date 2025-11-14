// 函数: sub_601f60
// 地址: 0x601f60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hObject = *arg1

if (hObject != 0xffffffff)
    if (CloseHandle(hObject) == 0)
        hObject.b = 0
        return hObject
    
    *arg1 = 0xffffffff

hObject.b = 1
return hObject
