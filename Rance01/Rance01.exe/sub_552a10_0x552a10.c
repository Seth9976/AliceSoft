// 函数: sub_552a10
// 地址: 0x552a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg3 = sub_5527e0(arg2)
int32_t* result = sub_552320(arg2 + 0x20)

if (result == 0)
    return result

*(*(arg2 + 8) + (*arg3 << 2)) = result
uint32_t eax_5 = zx.d(sub_54ffa0(*(arg1 + 0x30), result, *(arg1 + 0x2c), arg1 + 0x3c))
int32_t eax_6 = neg.d(eax_5)
return sbb.d(eax_6, eax_6, eax_5 != 0) & result
