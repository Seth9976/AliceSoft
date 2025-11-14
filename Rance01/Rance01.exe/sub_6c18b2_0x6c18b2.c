// 函数: sub_6c18b2
// 地址: 0x6c18b2
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx = 0

if (arg2 u> 0 && divu.dp.d(0:0xffffffe0, arg2) u< arg3)
    *__errno() = 0xc
    return 0

uint32_t ecx_1 = arg2 * arg3
int32_t edi
int32_t var_10_1 = edi

if (arg1 != 0)
    ebx = _msize_base(arg1)

int32_t result = _realloc(arg1, ecx_1)

if (result != 0 && ebx u< ecx_1)
    sub_6bc670(ebx + result, 0, ecx_1 - ebx)

return result
