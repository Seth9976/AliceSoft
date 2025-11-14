// 函数: sub_567f90
// 地址: 0x567f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_40
int32_t result = data_78c474 ^ &var_40
int32_t result_1 = result
int32_t edi
int32_t var_48 = edi

if (*(arg1 + 8) != 0)
    int32_t var_3c_1
    int32_t var_38_1
    
    if (*(arg1 + 0x2a1) == 0)
        int32_t eax_8
        
        if (arg2 != 0 || *(arg1 + 0xed) == 0)
            var_3c_1 = (*(*(arg1 + 0xc8) + 0x18))()
            eax_8 = (*(*(arg1 + 0xc8) + 0x1c))()
        else
            int32_t eax_4
            
            if (*(arg1 + 0xfc) s<= (*(*(arg1 + 0xc8) + 0x18))())
                eax_4 = (*(*(arg1 + 0xc8) + 0x18))()
            else
                eax_4 = *(arg1 + 0xfc)
            
            var_3c_1 = eax_4
            
            if (*(arg1 + 0x100) s<= (*(*(arg1 + 0xc8) + 0x1c))())
                eax_8 = (*(*(arg1 + 0xc8) + 0x1c))()
            else
                eax_8 = *(arg1 + 0x100)
        
        var_38_1 = eax_8
    else
        var_3c_1 = *(arg1 + 0xdc)
        var_38_1 = *(arg1 + 0xe0)
    
    int32_t i_1 = 0
    int32_t eax_28
    int32_t ecx_11
    int32_t i
    
    do
        RECT rect_1
        GetWindowRect(*(arg1 + 8), &rect_1)
        int32_t edi_3 = rect_1.right - rect_1.left
        int32_t ebx_4 = rect_1.bottom - rect_1.top
        RECT rect
        GetClientRect(*(arg1 + 8), &rect)
        int32_t cx = edi_3 + rect.left - rect.right + var_3c_1
        int32_t cy = ebx_4 + rect.top - rect.bottom + var_38_1
        int32_t X
        int32_t Y
        
        if (*(arg1 + 0x2a1) == 0)
            if (arg2 != 0 || *(arg1 + 0xed) == 0)
                int32_t eax_17
                int32_t edx_10
                edx_10:eax_17 = sx.q(GetSystemMetrics(SM_CXSCREEN) - cx)
                X = (eax_17 - edx_10) s>> 1
                int32_t eax_22
                int32_t edx_11
                edx_11:eax_22 = sx.q(GetSystemMetrics(SM_CYSCREEN) - cy)
                Y = (eax_22 - edx_11) s>> 1
            else
                Y = *(arg1 + 0xf8)
                X = *(arg1 + 0xf4)
            
            if (Y s< 0)
                Y = 0
        else
            Y = 0
            X = 0
        
        int32_t eax_24
        eax_24.b = *(arg1 + 0x2a1) != 0
        SetWindowPos(*(arg1 + 8), eax_24 - 2, X, Y, cx, cy, SWP_SHOWWINDOW)
        GetClientRect(*(arg1 + 8), &rect)
        eax_28 = rect.right - rect.left
        ecx_11 = rect.bottom - rect.top
        *(arg1 + 0xdc) = eax_28
        *(arg1 + 0xe0) = ecx_11
        
        if (eax_28 == var_3c_1 && ecx_11 == var_38_1)
            break
        
        i = i_1 + 1
        i_1 = i
    while (i s< 3)
    
    if (*(arg1 + 0xf1) == 0 && (eax_28 != var_3c_1 || ecx_11 != var_38_1))
        sub_604c90(0x74b7b0)
    
    SetFocus(*(arg1 + 8))
    SetForegroundWindow(*(arg1 + 8))
    result = *(arg1 + 0xe0)
    *(arg1 + 0x1d8) = *(arg1 + 0xdc)
    *(arg1 + 0x1dc) = result

sub_6b4885(result_1 ^ &var_40)
return result
