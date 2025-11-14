// 函数: sub_5dc480
// 地址: 0x5dc480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HMENU hmenu = *arg1

if (hmenu == 0)
    arg1.b = 0
    return arg1

int32_t lpmii
sub_6bc670(&lpmii, 0, 0x30)
uint32_t edx = zx.d(arg3)
int32_t edx_1 = neg.d(edx)
lpmii = 0x30
int32_t var_34 = 0x101
int32_t var_30 = 0x200
int32_t var_2c = sbb.d(edx_1, edx_1, edx != 0) & 8
BOOL eax
eax.b = SetMenuItemInfoA(hmenu, arg2, 0, &lpmii) != 0
return eax
