// 函数: sub_5d1590
// 地址: 0x5d1590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = data_797d8c

if ((data_797fc4 & 1) == 0)
    data_797fc4.d |= 1
    data_797fa4 = &common::CStringWrapper::`vftable'{for `IString'}
    data_797fbc = 0xf
    data_797fb8 = 0
    data_797fa8 = 0
    _atexit(sub_729370)

if (*esi != 0)
label_5d1606:
    void** eax_5 = *esi + 4
    
    if (eax_5[5] u>= 0x10)
        eax_5 = *eax_5
    
    (*(data_797fa4 + 4))(eax_5)
else
    int32_t* eax_1 = sub_597300(0x737314)
    
    if (eax_1 != 0)
        int32_t eax_3 = (**eax_1)(0x737324)
        *esi = eax_3
        
        if (eax_3 != 0)
            goto label_5d1606

return &data_797fa4
