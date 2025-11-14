// 函数: sub_6b77a7
// 地址: 0x6b77a7
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esp_1 = *(arg1 - 0x18)
int32_t eax = *(arg1 - 0x24)
*(arg1 - 0x20) = eax

if (*(arg1 - 0x1c) != 0)
    __c_exit()
    return sub_6b77c1(arg1) __tailcall

*(esp_1 - 4) = eax
_quick_exit()
noreturn
