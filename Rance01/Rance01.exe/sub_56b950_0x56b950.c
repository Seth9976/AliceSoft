// 函数: sub_56b950
// 地址: 0x56b950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &sys40::CScreenshotFolderPath::`vftable'

if (arg1[0xd] u>= 0x10)
    int32_t __saved_ebx_1 = arg1[8]
    sub_6b4d5b()

arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0

if (arg1[6] u>= 0x10)
    int32_t var_c_1 = arg1[1]
    sub_6b4d5b()

arg1[5] = 0
arg1[6] = 0xf
arg1[1].b = 0

if ((arg2 & 1) != 0)
    struct sys40::CScreenshotFolderPath::VTable** __saved_ebx_2 = arg1
    sub_6b4d5b()

return arg1
