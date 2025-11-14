// 函数: sub_5682f0
// 地址: 0x5682f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x364) != 0)
    int32_t eax_1 = *(arg1 + 0x368)
    
    if (eax_1 == 0)
        if (sub_6b2dd0(arg1 + 0x36c) == 0)
            return 0
        
        *(arg1 + 0x364) = 0
    else if (eax_1 == 1)
        ChangeDisplaySettingsA(nullptr, 0)
        *(arg1 + 0x364) = 0
    else
        if (eax_1 != 2)
            return 0
        
        *(arg1 + 0x364) = 0

*(arg1 + 0xcc) = 0
*(arg1 + 0xd0) = 0
return 1
