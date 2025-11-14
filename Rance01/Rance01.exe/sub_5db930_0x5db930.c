// 函数: sub_5db930
// 地址: 0x5db930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SCROLLINFO lpsi_1
int32_t eax_1 = data_78c474 ^ &lpsi_1
enum SCROLLBAR_CONSTANTS nBar
int32_t nPos
SCROLLINFO* lpsi
int32_t edi_2
int32_t edi_7

switch (jump_table_5dbb0c[arg3])
    case 0x5db94f
        int32_t eax_3 = GetScrollPos(arg1, SB_VERT)
        lpsi_1.cbSize = 0x1c
        lpsi_1.fMask = 0x17
        GetScrollInfo(arg1, SB_VERT, &lpsi_1)
        edi_2 = eax_3 - lpsi_1.nPage
        int32_t nMin = lpsi_1.nMin
        
        if (edi_2 s< nMin)
            edi_2 = nMin
        
        int32_t nMax = lpsi_1.nMax
        
        if (edi_2 s>= nMax)
            edi_2 = nMax - 1
        
        goto label_5db991
    case 0x5db99b
        int32_t eax_4 = GetScrollPos(arg1, SB_VERT)
        lpsi_1.cbSize = 0x1c
        lpsi_1.fMask = 0x17
        GetScrollInfo(arg1, SB_VERT, &lpsi_1)
        edi_2 = eax_4 + lpsi_1.nPage
        int32_t nMin_1 = lpsi_1.nMin
        
        if (edi_2 s< nMin_1)
            edi_2 = nMin_1
        
        int32_t nMax_1 = lpsi_1.nMax
        
        if (edi_2 s< nMax_1)
        label_5db991:
            int32_t var_2c_2 = 1
            nPos = edi_2
            nBar = SB_VERT
            goto label_5dbad6
        
        int32_t var_2c_4 = 1
        nPos = nMax_1 - 1
        nBar = SB_VERT
    label_5dbad6:
        SetScrollPos(arg1, nBar, nPos, 1)
        InvalidateRect(*(arg2 + 8), nullptr, 1)
        UpdateWindow(*(arg2 + 8))
    case 0x5db9e7
        edi_2 = GetScrollPos(arg1, SB_VERT) - 1
        lpsi_1.cbSize = 0x1c
        lpsi_1.fMask = 0x17
        GetScrollInfo(arg1, SB_VERT, &lpsi_1)
        int32_t nMin_2 = lpsi_1.nMin
        
        if (edi_2 s< nMin_2)
            edi_2 = nMin_2
        
        int32_t nMax_2 = lpsi_1.nMax
        
        if (edi_2 s< nMax_2)
            goto label_5db991
        
        int32_t var_2c_6 = 1
        nPos = nMax_2 - 1
        nBar = SB_VERT
        goto label_5dbad6
    case 0x5dba34
        edi_2 = GetScrollPos(arg1, SB_VERT) + 1
        lpsi_1.cbSize = 0x1c
        lpsi_1.fMask = 0x17
        GetScrollInfo(arg1, SB_VERT, &lpsi_1)
        int32_t nMin_3 = lpsi_1.nMin
        
        if (edi_2 s< nMin_3)
            edi_2 = nMin_3
        
        int32_t nMax_3 = lpsi_1.nMax
        
        if (edi_2 s< nMax_3)
            goto label_5db991
        
        int32_t var_2c_8 = 1
        nPos = nMax_3 - 1
        nBar = SB_VERT
        goto label_5dbad6
    case 0x5dba7e
        edi_7 = GetScrollPos(arg1, SB_HORZ) - 1
        lpsi = &lpsi_1
    label_5dbaa5:
        lpsi_1.cbSize = 0x1c
        lpsi_1.fMask = 0x17
        GetScrollInfo(arg1, SB_HORZ, lpsi)
        int32_t nMin_4 = lpsi_1.nMin
        
        if (edi_7 s< nMin_4)
            edi_7 = nMin_4
        
        int32_t nMax_4 = lpsi_1.nMax
        
        if (edi_7 s>= nMax_4)
            edi_7 = nMax_4 - 1
        
        int32_t var_2c_9 = 1
        nPos = edi_7
        nBar = SB_HORZ
        goto label_5dbad6
    case 0x5dba91
        edi_7 = GetScrollPos(arg1, SB_HORZ) + 1
        lpsi = &lpsi_1
        goto label_5dbaa5

sub_6b4885(eax_1 ^ &lpsi_1)
return 0
