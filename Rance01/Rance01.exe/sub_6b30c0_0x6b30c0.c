// 函数: sub_6b30c0
// 地址: 0x6b30c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress = arg1[1]

if (lpBaseAddress != 0)
    UnmapViewOfFile(lpBaseAddress)
    arg1[1] = 0

BOOL hObject = *arg1

if (hObject != 0)
    hObject = CloseHandle(hObject)
    *arg1 = 0

arg1[2] = 0
return hObject
