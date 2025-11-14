// 函数: sub_61e250
// 地址: 0x61e250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx
int32_t* edx
ecx, edx = __chkstk(0x4004)
int32_t eax_1 = data_78c474 ^ &__return_addr
__return_addr.b = 0
sub_6bc670(&__return_addr:1, 0, 0x3fff)
GetWindowTextA(*ecx, &__return_addr, 0x3fff)
void* const* eax_2 = &__return_addr
char i

do
    i = *eax_2
    eax_2 += 1
while (i != 0)
int32_t* result = sub_401270(edx, eax_2 - &__return_addr:1, &__return_addr)
sub_6b4885(eax_1 ^ &__return_addr)
return result
