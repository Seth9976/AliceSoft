// 函数: sub_6d3b40
// 地址: 0x6d3b40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE edx = *(arg3 + 0x3c)

if (edx != 0)
    int32_t ebx_1 = arg3[2].d
    
    if (arg2 + ebx_1 + 2 s>= arg3[3].d)
        uint32_t ebx_2 = ebx_1 - *(arg3 + 0x14)
        uint32_t var_14
        
        if (sub_6ca7f0(edx, &arg3[8], ebx_2, &var_14) == 0 || ebx_2 != var_14)
            return 0xffffffe9
        
        edx = *(arg3 + 0x3c)
        arg3[2].d = *(arg3 + 0x14)

if (edx == 0 && arg3[2].d + arg2 u>= arg3[3].d)
    return 0xffffffe4

sub_705db0(arg3, arg1, arg2)
*(arg3 + 0x1c) += arg2
return 0
