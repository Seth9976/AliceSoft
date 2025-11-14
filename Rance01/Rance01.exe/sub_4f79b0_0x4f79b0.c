// 函数: sub_4f79b0
// 地址: 0x4f79b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_1 = arg1 - arg2
int32_t i = ecx_1 s/ 0x6c
int32_t var_7c = ecx_1

if (i s> 1)
    int32_t ebx_1 = arg1 - 0x6c
    
    do
        void var_78
        __builtin_memcpy(&var_78, ebx_1, 0x6c)
        __builtin_memcpy(ebx_1, arg2, 0x6c)
        void* var_8c_1 = &var_78
        int32_t eax_3
        int32_t edx_2
        edx_2:eax_3 = muls.dp.d(0x4bda12f7, var_7c - 0x6c)
        int32_t var_90_1 = (var_7c - 0x6c) s/ 0x6c
        sub_4f7bc0(0, edx_2 s>> 5, var_7c - 0x6c, arg2)
        ebx_1 -= 0x6c
        i = (ebx_1 - arg2 + 0x6c) s/ 0x6c
        var_7c = ebx_1 - arg2 + 0x6c
    while (i s> 1)

return i
