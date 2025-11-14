// 函数: sub_6b31c0
// 地址: 0x6b31c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HMENU hmenu = *arg1

if (hmenu == 0)
    arg1.b = 0
    return arg1

int32_t lpmi
sub_6bc670(&lpmi, 0, 0x30)
bool cond:0 = arg2[5] u< 0x10
lpmi = 0x30
int32_t var_30 = 0x12
int32_t var_2c = 0

if (cond:0)
    int32_t* var_10_1 = arg2
else
    int32_t var_10 = *arg2

int32_t var_c = arg2[4]
uint32_t var_24 = zx.d(arg4)
BOOL eax_2
eax_2.b = InsertMenuItemA(hmenu, arg3, 1, &lpmi) != 0
return eax_2
