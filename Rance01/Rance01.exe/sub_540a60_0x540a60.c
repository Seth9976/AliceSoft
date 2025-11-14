// 函数: sub_540a60
// 地址: 0x540a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_3 = arg1
*(arg1 + 0x2b0) -= 4
float* eax = *(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
float var_4 = fconvert.s(fconvert.t(*eax))
int32_t esi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* eax_3 = **(arg1 + 0x2b0)
int32_t edx_2 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (eax_3 u< edx_2)
    edx_2 = *(arg1 + 0x1e4)
    eax_3 = *(edx_2 + (eax_3 << 2))
    
    if (eax_3 != 0)
        int32_t edx_3 = eax_3[1]
        long double x87_r7_1 = fconvert.t(var_4)
        
        if (esi u>= edx_3 u>> 2)
            sub_53d1c0(eax_3, edx_3, arg1, 0x74ddb0)
            int32_t* eax_7
            eax_7.b = 0
            return eax_7
        
        int32_t eax_5
        
        if (edx_3 != 0)
            eax_5 = *eax_3
        else
            eax_5 = 0
        
        *(eax_5 + (esi << 2)) = fconvert.s(x87_r7_1)
        **(arg1 + 0x2b0) = fconvert.s(x87_r7_1)
        *(arg1 + 0x2b0) += 4
        float* eax_6
        eax_6.b = 1
        return eax_6

sub_53d1c0(eax_3, edx_2, arg1, 0x74dd88)
int32_t* eax_4
eax_4.b = 0
return eax_4
