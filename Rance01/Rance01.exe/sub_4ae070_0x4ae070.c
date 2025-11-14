// 函数: sub_4ae070
// 地址: 0x4ae070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg4

while (arg3 != arg2)
    *result = *arg3
    result[1] = arg3[1]
    result[2] = arg3[2]
    arg3 = &arg3[3]
    result = &result[3]

return result
