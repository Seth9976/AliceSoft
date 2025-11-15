// 函数: sub_10001a10
// 地址: 0x10001a10
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg1 == 0)
    return 0

if (arg1 u< 0x1000)
    return sub_10002147(arg1)

if (arg1 + 0x23 u<= arg1)
    sub_1000250e()
    noreturn

int32_t eax_1 = sub_10002147(arg1 + 0x23)
void* result = (eax_1 + 0x23) & 0xffffffe0
*(result - 4) = eax_1
return result
