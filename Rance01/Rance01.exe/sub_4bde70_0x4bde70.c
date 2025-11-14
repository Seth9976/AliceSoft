// 函数: sub_4bde70
// 地址: 0x4bde70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != 0 && arg1 s> 0 && arg1 s<= 2)
    int32_t ecx
    int32_t var_38 = ecx
    struct sealengine::CEmitterPos::VTable* var_34
    sub_4bddb0(arg3, &var_34, arg4)
    struct sealengine::CEmitterPos::VTable* var_1c
    sub_4bde10(&var_34, &var_1c, fconvert.s(fconvert.t(arg5)))
    sub_4bdd50(&var_1c, arg2, arg3)
    return arg2

*arg2 = &sealengine::CEmitterPos::`vftable'
arg2[1] = *(arg3 + 4)
arg2[2] = *(arg3 + 8)
arg2[3] = *(arg3 + 0xc)
arg2[4] = fconvert.s(fconvert.t(*(arg3 + 0x10)))
arg2[5] = fconvert.s(fconvert.t(*(arg3 + 0x14)))
return arg2
