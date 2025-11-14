// 函数: sub_62f790
// 地址: 0x62f790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t edi_1 = arg2 u>> 0x10

if (edi_1 s> 0)
    sub_62f9e0(arg1, arg3)
    sub_62fe20(arg1)
    sub_630180(arg1)
    int32_t ebx_1 = *(arg1 + 0x11c)
    
    if (ebx_1 s>= 0)
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = muls.dp.d(0x66666667, *(arg1 + 0x110) - *(arg1 + 0x10c))
        int32_t edx_2 = edx_1 s>> 4
        
        if (ebx_1 s< (edx_2 u>> 0x1f) + edx_2)
            int32_t Y = (*(*(arg1 + 0x94) + 0x14))()
            MoveWindow(*(*(arg1 + 0x10c) + *(arg1 + 0x11c) * 0x28), 0, Y, arg3, edi_1 - Y, 1)

return 0
