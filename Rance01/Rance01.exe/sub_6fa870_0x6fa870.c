// 函数: sub_6fa870
// 地址: 0x6fa870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg3 = 0
int32_t result
int32_t ecx

if (*(arg1 + 0x3c) == 0)
    ecx = *(arg1 + 0x24)
label_6fa896:
    int32_t edx_1 = *(arg1 + 0x10)
    
    if (arg2 u> ecx)
        return 0xfffffffb
    
    *(arg1 + 0x10) = arg2 + edx_1
    result = 0
    *(arg1 + 0x1c) += arg2
    *(arg1 + 0x24) = ecx - arg2
    *arg3 = edx_1
else
    ecx = *(arg1 + 0x24)
    
    if (arg2 u<= ecx)
        goto label_6fa896
    
    result = sub_6fa810(arg1)
    
    if (result == 0)
        ecx = *(arg1 + 0x24)
        
        if (arg2 u> ecx)
            return 0xffffffe8
        
        goto label_6fa896
return result
