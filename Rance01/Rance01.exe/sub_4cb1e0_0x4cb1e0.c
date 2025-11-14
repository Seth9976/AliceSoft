// 函数: sub_4cb1e0
// 地址: 0x4cb1e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

for (int32_t* i = *arg1; i != arg1[1]; i = &i[1])
    result = *i
    
    if (result != 0)
        if (*(result + 0xc) != 0 || *(result + 0x18) != 0 || *(result + 0x2c) != 0)
            result.b = 1
            return result
        
        result.b = *(result + 0x54)
        
        if (result.b != 0)
            result.b = 1
            return result

result.b = 0
return result
