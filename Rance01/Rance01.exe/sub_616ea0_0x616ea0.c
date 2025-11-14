// 函数: sub_616ea0
// 地址: 0x616ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = 0

while (true)
    arg1.b = *arg2
    
    if ((arg1.b u< 0x81 || arg1.b u> 0x9f) && arg1.b u< 0xe0)
        if (arg1.b != 9)
            if (arg1.b == 0)
                break
            
            arg2 = &arg2[1]
            result += 1
            continue
        else
            arg2 = &arg2[1]
            result += 4 - (result & 3)
            continue
    
    arg2 = &arg2[2]
    result += 2

return result
