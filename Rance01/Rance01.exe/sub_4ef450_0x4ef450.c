// 函数: sub_4ef450
// 地址: 0x4ef450
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
int32_t eax = *(arg1 + 0x38)

if (eax s<= 0)
    return float.t(0)

long double x87_r7_3 = float.t(0)
long double x87_r6 =
    fconvert.t(fconvert.s((fconvert.t(arg2) - fconvert.t(*(arg1 + 0x228))) / float.t(eax)))
x87_r6 - x87_r7_3
eax.w = (x87_r6 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_3) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_3 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}

if (p)
    x87_r6 = float.t(1)
    x87_r6 - x87_r7_3
    eax.w = (x87_r6 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_3 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        return x87_r7_3

return x87_r6
