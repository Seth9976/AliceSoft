// 函数: sub_6afa20
// 地址: 0x6afa20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t Y
int32_t eax_1 = data_78c474 ^ &Y
int32_t* result = *(arg1 + 0x98)

if ((result[1] - *result) s>> 2 u> arg2)
    Y = 0
    WINDOWPLACEMENT lpwndpl
    
    if (arg2 != 0)
        GetWindowPlacement(*(*(*result + (arg2 << 2) - 4) + 0x34), &lpwndpl)
        int32_t top = lpwndpl.rcNormalPosition.top
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(**(arg1 + 0x98) + (arg2 << 2) - 4) + 0x34), &lpwndpl_1)
        int32_t Y_1 = top - lpwndpl_1.rcNormalPosition.top + lpwndpl_1.rcNormalPosition.bottom
        HWND hWnd = *(*(*(arg1 + 0x88) + (arg2 << 2) - 4) + 0x34)
        Y = Y_1
        SetWindowPos(hWnd, nullptr, 0, Y_1, 0, 0, SWP_NOSIZE)
        int32_t i_3 = (*(arg1 + 0xac) - *(arg1 + 0xa8)) s>> 4
        
        if (i_3 s> 0)
            int32_t ebx_2 = 0
            int32_t i_2 = i_3
            int32_t i
            
            do
                GetWindowPlacement(*(*(*(*(arg1 + 0xa8) + ebx_2) + (arg2 << 2) - 4) + 0x34), 
                    &lpwndpl)
                SetWindowPos(*(*(*(*(arg1 + 0xa8) + ebx_2) + (arg2 << 2) - 4) + 0x34), nullptr, 
                    lpwndpl.rcNormalPosition.left, Y, 0, 0, SWP_NOSIZE)
                ebx_2 += 0x10
                i = i_2
                i_2 -= 1
            while (i != 1)
            Y_1 = Y
        
        Y = *(arg1 + 0x28) + Y_1
    
    result = (*(arg1 + 0x9c) - *(arg1 + 0x98)) s>> 4
    
    if (result s> 0)
        int32_t* ebx_3 = nullptr
        int32_t* var_60_1 = result
        int32_t* i_1
        
        do
            GetWindowPlacement(*(*(*(ebx_3 + *(arg1 + 0x98)) + (arg2 << 2)) + 0x34), &lpwndpl)
            result = SetWindowPos(*(*(*(ebx_3 + *(arg1 + 0x98)) + (arg2 << 2)) + 0x34), nullptr, 
                lpwndpl.rcNormalPosition.left, Y, 0, 0, SWP_NOSIZE)
            ebx_3 = &ebx_3[4]
            i_1 = var_60_1
            var_60_1 -= 1
        while (i_1 != 1)

sub_6b4885(eax_1 ^ &Y)
return result
