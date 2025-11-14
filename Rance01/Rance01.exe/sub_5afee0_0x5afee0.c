// 函数: sub_5afee0
// 地址: 0x5afee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0 || arg2 == 0)
    return 

int16_t eax = *(arg2 + 0x14)

if (eax != 0 && eax u<= 0x100)
    sub_5a4280(arg1, arg2, 8, 0)
    int32_t eax_1 = sub_5a6370(0x200, arg1)
    *(arg1 + 0x200) = eax_1
    
    if (eax_1 == 0)
        sub_5a5de0("Insufficient memory for hIST chunk data", arg1)
        return 
    
    int32_t i = 0
    
    if (0 u< *(arg2 + 0x14))
        do
            *(*(arg1 + 0x200) + (i << 1)) = *(arg3 + (i << 1))
            i += 1
        while (i s< zx.d(*(arg2 + 0x14)))
    
    int32_t edx_2 = *(arg1 + 0x200)
    *(arg2 + 8) |= 0x40
    *(arg2 + 0xb8) |= 8
    *(arg2 + 0x7c) = edx_2
    return 

sub_5a5de0("Invalid palette size, hIST allocation skipped", arg1)
