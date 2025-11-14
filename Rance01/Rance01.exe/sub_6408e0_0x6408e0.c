// 函数: sub_6408e0
// 地址: 0x6408e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_1 = arg3 - arg4
int32_t result = ebx_1 s/ 0x8c

if (result s> 1)
    int32_t eax_3 = arg3 - 0x8c
    int32_t var_9c_1 = eax_3
    
    while (true)
        void var_98
        __builtin_memcpy(&var_98, eax_3, 0x8c)
        __builtin_memcpy(eax_3, arg4, 0x8c)
        int32_t var_ac_1 = arg5
        void* var_b0_1 = &var_98
        int32_t eax_4
        int32_t edx_3
        edx_3:eax_4 = muls.dp.d(0xea0ea0eb, ebx_1 - 0x8c)
        sub_642940(0, (edx_3 + ebx_1 - 0x8c) s>> 7, arg5, arg4, (ebx_1 - 0x8c) s/ 0x8c)
        int32_t eax_9 = var_9c_1 - 0x8c
        var_9c_1 = eax_9
        ebx_1 = eax_9 - arg4 + 0x8c
        int32_t edx_6
        edx_6:result = muls.dp.d(0xea0ea0eb, ebx_1)
        
        if (ebx_1 s/ 0x8c s<= 1)
            break
        
        eax_3 = var_9c_1

return result
