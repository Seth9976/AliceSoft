// 函数: sub_4dcd20
// 地址: 0x4dcd20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebp = arg2
int128_t* eax = ebp

if (arg1 s>= 0x20)
    arg2 = arg1 u>> 5
    uint32_t i
    
    do
        int32_t var_10_1 = arg5
        sub_4dd080(eax, &eax[8])
        i = arg2
        arg2 -= 1
        eax = &eax[8]
    while (i != 1)

int32_t var_10_2 = arg5
void* result = sub_4dd080(eax, arg3)
int32_t esi_2 = 0x20

if (arg1 s> 0x20)
    do
        int32_t* eax_1 = *(arg4 + 0x10)
        eax_1[1] = *eax_1
        int32_t var_10_3 = arg5
        int32_t var_14_3 = arg1
        int32_t var_28 = 0
        int32_t var_1c_1 = 0
        int32_t* ecx_5 = *(arg4 + 0x10)
        arg2 = &var_28
        int32_t* var_18_3 = ecx_5
        sub_4dd130(esi_2, ebp, ecx_5, arg3, var_28, nullptr, 0)
        int128_t** ecx_6 = *(arg4 + 0x10)
        int32_t* edx_4 = ecx_6[1]
        int32_t esi_3 = esi_2 * 2
        result = sub_4dd240(esi_3, edx_4, *ecx_6, edx_4, ebp, arg1, arg5)
        esi_2 = esi_3 * 2
    while (esi_2 s< arg1)

return result
