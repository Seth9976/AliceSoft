// 函数: sub_615170
// 地址: 0x615170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t nWidth = zx.d(arg2.w)
uint32_t edi_1 = arg2 u>> 0x10

if (nWidth s> 0 && edi_1 s> 0)
    sub_6153e0(arg1, nWidth)
    sub_615580(arg1)
    sub_6158e0(arg1)
    int32_t ebp_1 = *(arg1 + 0x12c)
    
    if (ebp_1 s>= 0)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = muls.dp.d(0x66666667, *(arg1 + 0x120) - *(arg1 + 0x11c))
        int32_t edx_2 = edx_1 s>> 4
        
        if (ebp_1 s< (edx_2 u>> 0x1f) + edx_2)
            int32_t Y = (*(*(arg1 + 0x9c) + 0x14))()
            MoveWindow(*(*(arg1 + 0x11c) + *(arg1 + 0x12c) * 0x28), 0, Y, nWidth, edi_1 - Y, 1)

return 0
