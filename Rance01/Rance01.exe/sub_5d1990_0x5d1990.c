// 函数: sub_5d1990
// 地址: 0x5d1990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = data_797d90

if (*esi == 0)
    int32_t* eax_1 = sub_597300(0x73722c)
    
    if (eax_1 == 0)
        eax_1.b = 0
        return eax_1
    
    eax_1 = (**eax_1)(0x73723c)
    
    if (eax_1 == 0)
        eax_1.b = 0
        return eax_1
    
    eax_1 = (*(*eax_1 + 0x10))(0x73721c)
    *(esi + 0x24) = eax_1
    
    if (eax_1 == 0)
        eax_1.b = 0
        return eax_1
    
    sub_401180(&esi[4], 0xffffffff, arg1, 0)
    *(esi + 0x20) = (***(esi + 0x24))()
    sub_5d1940(esi)
    sub_5d1bf0(esi)
    *esi = 1

int32_t eax
eax.b = 1
return eax
