// 函数: sub_6220e0
// 地址: 0x6220e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t y = arg4
int32_t esi = 0
int32_t var_c = 0
char* lpString = arg5
COLORREF color = GetTextColor(arg1)
COLORREF result
result.b = *lpString

while (result.b != 0)
    if ((result.b u>= 0x81 && result.b u<= 0x9f) || result.b u>= 0xe0)
        if (sub_6b557b(lpString, 0x7340d0, 2) != 0)
            TextOutA(arg1, esi + arg3, y, arg5, 2)
            esi += *(arg2 + 0xcc)
            result = 2
        else
            SetTextColor(arg1, 0xffc0c0)
            TextOutA(arg1, esi + arg3, y, &data_7340d4, 2)
            SetTextColor(arg1, color)
            esi += *(arg2 + 0xcc)
            result = 2
        
        arg5 = &arg5[result]
        var_c += result
    else if (result.b != 9)
        TextOutA(arg1, esi + arg3, y, lpString, 1)
        int32_t eax_11
        int32_t edx_8
        edx_8:eax_11 = sx.q(*(arg2 + 0xcc))
        esi += (eax_11 - edx_8) s>> 1
        result = 1
        arg5 = &arg5[result]
        var_c += result
    else
        result = 4 - (var_c & 3)
        arg4.w = 0x20
        
        if (result s> 0)
            var_c += result
            COLORREF var_8_1 = result
            COLORREF i
            
            do
                TextOutA(arg1, esi + arg3, y, &arg4, 1)
                int32_t eax_7
                int32_t edx_6
                edx_6:eax_7 = sx.q(*(arg2 + 0xcc))
                esi += (eax_7 - edx_6) s>> 1
                i = var_8_1
                var_8_1 -= 1
            while (i != 1)
        
        arg5 = &arg5[1]
    
    lpString = arg5
    result.b = *lpString

return result
