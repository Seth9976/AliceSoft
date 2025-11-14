// 函数: sub_58d610
// 地址: 0x58d610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x1c) == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t esi = *(arg1 + 0xc)
int32_t* edi = *(*(arg1 + 8) + 0x1c)
void* eax_1

if (edi[0x19] != esi)
    int32_t* eax_2 = *edi
    
    if ((*(*eax_2 + 0x1a0))(eax_2, esi) s< 0)
        eax_1.b = 0
        return eax_1
    
    edi[0x19] = esi

eax_1.b = 1
return eax_1
