// 函数: sub_5d9660
// 地址: 0x5d9660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hObject = *(arg1 + 8)

if (hObject != 0xffffffff)
    if (CloseHandle(hObject) == 0)
        BOOL result
        result.b = 0
        return result
    
    *(arg1 + 8) = 0xffffffff

*(arg1 + 0x14) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x18) = 0xffffffff
*(arg1 + 0x20) = 0xffffffff
__builtin_memset(arg1 + 0x24, 0, 0x12)
*(arg1 + 0x38) = 0
int32_t eax
eax.b = 1
return 1
