// 函数: sub_622030
// 地址: 0x622030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_34
int32_t result = data_78c474 ^ &var_34
int32_t result_1 = result

if (arg1[0x33] != 0)
    RECT rect
    GetClientRect(arg1[0x22], &rect)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(arg1[0x33])
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(rect.right - rect.left)
    SCROLLINFO lpsi
    lpsi.cbSize = 0x1c
    lpsi.fMask = 7
    lpsi.nMin = 0
    lpsi.nMax = (*(*arg1 + 0x8c))() + 1
    lpsi.nPage = divs.dp.d(edx_2:eax_5, (eax_2 - edx_1) s>> 1)
    lpsi.nPos = arg2
    result = SetScrollInfo(arg1[0x22], SB_HORZ, &lpsi, 1)

sub_6b4885(result_1 ^ &var_34)
return result
