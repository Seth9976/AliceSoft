// 函数: sub_62c8a0
// 地址: 0x62c8a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_7c
int32_t eax_1 = data_78c474 ^ &var_7c
int32_t result = arg3
HDC hDC = result

if (result != 0 && arg1[0x27] s> 0)
    RECT rect
    GetClientRect(arg2, &rect)
    int32_t ecx_1 = arg1[0x29] + arg1[0x27]
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(rect.bottom - rect.top)
    int32_t esi_1 = GetScrollPos(arg2, SB_VERT)
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q(GetScrollPos(arg2, SB_HORZ) * arg1[0x27])
    int32_t eax_11 = (eax_9 - edx_3) s>> 1
    int32_t ebx_1 = esi_1 + divs.dp.d(edx_1:eax_4, ecx_1)
    int32_t eax_14
    
    if (ebx_1 s>= (*(*arg1 + 4))())
        eax_14 = (*(*arg1 + 4))()
    else
        eax_14 = ebx_1
    
    int32_t ebx_2 = esi_1
    
    if (esi_1 s<= eax_14)
        int32_t var_74_2 = 0
        
        do
            int32_t eax_17 = arg1[0x29] + arg1[0x27]
            int32_t esi_3 = var_74_2 * eax_17
            int32_t eax_18 = eax_17 + esi_3
            int32_t eax_21 = sub_62cad0(ebx_2, arg1, hDC, arg1[0x28] - eax_11, esi_3)
            int32_t eax_22 = arg1[0x28]
            
            if (eax_22 s> 0)
                int32_t edx_10 = *(*arg1 + 0x44)
                int32_t var_44_1 = eax_22
                int32_t var_40_1 = eax_18
                int32_t var_4c = 0
                int32_t var_48_1 = esi_3
                edx_10(ebx_2, hDC, &var_4c)
            
            int32_t eax_25
            int32_t edx_11
            edx_11:eax_25 = sx.q(arg1[0x27] * eax_21)
            int32_t edx_13 = *(*arg1 + 0x44)
            int32_t var_20_1 = eax_18
            int32_t var_2c = ((eax_25 - edx_11) s>> 1) - eax_11 + arg1[0x28]
            int32_t right = rect.right
            int32_t var_28_1 = esi_3
            edx_13(ebx_2, hDC, &var_2c)
            RECT lprc
            lprc.left = 0
            lprc.top = arg1[0x27] + esi_3
            lprc.right = rect.right - rect.left
            lprc.bottom = eax_18
            FillRect(hDC, &lprc, GetStockObject(WHITE_BRUSH))
            var_74_2 += 1
            ebx_2 += 1
        while (ebx_2 s<= eax_14)
    
    RECT lprc_1
    lprc_1.top = (eax_14 - esi_1 + 1) * (arg1[0x29] + arg1[0x27])
    lprc_1.left = 0
    lprc_1.right = rect.right
    lprc_1.bottom = rect.bottom
    result = FillRect(hDC, &lprc_1, GetStockObject(WHITE_BRUSH))

sub_6b4885(eax_1 ^ &var_7c)
return result
