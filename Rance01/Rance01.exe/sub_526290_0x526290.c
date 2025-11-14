// 函数: sub_526290
// 地址: 0x526290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s< 0)
    return 

int32_t eax = data_797d4c

if (arg1 s>= (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
    return 

eax = *(*(eax + 0x40) + (arg1 << 2))

if (eax == 0 || arg2 s< 0)
    return 

int32_t ecx = *(eax + 0x10)

if (arg2 s>= (*(eax + 0x14) - ecx) s>> 2)
    return 

eax = *(ecx + (arg2 << 2))

if (eax == 0)
    return 

float var_4 = fconvert.s(fconvert.t(arg4))
float var_8 = fconvert.s(fconvert.t(arg3))
sub_4c83e0(eax)
