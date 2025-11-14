// 函数: sub_6b3080
// 地址: 0x6b3080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 8) != 0)
    int32_t eax_1 = *(arg1 + 0xc)
    
    if (eax_1 == 0)
        if (sub_6b2dd0(arg1 + 0x10) == 0)
            return 0
    else
        if (eax_1 == 1)
            ChangeDisplaySettingsA(nullptr, 0)
            *(arg1 + 8) = 0
            enum DISP_CHANGE result
            result.b = 1
            return result
        
        if (eax_1 != 2)
            return 0
    
    *(arg1 + 8) = 0

return 1
