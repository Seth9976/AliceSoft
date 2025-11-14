// 函数: sub_5b9760
// 地址: 0x5b9760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg3[1]

if (eax s<= arg3[2] + arg1)
    int32_t eax_2 = _realloc(*arg3, eax + arg1 + 0x400)
    
    if (eax_2 == 0)
        sub_5b9710(arg3)
        return 0xffffffff
    
    arg3[1] += arg1 + 0x400
    *arg3 = eax_2

return 0
