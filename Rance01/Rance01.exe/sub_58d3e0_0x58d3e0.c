// 函数: sub_58d3e0
// 地址: 0x58d3e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg3

if (arg1 == arg4)
label_58d418:
    
    if (esi != arg5)
        return 1
else
    while (esi != arg5)
        int32_t ecx = *arg1
        int32_t edx = *esi
        
        if (edx s> ecx)
            arg1.b = 1
            return arg1
        
        if (edx s< ecx)
            arg1.b = 0
            return arg1
        
        arg1 = &arg1[1]
        esi = &esi[1]
        
        if (arg1 == arg4)
            goto label_58d418
    
    if (arg1 == arg4)
        goto label_58d418

return 0
