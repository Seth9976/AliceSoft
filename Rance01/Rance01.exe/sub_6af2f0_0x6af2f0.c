// 函数: sub_6af2f0
// 地址: 0x6af2f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

WINDOWPLACEMENT lpwndpl
int32_t eax_1 = data_78c474 ^ &lpwndpl
int32_t* result = *(arg1 + 0x98)

if ((result[1] - *result) s>> 2 u> arg2)
    int32_t i_1 = (*(arg1 + 0x9c) - result) s>> 4
    
    if (i_1 s> 0)
        int32_t* ebx_1 = nullptr
        int32_t i
        
        do
            GetWindowPlacement(*(*(*(ebx_1 + *(arg1 + 0x98)) + (arg2 << 2)) + 0x34), &lpwndpl)
            SetWindowPos(*(*(*(ebx_1 + *(arg1 + 0x98)) + (arg2 << 2)) + 0x34), nullptr, 0, 0, 
                lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left, arg3, SWP_NOMOVE)
            ebx_1 = &ebx_1[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result = sub_6afa20(arg1, arg2)

sub_6b4885(eax_1 ^ &lpwndpl)
return result
