// 函数: sub_620900
// 地址: 0x620900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(arg1[0x3a] + 4))()
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x66666667, arg1[0x4d] - arg1[0x4c])
int32_t edx_2 = edx_1 s>> 4
int32_t edi = 0
int32_t i = 0
int32_t var_14 = 0

if ((edx_2 u>> 0x1f) + edx_2 s> 0)
    int32_t edx_6
    
    do
        HDC eax_5 = GetDC(arg1[0x22])
        HGDIOBJ h
        
        if (i != arg1[0x50])
            h = arg1[0x52]
        else
            h = arg1[0x5d]
        
        HGDIOBJ h_1 = SelectObject(eax_5, h)
        void* eax_6 = arg1[0x4c]
        void** lpString = eax_6 + edi + 4
        
        if (lpString[5] u>= 0x10)
            lpString = *lpString
        
        SIZE psizl
        GetTextExtentPoint32A(eax_5, lpString, *(eax_6 + edi + 0x14), &psizl)
        SelectObject(eax_5, h_1)
        ReleaseDC(arg1[0x22], eax_5)
        *(arg1[0x4c] + edi + 0x20) = psizl.cx
        var_14 += psizl.cx + (arg1[0x4b] << 1)
        int32_t eax_11
        int32_t edx_5
        edx_5:eax_11 = muls.dp.d(0x66666667, arg1[0x4d] - arg1[0x4c])
        edx_6 = edx_5 s>> 4
        i += 1
        edi += 0x28
    while (i s< (edx_6 u>> 0x1f) + edx_6)

sub_61e8a0(&arg1[0x3a], arg1, var_14, arg1[0x4a])
SetBkMode(arg1[0x43], 1)
int32_t result
result.b = 1
return result
