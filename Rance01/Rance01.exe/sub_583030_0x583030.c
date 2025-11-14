// 函数: sub_583030
// 地址: 0x583030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax
int16_t x87control
int80_t result
result, eax = sub_583190(arg1, arg2, x87control, arg3)

if (eax == 0)
    return result

*(arg1 + 0x14) = arg3
*(arg1 + 0x10) = arg2
return result
