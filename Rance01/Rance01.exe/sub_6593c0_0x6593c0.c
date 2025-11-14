// 函数: sub_6593c0
// 地址: 0x6593c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result_1
int32_t eax_1 = data_78c474 ^ &result_1
int32_t i = (*(arg1 + 0x7c) - *(arg1 + 0x78)) s>> 2
result_1 = 0
WINDOWPLACEMENT lpwndpl
WINDOWPLACEMENT lpwndpl_1

if (i != 0)
    int32_t result_2
    
    do
        int32_t* eax_2 = *(arg1 + 0x98)
        GetWindowPlacement(*(*(*eax_2 + ((eax_2[1] - *eax_2) s>> 2 << 2) - 4) + 0x34), &lpwndpl_1)
        int32_t* eax_4 = *(arg1 + 0x98)
        int32_t top_1 = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(*(*eax_4 + ((eax_4[1] - *eax_4) s>> 2 << 2) - 4) + 0x34), &lpwndpl)
        result_2 = result_1
        SetWindowPos(*(*(*(arg1 + 0x78) + (result_2 << 2)) + 0x34), nullptr, 0, 0, *(arg1 + 0x28), 
            top_1 - lpwndpl.rcNormalPosition.top + lpwndpl.rcNormalPosition.bottom, SWP_NOMOVE)
        result_1 = result_2 + 1
    while (result_2 + 1 u< i)

int32_t edi_4 = 0
int32_t ebp_4 = (*(arg1 + 0x8c) - *(arg1 + 0x88)) s>> 2

if (ebp_4 != 0)
    do
        int32_t eax_8 = *(arg1 + 0x98)
        GetWindowPlacement(*(**(((*(arg1 + 0x9c) - eax_8) & 0xfffffff0) + eax_8 - 0x10) + 0x34), 
            &lpwndpl_1)
        int32_t left = lpwndpl_1.rcNormalPosition.left
        int32_t eax_10 = *(arg1 + 0x98)
        GetWindowPlacement(*(**(((*(arg1 + 0x9c) - eax_10) & 0xfffffff0) + eax_10 - 0x10) + 0x34), 
            &lpwndpl)
        SetWindowPos(*(*(*(arg1 + 0x88) + (edi_4 << 2)) + 0x34), nullptr, 0, 0, 
            lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left + left, *(arg1 + 0x28), 
            SWP_NOMOVE)
        edi_4 += 1
    while (edi_4 u< ebp_4)

int32_t result = 0
int32_t ecx_13 = (*(arg1 + 0xac) - *(arg1 + 0xa8)) s>> 4
result_1 = 0
int32_t var_6c_2 = ecx_13

if (ecx_13 u> 0)
    int32_t var_70_1 = 0
    
    do
        int32_t* eax_15 = *(arg1 + 0xa8) + var_70_1
        int32_t edi_5 = 0
        int32_t ebp_7 = (eax_15[1] - *eax_15) s>> 2
        
        if (ebp_7 != 0)
            do
                GetWindowPlacement(*(*(*(arg1 + 0x88) + (edi_5 << 2)) + 0x34), &lpwndpl_1)
                int32_t top = lpwndpl_1.rcNormalPosition.top
                GetWindowPlacement(*(*(*(arg1 + 0x78) + (result_1 << 2)) + 0x34), &lpwndpl)
                SetWindowPos(*(*(*(*(arg1 + 0xa8) + var_70_1) + (edi_5 << 2)) + 0x34), nullptr, 
                    lpwndpl.rcNormalPosition.left, top, 0, 0, SWP_NOSIZE)
                edi_5 += 1
            while (edi_5 u< ebp_7)
            
            ecx_13 = var_6c_2
        
        var_70_1 += 0x10
        result = result_1 + 1
        result_1 = result
    while (result u< ecx_13)

sub_6b4885(eax_1 ^ &result_1)
return result
