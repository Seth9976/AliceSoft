// 函数: sub_6b0270
// 地址: 0x6b0270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_68
int32_t eax_1 = data_78c474 ^ &var_68
BOOL eax_2 = *(arg1 + 0x64)

if (eax_2 != 0xffffffff)
    int32_t ecx = *(arg1 + 0x88)
    WINDOWPLACEMENT lpwndpl
    int32_t top_1
    void var_64
    
    if (eax_2 != ((*(arg1 + 0x8c) - ecx) s>> 2) - 1)
        GetWindowPlacement(*(*(ecx + (eax_2 << 2) + 4) + 0x34), &lpwndpl)
        top_1 = lpwndpl.rcNormalPosition.top
    else
        top_1 = sub_6af540(arg1, &var_64)[1]
    int32_t eax_5 = *(arg1 + 0x64)
    int32_t esi_2 = top_1 - *(arg1 + 0x28) - arg2
    int32_t eax_6
    
    if (eax_5 != 0)
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(*(arg1 + 0x88) + (eax_5 << 2) - 4) + 0x34), &lpwndpl_1)
        int32_t top = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(*(*(arg1 + 0x88) + (*(arg1 + 0x64) << 2) - 4) + 0x34), &lpwndpl)
        eax_6 = lpwndpl.rcNormalPosition.top - top - lpwndpl.rcNormalPosition.bottom + arg2
    else
        eax_6 = arg2
    
    sub_6af2f0(arg1, *(arg1 + 0x64), eax_6)
    sub_6af2f0(arg1, *(arg1 + 0x64) + 1, esi_2)
    void* eax_13 = *(*(arg1 + 0x88) + (*(arg1 + 0x64) << 2))
    
    if (*(eax_13 + 0x9c) != 0)
        eax_13.b = 0
        sub_6b4885(eax_1 ^ &var_68)
        return eax_13
    
    InvalidateRect(*(eax_13 + 0x34), nullptr, 1)

eax_2.b = 1
sub_6b4885(eax_1 ^ &var_68)
return eax_2
