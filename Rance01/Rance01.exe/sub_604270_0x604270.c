// 函数: sub_604270
// 地址: 0x604270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = arg1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi - 1)
int32_t ebp_1 = (eax_1 - edx) s>> 1

while (arg3 s< esi)
    char* edi_1 = arg2 + ebp_1 * 0x1c
    int32_t ecx_2 = *(arg4 + 0x10)
    int32_t* var_4_1
    
    if (*(arg4 + 0x14) u< 0x10)
        var_4_1 = arg4
    else
        var_4_1 = *arg4
    
    int32_t eax_5 = *(edi_1 + 0x10)
    int32_t var_8_1 = eax_5
    
    if (eax_5 u< eax_5)
        var_8_1 = eax_5
    
    if (eax_5 u>= ecx_2)
        eax_5 = ecx_2
    
    char* edx_3
    
    if (*(edi_1 + 0x14) u< 0x10)
        edx_3 = edi_1
    else
        edx_3 = *edi_1
    
    int32_t eax_6 = sub_402320(eax_5, edx_3, var_4_1, eax_5)
    bool cond:1_1 = eax_6 s>= 0
    
    if (eax_6 != 0)
        goto label_604300
    
    int32_t eax_7 = *(arg4 + 0x10)
    
    if (var_8_1 u>= eax_7)
        int32_t edx_4
        edx_4.b = var_8_1 != eax_7
        cond:1_1 = edx_4 s>= 0
    label_604300:
        
        if (cond:1_1)
            break
    
    sub_401ef0(arg2 + esi * 0x1c, edi_1)
    int32_t eax_12
    int32_t edx_5
    edx_5:eax_12 = sx.q(ebp_1 - 1)
    esi = ebp_1
    ebp_1 = (eax_12 - edx_5) s>> 1

int128_t* result = arg2
int128_t** esi_2 = result + esi * 0x1c

if (esi_2 != arg4)
    if (esi_2[5] u>= 0x10)
        int128_t* var_1c_2 = *esi_2
        sub_6b4d5b()
    
    esi_2[5] = 0xf
    esi_2[4] = 0
    *esi_2 = nullptr
    
    if (*(arg4 + 0x14) u>= 0x10)
        result = *arg4
        *esi_2 = result
        *arg4 = 0
    else
        result = sub_6b49d0(esi_2, arg4, *(arg4 + 0x10) + 1)
    
    esi_2[4] = *(arg4 + 0x10)
    esi_2[5] = *(arg4 + 0x14)
    *(arg4 + 0x14) = 0xf
    *(arg4 + 0x10) = 0
    *arg4 = 0

return result
