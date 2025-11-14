// 函数: sub_6311e0
// 地址: 0x6311e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_38
int32_t eax_1 = data_78c474 ^ &var_38
int32_t eax_3 = GetScrollPos(arg1[1], SB_VERT)
RECT rect
GetClientRect(arg1[1], &rect)
int32_t result = divs.dp.d(sx.q(rect.bottom - rect.top), arg1[0x29] + arg1[0x27])

if (arg3 == 0 || arg2 s< eax_3 || arg2 s>= result + eax_3)
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = sx.q(result)
    int32_t eax_10 = neg.d((eax_7 - edx_3) s>> 1)
    int32_t ebx_1 = arg2 + eax_10
    
    if (arg2 + eax_10 s< 0)
        ebx_1 = 0
    
    SCROLLINFO lpsi
    lpsi.cbSize = 0x1c
    lpsi.fMask = 7
    lpsi.nMin = 0
    lpsi.nMax = (*(*arg1 + 4))() - 1
    lpsi.nPage = result
    lpsi.nPos = ebx_1
    result = SetScrollInfo(arg1[1], SB_VERT, &lpsi, 1)

sub_6b4885(eax_1 ^ &var_38)
return result
