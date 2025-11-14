// 函数: sub_4bdcc0
// 地址: 0x4bdcc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg3
struct sealengine::CLine::VTable** esi = arg1

while (edi != arg4)
    if (esi != 0)
        int32_t (__fastcall* var_10_1)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
        *esi = &sealengine::CLine::`vftable'
        sub_6b53ec(&esi[1], edi + 4, 0x14, 2, sub_4bdba0)
    
    edi += 0x2c
    esi = &esi[0xb]
