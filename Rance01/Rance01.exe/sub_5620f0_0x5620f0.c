// 函数: sub_5620f0
// 地址: 0x5620f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *(arg1 + 4)
int32_t result

if (esi != 0)
    if (esi[1] == 0)
        result = (*(**esi + 0x10))(0x74b508)
        esi[1] = result
    
    if (esi[1] != 0 || result != 0)
        jump(**esi[1])

result.b = 0
return result
