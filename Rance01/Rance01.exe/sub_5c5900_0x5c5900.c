// 函数: sub_5c5900
// 地址: 0x5c5900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg5
int32_t ebp

if (arg3 == 0 || ebx == 0)
    ebp = 0xffffffff
else
    int32_t eax = ebx(arg3, 0, 0, 1)
    ebx = arg5
    ebp = eax

int128_t* var_8 = nullptr
int32_t var_4 = 0
sub_6bc670(arg1, 0, 0x2d0)
int32_t ecx = arg6
arg1[0x2c].d = arg4
*(arg1 + 0x2c4) = ebx
*(arg1 + 0x2c8) = ecx
*arg1 = arg3
*(arg1 + 0x2cc) = arg7

if (arg1 != 0xffffffe8)
    ecx = 0
    *(arg1 + 0x1c) = 0xffffffff
    *(arg1 + 0x18) = 0
    __builtin_memset(arg1 + 0x1c, 0, 0x18)

if (ebp != 0xffffffff)
    *(arg1 + 4) = 1

*(arg1 + 0x34) = 1
int32_t eax_3
int32_t ecx_1
int32_t edx_1
eax_3, ecx_1, edx_1 = _calloc(arg1 + 0x18, arg7, ecx, 1, 0x20)
*(arg1 + 0x48) = eax_3
int32_t eax_4
int32_t edx_2
eax_4, edx_2 = _calloc(eax_3, edx_1, ecx_1, 1, 0x10)
*(arg1 + 0x4c) = eax_4
int32_t var_30 = 0xffffffff
sub_5b9690(arg1 + 0x78, edx_2)
int32_t result
int32_t edx_4
result, edx_4 = sub_5c4790(arg1, *(arg1 + 0x48), *(arg1 + 0x4c), &var_8, &var_4, nullptr)
int128_t* ebx_1 = var_8

if (result s>= 0)
    int32_t esi_1 = var_4
    int32_t* eax_7 = _calloc(result, edx_4, esi_1 + 2, esi_1 + 2, 4)
    int32_t ecx_3 = *(arg1 + 0x1c8)
    arg1[4].d = eax_7
    *(arg1 + 0x5c) = ecx_3
    *eax_7 = ecx_3
    *(arg1[4].d + 4) = esi_1
    int128_t* eax_9
    int32_t ecx_6
    int32_t edx_6
    eax_9, ecx_6, edx_6 = sub_6c02a0(arg1[4].d + 8, ebx_1, esi_1 << 2)
    int32_t* eax_10
    int32_t ecx_7
    int32_t edx_7
    eax_10, ecx_7, edx_7 = _calloc(eax_9, edx_6, ecx_6, 1, 8)
    *(arg1 + 0x38) = eax_10
    *(arg1 + 0x3c) = _calloc(eax_10, edx_7, ecx_7, 1, 8)
    *eax_10 = 0
    eax_10[1] = 0
    int32_t* eax_12 = *(arg1 + 0x3c)
    *eax_12 = *(arg1 + 8)
    eax_12[1] = *(arg1 + 0xc)
    *(arg1 + 0x58) = 1
else
    *arg1 = 0
    sub_5c5a90(arg1)

if (ebx_1 != 0)
    __free_base(ebx_1)

return result
