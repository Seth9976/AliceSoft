// 函数: sub_58eed0
// 地址: 0x58eed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* eax = *(arg1 + 0x28)
int128_t* edi = *(arg1 + 0x24)

if (edi != eax)
    void* esi_2 = 0
    sub_6b49d0(edi, eax, esi_2)
    *(arg1 + 0x28) = esi_2 + edi

void* eax_1 = arg1 + 8
bool cond:0 = *(eax_1 + 0x14) u< 0x10
*(eax_1 + 0x10) = 0

if (not(cond:0))
    eax_1 = *eax_1

*eax_1 = 0
sub_58f670(arg1 + 0x34)
int32_t* ecx = *(arg1 + 0x44)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x44) = 0

*(arg1 + 4) = 0
void* eax_3 = *arg2
int32_t ecx_1 = arg2[1]

if (eax_3 != ecx_1)
    void* var_c = eax_3
    uint32_t eax_4
    
    if (sub_58efd0(&var_c).b == 0)
        eax_4.b = 0
        return eax_4
    
    void* ecx_2 = var_c
    
    if (ecx_2 + 4 u> ecx_1)
        eax_4.b = 0
        return eax_4
    
    eax_3 = ((zx.d(*(ecx_2 + 3)) << 8 | zx.d(*(ecx_2 + 2))) << 8 | zx.d(*(ecx_2 + 1))) << 8
        | zx.d(*ecx_2)
    var_c = ecx_2 + 4
    
    if (eax_3 s> 0)
        if (sub_58f0b0(arg1, &var_c).b == 0)
            eax_4.b = 0
            return eax_4
        
        eax_4 = sub_59e250(0x74b274)
        *(arg1 + 0x44) = eax_4
        
        if (eax_4 == 0)
            eax_4.b = 0
            return eax_4
        
        *(arg1 + 4) = 2
        sub_5134c0(arg1 + 0x24, arg2)

eax_3.b = 1
return eax_3
