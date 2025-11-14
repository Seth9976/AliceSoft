// 函数: sub_6c55af
// 地址: 0x6c55af
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = arg3 & 0xfff7ffff
int32_t mxcsr
int16_t x87control

if ((arg2 & eax_1 & 0xfcf0fce0) == 0)
    if (arg1 == 0)
        sub_6c67a4(mxcsr, x87control, arg2, eax_1)
    else
        *arg1 = sub_6c67a4(mxcsr, x87control, arg2, eax_1)
    
    return 0

if (arg1 != 0)
    *arg1 = sub_6c67a4(mxcsr, x87control, 0, 0)

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x16
