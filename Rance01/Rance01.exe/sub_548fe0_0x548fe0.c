// 函数: sub_548fe0
// 地址: 0x548fe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t edi = **(arg1 + 0x2b0)
int32_t eax_3 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (edi u< eax_3)
    eax_3 = *(*(arg1 + 0x1e4) + (edi << 2))
    
    if (eax_3 != 0)
        int32_t eax_5
        
        if (*(eax_3 + 4) != 0)
            eax_5 = *eax_3
        else
            eax_5 = 0
        
        sub_604c90(eax_5)
        **(arg1 + 0x2b0) = edi
        *(arg1 + 0x2b0) += 4
        enum MESSAGEBOX_RESULT result
        result.b = 1
        return result

int32_t var_8 = edi
int32_t edx
return sub_53d1c0(eax_3, edx, arg1, 0x750544)
