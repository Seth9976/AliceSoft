// 函数: sub_5f68a0
// 地址: 0x5f68a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_1
struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** ecx_1
eax_1, ecx_1 = sub_5f7370(*data_797da0, arg2)

if (eax_1 != 0)
    eax_1 = sub_5f3610(ecx_1, eax_1, arg5)
    
    if (eax_1 != 0)
        if (sub_405d70(arg3, eax_1 + 0x10).b == 0 || *(eax_1 + 0x2c) != 1)
            sub_401180(eax_1 + 0x10, 0xffffffff, arg3, 0)
            *(eax_1 + 0x2c) = 1
            sub_4b55f0(eax_1 + 0x30, arg4)
            *(eax_1 + 0x350) = 1
        
        void* eax_3
        eax_3.b = 1
        return eax_3

eax_1.b = 0
return eax_1
