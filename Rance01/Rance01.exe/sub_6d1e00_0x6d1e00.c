// 函数: sub_6d1e00
// 地址: 0x6d1e00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_3

if (arg1[3] s< 8)
    int32_t eax_6 = sub_6d1bd0(arg1, 0)
    
    if (eax_6 != 0)
        return eax_6
    
    if (arg1[3] s>= 8)
        goto label_6d1e25
    
    eax_3 = 1
label_6d1e58:
    int32_t eax_4 = sub_6d1d10(arg1, arg3, arg2, eax_3)
    
    if (eax_4 != 0)
        return eax_4
else
label_6d1e25:
    int32_t eax_1 = sub_6d1ba0(arg1, 8)
    uint32_t edx_1 = zx.d(*(arg3 + (eax_1 << 2) + 0xa))
    
    if (edx_1 == 0)
        eax_3 = 9
        goto label_6d1e58
    
    arg1[3] -= edx_1
    *arg2 = zx.d(*(arg3 + (eax_1 << 2) + 8))
return 0
