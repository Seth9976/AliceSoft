// 函数: sub_4f3830
// 地址: 0x4f3830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_2 = arg1[0x10]
int32_t edx

if (eax_2 != 0)
    int32_t var_8_1 = eax_2
    edx = sub_6b4d5b()

arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
int32_t eax = arg1[0xc]

if (eax != 0)
    int32_t var_8_2 = eax
    edx = sub_6b4d5b()

arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
void* result = arg1[8]

if (result != 0)
    int32_t var_8_3 = arg1[9]
    sub_4f6470(result, edx)
    int32_t var_c_1 = arg1[8]
    result = sub_6b4d5b()

arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0

if (arg1[5] u>= 0x10)
    int32_t var_8_4 = *arg1
    result = sub_6b4d5b()

arg1[4] = 0
arg1[5] = 0xf
*arg1 = 0
return result
