// 函数: sub_62da60
// 地址: 0x62da60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** result_1
int32_t eax_1 = data_78c474 ^ &result_1
void** result = arg2
bool cond:0 = result[5] u< 0x10
int32_t* result_2 = result
result[4] = 0

if (not(cond:0))
    result = *result

*result = nullptr

if (arg1[0x27] s> 0)
    RECT rect
    GetClientRect(arg1[1], &rect)
    int32_t ecx_3 = arg1[0x27] + arg1[0x29]
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(rect.bottom - rect.top)
    int32_t edi_1 = GetScrollPos(arg1[1], SB_VERT)
    int32_t eax_11
    int32_t edx_3
    edx_3:eax_11 = sx.q(GetScrollPos(arg1[1], SB_HORZ) * arg1[0x27])
    int32_t result_3 = divs.dp.d(edx_1:eax_4, ecx_3) + edi_1
    result = (*(*arg1 + 4))()
    
    if (result_3 s>= result)
        result = (*(*arg1 + 4))()
        result_1 = result
    else
        result_1 = result_3
    
    if (edi_1 s<= result_1)
        int32_t ebp_2 = 0
        
        do
            result = sub_62db60(edi_1, arg1, arg1[0x28] - ((eax_11 - edx_3) s>> 1), 
                (arg1[0x27] + arg1[0x29]) * ebp_2, result_2)
            edi_1 += 1
            ebp_2 += 1
        while (edi_1 s<= result_1)

sub_6b4885(eax_1 ^ &result_1)
return result
