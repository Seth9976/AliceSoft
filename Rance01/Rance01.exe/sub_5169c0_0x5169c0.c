// 函数: sub_5169c0
// 地址: 0x5169c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** eax = arg1 + 0x40
*(arg1 + 0x5c) = 0
bool cond:0 = eax[5] u< 0x10
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
void* __saved_ecx
sub_4b51f0(arg1 + 0x30, &__saved_ecx, *(arg1 + 0x30), *(arg1 + 0x34))
*(arg1 + 0x28) = 0
int128_t* eax_2 = *(arg1 + 0x1c)
int128_t* edi = *(arg1 + 0x18)

if (edi != eax_2)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, eax_2, ebx_1)
    *(arg1 + 0x1c) = ebx_1 + edi

return sub_4b5f30(arg1 + 8, &__saved_ecx, *(arg1 + 8), *(arg1 + 0xc))
