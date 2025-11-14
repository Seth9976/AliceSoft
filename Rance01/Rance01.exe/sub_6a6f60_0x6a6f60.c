// 函数: sub_6a6f60
// 地址: 0x6a6f60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_c = ecx

if (*(arg1 + 0x114) == 0)
    return 

HWND eax = *(arg1 + 0x10c)

if (eax == 0 || *(arg1 + 0x110) == 0)
    return 

if (sub_6aa6b0(eax) != 0)
    void* eax_2 = *(arg1 + 0x10c)
    
    if (sub_6a7650(eax_2 + 0x26c, *(arg1 + 0x110), *(eax_2 + 0x41c)) != 0
            && sub_6afba0(*(arg1 + 0x114)) != 0)
        InvalidateRect(*(arg1 + 0x34), nullptr, 0)
        UpdateWindow(*(arg1 + 0x34))
        return 

sub_6b1970(arg1)
