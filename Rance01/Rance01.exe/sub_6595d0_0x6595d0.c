// 函数: sub_6595d0
// 地址: 0x6595d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t left
int32_t eax_1 = data_78c474 ^ &left
BOOL result = *(arg1 + 0x98)

if ((*(arg1 + 0x9c) - result) s>> 4 u> arg2)
    left = 0
    WINDOWPLACEMENT lpwndpl
    
    if (arg2 != 0)
        int32_t edi_2 = arg2 * 2
        GetWindowPlacement(*(**(result + (edi_2 << 3) - 0x10) + 0x34), &lpwndpl)
        int32_t edx_2 = *(arg1 + 0x98)
        left = lpwndpl.rcNormalPosition.left
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(**(edx_2 + (edi_2 << 3) - 0x10) + 0x34), &lpwndpl_1)
        int32_t X = lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left + left
        SetWindowPos(*(*(*(arg1 + 0x78) + (arg2 << 2) - 4) + 0x34), nullptr, X, 0, 0, 0, SWP_NOSIZE)
        int32_t eax_6 = *(arg1 + 0xa8)
        int32_t ebp_3 = (*(eax_6 + (edi_2 << 3) - 0xc) - *(eax_6 + (edi_2 << 3) - 0x10)) s>> 2
        left = 0
        
        if (ebp_3 != 0)
            int32_t left_1
            
            do
                GetWindowPlacement(
                    *(*(*(*(arg1 + 0xa8) + (edi_2 << 3) - 0x10) + (left << 2)) + 0x34), &lpwndpl)
                SetWindowPos(*(*(*(*(arg1 + 0xa8) + (edi_2 << 3) - 0x10) + (left << 2)) + 0x34), 
                    nullptr, X, lpwndpl.rcNormalPosition.top, 0, 0, SWP_NOSIZE)
                left_1 = left + 1
                left = left_1
            while (left_1 u< ebp_3)
        
        left = *(arg1 + 0x28) + X
    
    result = *(arg1 + 0x98)
    int32_t ebp_4 = arg2 * 2
    int32_t edi_3 = 0
    int32_t ebx_5 = (*(result + (ebp_4 << 3) + 4) - *(result + (ebp_4 << 3))) s>> 2
    
    if (ebx_5 != 0)
        do
            GetWindowPlacement(*(*(*(*(arg1 + 0x98) + (ebp_4 << 3)) + (edi_3 << 2)) + 0x34), 
                &lpwndpl)
            result = SetWindowPos(*(*(*(*(arg1 + 0x98) + (ebp_4 << 3)) + (edi_3 << 2)) + 0x34), 
                nullptr, left, lpwndpl.rcNormalPosition.top, 0, 0, SWP_NOSIZE)
            edi_3 += 1
        while (edi_3 u< ebx_5)

sub_6b4885(eax_1 ^ &left)
return result
