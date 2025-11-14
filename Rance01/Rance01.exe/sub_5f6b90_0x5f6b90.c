// 函数: sub_5f6b90
// 地址: 0x5f6b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = arg1
void* eax_1
struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ecx_1
eax_1, ecx_1 = sub_5f7370(*data_797da0, arg2)

if (eax_1 != 0)
    eax_1 = sub_5f3910(ecx_1, eax_1, arg3)
    
    if (eax_1 != 0)
        int32_t eax_2 = *(eax_1 + 0x40)
        int32_t esi_2 = *(eax_2 + 0x70)
        *(eax_2 + 0xf4) = 1
        
        if (esi_2 != 0)
            int32_t* edi_2 = *(esi_2 + 0x1c)
            int32_t* ebx_1 = *(esi_2 + 0x20)
            
            if (edi_2 != 0 && ebx_1 != 0)
                sub_42fd90(esi_2)
                *(esi_2 + 0x1c) = edi_2
                (**edi_2)()
                *(esi_2 + 0x20) = ebx_1
                (**ebx_1)()
                sub_42fee0(esi_2)
        
        eax_2.b = 1
        return eax_2

eax_1.b = 0
return eax_1
