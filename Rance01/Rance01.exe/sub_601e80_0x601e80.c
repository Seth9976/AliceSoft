// 函数: sub_601e80
// 地址: 0x601e80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hObject = *arg1

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)
    
    if (hObject != 0)
        *arg1 = 0xffffffff

return hObject
