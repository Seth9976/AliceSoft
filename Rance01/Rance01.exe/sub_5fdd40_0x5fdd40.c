// 函数: sub_5fdd40
// 地址: 0x5fdd40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *(arg2 + 0x50)
int32_t* result = *(arg2 + 0x4c)

if (result != edx)
    int32_t* var_8_1 = arg1
    int32_t var_c_1 = edx
    result = sub_4febf0(result, edx, arg1)
    *(arg2 + 0x50) = result

*(arg2 + 0x95) = 1
return result
