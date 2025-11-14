// 函数: sub_604910
// 地址: 0x604910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &usernotice::CVMErrorDialog::`vftable'{for `usernotice::CDialog'}
int32_t* result = arg1[0xa]

if (result != 0)
    sub_405780(result, arg1[0xb])
    int32_t var_c_1 = arg1[0xa]
    result = sub_6b4d5b()

arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0

if (arg1[8] u>= 0x10)
    int32_t __saved_edi_1 = arg1[3]
    result = sub_6b4d5b()

arg1[7] = 0
arg1[8] = 0xf
arg1[3].b = 0
*arg1 = &usernotice::CDialog::`vftable'
return result
