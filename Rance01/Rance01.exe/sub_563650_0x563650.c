// 函数: sub_563650
// 地址: 0x563650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &sys40::CInputString::`vftable'

if (arg1[0x18] u>= 0x10)
    int32_t __saved_edi_1 = arg1[0x13]
    sub_6b4d5b()

arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0
int32_t* result = arg1[8]

if (result != 0)
    sub_405780(result, arg1[9])
    int32_t var_10_1 = arg1[8]
    result = sub_6b4d5b()

arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0

if (arg1[6] u>= 0x10)
    int32_t __saved_edi_2 = arg1[1]
    result = sub_6b4d5b()

arg1[5] = 0
arg1[6] = 0xf
arg1[1].b = 0
return result
