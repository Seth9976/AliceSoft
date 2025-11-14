// 函数: sub_552dc0
// 地址: 0x552dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = sub_5527e0(arg1)
int32_t* eax = sub_552440(arg1 + 0x20)

if (eax != 0)
    *(*(arg1 + 8) + (result << 2)) = eax
    
    if (sub_5506c0(eax, arg2) != 0)
        *(eax + 0x2d) = 1
        return result

return 0xffffffff
