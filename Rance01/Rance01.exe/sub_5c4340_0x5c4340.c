// 函数: sub_5c4340
// 地址: 0x5c4340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = arg1[2]
int32_t ebp = arg1[3]
int32_t var_8 = edx
int32_t esi = ebp
int32_t result_1 = 0xffffffff
int32_t var_14 = 0xffffffff

while (true)
    int32_t edx_1 = edx - 0x10000
    ebp = adc.d(ebp, 0xffffffff, edx u>= 0x10000)
    int32_t var_10_1 = edx_1
    
    if (ebp s<= 0 && (ebp s< 0 || edx_1 u< 0))
        var_10_1 = 0
        edx_1 = 0
        ebp = 0
    
    int32_t ecx_1 = *arg1
    int32_t eax_3
    
    if (ecx_1 == 0)
        eax_3 = 0xffffff7f
    else
        int32_t eax = arg1[0xb1]
        int32_t eax_1
        
        if (eax != 0)
            eax_1 = eax(ecx_1, edx_1, ebp, 0)
        
        if (eax == 0 || eax_1 == 0xffffffff)
            eax_3 = 0xffffff80
        else
            arg1[2] = var_10_1
            eax_3 = 0
            arg1[3] = ebp
            
            if (arg1[7] s>= 0)
                __builtin_memset(&arg1[8], 0, 0x14)
    
    int32_t result
    int32_t edx_2
    edx_2:result = sx.q(eax_3)
    
    if ((result | edx_2) != 0)
        return result
    
    int32_t temp2_1 = arg1[3]
    
    if (temp2_1 s<= esi && (temp2_1 s< esi || arg1[2] u< var_8))
        while (true)
            int32_t ecx_5 = var_8 - arg1[2]
            int32_t edx_4 = sbb.d(esi, arg1[3], var_8 u< arg1[2])
            *arg2 = 0
            arg2[1] = 0
            arg2[2] = 0
            arg2[3] = 0
            int32_t result_2
            int32_t edx_5
            result_2, edx_5 = sub_5c4290(arg1, arg2, ecx_5, edx_4)
            
            if (result_2 == 0xffffff80 && edx_5 == 0xffffffff)
                return 0xffffff80
            
            if (edx_5 s< 0)
                break
            
            if (edx_5 s<= 0 && result_2 u< 0)
                break
            
            result_1 = result_2
            var_14 = edx_5
            int32_t temp7_1 = arg1[3]
            
            if (temp7_1 s>= esi)
                if (temp7_1 s> esi)
                    break
                
                if (arg1[2] u>= var_8)
                    break
    
    if ((result_1 & var_14) != 0xffffffff)
        if (arg2[1] != 0)
            result = result_1
        else
            int32_t edx_8
            edx_8:result = sx.q(sub_5c4230(arg1, result_1, var_14))
            int32_t ecx_9 = result | edx_8
            
            if (ecx_9 == 0)
                int32_t eax_7
                int32_t edx_9
                eax_7, edx_9 = sub_5c4290(arg1, arg2, 0x10000, ecx_9)
                
                if (edx_9 s<= 0 && (edx_9 s< 0 || eax_7 u< 0))
                    return 0xffffff7f
                
                result = result_1
        
        return result
    
    edx = var_10_1
