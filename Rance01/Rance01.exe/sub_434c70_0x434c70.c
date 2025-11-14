// 函数: sub_434c70
// 地址: 0x434c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0xd8) == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* ecx = *(arg1 + 4)
int32_t* esi = *(arg2 + 0xcc)

if (ecx != esi)
    if (ecx != 0)
        (*(*ecx + 4))()
    
    *(arg1 + 4) = esi
    
    if (esi != 0)
        (**esi)()
    
    int32_t* esi_1 = *(arg1 + 0xd0)
    
    if (esi_1 != 0)
        sub_4370b0(esi_1)
        *(arg1 + 0xd0) = 0
    
    *(arg1 + 0xd0) = sub_4370f0(*(arg1 + 4), arg3)

void* eax_1
eax_1.b = 1
return eax_1
