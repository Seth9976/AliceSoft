// 函数: sub_658360
// 地址: 0x658360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg2
int32_t ebx = 0
*(ebp + 0x34) = 0
*(ebp + 0x36) = 0
sub_401180(ebp + 0x38, 0xffffffff, arg1, 0)
void* esi = arg5
*(ebp + 0x28) = arg7
*(ebp + 0x24) = arg4
*(ebp + 0x20) = arg3
*(ebp + 0x54) = arg8
sub_4c32d0(esi, ebp + 0x98)

if (esi u> 0)
    arg2 = esi
    void* i
    
    do
        sub_65a090(*(ebp + 0x98) + ebx, arg6)
        ebx += 0x10
        i = arg2
        arg2 -= 1
    while (i != 1)
    esi = arg5

sub_6583f0(ebp, esi)
sub_6586a0(ebp, arg6)
return sub_658950(ebp, esi, arg6)
