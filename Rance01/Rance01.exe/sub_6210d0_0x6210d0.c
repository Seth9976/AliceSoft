// 函数: sub_6210d0
// 地址: 0x6210d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_24
int32_t eax_1 = data_78c474 ^ &var_24
BOOL result = arg2

if (arg1[0x50] != result)
    arg1[0x50] = result
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x66666667, arg1[0x4d] - arg1[0x4c])
    int32_t edx_2 = edx_1 s>> 4
    int32_t i = 0
    int32_t i_1 = 0
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0)
        var_24 = nullptr
        int32_t ecx_10
        
        do
            int32_t eax_6
            eax_6.b = i != arg1[0x50]
            ShowWindow((***(var_24 + arg1[0x4c]))((eax_6 - 1) & 5))
            
            if (i == arg1[0x50])
                RECT rect
                GetClientRect(arg1[0x22], &rect)
                int32_t edi_2 = rect.right - rect.left
                int32_t ebx_2 = rect.bottom - rect.top
                int32_t eax_12 = (*(arg1[0x2c] + 0x14))()
                int32_t ecx_6 = arg1[0x50]
                int32_t edx_7 = arg1[0x4c]
                int32_t ebx_3 = ebx_2 - eax_12
                arg1[0x78] = eax_12
                arg1[0x79] = ebx_3
                MoveWindow((***(edx_7 + ecx_6 * 0x28))(0, eax_12, edi_2, ebx_3, 1))
                i = i_1
            
            ecx_10 = arg1[0x4d] - arg1[0x4c]
            var_24 = &var_24[0xa]
            i += 1
            i_1 = i
        while (i s< ecx_10 s/ 0x28)
    
    sub_620900(arg1)
    sub_620a40(arg1)
    sub_620da0(arg1)
    sub_621250(arg1)
    InvalidateRect(arg1[0x22], nullptr, 1)
    result = UpdateWindow(arg1[0x22])

sub_6b4885(eax_1 ^ &var_24)
return result
