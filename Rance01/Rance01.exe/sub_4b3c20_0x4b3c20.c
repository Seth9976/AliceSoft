// 函数: sub_4b3c20
// 地址: 0x4b3c20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
int32_t ecx = arg1[4]
int32_t edx = arg3[4]
int32_t* eax

if (edx u<= arg1[5] - ecx || arg3[5] - edx u< ecx)
    eax = sub_402000(arg1, arg3, 0, 0xffffffff)
else
    eax = sub_40c0b0(0xffffffff, arg3, arg1, nullptr)

arg4[5] = 0xf
arg4[4] = 0
*arg4 = 0
sub_401ef0(arg4, eax)
return arg4
