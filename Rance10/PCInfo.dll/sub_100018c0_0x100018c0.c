// 函数: sub_100018c0
// 地址: 0x100018c0
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

if (arg2 u< 0x1000)
    int32_t eax_5 = sub_10002147(arg2)
    *arg1 = eax_5
    arg1[1] = eax_5
    arg1[2] = *arg1 + arg2
    int32_t eax_7
    eax_7.b = 1
    return eax_7

if (arg2 + 0x23 u<= arg2)
    sub_1000250e()
    noreturn

int32_t eax_2 = sub_10002147(arg2 + 0x23)
void* ecx_1 = (eax_2 + 0x23) & 0xffffffe0
*(ecx_1 - 4) = eax_2
*arg1 = ecx_1
arg1[1] = ecx_1
arg1[2] = *arg1 + arg2
int32_t eax_4
eax_4.b = 1
return eax_4
