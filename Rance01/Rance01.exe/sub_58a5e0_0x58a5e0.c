// 函数: sub_58a5e0
// 地址: 0x58a5e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

BOOL hWnd = *(arg1 + 0xc)

if (hWnd != 0 && *(arg1 + 0x18) != 0 && IsIconic(hWnd) == 0)
    int32_t* eax = *(arg1 + 0x18)
    hWnd = (*(*eax + 0xc))(eax)
    
    if (hWnd == 0x88760868 || hWnd == 0x88760869)
        int32_t* eax_1 = *(arg1 + 0x18)
        int32_t i
        int32_t ecx_3
        i, ecx_3 = (*(*eax_1 + 0xc))(eax_1)
        int32_t* eax_2
        
        for (; i != 0x88760869; i = (*(*eax_2 + 0xc))(eax_2))
            Sleep(1)
            eax_2 = *(arg1 + 0x18)
        
        i.b = 1
        return i

hWnd.b = 0
return hWnd
