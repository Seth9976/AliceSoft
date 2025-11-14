// 函数: sub_4281e0
// 地址: 0x4281e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
int32_t ebx
ebx.b = *(arg1 + 0x1c) != 0xffffffff
var_4:3.b = ebx.b != 0
sub_54e400(&var_4:3, arg2 + 4)
char* result

if (ebx.b != 0)
    result = *(arg1 + 0x1c)
    
    if (result s< 0)
        result.b = 0
        return result
    
    void* ecx = data_797d4c
    
    if (result s>= (*(ecx + 0x44) - *(ecx + 0x40)) s>> 2)
        result.b = 0
        return result
    
    result = *(*(ecx + 0x40) + (result << 2))
    
    if (result == 0)
        result.b = 0
        return result
    
    if (sub_505160(&result[0x10], arg2).b == 0)
        result.b = 0
        return result

result.b = 1
return result
