// 函数: sub_434ce0
// 地址: 0x434ce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi_1

if (*(arg1 + 0xd0) != 0)
    (***(arg1 + 0xd0))()
    esi_1 = *(arg1 + 0xd0)
else
    esi_1 = nullptr

int32_t* ecx_2 = *(arg2 + 0xd4)

if (ecx_2 != esi_1)
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))()
    
    *(arg2 + 0xd4) = esi_1
else if (esi_1 != 0)
    (*(*esi_1 + 4))()
    int32_t eax_2
    eax_2.b = 1
    return eax_2

arg1.b = 1
return arg1
