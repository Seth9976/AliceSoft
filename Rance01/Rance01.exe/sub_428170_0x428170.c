// 函数: sub_428170
// 地址: 0x428170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct _EXCEPTION_REGISTRATION_RECORD** eax_2 = *(arg1 + 0x1c)

if (eax_2 != 0xffffffff)
    if (sub_522830(eax_2) == 0)
        sub_40da60(0x756b18)
        void* eax_1
        eax_1.b = 0
        return eax_1
    
    if (sub_4afe60(*(arg1 + 0x1c)).b == 0)
        sub_40da60(0x756b54)
        void* eax_3
        eax_3.b = 0
        return eax_3
    
    *(arg1 + 0x1c) = 0xffffffff

int32_t edi_2 = *(arg1 + 8)

if (edi_2 != 0xffffffff)
    sub_409390(edi_2)
    *(arg1 + 8) = 0xffffffff

eax_2.b = 1
return eax_2
