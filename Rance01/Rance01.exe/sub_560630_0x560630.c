// 函数: sub_560630
// 地址: 0x560630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t result = arg1[1]
void* ebx_2 = arg2[1] * 4

if (result s< arg1[3] + ebx_2)
    result = sub_427ad0(arg1, result + ebx_2 + 0x40000)
    
    if (result.b == 0)
        return result

if (arg2[1] != 0)
    int32_t eax
    
    if (arg1[1] != 0)
        eax = *arg1
    else
        eax = 0
    
    sub_6c02a0(arg1[3] + eax, *arg2, ebx_2)

arg1[3] += ebx_2
result.b = 1
return result
