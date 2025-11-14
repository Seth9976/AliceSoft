// 函数: sub_553850
// 地址: 0x553850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg3
int32_t* result

if (sub_553750(arg2, arg1, &arg3, 0).b != 0)
    int32_t ecx_1 = *(arg2 + 8)
    int32_t ebx_1 = arg3
    result = (*(arg2 + 0xc) - ecx_1) s>> 2
    int32_t* edi_1
    
    if (ebx_1 u< result)
        edi_1 = *(ecx_1 + (ebx_1 << 2))
    else
        edi_1 = nullptr
    
    int32_t* ecx_2
    
    if (ebp u< result)
        ecx_2 = *(ecx_1 + (ebp << 2))
    else
        ecx_2 = nullptr
    
    if (edi_1 != 0 && ecx_2 != 0)
        int32_t ecx_4
        result, ecx_4 = sub_5538d0(arg2, edi_1, ecx_2)
        
        if (result.b != 0 && sub_54fb30(ecx_4, edi_1).b != 0)
            *arg4 = ebx_1
            result.b = 1
            return result

result.b = 0
return result
