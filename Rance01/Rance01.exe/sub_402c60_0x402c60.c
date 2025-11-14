// 函数: sub_402c60
// 地址: 0x402c60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
char* eax = arg2

do
    ecx.b = *eax
    eax = &eax[1]
while (ecx.b != 0)

int32_t* eax_3 = sub_402cb0(arg3, arg2, eax - &eax[1])
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
sub_401ef0(arg1, eax_3)
return arg1
