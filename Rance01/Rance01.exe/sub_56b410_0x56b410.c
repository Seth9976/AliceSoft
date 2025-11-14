// 函数: sub_56b410
// 地址: 0x56b410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *(arg1 + 4)
int32_t* hWnd = esi[2]

if (hWnd != 0)
    BOOL eax = IsIconic(hWnd)
    
    if (eax != 0)
        hWnd = OpenIcon(esi[2])
    
    if (eax == 0 || hWnd != 0)
        if (*(esi + 0x2a1) != 0)
            hWnd = sub_568430(esi)
        
        if (*(esi + 0x2a1) == 0 || hWnd.b != 0)
            sub_567f90(esi, 1)

hWnd.b = 1
return hWnd
