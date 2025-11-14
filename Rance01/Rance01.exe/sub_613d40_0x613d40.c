// 函数: sub_613d40
// 地址: 0x613d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

RECT rect
int32_t eax_1 = data_78c474 ^ &rect
BOOL result = arg3
int32_t edx = data_797dac
*(arg1 + 0x198) = arg2 - 1
HWND hWnd = *(arg1 + 0x88)
*(arg1 + 0x194) = result
data_797dac = result
data_797db0 = arg2

if (hWnd != 0)
    if (edx != result)
        GetClientRect(hWnd, &rect)
        SendMessageA(*(arg1 + 0x88), 5, 0, 
            zx.d((rect.bottom).w - (rect.top).w) << 0x10 | zx.d((rect.right).w - (rect.left).w))
    
    sub_611ac0(arg2, arg1)
    InvalidateRect(*(arg1 + 0x88), nullptr, 1)
    result = UpdateWindow(*(arg1 + 0x88))

sub_6b4885(eax_1 ^ &rect)
return result
