// 函数: sub_4dc280
// 地址: 0x4dc280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = *(arg1 + 0x44)
void* edx = nullptr
void* esi = nullptr

if (eax_1 s>= 0)
    int32_t ecx_1 = *(arg1 + 0x24)
    
    if (eax_1 s< (*(arg1 + 0x28) - ecx_1) s>> 2)
        edx = *(ecx_1 + (eax_1 << 2))

int32_t eax = *(arg2 + 0x44)

if (eax s>= 0)
    int32_t ecx_2 = *(arg2 + 0x24)
    
    if (eax s< (*(arg2 + 0x28) - ecx_2) s>> 2)
        esi = *(ecx_2 + (eax << 2))

int32_t edx_1

if (edx == 0)
    edx_1 = 0
else
    edx_1 = *(edx + 0x30)

int32_t result

if (esi == 0)
    result = 0
else
    result = *(esi + 0x30)

if (edx_1 == result && *(arg1 + 8) == *(arg2 + 8))
    long double x87_r7_1 = fconvert.t(*(arg1 + 0x50))
    long double x87_r6_1 = fconvert.t(*(arg2 + 0x50))
    x87_r6_1 - x87_r7_1
    result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        result.b = 1
        return result

result.b = 0
return result
