// 函数: sub_501a10
// 地址: 0x501a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_401180(arg2, 0xffffffff, arg1, 0)
*(arg2 + 0x71) = sub_402680("collision", arg1)
void* eax_1
eax_1.b = sub_405360(arg1, "(water)", 7) != 0xffffffff
arg2[0x1e].b = eax_1.b
*(arg2 + 0x79) = sub_405360(arg1, "(nolighting)", 0xc) == 0xffffffff
*(arg2 + 0x7a) = sub_405360(arg1, "(nomakeshadow)", 0xe) != 0xffffffff
void* eax_4
eax_4.b = sub_405360(arg1, "(alpha)", 7) != 0xffffffff
*(arg2 + 0x7b) = eax_4.b
void* result = sub_405360(arg1, "(env)", 5)
arg2[0x1f].b = result != 0xffffffff
return result
