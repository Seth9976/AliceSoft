// 函数: sub_6a9b90
// 地址: 0x6a9b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*(arg3 + 0x2ac) + 4))(arg1)
(*(*(arg3 + 0x2cc) + 4))(arg1)
int32_t eax_2 = *(arg3 + 0x64)
*(arg3 + 0x3b8) = eax_2
*(arg3 + 0x3f0) = eax_2
*(arg3 + 0x3ec) = *(arg3 + 0x444)

if (sub_6a5000(arg3 + 0x3a8) != 0 && sub_6a5000(arg3 + 0x3e0) != 0)
    int32_t eax_7 = *(arg3 + 0x64)
    *(arg3 + 0x418) = *(arg3 + 0x60)
    *(arg3 + 0x344) = eax_7
    *(arg3 + 0x35c) = eax_7
    *(arg3 + 0x358) = 0xffffff
    
    if (sub_6a5000(arg3 + 0x34c) == 0)
        sub_604c90(0x72d298)
        *(arg3 + 0x450) = 1
        return 0
    
    *(arg3 + 0x348) = *(arg3 + 0x60)
    *(arg3 + 0x31c) = 0xb4b4b4
    sub_6a55b0(arg3 + 0x30c, arg3 + 0x1c0)
    sub_6a55b0(arg3 + 0x30c, arg3 + 0x1dc)
    sub_6a55b0(arg3 + 0x30c, arg3 + 0x1f8)
    sub_6a55b0(arg3 + 0x30c, arg3 + 0x214)
    sub_6a55b0(arg3 + 0x30c, arg3 + 0x230)
    return 0

sub_604c90(0x72d270)
*(arg3 + 0x450) = 1
return 0
