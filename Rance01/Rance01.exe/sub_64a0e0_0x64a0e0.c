// 函数: sub_64a0e0
// 地址: 0x64a0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp_1 = arg3 - arg4
int32_t i = ebp_1 s/ 0x28

if (i s> 1)
    int32_t ebx_1 = arg3 - 0x28
    
    do
        int32_t var_2c[0xb]
        __builtin_memcpy(&var_2c, ebx_1, 0x28)
        __builtin_memcpy(ebx_1, arg4, 0x28)
        int32_t eax_6 = (ebp_1 - 0x28) s/ 0x28
        sub_64bc40(eax_6, arg4, 0, eax_6, &var_2c, arg5)
        ebx_1 -= 0x28
        ebp_1 = ebx_1 - arg4 + 0x28
        i = ebp_1 s/ 0x28
    while (i s> 1)

return i
