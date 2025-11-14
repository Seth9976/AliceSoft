// 函数: sub_4bc940
// 地址: 0x4bc940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_2 = arg2[1]
int32_t esi = arg1
int32_t eax

if (esi u< ecx_2)
    eax = *arg2

if (esi u< ecx_2 && eax u<= esi)
    if (ecx_2 == arg2[2])
        sub_4bd270(arg2)
    
    esi = (esi - eax) s/ 0x2c * 0x2c + *arg2
else if (ecx_2 == arg2[2])
    sub_4bd270(arg2)

struct sealengine::CLine::VTable** result = arg2[1]

if (result != 0)
    int32_t (__fastcall* var_8_1)(struct sealengine::CPoint::VTable** arg1) = sub_4f2b90
    *result = &sealengine::CLine::`vftable'
    result = sub_6b53ec(&result[1], esi + 4, 0x14, 2, sub_4bdba0)

arg2[1] += 0x2c
return result
