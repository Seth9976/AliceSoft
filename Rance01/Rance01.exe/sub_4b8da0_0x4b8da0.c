// 函数: sub_4b8da0
// 地址: 0x4b8da0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebp = arg2
int128_t* eax = ebp

if (arg1 s>= 0x20)
    arg2 = arg1 u>> 5
    uint32_t i
    
    do
        int32_t var_10_1 = arg5
        sub_4b9170(eax, &eax[8])
        i = arg2
        arg2 -= 1
        eax = &eax[8]
    while (i != 1)

int32_t var_10_2 = arg5
void* result = sub_4b9170(eax, arg3)
int32_t esi_2 = 0x20

if (arg1 s> 0x20)
    do
        int32_t* eax_1 = *(arg4 + 0x10)
        int32_t var_10_3 = arg5
        eax_1[1] = *eax_1
        int32_t var_14_3 = arg1
        int32_t var_18_3 = esi_2
        int32_t var_2c = 0
        int32_t edx_2 = *(arg4 + 0x10)
        arg2 = &var_2c
        sub_4b9250(arg3, edx_2, ebp, arg3, var_2c, 0, nullptr, nullptr, edx_2)
        int32_t** ecx_7 = *(arg4 + 0x10)
        int32_t esi_3 = esi_2 * 2
        result = sub_4b9390(esi_3, arg5, *ecx_7, ecx_7[1], ebp, arg1, arg5)
        esi_2 = esi_3 * 2
    while (esi_2 s< arg1)

return result
