// 函数: sub_659f90
// 地址: 0x659f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_64
int32_t eax_1 = data_78c474 ^ &var_64
BOOL result = *(arg1 + 0x64)

if (result != 0xffffffff)
    int32_t ecx_1 = *(arg1 + 0x88)
    WINDOWPLACEMENT lpwndpl
    int32_t top_1
    
    if (result != ((*(arg1 + 0x8c) - ecx_1) s>> 2) - 1)
        GetWindowPlacement(*(*(ecx_1 + (result << 2) + 4) + 0x34), &lpwndpl)
        top_1 = lpwndpl.rcNormalPosition.top
    else
        top_1 = sub_6592a0(arg1, &var_64)[1]
    
    int32_t eax_4 = *(arg1 + 0x64)
    int32_t edi_2 = top_1 - *(arg1 + 0x28) - arg2
    int32_t eax_5
    
    if (eax_4 != 0)
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(*(arg1 + 0x88) + (eax_4 << 2) - 4) + 0x34), &lpwndpl_1)
        int32_t top = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(*(*(arg1 + 0x88) + (*(arg1 + 0x64) << 2) - 4) + 0x34), &lpwndpl)
        eax_5 = lpwndpl.rcNormalPosition.top - top - lpwndpl.rcNormalPosition.bottom + arg2
    else
        eax_5 = arg2
    
    sub_659030(arg1, *(arg1 + 0x64), eax_5)
    sub_659030(arg1, *(arg1 + 0x64) + 1, edi_2)
    result = InvalidateRect(*(*(*(arg1 + 0x88) + (*(arg1 + 0x64) << 2)) + 0x34), nullptr, 1)

sub_6b4885(eax_1 ^ &var_64)
return result
