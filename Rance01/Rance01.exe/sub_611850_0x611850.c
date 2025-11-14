// 函数: sub_611850
// 地址: 0x611850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = GetScrollPos(*(arg1 + 0x88), SB_HORZ)
int32_t eax_2 = GetScrollPos(*(arg1 + 0x88), SB_VERT)
int32_t ecx_1 = *(arg1 + 0xb4)
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(ecx_1)
int32_t esi_2 = *(arg1 + 0xb8) + ecx_1
*arg4 = divs.dp.d(sx.q(arg2), (eax_4 - edx) s>> 1) + eax_1
int32_t result = divs.dp.d(sx.q(arg3), esi_2) + eax_2
*arg5 = result
return result
