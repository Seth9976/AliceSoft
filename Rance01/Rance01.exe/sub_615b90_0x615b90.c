// 函数: sub_615b90
// 地址: 0x615b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_24
int32_t eax_1 = data_78c474 ^ &var_24
BOOL result = arg2

if (*(arg1 + 0x12c) != result)
    *(arg1 + 0x12c) = result
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x66666667, *(arg1 + 0x120) - *(arg1 + 0x11c))
    int32_t edx_2 = edx_1 s>> 4
    int32_t i = 0
    int32_t i_1 = 0
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0)
        int32_t* ebx_1 = nullptr
        var_24 = nullptr
        int32_t edx_8
        
        do
            int32_t ecx_2
            ecx_2.b = i != *(arg1 + 0x12c)
            ShowWindow(*(ebx_1 + *(arg1 + 0x11c)), (ecx_2 - 1) & 5)
            
            if (i == *(arg1 + 0x12c))
                SetFocus(*(ebx_1 + *(arg1 + 0x11c)))
                RECT rect
                GetClientRect(*(arg1 + 0x88), &rect)
                int32_t nWidth = rect.right - rect.left
                int32_t edi_2 = rect.bottom - rect.top
                int32_t Y = (*(*(arg1 + 0x9c) + 0x14))()
                MoveWindow(*(*(arg1 + 0x11c) + *(arg1 + 0x12c) * 0x28), 0, Y, nWidth, edi_2 - Y, 1)
                i = i_1
                ebx_1 = var_24
            
            int32_t eax_10
            int32_t edx_7
            edx_7:eax_10 = muls.dp.d(0x66666667, *(arg1 + 0x120) - *(arg1 + 0x11c))
            edx_8 = edx_7 s>> 4
            i += 1
            ebx_1 = &ebx_1[0xa]
            i_1 = i
            var_24 = ebx_1
        while (i s< (edx_8 u>> 0x1f) + edx_8)
    
    sub_615430(arg1)
    sub_615580(arg1)
    sub_6158e0(arg1)
    InvalidateRect(*(arg1 + 0x88), nullptr, 1)
    result = UpdateWindow(*(arg1 + 0x88))

sub_6b4885(eax_1 ^ &var_24)
return result
