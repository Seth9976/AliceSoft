// 函数: sub_62ae50
// 地址: 0x62ae50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t Y
int32_t i = data_78c474 ^ &Y
int32_t i_2 = i

if (*(arg1 + 0x88) != 0)
    int32_t eax_1
    
    if (*(arg1 + 0x8d) == 0)
        eax_1 = (*(*(arg1 + 0x90) + 0x18))()
    else
        eax_1 = *(arg1 + 0xa4)
    
    int32_t var_38_1
    
    if (*(arg1 + 0x8d) == 0)
        var_38_1 = (*(*(arg1 + 0x90) + 0x1c))()
    else
        var_38_1 = *(arg1 + 0xa8)
    
    int32_t i_1 = 0
    
    do
        RECT rect_1
        GetWindowRect(*(arg1 + 0x88), &rect_1)
        int32_t left = rect_1.left
        int32_t top = rect_1.top
        int32_t bottom = rect_1.bottom
        int32_t X = left
        int32_t edi_2 = rect_1.right - left
        Y = top
        RECT rect
        GetClientRect(*(arg1 + 0x88), &rect)
        int32_t cy = bottom - top + rect.top - rect.bottom + var_38_1
        int32_t eax_7
        eax_7.b = *(arg1 + 0x8d)
        int32_t cx = edi_2 + rect.left - rect.right + eax_1
        
        if (eax_7.b == 0)
            if (X s< 0)
                X = 0
            
            if (Y s< 0)
                Y = 0
        else
            X = 0
            Y = 0
        
        int32_t ecx_6
        ecx_6.b = eax_7.b != 0
        SetWindowPos(*(arg1 + 0x88), ecx_6 - 2, X, Y, cx, cy, SWP_SHOWWINDOW)
        GetClientRect(*(arg1 + 0x88), &rect)
        
        if (rect.right - rect.left == eax_1)
            i = rect.bottom - rect.top
            
            if (i == var_38_1)
                break
        
        i = i_1 + 1
        i_1 = i
    while (i s< 3)

sub_6b4885(i_2 ^ &Y)
return i
