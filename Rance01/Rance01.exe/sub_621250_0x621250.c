// 函数: sub_621250
// 地址: 0x621250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t X = (*(*(arg1 + 0xe8) + 0x10))() + *(arg1 + 0x12c)
int32_t eax_3 = (*(*(arg1 + 0xb0) + 0x10))()
int32_t eax_5 = (*(*(arg1 + 0xe8) + 0x14))()
int32_t* ebp_1 = *(arg1 + 0x1dc)
int32_t nHeight = eax_5 - 3

if (ebp_1 == 0)
    return nHeight

MoveWindow(*ebp_1, X, 2, eax_3 - X - 1, nHeight, 1)
return ShowWindow(*ebp_1, SW_SHOW)
