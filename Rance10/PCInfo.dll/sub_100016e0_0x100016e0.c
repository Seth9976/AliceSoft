// 函数: sub_100016e0
// 地址: 0x100016e0
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg2 != 0)
    int32_t ecx = arg1[5]
    int32_t* eax_1
    
    if (ecx u< 0x10)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    if (arg2 u>= eax_1)
        int32_t* edx_1
        
        if (ecx u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        if (arg1[4] + edx_1 u> arg2)
            if (ecx u< 0x10)
                return sub_100017c0(arg1, arg1, arg2 - arg1, arg3)
            
            return sub_100017c0(arg1, arg1, arg2 - *arg1, arg3)

void* ecx_3 = arg1[4]

if (not.d(ecx_3) u<= arg3)
    sub_10001fc6("string too long")
    noreturn

void* ebp = ecx_3 + arg3

if (arg3 != 0)
    void* var_14_3 = ecx_3
    
    if (sub_10001940(arg1, ebp) != 0)
        int32_t* ecx_5
        
        if (arg1[5] u< 0x10)
            ecx_5 = arg1
        else
            ecx_5 = *arg1
        
        if (arg3 != 0)
            sub_1000cc10(arg1[4] + ecx_5, arg2, arg3)
        
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = ebp
        
        if (not(cond:0_1))
            *(*arg1 + ebp) = 0
            return arg1
        
        *(arg1 + ebp) = 0

return arg1
