// 函数: sub_5b27e0
// 地址: 0x5b27e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* result = arg1

if (result != 0)
    int32_t* esi_1 = *(result + 0x58)
    
    if (esi_1 != 0 && arg3 s<= esi_1[1])
        result = sub_6c02a0(arg2, *esi_1, arg3)
        *esi_1 += arg3
        esi_1[1] -= arg3

return result
