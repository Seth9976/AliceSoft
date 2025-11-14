// 函数: sub_5f0c90
// 地址: 0x5f0c90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = sub_405d70(arg2, arg1 + 0x10)

if (result.b == 0 || *(arg1 + 0x2c) != 1)
    sub_401180(arg1 + 0x10, 0xffffffff, arg2, 0)
    result = arg1 + 0x30
    *(arg1 + 0x2c) = 1
    sub_4b55f0(result, arg3)
    *(arg1 + 0x350) = 1

return result
