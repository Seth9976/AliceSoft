// 函数: sub_10001440
// 地址: 0x10001440
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t* esi = arg1

if (arg2 != 0 && esi[5] u>= 0x10)
    char* ebx_1 = *esi
    
    if (arg3 != 0)
        sub_1000cc10(esi, ebx_1, arg3)
    
    if (esi[5] + 1 u>= 0x1000)
        if ((ebx_1.b & 0x1f) != 0)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        char* eax_3 = *(ebx_1 - 4)
        
        if (eax_3 u>= ebx_1)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* ebx_2 = ebx_1 - eax_3
        
        if (ebx_2 u< 4)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (ebx_2 u> 0x23)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        ebx_1 = eax_3
    
    _free(ebx_1)

esi[5] = 0xf
bool cond:1 = esi[5] u< 0x10
esi[4] = arg3

if (not(cond:1))
    esi = *esi

*(esi + arg3) = 0
