// 函数: sub_550990
// 地址: 0x550990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* edx

if (arg1[1] != 0)
    edx = *arg1
else
    edx = nullptr

int32_t ebx = arg2
int128_t* result_1 = 0xffffffff
int128_t* result = nullptr

if (*edx != 0)
    int128_t* result_2 = 0xffffffff
    
    do
        if (ebx == 0)
            result_1 = result
        
        char ecx = *(edx + result)
        
        if (ecx u< 0x81)
            if (ecx u< 0xe0)
                result += 1
            else
                result += 2
        else if (ecx u<= 0x9f || ecx u>= 0xe0)
            result += 2
        else
            result += 1
        
        ebx -= 1
        
        if (result_1 != 0xffffffff && result_2 == 0xffffffff)
            result_2 = result
    while (*(edx + result) != 0)
    
    if (result_1 != 0xffffffff)
        return sub_6b49d0(edx + result_1, edx + result_2, result - result_2 + 1)

return result
