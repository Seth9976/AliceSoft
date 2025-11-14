// 函数: sub_4f7bc0
// 地址: 0x4f7bc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg3
int32_t edi = arg1
int32_t edx = edi * 2 + 2
arg3 = edi
bool cond:0 = edx != ebp
int32_t ecx

while (edx s< ebp)
    int32_t eax_1 = edx * 0x6c
    long double x87_r7_1 = fconvert.t(*(eax_1 + arg2 + 0x68))
    long double x87_r6_1 = fconvert.t(*(eax_1 + arg2 - 4))
    x87_r6_1 - x87_r7_1
    eax_1.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    
    if ((eax_1:1.b & 0x41) == 0)
        edx -= 1
    
    ecx = __builtin_memcpy(edi * 0x6c + arg2, edx * 0x6c + arg2, 0x6c)
    edi = edx
    edx = edx * 2 + 2
    cond:0 = edx != ebp

if (not(cond:0))
    ecx = __builtin_memcpy(edi * 0x6c + arg2, ebp * 0x6c + arg2 - 0x6c, 0x6c)
    edi = ebp - 1

int32_t var_14 = arg4
int32_t var_18 = arg3
return sub_4f7d50(edi, arg4, ecx, arg2)
