// 函数: sub_60c290
// 地址: 0x60c290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

SetFocus(arg2)

if (data_797db4 != 0)
    int32_t eax_2 = GetScrollPos(arg1[0x22], SB_VERT)
    int32_t temp0_1 = divs.dp.d(sx.q(arg3 u>> 0x10), arg1[0x2e] + arg1[0x2d])
    arg1[0x35] = temp0_1 + eax_2
    int32_t eax_9
    
    if (temp0_1 + eax_2 s>= 0)
        eax_9 = (*(*arg1 + 0x8c))()
    
    if (temp0_1 + eax_2 s< 0 || arg1[0x35] s>= eax_9)
        arg1[0x35] = 0xffffffff
    
    InvalidateRect(arg2, nullptr, 1)
    int32_t ecx_2 = arg1[0x35]
    
    if (ecx_2 s>= 0)
        int32_t eax_10
        int32_t edx_6
        edx_6:eax_10 = muls.dp.d(0x2e8ba2e9, arg1[0x31] - arg1[0x30])
        int32_t edx_7 = edx_6 s>> 3
        
        if (ecx_2 s< (edx_7 u>> 0x1f) + edx_7)
            int32_t* ecx_4 = ecx_2 * 0x2c + arg1[0x30]
            sub_613d40(arg1[0x38], ecx_4[1] + 1, *ecx_4)

return 0
