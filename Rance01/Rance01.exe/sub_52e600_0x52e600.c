// 函数: sub_52e600
// 地址: 0x52e600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_2 = arg3 - arg2
int32_t i_2 = (arg1 - arg2) s/ 0x38
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0x92492493, ecx_2)
int32_t i_4 = ecx_2 s/ 0x38
int32_t i_3 = i_4
int32_t i_1 = i_2

if (i_2 != 0)
    int32_t i
    
    do
        int32_t eax_3
        int32_t edx_6
        edx_6:eax_3 = sx.q(i_3)
        i = mods.dp.d(edx_6:eax_3, i_1)
        result = divs.dp.d(edx_6:eax_3, i_1)
        i_3 = i_1
        i_1 = i
    while (i != 0)

if (i_3 s< i_4 && i_3 s> 0)
    int32_t eax_8 = i_2 * 0x38
    int32_t esi = arg2 + i_3 * 0x38
    int32_t var_4_1 = eax_8
    int32_t var_8_1 = esi
    
    while (true)
        int32_t edi_1 = esi + eax_8
        
        if (edi_1 == arg3)
            edi_1 = arg2
        
        do
            sub_52e760(esi, edi_1)
            result = (arg3 - edi_1) s/ 0x38
            esi = edi_1
            
            if (i_2 s>= result)
                int32_t ecx_10 = i_2 - result
                result = arg2
                edi_1 = result + ecx_10 * 0x38
            else
                edi_1 += var_4_1
        while (edi_1 != var_8_1)
        
        var_8_1 -= 0x38
        i_3 -= 1
        
        if (i_3 s<= 0)
            break
        
        esi = var_8_1
        eax_8 = var_4_1

return result
