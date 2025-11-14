// 函数: sub_604d80
// 地址: 0x604d80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

__chkstk(0x4004)
int32_t eax_1 = data_78c474 ^ &__return_addr
__return_addr.b = 0
sub_6bc670(&__return_addr:1, 0, 0x3fff)
void arg_400c
sub_6b5336(&__return_addr, 0x4000, arg1, &arg_400c)
int32_t* lpCaption = data_793518

if (data_79352c u< 0x10)
    lpCaption = &data_793518

enum MESSAGEBOX_RESULT result = MessageBoxA(data_797da4, &__return_addr, lpCaption, 0x50001)
sub_6b4885(eax_1 ^ &__return_addr)
return result
