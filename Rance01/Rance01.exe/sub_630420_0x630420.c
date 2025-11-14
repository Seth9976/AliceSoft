// 函数: sub_630420
// 地址: 0x630420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_18
int32_t eax_1 = data_78c474 ^ &var_18
BOOL result = arg2

if (*(arg1 + 0x11c) != result)
    *(arg1 + 0x11c) = result
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x66666667, *(arg1 + 0x110) - *(arg1 + 0x10c))
    int32_t edx_2 = edx_1 s>> 4
    int32_t i = 0
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0)
        var_18 = nullptr
        int32_t ecx_10
        
        do
            int32_t ecx_2
            ecx_2.b = i != *(arg1 + 0x11c)
            ShowWindow(*(var_18 + *(arg1 + 0x10c)), (ecx_2 - 1) & 5)
            int32_t eax_7 = *(arg1 + 0x11c)
            
            if (i == eax_7)
                SetFocus(*(*(arg1 + 0x10c) + eax_7 * 0x28))
                RECT rect
                GetClientRect(*(arg1 + 4), &rect)
                int32_t nWidth = rect.right - rect.left
                int32_t edi_2 = rect.bottom - rect.top
                int32_t Y = (*(*(arg1 + 0x94) + 0x14))()
                MoveWindow(*(*(arg1 + 0x10c) + *(arg1 + 0x11c) * 0x28), 0, Y, nWidth, edi_2 - Y, 1)
            
            ecx_10 = *(arg1 + 0x110) - *(arg1 + 0x10c)
            var_18 = &var_18[0xa]
            i += 1
        while (i s< ecx_10 s/ 0x28)
    
    sub_62fb30(arg1)
    sub_62fe20(arg1)
    sub_630180(arg1)
    InvalidateRect(*(arg1 + 4), nullptr, 1)
    result = UpdateWindow(*(arg1 + 4))

sub_6b4885(eax_1 ^ &var_18)
return result
