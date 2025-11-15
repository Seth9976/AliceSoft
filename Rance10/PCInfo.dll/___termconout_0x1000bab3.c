// 函数: ___termconout
// 地址: 0x1000bab3
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

BOOL hObject = data_10016750

if (hObject != 0xffffffff && hObject != 0xfffffffe)
    return CloseHandle(hObject)

return hObject
