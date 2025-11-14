// 函数: sub_551170
// 地址: 0x551170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[0xc] s< 0)
    int32_t eax
    eax.b = 0
    return eax

*(arg2 + (arg1[0xc] << 2)) = arg1[1] u>> 2

if (arg1[0xc] == 0)
    uint32_t eax_2
    eax_2.b = 1
    return eax_2

int32_t* eax_3 = arg1[1]

if ((eax_3 & 0xfffffffc) u> 0)
    if (eax_3 != 0)
        eax_3 = *arg1
    
    void* ecx = arg1[5]
    eax_3 = *eax_3
    
    if (eax_3 u< (*(ecx + 0xc) - *(ecx + 8)) s>> 2 && *(*(ecx + 8) + (eax_3 << 2)) != 0)
        return sub_551170(arg2) != 0

eax_3.b = 0
return eax_3
