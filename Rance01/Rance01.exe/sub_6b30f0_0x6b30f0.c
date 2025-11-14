// 函数: sub_6b30f0
// 地址: 0x6b30f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress = arg1[1]

if (lpBaseAddress != 0)
    UnmapViewOfFile(lpBaseAddress)
    arg1[1] = 0

HANDLE hObject = *arg1

if (hObject != 0)
    CloseHandle(hObject)
    *arg1 = 0

arg1[2] = 0
int32_t* lpName

if (arg2[5] u< 0x10)
    lpName = arg2
else
    lpName = *arg2

HANDLE hFileMappingObject = CreateFileMappingA(0xffffffff, nullptr, PAGE_READWRITE, 0, arg3, lpName)
*arg1 = hFileMappingObject

if (hFileMappingObject != 0)
    hFileMappingObject = MapViewOfFile(hFileMappingObject, FILE_MAP_ALL_ACCESS, 0, 0, 0)
    arg1[1] = hFileMappingObject
    
    if (hFileMappingObject != 0)
        arg1[2] = arg3
        hFileMappingObject.b = 1
        return hFileMappingObject

hFileMappingObject.b = 0
return hFileMappingObject
