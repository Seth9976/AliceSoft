// 函数: sub_4c8d00
// 地址: 0x4c8d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

for (int32_t* i = *arg1; i != arg1[1]; i = &i[1])
    result = *i
    
    if (result != 0)
        if (*(result + 0x1d4) != 0 || *(result + 0x160) != 0 || *(result + 0x168) != 0
                || *(result + 0x268) != 0)
            result.b = 1
            return result
        
        result.b = *(result + 0x270)
        
        if (result.b != 0)
            result.b = 1
            return result

result.b = 0
return result
