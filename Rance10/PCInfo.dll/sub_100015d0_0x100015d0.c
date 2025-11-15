// 函数: sub_100015d0
// 地址: 0x100015d0
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

void** ebx = arg2
int32_t eax = ebx[4]
int32_t* result = arg1

if (eax u< arg3)
    sub_10001fe6("invalid string position")
    noreturn

void* eax_1 = eax - arg3
void* edi = arg4

if (edi u> eax_1)
    edi = eax_1

if (result == ebx)
    void* eax_2 = edi + arg3
    
    if (result[4] u< eax_2)
        sub_10001fe6("invalid string position")
        noreturn
    
    result[4] = eax_2
    
    if (result[5] u>= 0x10)
        arg1 = *result
    
    int32_t var_14_1 = arg3
    *(arg1 + eax_2) = 0
    sub_10001990(result, arg1)
    return result

if (edi u> 0xfffffffe)
    sub_10001fc6("string too long")
    noreturn

if (result[5] u>= edi)
    if (edi != 0)
        goto label_10001644
    
    bool cond:0 = result[5] u< 0x10
    result[4] = edi
    
    if (cond:0)
        *result = 0
        return result
    
    **result = 0
    return result

sub_10001a60(arg1, edi, result[4])

if (edi != 0)
label_10001644:
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    char* result_1
    
    if (result[5] u< 0x10)
        result_1 = result
    else
        result_1 = *result
    
    if (edi != 0)
        sub_1000cc10(result_1, ebx + arg3, edi)
    
    bool cond:1_1 = result[5] u< 0x10
    result[4] = edi
    
    if (not(cond:1_1))
        *(*result + edi) = 0
        return result
    
    *(result + edi) = 0

return result
