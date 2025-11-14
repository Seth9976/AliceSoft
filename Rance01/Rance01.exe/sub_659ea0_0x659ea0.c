// 函数: sub_659ea0
// 地址: 0x659ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t left
int32_t eax_1 = data_78c474 ^ &left
BOOL result = *(arg1 + 0x60)

if (result != 0xffffffff)
    int32_t ecx_1 = *(arg1 + 0x78)
    WINDOWPLACEMENT lpwndpl
    int32_t left_1
    
    if (result != ((*(arg1 + 0x7c) - ecx_1) s>> 2) - 1)
        GetWindowPlacement(*(*(ecx_1 + (result << 2) + 4) + 0x34), &lpwndpl)
        left_1 = lpwndpl.rcNormalPosition.left
    else
        left_1 = *sub_6592a0(arg1, &left)
    
    int32_t eax_4 = *(arg1 + 0x60)
    int32_t edi_2 = left_1 - *(arg1 + 0x28) - arg2
    int32_t eax_5
    
    if (eax_4 != 0)
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(*(arg1 + 0x78) + (eax_4 << 2) - 4) + 0x34), &lpwndpl_1)
        int32_t eax_7 = *(arg1 + 0x60)
        left = lpwndpl_1.rcNormalPosition.left
        GetWindowPlacement(*(*(*(arg1 + 0x78) + (eax_7 << 2) - 4) + 0x34), &lpwndpl)
        eax_5 = lpwndpl.rcNormalPosition.left - lpwndpl.rcNormalPosition.right - left + arg2
    else
        eax_5 = arg2
    
    sub_658f70(*(arg1 + 0x60), arg1, eax_5)
    sub_658f70(*(arg1 + 0x60) + 1, arg1, edi_2)
    result = InvalidateRect(*(*(*(arg1 + 0x78) + (*(arg1 + 0x60) << 2)) + 0x34), nullptr, 1)

sub_6b4885(eax_1 ^ &left)
return result
