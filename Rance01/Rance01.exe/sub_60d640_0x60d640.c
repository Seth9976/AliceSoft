// 函数: sub_60d640
// 地址: 0x60d640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

RECT rect
int32_t eax_1 = data_78c474 ^ &rect
SetFocus(arg2)

if (data_797db4 != 0)
    int32_t eax_2 = GetScrollPos(arg2, SB_VERT)
    int32_t temp0_1 = divs.dp.d(sx.q(arg3 u>> 0x10), arg1[0x2e] + arg1[0x2d])
    int32_t ecx_3 = temp0_1 + eax_2
    
    if (temp0_1 + eax_2 s>= 0)
        int32_t edi_2 = arg1[0x30]
        int32_t eax_7
        int32_t edx_5
        edx_5:eax_7 = muls.dp.d(0x38e38e39, arg1[0x31] - edi_2)
        int32_t edx_6 = edx_5 s>> 3
        
        if (ecx_3 s< (edx_6 u>> 0x1f) + edx_6)
            int32_t ecx_4 = ecx_3 * 9
            
            if (*(edi_2 + (ecx_4 << 2)) == 0)
                sub_60dbe0(arg1, *(edi_2 + (ecx_4 << 2) + 0x20))
    
    HWND hWnd = data_797db8
    GetClientRect(hWnd, &rect)
    SendMessageA(hWnd, 5, 0, 
        zx.d((rect.bottom).w - (rect.top).w) << 0x10 | zx.d((rect.right).w - (rect.left).w))

sub_6b4885(eax_1 ^ &rect)
return 0
