// 函数: sub_6167f0
// 地址: 0x6167f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_38
int32_t eax_1 = data_78c474 ^ &var_38
int32_t eax_3 = GetScrollPos(arg2[0x22], SB_VERT)
RECT rect
GetClientRect(arg2[0x22], &rect)
int32_t result = divs.dp.d(sx.q(rect.bottom - rect.top), arg2[0x2e] + arg2[0x2d])

if (arg1 s< eax_3 || arg1 s>= result + eax_3)
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = sx.q(result)
    int32_t eax_10 = neg.d((eax_7 - edx_4) s>> 1)
    int32_t edi_1 = arg1 + eax_10
    
    if (arg1 + eax_10 s< 0)
        edi_1 = 0
    
    SCROLLINFO lpsi
    lpsi.cbSize = 0x1c
    lpsi.fMask = 7
    lpsi.nMin = 0
    lpsi.nMax = (*(*arg2 + 0x8c))() - 1
    lpsi.nPage = result
    lpsi.nPos = edi_1
    result = SetScrollInfo(arg2[0x22], SB_VERT, &lpsi, 1)

sub_6b4885(eax_1 ^ &var_38)
return result
