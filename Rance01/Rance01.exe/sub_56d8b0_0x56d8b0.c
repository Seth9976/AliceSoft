// 函数: sub_56d8b0
// 地址: 0x56d8b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x44) != 0 && (*(**(arg1 + 0x44) + 0x10))() != 0)
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    long double x87_r7_2 = float.t(0)
    (*(**(arg1 + 0x44) + 0x20))(0, fconvert.s(fconvert.t(fconvert.s(float.t(arg2)))), 
        fconvert.s(fconvert.t(fconvert.s(float.t(arg3)))), fconvert.s(x87_r7_2), 
        fconvert.s(x87_r7_2))
    long double x87_r7_5 = float.t(0)
    (*(**(arg1 + 0x44) + 0x20))(1, 
        fconvert.s(fconvert.t(fconvert.s(float.t(*(arg1 + 0x1c) - 1) / fconvert.t(arg4)))), 
        fconvert.s(fconvert.t(fconvert.s(float.t(*(arg1 + 0x20) - 1) / fconvert.t(arg5)))), 
        fconvert.s(x87_r7_5), fconvert.s(x87_r7_5))
    int32_t var_4 = 0xffffffff
    
    for (void* i = 3; i s<= 0xf; i += 4)
        void* j = 0xffffffff
        __return_addr = 0xffffffff
        
        do
            long double x87_r7_14 = float.t(0)
            (*(**(arg1 + 0x44) + 0x20))(i + j, 
                fconvert.s(fconvert.t(fconvert.s(float.t(__return_addr) / fconvert.t(arg4)))), 
                fconvert.s(fconvert.t(fconvert.s(float.t(var_4) / fconvert.t(arg5)))), 
                fconvert.s(x87_r7_14), fconvert.s(x87_r7_14))
            j += 1
            __return_addr = j
        while (j s<= 2)
        
        var_4 += 1
    
    int32_t result
    result.b = 1
    return result

return 0
