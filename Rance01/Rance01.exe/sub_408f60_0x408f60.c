// 函数: sub_408f60
// 地址: 0x408f60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = data_797d2c
*(esi + 0x40) += 1

if (*(esi + 0x52) == 0 && *(esi + 0x51) != 0 && *(esi + 0x50) != 0)
    *(esi + 0x54) += 1
    
    if (*(esi + 0x54) s< *(esi + 0x58))
        int32_t* ecx = *(esi + 0x24)
        *(esi + 0x40) = 0
        int32_t eax_4
        int32_t ecx_1
        eax_4, ecx_1 = (**ecx)()
        *(esi + 0x44) = eax_4
        sub_406b20(ecx_1, *(esi + 0x30) + 0x2e8)
        uint32_t eax_5
        eax_5.b = 1
        return eax_5
    
    *(esi + 0x54) = 0

enum MESSAGEBOX_RESULT eax_2 = sub_40bab0(*(esi + 0x30))

if (eax_2.b == 0)
    return eax_2

if (*(esi + 0x3c) != 0)
    eax_2 = sub_40d850()
    *(esi + 0x5c) = eax_2
    
    if (*(esi + 0x60) s< eax_2)
        *(esi + 0x60) = eax_2

eax_2.b = 1
return eax_2
