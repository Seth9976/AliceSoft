// 函数: sub_611ac0
// 地址: 0x611ac0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_1c
int32_t eax_1 = data_78c474 ^ &var_1c
int32_t eax_3 = GetScrollPos(*(arg2 + 0x88), SB_VERT)
RECT rect
GetClientRect(*(arg2 + 0x88), &rect)
int32_t result = divs.dp.d(sx.q(rect.bottom - rect.top), *(arg2 + 0xb8) + *(arg2 + 0xb4))

if (arg1 s< eax_3 || arg1 s> result + eax_3)
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = sx.q(result)
    int32_t eax_10 = neg.d((eax_7 - edx_4) s>> 1)
    int32_t nPos = arg1 + eax_10
    
    if (arg1 + eax_10 s< 0)
        nPos = 0
    
    result = SetScrollPos(*(arg2 + 0x88), SB_VERT, nPos, 1)

sub_6b4885(eax_1 ^ &var_1c)
return result
