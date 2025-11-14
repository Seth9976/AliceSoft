// 函数: sub_51af30
// 地址: 0x51af30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
int128_t* ecx = arg4[1]
int32_t esi = *arg4
int32_t edx_2 = (ecx - esi) s>> 2
var_4 = 0

if (arg1 u> edx_2)
    sub_51af90(arg1 - edx_2, arg4, ecx, &var_4)
    return 

if (arg1 u>= edx_2)
    return 

int128_t* esi_1 = esi + (arg1 << 2)

if (esi_1 == ecx)
    return 

int32_t ebx_1 = 0 s>> 2 << 2
sub_6b49d0(esi_1, ecx, ebx_1)
arg4[1] = ebx_1 + esi_1
