// 函数: sub_6a46f0
// 地址: 0x6a46f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = GetWindowLongA(arg1, 0xffffffeb)

if (arg2 == 0x110)
    SetWindowLongA(arg1, 0xffffffeb, arg4)
    result = arg4

if (result != 0)
    return (**result)(arg1, arg2, arg3, arg4)

return result
