// 函数: sub_54f8b0
// 地址: 0x54f8b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 != 2)
    arg1[1] = 0
else
    char result = sub_54fa60(arg1, arg2 - 1)
    
    if (result == 0)
        return result
    
    if (arg1[1] != 0)
        **arg1 = 0
    else
        *0 = 0

void* eax_1 = arg1[5]
arg1[3] = arg2
arg1[4] = 1

if (*(eax_1 + 0x1c) s>= 0x989680)
    *(eax_1 + 0x1c) = 1

int32_t ecx = *(eax_1 + 0x1c)
*(eax_1 + 0x1c) = ecx + 1
arg1[7] = 0xffffffff
arg1[0xc] = 0xffffffff
arg1[0xd] = 0xffffffff
arg1[0xe] = 0xffffffff
arg1[0xf] = 0xffffffff
arg1[0x11] = 0xffffffff
arg1[6] = ecx
arg1[9] = 0
arg1[0xb].w = 0
arg1[0x10].b = 0
int32_t eax_2
eax_2.b = 1
return 0xffffff01
