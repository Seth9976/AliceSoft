// 函数: sub_6118c0
// 地址: 0x6118c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_44
int32_t eax_1 = data_78c474 ^ &var_44
RECT lprc

if (*(arg1 + 0x18c) != 0xffffffff && *(arg1 + 0x190) != 0xffffffff)
    int32_t eax_3 = GetScrollPos(*(arg1 + 0x88), SB_VERT)
    int32_t edi_3 = (*(arg1 + 0xb8) + *(arg1 + 0xb4)) * (*(arg1 + 0x190) - eax_3)
    RECT rect
    GetClientRect(*(arg1 + 0x88), &rect)
    int32_t edi_4 = edi_3 + *(arg1 + 0xb4)
    lprc.left = 0
    lprc.top = edi_4 - 1
    lprc.right = rect.right - rect.left
    lprc.bottom = edi_4
    FillRect(arg2, &lprc, GetStockObject(BLACK_BRUSH))

int32_t eax_11
int32_t edx_3
edx_3:eax_11 = sx.q(GetScrollPos(*(arg1 + 0x88), SB_HORZ) * *(arg1 + 0xb4))
int32_t eax_13 = (eax_11 - edx_3) s>> 1
int32_t eax_14 = GetScrollPos(*(arg1 + 0x88), SB_VERT)
int32_t ecx_4 = data_797dac
int32_t ebx_2 = (*(arg1 + 0xb4) + *(arg1 + 0xb8)) * eax_14
int32_t* result = *(arg1 + 0xc8)

if (ecx_4 s>= 0)
    int32_t edi_5 = *result
    int32_t eax_15
    int32_t edx_6
    edx_6:eax_15 = muls.dp.d(0x66666667, result[1] - edi_5)
    int32_t edx_7 = edx_6 s>> 3
    result = (edx_7 u>> 0x1f) + edx_7
    
    if (ecx_4 s< result)
        result = edi_5 + ecx_4 * 0x14
        int32_t* result_2 = result
        
        if (result != 0)
            int32_t* result_1 = nullptr
            
            if (((result[2] - result[1]) & 0xfffffffc) s> 0)
                while (true)
                    void* edi_6 = *(result[1] + (result_1 << 2))
                    int32_t ecx_7 = *(arg1 + 0xb4)
                    int32_t eax_21
                    int32_t edx_10
                    edx_10:eax_21 = sx.q(*(edi_6 + 0x20) * ecx_7)
                    lprc.left = ((eax_21 - edx_10) s>> 1) - *(arg1 + 0xbc) - eax_13
                    int32_t eax_26 = ecx_7 + *(arg1 + 0xb8)
                    lprc.top = *(edi_6 + 0x24) * eax_26 - ebx_2 + ecx_7
                    int32_t eax_29
                    int32_t edx_16
                    edx_16:eax_29 = sx.q(*(edi_6 + 0x28) * ecx_7)
                    lprc.right = ((eax_29 - edx_16) s>> 1) - *(arg1 + 0xbc) - eax_13
                    lprc.bottom = *(edi_6 + 0x24) * eax_26 - ebx_2 + ecx_7 + 1
                    FillRect(arg2, &lprc, *(arg1 + 0x188))
                    result = result_1 + 1
                    result_1 = result
                    
                    if (result s>= (result_2[2] - result_2[1]) s>> 2)
                        break
                    
                    result = result_2

sub_6b4885(eax_1 ^ &var_44)
return result
