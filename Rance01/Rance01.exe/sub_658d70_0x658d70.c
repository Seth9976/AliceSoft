// 函数: sub_658d70
// 地址: 0x658d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_a4
int32_t eax_1 = data_78c474 ^ &var_a4
int32_t ecx_3 = ((*(arg1 + 0x7c) - *(arg1 + 0x78)) s>> 2) + 1
BOOL var_a0 = arg2
BOOL result

if (ecx_3 u> arg3 && ((*(arg1 + 0x8c) - *(arg1 + 0x88)) s>> 2) + 1 u> arg4)
    int32_t ecx_6 = *(*(arg1 + 0x98) + arg3 * 0x10)
    *(ecx_6 + (arg4 << 2)) = arg2
    int32_t eax_2 = *(arg1 + 0x78)
    
    if (arg3 u> (*(arg1 + 0x7c) - eax_2) s>> 2)
        sub_416780(&var_a0, sub_6b0390(ecx_6, eax_2 + (arg3 << 2), arg1 + 0x68))
    
    int32_t eax_5 = *(arg1 + 0x88)
    int32_t ecx_9 = (*(arg1 + 0x8c) - eax_5) s>> 2
    
    if (arg4 u> ecx_9)
        ecx_9 = sub_416780(&var_a0, sub_6b0390(ecx_9, eax_5 + (arg4 << 2), arg1 + 0x68))
    
    WINDOWPLACEMENT lpwndpl
    WINDOWPLACEMENT lpwndpl_1
    WINDOWPLACEMENT lpwndpl_2
    
    if (arg3 != 0)
        sub_416780(&var_a0, sub_6b0390(ecx_9, *(arg1 + 0x78) + (arg3 << 2) - 4, arg1 + 0x68) + 0x10)
        BOOL edi_7 = var_a0
        GetWindowPlacement(*(edi_7 + 0x34), &lpwndpl)
        int32_t top_1 = lpwndpl.rcNormalPosition.top
        GetWindowPlacement(*(edi_7 + 0x34), &lpwndpl_1)
        int32_t left = lpwndpl_1.rcNormalPosition.left
        GetWindowPlacement(*(*(*(arg1 + 0x78) + (arg3 << 2) - 4) + 0x34), &lpwndpl_2)
        SetWindowPos(*(edi_7 + 0x34), nullptr, 
            *(arg1 + 0x28) + lpwndpl_2.rcNormalPosition.left + left, top_1, 0, 0, SWP_NOSIZE)
    
    if (arg4 != 0)
        int32_t ecx_14 = *(arg1 + 0x88)
        sub_416780(&var_a0, sub_6b0390(ecx_14, ecx_14 + (arg4 << 2) - 4, arg1 + 0x68) + 0x10)
        BOOL edi_10 = var_a0
        GetWindowPlacement(*(edi_10 + 0x34), &lpwndpl_2)
        int32_t top_2 = lpwndpl_2.rcNormalPosition.top
        GetWindowPlacement(*(*(*(arg1 + 0x88) + (arg4 << 2) - 4) + 0x34), &lpwndpl_1)
        int32_t top = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(edi_10 + 0x34), &lpwndpl)
        SetWindowPos(*(edi_10 + 0x34), nullptr, lpwndpl.rcNormalPosition.top, 
            *(arg1 + 0x28) + top + top_2, 0, 0, SWP_NOSIZE)
    
    result.b = 1
else
    result.b = 0

sub_6b4885(eax_1 ^ &var_a4)
return result
