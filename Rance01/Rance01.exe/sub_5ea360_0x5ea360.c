// 函数: sub_5ea360
// 地址: 0x5ea360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(arg1)
int32_t ecx = sub_70c710(x87_r7)
long double x87_r6_1 = float.t(ecx)
x87_r6_1 - x87_r7
int32_t result
result.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    if (ecx s>= 0)
        if (ecx == ecx s/ 0x168 * 0x168)
            result.b = 0
            return result
    else if (mods.dp.d(sx.q(neg.d(ecx)), 0x168) == 0)
        result.b = 0
        return result

result.b = 1
return result
