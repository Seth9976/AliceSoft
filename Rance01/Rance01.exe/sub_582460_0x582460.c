// 函数: sub_582460
// 地址: 0x582460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &viewtrans::CTransitionBlockDissolve::`vftable'{for `viewtrans::CTransitionType'}
int32_t* eax = arg1[3]

if (eax != 0)
    int32_t var_8_1 = *eax
    sub_6b53b2()
    int32_t var_c_1 = arg1[3]
    sub_6b53b2()
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

*arg1 = &viewtrans::CTransitionType::`vftable'

if ((arg2 & 1) != 0)
    struct viewtrans::CTransitionType::viewtrans::CTransitionBlockDissolve::VTable** var_8_2 = arg1
    sub_6b4d5b()

return arg1
