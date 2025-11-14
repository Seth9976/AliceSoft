// 函数: sub_54b690
// 地址: 0x54b690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *(arg1 + 0x1a8)

if (esi s>= 0)
    *(arg1 + 0x2b0) -= 4
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x6bca1af3, *(arg1 + 0xbc) - *(arg1 + 0xb8))
    int32_t edx_2 = edx_1 s>> 5
    int32_t eax_5 = (edx_2 u>> 0x1f) + edx_2
    int32_t ebx_2
    int32_t* ebx_3
    
    if (esi u< eax_5)
        ebx_2 = esi * 0x4c
        ebx_3 = ebx_2 + *(arg1 + 0xb8)
    
    if (esi u>= eax_5 || ebx_2 == neg.d(*(arg1 + 0xb8)))
        int32_t var_18_1 = esi
        return sub_53d1c0(eax_5, edx_2, arg1, 0x7509ec)
    
    if (ebx_3[0xa] != 1)
        eax_5.b = 0
        return eax_5
    
    int32_t var_4 = **(arg1 + 0x2b0)
    int32_t var_8
    void* eax_8
    int32_t edx_3
    eax_8, edx_3 = sub_552a10(ebx_3, arg1 + 0x1dc, &var_8)
    
    if (eax_8 == 0)
        return sub_53d1c0(eax_8, edx_3, arg1, 0x750a1c)
    
    int32_t esi_1 = var_8
    int32_t edx_4
    eax_5, edx_4 = sub_53ada0(arg1, esi_1)
    
    if (eax_5.b == 0)
        eax_5.b = 0
        return eax_5
    
    int32_t* eax_11
    int32_t edx_5
    eax_11, edx_5 = sub_5529f0(arg1 + 0x1dc, edx_4, esi_1)
    
    if (eax_11 == 0)
        return sub_53d1c0(eax_11, edx_5, arg1, 0x750a50)
    
    int32_t eax_13
    int32_t ecx_7
    int32_t edx_6
    eax_13, ecx_7, edx_6 = sub_5501a0(1, eax_11, &var_4)
    
    if (eax_13.b == 0)
        return sub_53d1c0(eax_13, edx_6, arg1, 0x750a88)
    
    sub_53cad0(ecx_7, 1, arg1, *(arg1 + 0x28c) - *(arg1 + 0x290), *ebx_3)

void* eax
eax.b = 1
return eax
