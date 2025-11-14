// 函数: sub_6d0ed0
// 地址: 0x6d0ed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *(arg1 + 0x28)

if (result == 0)
    return result

if (result == 1)
    *arg2 += 1
else
    if (result s> 0x7fff)
        arg2[0xe0] += 1
        result = *(arg1 + 0x28) - 0x7fff
        *(arg1 + 0x28) = result
    
    result = sub_6d1140(result) << 4
    arg2[result] += 1

*(arg1 + 0x28) = 0
return result
