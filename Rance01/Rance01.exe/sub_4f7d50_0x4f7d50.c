// 函数: sub_4f7d50
// 地址: 0x4f7d50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result_2 = arg1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(result_2 - 1)
int32_t result = eax_1 - edx
int32_t result_1 = result s>> 1

while (arg3 s< result_2)
    int32_t esi_2 = result_1 * 0x6c
    long double x87_r7_1 = fconvert.t(*(esi_2 + arg2 + 0x68))
    long double x87_r6_1 = fconvert.t(*(arg4 + 0x68))
    x87_r6_1 - x87_r7_1
    result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    
    if ((result:1.b & 0x41) != 0)
        break
    
    __builtin_memcpy(result_2 * 0x6c + arg2, esi_2 + arg2, 0x6c)
    result_2 = result_1
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q(result_1 - 1)
    result = (eax_3 - edx_2) s>> 1
    result_1 = result

__builtin_memcpy(result_2 * 0x6c + arg2, arg4, 0x6c)
return result
