// 函数: sub_542400
// 地址: 0x542400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t* eax = *(arg1 + 0x28c)
int32_t ecx_1 = *eax
*(arg1 + 0x28c) = &eax[1]
int32_t* eax_3 = *(arg1 + 0x2b0) - 4
*(arg1 + 0x2b0) = eax_3
int32_t edx = *(arg1 + 0x1e4)
int32_t* eax_5 = *(edx + (*eax_3 << 2))
int32_t eax_6

if (eax_5[1] != 0)
    eax_6 = *eax_5
else
    eax_6 = 0

int32_t eax_7 = *(eax_6 + (ecx_1 << 2))
int32_t* var_4

if (eax_7 u< (*(arg1 + 0x1e8) - edx) s>> 2)
    var_4 = *(edx + (eax_7 << 2))
else
    var_4 = nullptr

int32_t eax_9 = sub_5527e0(arg1 + 0x1dc)
int32_t* eax_10 = sub_552440(arg1 + 0x1fc)

if (eax_10 != 0)
    *(*(arg1 + 0x1e4) + (eax_9 << 2)) = eax_10
    
    if (sub_5506c0(eax_10, var_4) != 0)
        *(eax_10 + 0x2d) = 1
        int32_t* eax_13 = *(arg1 + 0x2b0)
        *eax_13 = eax_9
        *(arg1 + 0x2b0) += 4
        return eax_13

int32_t* eax_11 = *(arg1 + 0x2b0)
*eax_11 = 0xffffffff
*(arg1 + 0x2b0) += 4
return eax_11
