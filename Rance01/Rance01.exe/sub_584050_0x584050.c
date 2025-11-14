// 函数: sub_584050
// 地址: 0x584050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &viewtrans::CTransitionPixelExplosion::`vftable'{for `viewtrans::CTransitionType'}
int32_t* eax = arg1[0xe]

if (eax != 0)
    int32_t var_c_1 = *eax
    sub_6b53b2()
    int32_t var_10_1 = arg1[0xe]
    sub_6b53b2()
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

int32_t* eax_2 = arg1[0xb]

if (eax_2 != 0)
    int32_t var_c_2 = *eax_2
    sub_6b53b2()
    int32_t var_10_2 = arg1[0xb]
    sub_6b53b2()
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

int32_t* eax_4 = arg1[8]

if (eax_4 != 0)
    int32_t var_c_3 = *eax_4
    sub_6b53b2()
    int32_t var_10_3 = arg1[8]
    sub_6b53b2()
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

int32_t result = arg1[3]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
*arg1 = &viewtrans::CTransitionType::`vftable'
return result
