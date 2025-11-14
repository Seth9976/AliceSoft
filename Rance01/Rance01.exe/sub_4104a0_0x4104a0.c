// 函数: sub_4104a0
// 地址: 0x4104a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* result = __chkstk(0x4008)
int32_t eax_1 = data_78c474 ^ &__return_addr
__builtin_memset(&__return_addr, 0, 5)
char arg_4
void arg_4010
sub_6b5336(&arg_4, 0x4000, arg1, &arg_4010)
char* eax_2 = &arg_4
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
char i

do
    i = *eax_2
    eax_2 = &eax_2[1]
while (i != 0)
void arg_5
sub_401270(result, eax_2 - &arg_5, &arg_4)
sub_6b4885(eax_1 ^ &__return_addr)
return result
