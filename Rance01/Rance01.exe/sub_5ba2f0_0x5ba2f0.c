// 函数: sub_5ba2f0
// 地址: 0x5ba2f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2[7]

if (ebx == 0)
    return 0xffffff7f

int32_t eax_1 = sub_5b4d20(0x20, arg1)
*arg2 = eax_1

if (eax_1 != 0)
    return 0xffffff7a

arg2[1] = sub_5b4d20(8, arg1)
arg2[2] = sub_5b4d20(0x20, arg1)
arg2[3] = sub_5b4d20(0x20, arg1)
arg2[4] = sub_5b4d20(0x20, arg1)
arg2[5] = sub_5b4d20(0x20, arg1)
*ebx = 1 << sub_5b4d20(4, arg1)
int32_t edx_1 = 1 << sub_5b4d20(4, arg1)
ebx[1] = edx_1

if (arg2[2] s>= 1 && arg2[1] s>= 1)
    int32_t ebx_1 = *ebx
    
    if (ebx_1 s>= 0x40 && edx_1 s>= ebx_1 && edx_1 s<= 0x2000 && sub_5b4d20(1, arg1) == 1)
        return 0

sub_5ba0b0(arg2)
return 0xffffff7b
