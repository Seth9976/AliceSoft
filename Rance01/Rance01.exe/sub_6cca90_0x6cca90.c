// 函数: sub_6cca90
// 地址: 0x6cca90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 + 0x54)

if (ecx == 1)
    if (*(arg1 + 0x58) != 4)
        *arg2 = 0
        return 0xfffffff8
    
    *arg2 = 6
    return 0

if (ecx == 2)
    if (*(arg1 + 0x58) != 0xff)
        *arg2 = 0
        return 0xfffffff8
    
    *arg2 = 5
    return 0

if (ecx == 3)
    int32_t ecx_1 = *(arg1 + 0x58)
    
    if (ecx_1 == 1)
        *arg2 = 8
        return 0
    
    if (ecx_1 != 3)
        if (ecx_1 != 0xff)
            *arg2 = 0
            return 0xfffffff8
        
        *arg2 = 8
        return 0
    
    *arg2 = 0xa
    return 0

if (ecx != 4)
    *arg2 = 0
    return 0xfffffff8

int32_t ecx_2 = *(arg1 + 0x58)

if (ecx_2 == 5)
    *arg2 = 0xa
    return 0

if (ecx_2 == 6)
    *arg2 = 0xb
    return 0

if (ecx_2 != 0xff)
    *arg2 = 0
    return 0xfffffff8

*arg2 = 0xa
return 0
