// 函数: sub_550950
// 地址: 0x550950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* edx

if (arg1[1] != 0)
    edx = *arg1
else
    edx = nullptr

int32_t result = 0

if (edx != 0 && *edx != 0)
    do
        char ecx = *edx
        
        if (ecx u< 0x81)
            if (ecx u< 0xe0)
                edx = &edx[1]
            else
                edx = &edx[2]
        else if (ecx u<= 0x9f || ecx u>= 0xe0)
            edx = &edx[2]
        else
            edx = &edx[1]
        
        result += 1
    while (*edx != 0)

return result
