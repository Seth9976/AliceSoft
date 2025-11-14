// 函数: sub_583500
// 地址: 0x583500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &viewtrans::CTransitionCrossFadeUneune::`vftable'{for `viewtrans::CTransitionType'}
int32_t eax = arg1[7]

if (eax != 0)
    int32_t var_c_1 = eax
    sub_6b4d5b()

arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
int32_t eax_1 = arg1[3]

if (eax_1 != 0)
    int32_t var_c_2 = eax_1
    sub_6b4d5b()

arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
*arg1 = &viewtrans::CTransitionType::`vftable'

if ((arg2 & 1) != 0)
    struct viewtrans::CTransitionType::viewtrans::CTransitionCrossFadeUneune::VTable** var_c_3 =
        arg1
    sub_6b4d5b()

return arg1
