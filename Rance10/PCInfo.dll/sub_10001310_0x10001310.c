// 函数: sub_10001310
// 地址: 0x10001310
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

void** esi = arg1
int32_t result = esi[5]

if (result u>= 0x10)
    void* ecx = *esi
    
    if (result + 1 u>= 0x1000)
        if ((ecx.b & 0x1f) != 0)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* eax_1 = *(ecx - 4)
        
        if (eax_1 u>= ecx)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* ecx_1 = ecx - eax_1
        
        if (ecx_1 u< 4)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (ecx_1 u> 0x23)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        ecx = eax_1
    
    result = _free(ecx)

esi[5] = 0xf
bool cond:0 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:0))
    esi = *esi

*esi = nullptr
return result
