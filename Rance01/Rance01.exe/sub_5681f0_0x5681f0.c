// 函数: sub_5681f0
// 地址: 0x5681f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* hWnd = arg1[2]

if (hWnd != 0)
    BOOL eax = IsIconic(hWnd)
    
    if (eax != 0)
        hWnd = OpenIcon(arg1[2])
    
    if (eax == 0 || hWnd != 0)
        if (*(arg1 + 0x2a1) != 0)
            hWnd = sub_568430(arg1)
        
        if (*(arg1 + 0x2a1) == 0 || hWnd.b != 0)
            return sub_567f90(arg1, 1)

return hWnd
