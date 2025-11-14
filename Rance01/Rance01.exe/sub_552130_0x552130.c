// 函数: sub_552130
// 地址: 0x552130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t result = arg3[1]
uint32_t ebx_1 = result u>> 2

if (ebx_1 s< 3)
    result.b = 1
    return result

int32_t ebp

if (result != 0)
    ebp = *arg3
else
    ebp = 0

int32_t esi = 0

if (ebx_1 s> 0)
    do
        result, arg3 = sub_551d60(arg3, *(ebp + (esi << 2) + 4), arg1, *(ebp + (esi << 2)))
        
        if (result.b == 0)
            result.b = 0
            return result
        
        esi += 3
    while (esi s< ebx_1)

result.b = 1
return result
