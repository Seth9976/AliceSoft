// 函数: sub_6a7140
// 地址: 0x6a7140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &dpsound::COptionWindow::`vftable'{for `dpsound::CWindow'}
int32_t* eax = arg1[0x48]

if (eax != 0)
    sub_405780(eax, arg1[0x49])
    int32_t var_10_1 = arg1[0x48]
    sub_6b4d5b()

arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x4a] = 0
sub_6b1390(&arg1[0x2f])
arg1[0x27] = &dpsound::CParamBase::`vftable'
arg1[0x1f] = &dpsound::CParamBase::`vftable'
return sub_6b1730(arg1) __tailcall
