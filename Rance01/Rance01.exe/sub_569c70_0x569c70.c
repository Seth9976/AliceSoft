// 函数: sub_569c70
// 地址: 0x569c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = arg3 & 0xfff0
int32_t* eax_6

if (eax_1 == 0xf120)
    if (*(arg1 + 0x2a1) == 0)
        OpenIcon(arg2)
        return 0
    
    eax_6 = arg1
    
    if (IsIconic(arg2) != 0)
        goto label_569cc5
    
    sub_568430(eax_6)
    return 0

if (eax_1 == 0x9cb0)
    sub_5681f0(arg1)
    return 0

if (eax_1 == 0xf020)
    if (*(arg1 + 0x2a1) != 0)
        sub_5682f0(arg1)
else if (eax_1 == 0xf030)
    if (*(arg1 + 0x2a1) == (eax_1 - 0xf020).b - 0x10)
        if (IsIconic(arg2) != 0)
            OpenIcon(arg2)
        
        sub_568350(arg1)
        return 0
    
    if (IsIconic(arg2) == 0)
        return 0
    
    eax_6 = arg1
label_569cc5:
    
    if (sub_568230(eax_6) != 0)
        OpenIcon(arg2)
        return 0
    
    OpenIcon(arg2)
    sub_568430(arg1)
    return 0

if ((eax_1 == 0xf140 || eax_1 == 0xf170) && (*(arg1[0x9e] + 4))() != 0)
    return 1

return DefWindowProcA(arg2, 0x112, arg3, arg4)
