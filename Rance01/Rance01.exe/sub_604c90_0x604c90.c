// 函数: sub_604c90
// 地址: 0x604c90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

__chkstk(0x4004)
int32_t eax_1 = data_78c474 ^ &__return_addr
__return_addr.b = 0
sub_6bc670(&__return_addr:1, 0, 0x3fff)
void arg_400c
sub_6b5336(&__return_addr, 0x4000, arg1, &arg_400c)

if (data_797d6f == 0)
    int32_t* lpCaption = data_793518
    
    if (data_79352c u< 0x10)
        lpCaption = &data_793518
    
    MessageBoxA(data_797da4, &__return_addr, lpCaption, 0x50000)
    enum MESSAGEBOX_RESULT eax_6
    eax_6.b = 0
    sub_6b4885(eax_1 ^ &__return_addr)
    return eax_6

void* const* eax_2 = &__return_addr
char i

do
    i = *eax_2
    eax_2 += 1
while (i != 0)
sub_402cb0(&data_793534, &__return_addr, eax_2 - &__return_addr:1)
sub_402cb0(&data_793534, "\n----------------\n", 0x12)
int32_t* eax_4
eax_4.b = 0
sub_6b4885(eax_1 ^ &__return_addr)
return eax_4
