// 函数: sub_5dc4f0
// 地址: 0x5dc4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HMENU hmenu = *arg1

if (hmenu != 0)
    int32_t lpmii
    sub_6bc670(&lpmii, 0, 0x30)
    lpmii = 0x30
    int32_t var_2c_1 = 0x101
    int32_t var_28_1 = 0x200
    
    if (GetMenuItemInfoA(hmenu, arg2, 0, &lpmii) != 0)
        int32_t var_24
        int32_t eax_1
        eax_1.b = var_24 == 8
        return eax_1

arg1.b = 0
return arg1
