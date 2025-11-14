// 函数: sub_6b2ef0
// 地址: 0x6b2ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
uint32_t ebx = 0x270f
int32_t var_18 = 0x9c00
uint32_t ebp = 0x270f
int128_t* lpDevMode = sub_6b487a()
sub_6bc670(lpDevMode, 0, 0x9c00)
enum ENUM_DISPLAY_SETTINGS_MODE iModeNum = 0
enum ENUM_DISPLAY_SETTINGS_MODE iModeNum_1 = 0x270f

if (EnumDisplaySettingsA(nullptr, 0, lpDevMode) != 0)
    BOOL i
    
    do
        uint32_t ecx_1 = *(lpDevMode + 0x6c)
        
        if (ecx_1 u>= arg2)
            uint32_t eax_1 = lpDevMode[7].d
            
            if (eax_1 u>= arg3 && ecx_1 u< ebx && eax_1 u< ebp)
                ebx = ecx_1
                ebp = eax_1
                iModeNum_1 = iModeNum
        
        iModeNum += 1
        i = EnumDisplaySettingsA(nullptr, iModeNum, lpDevMode)
    while (i != 0)
    
    if (iModeNum_1 != 0x270f && ebx != 0x270f && ebp != 0x270f)
        sub_6b2e90(ebx, lpDevMode, arg1, ebp)
        int128_t* lpDevMode_1 = lpDevMode
        *arg4 = ebx
        arg4[1] = ebp
        sub_6b53b2()
        int32_t eax_5
        eax_5.b = 1
        return eax_5

int128_t* lpDevMode_2 = lpDevMode
sub_6b53b2()
int32_t eax_6
eax_6.b = 0
return eax_6
