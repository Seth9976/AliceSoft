// 函数: sub_548f60
// 地址: 0x548f60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t edi = **(arg1 + 0x2b0)
char eax_2
int32_t edx_1
eax_2, edx_1 = (**(arg1 + 4))()

if (eax_2 != 0)
    int32_t eax_5 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
    int32_t var_8_1
    
    if (edi u>= eax_5)
        var_8_1 = edi
        return sub_53d1c0(eax_5, edx_1, arg1, 0x750504)
    
    eax_5 = *(*(arg1 + 0x1e4) + (edi << 2))
    
    if (eax_5 == 0)
        var_8_1 = edi
        return sub_53d1c0(eax_5, edx_1, arg1, 0x750504)
    
    int32_t eax_7
    
    if (*(eax_5 + 4) != 0)
        eax_7 = *eax_5
    else
        eax_7 = 0
    
    sub_40da60(eax_7)

**(arg1 + 0x2b0) = edi
*(arg1 + 0x2b0) += 4
return 1
