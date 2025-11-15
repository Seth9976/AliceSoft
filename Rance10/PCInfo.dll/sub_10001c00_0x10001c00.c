// 函数: sub_10001c00
// 地址: 0x10001c00
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t* var_24
int32_t eax_1 = __security_cookie ^ &var_24
uint32_t i = arg2
int32_t var_20 = 0
void var_7
void* esi = &var_7
var_24 = arg1

if (i s>= 0)
    do
        esi -= 1
        uint32_t i_3 = i u/ 0xa
        i.b -= i_3.b * 0xa
        i.b += 0x30
        *esi = i.b
        i = i_3
    while (i != 0)
else
    int32_t i_1 = neg.d(i)
    
    do
        esi -= 1
        int32_t i_2 = i_1 u/ 0xa
        i_1.b -= i_2.b * 0xa
        i_1.b += 0x30
        *esi = i_1.b
        i_1 = i_2
    while (i_1 != 0)
    
    esi -= 1
    *esi = 0x2d

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0

if (esi != &var_7)
    sub_100014d0(arg1, esi, &var_7 - esi)

@__security_check_cookie@4(eax_1 ^ &var_24)
return arg1
