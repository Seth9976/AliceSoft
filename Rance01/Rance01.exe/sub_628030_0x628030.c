// 函数: sub_628030
// 地址: 0x628030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s<= 0)
    return 

int32_t* i_1 = arg1
int32_t* i

do
    int32_t ebx_1 = *arg4
    int32_t esi_1 = 0
    void* const lpString = &data_733d28
    int32_t var_10_1 = 0
    COLORREF color = GetTextColor(arg2)
    
    do
        COLORREF j_2
        j_2.b = *lpString
        
        if ((j_2.b u>= 0x81 && j_2.b u<= 0x9f) || j_2.b u>= 0xe0)
            if (sub_6b557b(lpString, 0x7340d0, 2) != 0)
                TextOutA(arg2, esi_1 + ebx_1, arg5, lpString, 2)
            else
                SetTextColor(arg2, 0xffc0c0)
                TextOutA(arg2, esi_1 + ebx_1, arg5, &data_7340d4, 2)
                SetTextColor(arg2, color)
            
            esi_1 += *(arg3 + 0xcc)
            lpString += 2
            var_10_1 += 2
        else if (j_2.b != 9)
            TextOutA(arg2, esi_1 + ebx_1, arg5, lpString, 1)
            int32_t eax_9
            int32_t edx_8
            edx_8:eax_9 = sx.q(*(arg3 + 0xcc))
            esi_1 += (eax_9 - edx_8) s>> 1
            lpString += 1
            var_10_1 += 1
        else
            j_2 = 4 - (var_10_1 & 3)
            int16_t string = 0x20
            
            if (j_2 s> 0)
                var_10_1 += j_2
                COLORREF j_1 = j_2
                COLORREF j
                
                do
                    TextOutA(arg2, esi_1 + ebx_1, arg5, &string, 1)
                    int32_t eax_5
                    int32_t edx_6
                    edx_6:eax_5 = sx.q(*(arg3 + 0xcc))
                    esi_1 += (eax_5 - edx_6) s>> 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            lpString += 1
    while (*lpString != 0)
    
    int32_t eax_12
    int32_t edx_9
    edx_9:eax_12 = sx.q(*(arg3 + 0xcc))
    *arg4 += (eax_12 - edx_9) s>> 1
    i = i_1
    i_1 -= 1
while (i != 1)
