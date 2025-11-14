// 函数: sub_424db0
// 地址: 0x424db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*arg1 != 0)
    int32_t eax
    eax.b = 1
    return eax

int32_t* esi = sub_597300(0x756e48)
int32_t* eax_1

if (esi != 0)
    eax_1 = (**esi)(0x756e58)
    *(arg1 + 8) = eax_1
    
    if (eax_1 != 0)
        *(arg1 + 4) = (**esi)(0x756e98)
        *(arg1 + 0xc) = (**esi)(0x756e68)
        *(arg1 + 0x10) = (**esi)(0x756e78)
        *(arg1 + 0x14) = (**esi)(0x756e88)
        eax_1 = (**esi)(0x756ea8)
        *(arg1 + 0x18) = eax_1
        
        if (eax_1 != 0)
            arg1[0x20] = 0
            *arg1 = 1
            eax_1.b = 1
            return eax_1

eax_1.b = 0
return eax_1
