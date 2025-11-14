// 函数: sub_5c7790
// 地址: 0x5c7790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_14
int32_t eax_1 = data_78c474 ^ &var_14
int32_t edx = arg4
char* result = *arg2
int32_t i = 0
int32_t i_1 = 0

do
    if (edx s> 0)
        int32_t esi_2 = arg1 * 6
        int32_t j_1 = ((edx - 1) u>> 1) + 1
        var_14 = 0
        int32_t var_8_1 = esi_2
        int32_t j_2 = j_1
        int32_t j
        
        do
            if (arg1 s> 0)
                int32_t k_1 = ((arg1 - 1) u>> 1) + 1
                char* ecx_5 = *arg3 + var_14 + i
                int32_t k
                
                do
                    *result = *ecx_5
                    result[1] = ecx_5[arg1 * 3]
                    result[2] = ecx_5[3]
                    result[3] = ecx_5[arg1 * 3 + 3]
                    result = &result[4]
                    ecx_5 = &ecx_5[6]
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                esi_2 = var_8_1
                i = i_1
                j_1 = j_2
            
            var_14 += esi_2
            j = j_1
            j_1 -= 1
            j_2 = j_1
        while (j != 1)
        edx = arg4
    
    i += 1
    i_1 = i
while (i s< 3)

sub_6b4885(eax_1 ^ &var_14)
return result
