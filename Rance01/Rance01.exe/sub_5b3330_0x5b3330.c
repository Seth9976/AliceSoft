// 函数: sub_5b3330
// 地址: 0x5b3330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_18
int32_t eax_1 = data_78c474 ^ &var_18
int32_t* result = arg3
int32_t edx = arg4
char* ecx = *arg1
int32_t i = 0
int32_t* result_1 = result
int32_t i_1 = 0

do
    if (edx s> 0)
        int32_t esi_2 = arg2 * 6
        int32_t j_1 = ((edx - 1) u>> 1) + 1
        var_18 = 0
        int32_t var_8_1 = esi_2
        int32_t j_2 = j_1
        int32_t j
        
        do
            result = *result_1 + var_18 + i
            
            if (arg2 s> 0)
                int32_t k_1 = ((arg2 - 1) u>> 1) + 1
                int32_t k
                
                do
                    *result = *ecx
                    *(result + arg2 * 3 - 3 + 3) = ecx[1]
                    *(result + 3) = ecx[2]
                    *(arg2 * 3 + result + 3) = ecx[3]
                    result += 6
                    ecx = &ecx[4]
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                i = i_1
                esi_2 = var_8_1
                j_1 = j_2
            
            var_18 += esi_2
            j = j_1
            j_1 -= 1
            j_2 = j_1
        while (j != 1)
        edx = arg4
    
    i += 1
    i_1 = i
while (i s< 3)

sub_6b4885(eax_1 ^ &var_18)
return result
