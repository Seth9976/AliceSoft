// 函数: sub_10001940
// 地址: 0x10001940
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (arg2 u> 0xfffffffe)
    sub_10001fc6("string too long")
    noreturn

if (arg1[5] u< arg2)
    sub_10001a60(arg1, arg2, arg1[4])
    void* eax_1
    eax_1.b = arg2 != 0
    return eax_1

bool cond:1 = arg2 != 0

if (arg2 == 0)
    bool cond:2_1 = arg1[5] u< 0x10
    arg1[4] = arg2
    
    if (not(cond:2_1))
        arg1 = *arg1
    
    *arg1 = nullptr
    cond:1 = arg2 != 0

int32_t eax
eax.b = cond:1
return eax
