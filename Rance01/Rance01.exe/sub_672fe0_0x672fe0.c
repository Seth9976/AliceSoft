// 函数: sub_672fe0
// 地址: 0x672fe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_2 = (arg1 - arg2) s/ 0x24
int32_t result
int32_t edx_2
edx_2:result = muls.dp.d(0x38e38e39, arg3 - arg2)
int32_t i_4 = (arg3 - arg2) s/ 0x24
int32_t i_3 = i_4
int32_t i_1 = i_2

if (i_2 != 0)
    int32_t i
    
    do
        int32_t eax_3
        int32_t edx_4
        edx_4:eax_3 = sx.q(i_3)
        i = mods.dp.d(edx_4:eax_3, i_1)
        result = divs.dp.d(edx_4:eax_3, i_1)
        i_3 = i_1
        i_1 = i
    while (i != 0)

if (i_3 s< i_4 && i_3 s> 0)
    int32_t eax_6 = i_2 * 0x24
    int32_t esi = arg2 + i_3 * 0x24
    int32_t var_4_1 = eax_6
    int32_t var_8_1 = esi
    
    while (true)
        int32_t edi_1 = esi + eax_6
        
        if (edi_1 == arg3)
            edi_1 = arg2
        
        do
            sub_6730c0(esi, edi_1)
            result = (arg3 - edi_1) s/ 0x24
            esi = edi_1
            
            if (i_2 s>= result)
                int32_t ecx_9 = i_2 - result
                result = arg2
                edi_1 = result + ecx_9 * 0x24
            else
                edi_1 += var_4_1
        while (edi_1 != var_8_1)
        
        var_8_1 -= 0x24
        i_3 -= 1
        
        if (i_3 s<= 0)
            break
        
        esi = var_8_1
        eax_6 = var_4_1

return result
