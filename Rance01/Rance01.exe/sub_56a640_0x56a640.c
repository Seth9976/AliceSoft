// 函数: sub_56a640
// 地址: 0x56a640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

WPARAM wParam = arg4
arg4.b = wParam.b
arg4:1.b = 0

if ((wParam.b s< 0 || wParam.b s> 0x1f) && wParam.b != 0x7f && *(arg1 + 0x22c) != 0)
    int32_t* eax_1 = &arg4
    char i
    
    do
        i = *eax_1
        eax_1 += 1
    while (i != 0)
    sub_402cb0(arg1 + 0x200, &arg4, eax_1 - &arg4:1)

return DefWindowProcA(arg3, 0x102, wParam, arg2)
