// 函数: sub_42a350
// 地址: 0x42a350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &partsengine::CFlatEmitterData::`vftable'{for `IInterface'}
int32_t result = sub_42a3d0(arg1)

if (arg1[0x34] u>= 0x10)
    int32_t __saved_ebx_1 = arg1[0x2f]
    result = sub_6b4d5b()

arg1[0x34] = 0xf
arg1[0x33] = 0
arg1[0x2f].b = 0

if (arg1[7] u>= 0x10)
    int32_t var_8_1 = arg1[2]
    result = sub_6b4d5b()

arg1[6] = 0
arg1[7] = 0xf
arg1[2].b = 0
return result
