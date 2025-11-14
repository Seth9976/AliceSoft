// 函数: sub_561f90
// 地址: 0x561f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_4022d0(arg1, 0x74c174) == 0 && sub_4022d0(arg1, 0x74c184) == 0)
    if (sub_4022d0(arg1, 0x74c194) != 0)
        uint32_t eax_4 = zx.d(sub_4022d0(arg1, 0x757578))
        int32_t eax_5 = neg.d(eax_4)
        return sbb.d(eax_5, eax_5, eax_4 != 0) & data_797d3c
    
    if (sub_4022d0(arg1, 0x74c1a4) != 0)
        return sub_597920()
    
    if (sub_4022d0(arg1, 0x74c1b4) != 0)
        return sub_408840()
    
    if (sub_4022d0(arg1, 0x74c1c4) != 0)
        return sub_595d30(arg1)
    
    if (sub_4022d0(arg1, 0x74c1d4) == 0 && sub_4022d0(arg1, 0x74c1e4) == 0
            && sub_4022d0(arg1, 0x74c1f4) == 0 && sub_4022d0(arg1, 0x74c204) == 0
            && sub_4022d0(arg1, "-6eC") == 0)
        return 0
    
    return sub_59e250(arg1)

int32_t* edi = data_797d70

if (edi != 0)
    char eax_21 = sub_4022d0(arg1, 0x745ed8)
    char eax_24
    
    if (eax_21 == 0)
        eax_24 = sub_4022d0(arg1, 0x745ee8)
    
    if (eax_21 != 0 || eax_24 != 0)
        (**edi)()
        return data_797d70

return 0
