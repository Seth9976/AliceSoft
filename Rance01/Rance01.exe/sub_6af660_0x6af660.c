// 函数: sub_6af660
// 地址: 0x6af660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result_1
int32_t eax_1 = data_78c474 ^ &result_1
int32_t* eax_2 = *(arg1 + 0x98)
int32_t i = (*(arg1 + 0x7c) - *(arg1 + 0x78)) s>> 2
int32_t edi_2 = (*(arg1 + 0x8c) - *(arg1 + 0x88)) s>> 2
int32_t edx_2 = (*(arg1 + 0x9c) - eax_2) s>> 4
int32_t ebp_2 = (eax_2[1] - *eax_2) s>> 2
result_1 = 0
WINDOWPLACEMENT lpwndpl
WINDOWPLACEMENT lpwndpl_1

if (i s> 0)
    int32_t result_2
    
    do
        GetWindowPlacement(*(*(**(arg1 + 0x98) + (ebp_2 << 2) - 4) + 0x34), &lpwndpl_1)
        int32_t top_1 = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(*(**(arg1 + 0x98) + (ebp_2 << 2) - 4) + 0x34), &lpwndpl)
        result_2 = result_1
        SetWindowPos(*(*(*(arg1 + 0x78) + (result_2 << 2)) + 0x34), nullptr, 0, 0, *(arg1 + 0x28), 
            top_1 - lpwndpl.rcNormalPosition.top + lpwndpl.rcNormalPosition.bottom, SWP_NOMOVE)
        result_1 = result_2 + 1
    while (result_2 + 1 s< i)

int32_t ebp_3 = 0

if (edi_2 s> 0)
    result_1 = edx_2 << 4
    
    do
        GetWindowPlacement(*(**(result_1 + *(arg1 + 0x98) - 0x10) + 0x34), &lpwndpl_1)
        int32_t left = lpwndpl_1.rcNormalPosition.left
        GetWindowPlacement(*(**(result_1 + *(arg1 + 0x98) - 0x10) + 0x34), &lpwndpl)
        SetWindowPos(*(*(*(arg1 + 0x88) + (ebp_3 << 2)) + 0x34), nullptr, 0, 0, 
            lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left + left, *(arg1 + 0x28), 
            SWP_NOMOVE)
        ebp_3 += 1
    while (ebp_3 s< edi_2)

int32_t result = 0
int32_t ecx_17 = (*(arg1 + 0x7c) - *(arg1 + 0x78)) s>> 2
int32_t var_6c_2 = ecx_17
result_1 = 0

if (ecx_17 s> 0)
    int32_t* var_70_1 = nullptr
    
    do
        int32_t* eax_13 = *(arg1 + 0xa8) + var_70_1
        int32_t edi_6 = 0
        int32_t ebp_6 = (eax_13[1] - *eax_13) s>> 2
        
        if (ebp_6 s> 0)
            do
                GetWindowPlacement(*(*(*(arg1 + 0x88) + (edi_6 << 2)) + 0x34), &lpwndpl_1)
                int32_t top = lpwndpl_1.rcNormalPosition.top
                GetWindowPlacement(*(*(*(arg1 + 0x78) + (result_1 << 2)) + 0x34), &lpwndpl)
                SetWindowPos(*(*(*(var_70_1 + *(arg1 + 0xa8)) + (edi_6 << 2)) + 0x34), nullptr, 
                    lpwndpl.rcNormalPosition.left, top, 0, 0, SWP_NOSIZE)
                edi_6 += 1
            while (edi_6 s< ebp_6)
            
            ecx_17 = var_6c_2
        
        var_70_1 = &var_70_1[4]
        result = result_1 + 1
        result_1 = result
    while (result s< ecx_17)

sub_6b4885(eax_1 ^ &result_1)
return result
