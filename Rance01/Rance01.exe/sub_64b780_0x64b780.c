// 函数: sub_64b780
// 地址: 0x64b780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp_1 = arg3 - arg4
int32_t i = ebp_1 s/ 0x28

if (i s> 1)
    int32_t ebx_1 = arg3 - 0x28
    
    do
        void var_2c
        __builtin_memcpy(&var_2c, ebx_1, 0x28)
        __builtin_memcpy(ebx_1, arg4, 0x28)
        int32_t var_40_1 = arg5
        void* var_44_1 = &var_2c
        int32_t eax_3
        int32_t edx_2
        edx_2:eax_3 = muls.dp.d(0x66666667, ebp_1 - 0x28)
        sub_64c5d0(0, edx_2 s>> 4, arg5, arg4, (ebp_1 - 0x28) s/ 0x28)
        ebx_1 -= 0x28
        ebp_1 = ebx_1 - arg4 + 0x28
        i = ebp_1 s/ 0x28
    while (i s> 1)

return i
