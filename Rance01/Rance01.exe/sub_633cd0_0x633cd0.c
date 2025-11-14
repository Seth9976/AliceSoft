// 函数: sub_633cd0
// 地址: 0x633cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &startup::CIniFile::`vftable'{for `ISys40Ini2'}

if (arg1[0x3b] u>= 0x10)
    int32_t var_10_1 = arg1[0x36]
    sub_6b4d5b()

arg1[0x3b] = 0xf
arg1[0x3a] = 0
arg1[0x36].b = 0
int32_t* eax_2 = arg1[0x32]

if (eax_2 != 0)
    sub_6a58e0(eax_2, arg1[0x33])
    int32_t var_10_2 = arg1[0x32]
    sub_6b4d5b()

arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = 0
int32_t* result = arg1[0x2e]

if (result != 0)
    sub_405780(result, arg1[0x2f])
    int32_t var_10_3 = arg1[0x2e]
    result = sub_6b4d5b()

arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0

if (arg1[0x2c] u>= 0x10)
    int32_t var_10_4 = arg1[0x27]
    result = sub_6b4d5b()

arg1[0x2c] = 0xf
arg1[0x2b] = 0
arg1[0x27].b = 0

if (arg1[0x25] u>= 0x10)
    int32_t var_10_5 = arg1[0x20]
    result = sub_6b4d5b()

arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0

if (arg1[0x1e] u>= 0x10)
    int32_t var_10_6 = arg1[0x19]
    result = sub_6b4d5b()

arg1[0x1e] = 0xf
arg1[0x1d] = 0
arg1[0x19].b = 0

if (arg1[0x17] u>= 0x10)
    int32_t var_10_7 = arg1[0x12]
    result = sub_6b4d5b()

arg1[0x17] = 0xf
arg1[0x16] = 0
arg1[0x12].b = 0

if (arg1[0x10] u>= 0x10)
    int32_t var_10_8 = arg1[0xb]
    result = sub_6b4d5b()

arg1[0x10] = 0xf
arg1[0xf] = 0
arg1[0xb].b = 0

if (arg1[9] u>= 0x10)
    int32_t var_10_9 = arg1[4]
    result = sub_6b4d5b()

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
return result
