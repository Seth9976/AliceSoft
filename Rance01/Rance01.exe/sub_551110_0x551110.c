// 函数: sub_551110
// 地址: 0x551110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg4
int32_t esi = 0
int32_t* result

if (arg2 s> 0)
    do
        if (sub_553750(arg1[5], arg3, &arg4, ebp).b == 0)
            result.b = 0
            return result
        
        result = arg1[1]
        
        if (esi u>= result u>> 2)
            result.b = 0
            return result
        
        if (result != 0)
            result = *arg1
        
        result[esi] = arg4
        esi += 1
    while (esi s< arg2)

result.b = 1
return result
