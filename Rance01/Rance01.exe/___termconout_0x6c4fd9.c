// 函数: ___termconout
// 地址: 0x6c4fd9
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hObject = data_78d580

if (hObject != 0xffffffff && hObject != 0xfffffffe)
    return CloseHandle(hObject)

return hObject
