// 函数: sub_65af30
// 地址: 0x65af30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

**(arg1 + 0x80) = arg1
*(arg1 + 0x69) = *(arg1 + 0x68)
*(arg1 + 0x68) = 1
int32_t eax_2 = sub_64e4b0(arg1 + 0x88, 0, *(arg1 + 0x6c), *(arg1 + 0x70))
*(arg1 + 0x84) = eax_2

if (eax_2 == 0)
    void* edi_1 = *(arg1 + 0x108)
    HWND hWnd = *(edi_1 + 0x34)
    
    if (hWnd != 0)
        SetWindowPos(hWnd, nullptr, 0, 0, 0, 0, 0x47)
        *(edi_1 + 0x58) = 1
    
    void* edi_2 = *(arg1 + 0x10c)
    HWND hWnd_1 = *(edi_2 + 0x34)
    
    if (hWnd_1 != 0)
        SetWindowPos(hWnd_1, nullptr, 0, 0, 0, 0, 0x87)
        *(edi_2 + 0x58) = 0
    
    void* esi_1 = *(arg1 + 0x108)
    *(esi_1 + 0xa4) = 1
    sub_650340(esi_1 + 0x94)
    return 0

if (eax_2 == 1)
    void* edi_4 = *(arg1 + 0x10c)
    HWND hWnd_2 = *(edi_4 + 0x34)
    
    if (hWnd_2 != 0)
        SetWindowPos(hWnd_2, nullptr, 0, 0, 0, 0, 0x47)
        *(edi_4 + 0x58) = 1
    
    void* edi_5 = *(arg1 + 0x108)
    HWND hWnd_3 = *(edi_5 + 0x34)
    
    if (hWnd_3 != 0)
        SetWindowPos(hWnd_3, nullptr, 0, 0, 0, 0, 0x87)
        *(edi_5 + 0x58) = 0
    
    *(*(arg1 + 0x10c) + 0x94) = 1

return 0
