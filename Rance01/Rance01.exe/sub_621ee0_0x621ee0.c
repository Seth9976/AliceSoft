// 函数: sub_621ee0
// 地址: 0x621ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_38
int32_t result = data_78c474 ^ &var_38
int32_t result_1 = result

if (arg1[0x33] != 0)
    int32_t eax_2 = GetScrollPos(arg1[0x22], SB_VERT)
    RECT rect
    GetClientRect(arg1[0x22], &rect)
    int32_t temp0_1 = divs.dp.d(sx.q(rect.bottom - rect.top), arg1[0x33])
    arg1[0x33]
    
    if (arg3 != 0 && arg2 s>= eax_2)
        result = temp0_1 + eax_2
    
    if (arg3 == 0 || arg2 s< eax_2 || arg2 s>= result)
        SCROLLINFO lpsi
        lpsi.cbSize = 0x1c
        lpsi.fMask = 7
        lpsi.nMin = 0
        lpsi.nMax = (*(*arg1 + 0x88))() - 1
        lpsi.nPage = temp0_1
        lpsi.nPos = arg2
        result = SetScrollInfo(arg1[0x22], SB_VERT, &lpsi, 1)

sub_6b4885(result_1 ^ &var_38)
return result
