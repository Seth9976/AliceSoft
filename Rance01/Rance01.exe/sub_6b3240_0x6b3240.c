// 函数: sub_6b3240
// 地址: 0x6b3240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HMENU hmenu = *arg1

if (hmenu == 0)
    arg1.b = 0
    return arg1

int32_t lpmi
sub_6bc670(&lpmi, 0, 0x30)
bool cond:0 = arg2[5] u< 0x10
lpmi = 0x30
int32_t var_2c = 0x14
int32_t var_28 = 0

if (cond:0)
    int32_t* var_c_1 = arg2
else
    int32_t var_c = *arg2

int32_t var_8 = arg2[4]
int32_t var_1c = arg3
BOOL eax_1
eax_1.b = InsertMenuItemA(hmenu, 2, 1, &lpmi) != 0
return eax_1
