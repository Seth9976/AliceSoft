// 函数: sub_10001990
// 地址: 0x10001990
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t* result = arg1
int32_t edi = result[4]

if (edi u<= arg2)
    result[4] = 0
    
    if (result[5] u< 0x10)
        *result = 0
        return result
    
    **result = 0
    return result

if (arg2 != 0)
    if (result[5] u>= 0x10)
        arg1 = *result
    
    void* edi_1 = edi - arg2
    
    if (edi != arg2)
        sub_10002cf0(arg1, arg2 + arg1, edi_1)
    
    bool cond:0_1 = result[5] u< 0x10
    result[4] = edi_1
    
    if (not(cond:0_1))
        *(*result + edi_1) = 0
        return result
    
    *(result + edi_1) = 0

return result
