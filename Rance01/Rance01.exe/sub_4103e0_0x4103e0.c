// 函数: sub_4103e0
// 地址: 0x4103e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result_5 = arg3
int32_t esi_1 = arg1 - result_5
int32_t result_2 = arg2 - result_5
int32_t result = result_2
int32_t var_14 = result_2
int32_t ecx = esi_1

if (esi_1 != 0)
    int32_t i
    
    do
        i = mods.dp.d(sx.q(result), ecx)
        result = ecx
        ecx = i
    while (i != 0)
    var_14 = result

if (result s< result_2 && result s> 0)
    int32_t ecx_2 = neg.d(result_5)
    int32_t ecx_4 = neg.d(esi_1)
    result += result_5
    int32_t result_1 = result
    int32_t i_1
    
    do
        int32_t result_4 = result + esi_1
        int32_t result_3 = result
        
        if (result_4 == arg2)
            result_4 = result_5
        
        int32_t ecx_8 = neg.d(result_4)
        
        do
            result.b = *result_3
            result_5.b = *result_4
            *result_3 = result_5.b
            result_5 = arg3
            *result_4 = result.b
            result_3 = result_4
            
            if (esi_1 s>= ecx_8 + arg2)
                result_4 += esi_1 - arg2 + result_5
                ecx_8 = ecx_8 - neg.d(arg2) + ecx_4 + ecx_2
            else
                result_4 += esi_1
                ecx_8 += ecx_4
        while (result_4 != result_1)
        
        i_1 = var_14 - 1
        result = result_1 - 1
        var_14 = i_1
        result_1 = result
    while (i_1 s> 0)

return result
