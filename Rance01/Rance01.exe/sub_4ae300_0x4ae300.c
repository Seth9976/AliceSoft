// 函数: sub_4ae300
// 地址: 0x4ae300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg1[0xa]

if (eax != 0)
    int32_t var_8_1 = eax
    sub_6b4d5b()

arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
int32_t result = *arg1

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
return result
