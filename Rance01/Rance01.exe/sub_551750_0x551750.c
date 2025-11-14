// 函数: sub_551750
// 地址: 0x551750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1
int32_t eax_2

if (esi[0x10].b != 0)
    int32_t eax_5 = (esi[1] u>> 2) + 1
    
    if (eax_5 s> 0)
        sub_427ad0(esi, eax_5 << 2)
    
    int32_t var_4
    sub_553750(esi[5], esi[0xe], &var_4, 1)
    uint32_t eax_6
    
    if (esi[0x10].b != 0)
        eax_6 = esi[1] u>> 2
    else
        eax_6 = 0
    
    int32_t eax_8 = esi[1]
    
    if (eax_6 - 1 u>= eax_8 u>> 2)
        eax_2 = var_4
    else if (eax_8 != 0)
        eax_2 = var_4
        *(*esi + ((eax_6 - 1) << 2)) = eax_2
    else
        eax_2 = var_4
        *((eax_6 - 1) << 2) = eax_2
else
    sub_550e50(arg1)
    uint32_t eax
    
    if (esi[0x10].b != 0)
        eax = esi[1] u>> 2
    else
        eax = 0
    
    if (esi[1] != 0)
        eax_2 = *(*esi + (eax << 2) - 4)
    else
        eax_2 = *((eax << 2) + 0xfffffffc)

return sub_553d70(esi[5], eax_2, arg2)
