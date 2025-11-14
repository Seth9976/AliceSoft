// 函数: sub_4b48c0
// 地址: 0x4b48c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &sealengine::CBoneCollisionShape::`vftable'
int32_t eax = arg1[0xb]

if (eax != 0)
    int32_t var_8_1 = eax
    sub_6b4d5b()

arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[1] = &sealengine::CCollisionShape::`vftable'

if ((arg2 & 1) != 0)
    struct sealengine::CBoneCollisionShape::VTable** var_8_2 = arg1
    sub_6b4d5b()

return arg1
