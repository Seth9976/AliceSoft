// 函数: sub_6b0160
// 地址: 0x6b0160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_68
int32_t eax_1 = data_78c474 ^ &var_68
BOOL eax_2 = *(arg1 + 0x60)

if (eax_2 != 0xffffffff)
    int32_t ecx = *(arg1 + 0x78)
    int32_t left
    WINDOWPLACEMENT lpwndpl
    int32_t left_1
    
    if (eax_2 != ((*(arg1 + 0x7c) - ecx) s>> 2) - 1)
        GetWindowPlacement(*(*(ecx + (eax_2 << 2) + 4) + 0x34), &lpwndpl)
        left_1 = lpwndpl.rcNormalPosition.left
    else
        left_1 = *sub_6af540(arg1, &left)
    
    int32_t eax_5 = *(arg1 + 0x60)
    int32_t esi_2 = left_1 - *(arg1 + 0x28) - arg2
    int32_t eax_6
    
    if (eax_5 != 0)
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(*(arg1 + 0x78) + (eax_5 << 2) - 4) + 0x34), &lpwndpl_1)
        int32_t eax_8 = *(arg1 + 0x60)
        left = lpwndpl_1.rcNormalPosition.left
        GetWindowPlacement(*(*(*(arg1 + 0x78) + (eax_8 << 2) - 4) + 0x34), &lpwndpl)
        eax_6 = lpwndpl.rcNormalPosition.left - lpwndpl.rcNormalPosition.right - left + arg2
    else
        eax_6 = arg2
    
    sub_6af230(*(arg1 + 0x60), arg1, eax_6)
    sub_6af230(*(arg1 + 0x60) + 1, arg1, esi_2)
    void* eax_13 = *(*(arg1 + 0x78) + (*(arg1 + 0x60) << 2))
    
    if (*(eax_13 + 0x9c) != 0)
        eax_13.b = 0
        sub_6b4885(eax_1 ^ &var_68)
        return eax_13
    
    InvalidateRect(*(eax_13 + 0x34), nullptr, 1)

eax_2.b = 1
sub_6b4885(eax_1 ^ &var_68)
return eax_2
