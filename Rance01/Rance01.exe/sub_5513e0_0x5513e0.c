// 函数: sub_5513e0
// 地址: 0x5513e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx_1 = arg2[1] u>> 2
int32_t esi = 0
uint32_t result

if (ebx_1 s> 0)
    do
        result = arg2[1]
        
        if (esi u>= result u>> 2)
            result.b = 0
            return result
        
        if (result != 0)
            result = *arg2
        
        int32_t edx_1 = *(result + (esi << 2))
        result = arg1[1]
        
        if (esi u>= result u>> 2)
            result.b = 0
            return result
        
        if (result != 0)
            result = *arg1
        
        if (sub_553d70(arg1[5], *(result + (esi << 2)), edx_1).b == 0)
            result.b = 0
            return result
        
        esi += 1
    while (esi s< ebx_1)

result.b = 1
return result
