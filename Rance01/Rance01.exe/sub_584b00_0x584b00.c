// 函数: sub_584b00
// 地址: 0x584b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &viewtrans::CTransitionPolyExplosion::`vftable'{for `viewtrans::CTransitionType'}
int32_t eax = arg1[0x55]

if (eax != 0)
    int32_t var_c_1 = eax
    sub_6b4d5b()

arg1[0x55] = 0
arg1[0x56] = 0
arg1[0x57] = 0
sub_57ea20(&arg1[3])
*arg1 = &viewtrans::CTransitionType::`vftable'

if ((arg2 & 1) != 0)
    struct viewtrans::CTransitionType::viewtrans::CTransitionPolyExplosion::VTable** var_c_2 = arg1
    sub_6b4d5b()

return arg1
