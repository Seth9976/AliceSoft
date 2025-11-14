// 函数: sub_620600
// 地址: 0x620600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebp = zx.d(arg2.w)
uint32_t ebx_1 = arg2 u>> 0x10

if (ebp s> 0 && ebx_1 s> 0)
    (*(arg1[0x2c] + 4))()
    sub_61e8a0(&arg1[0x2c], arg1, ebp, arg1[0x4a] + arg1[0x49] + arg1[0x48])
    sub_620a40(arg1)
    sub_620da0(arg1)
    int32_t eax_7 = (*(arg1[0x2c] + 0x14))()
    arg1[0x78] = eax_7
    arg1[0x79] = ebx_1 - eax_7
    sub_621250(arg1)
    int32_t ecx_4 = arg1[0x50]
    
    if (ecx_4 s>= 0)
        int32_t eax_8
        int32_t edx_5
        edx_5:eax_8 = muls.dp.d(0x66666667, arg1[0x4d] - arg1[0x4c])
        int32_t edx_6 = edx_5 s>> 4
        
        if (ecx_4 s< (edx_6 u>> 0x1f) + edx_6)
            int32_t eax_13 = (*(arg1[0x2c] + 0x14))()
            MoveWindow((***(arg1[0x4c] + arg1[0x50] * 0x28))(0, eax_13, ebp, ebx_1 - eax_13, 1))

return 0
