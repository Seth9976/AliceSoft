// 函数: sub_402cb0
// 地址: 0x402cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg1

if (arg2 != 0)
    int32_t ecx_1 = result[5]
    
    if (ecx_1 u>= 0x10)
        arg1 = *result
    
    if (arg2 u>= arg1)
        int32_t* result_1
        
        if (ecx_1 u< 0x10)
            result_1 = result
        else
            result_1 = *result
        
        if (result[4] + result_1 u> arg2)
            if (ecx_1 u< 0x10)
                return sub_402000(result, result, arg2 - result, arg3)
            
            return sub_402000(result, result, arg2 - *result, arg3)

void* eax_4 = result[4]

if (0xffffffff - eax_4 u<= arg3)
    sub_6b47bf("string too long")
    noreturn

if (arg3 != 0)
    void* edi_1 = eax_4 + arg3
    
    if (edi_1 u> 0xfffffffe)
        sub_6b47bf("string too long")
        noreturn
    
    int32_t ecx_3 = result[5]
    
    if (ecx_3 u>= edi_1)
        if (edi_1 != 0)
            goto label_402d54
        
        result[4] = edi_1
        
        if (ecx_3 u< 0x10)
            *result = 0
            return result
        
        **result = 0
        return result
    
    sub_401470(result, edi_1, eax_4)
    
    if (edi_1 != 0)
    label_402d54:
        int32_t* result_2
        
        if (result[5] u< 0x10)
            result_2 = result
        else
            result_2 = *result
        
        sub_6c02a0(result[4] + result_2, arg2, arg3)
        bool cond:0_1 = result[5] u< 0x10
        result[4] = edi_1
        
        if (not(cond:0_1))
            *(*result + edi_1) = 0
            return result
        
        *(result + edi_1) = 0

return result
