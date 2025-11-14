// 函数: sub_615430
// 地址: 0x615430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*(arg1 + 0xd4) + 4))()
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x66666667, *(arg1 + 0x120) - *(arg1 + 0x11c))
int32_t edx_2 = edx_1 s>> 4
int32_t i = 0
int32_t var_18 = 0

if ((edx_2 u>> 0x1f) + edx_2 s> 0)
    int32_t var_1c_1 = 0
    int32_t edx_7
    
    do
        HDC eax_5 = GetDC(*(arg1 + 0x88))
        HGDIOBJ h
        
        if (i != *(arg1 + 0x12c))
            h = *(arg1 + 0x134)
        else
            h = *(arg1 + 0x160)
        
        HGDIOBJ h_1 = SelectObject(eax_5, h)
        void* eax_7 = var_1c_1 + *(arg1 + 0x11c)
        void* lpString = eax_7 + 4
        
        if (*(lpString + 0x14) u>= 0x10)
            lpString = *lpString
        
        SIZE psizl
        GetTextExtentPoint32A(eax_5, lpString, *(eax_7 + 0x14), &psizl)
        SelectObject(eax_5, h_1)
        ReleaseDC(*(arg1 + 0x88), eax_5)
        *(*(arg1 + 0x11c) + var_1c_1 + 0x20) = psizl.cx
        var_18 += psizl.cx + (*(arg1 + 0x118) << 1)
        var_1c_1 += 0x28
        int32_t eax_11
        int32_t edx_6
        edx_6:eax_11 = muls.dp.d(0x66666667, *(arg1 + 0x120) - *(arg1 + 0x11c))
        edx_7 = edx_6 s>> 4
        i += 1
    while (i s< (edx_7 u>> 0x1f) + edx_7)

sub_60cf90(var_18, arg1 + 0xd4, *(arg1 + 0x88), *(arg1 + 0x114))
SetBkMode(*(arg1 + 0xfc), 1)
int32_t result
result.b = 1
return result
