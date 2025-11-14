// 函数: sub_568430
// 地址: 0x568430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1

if (*(edi + 0x2a1) != 0)
    edi[0xa8].b = 0
    *(edi + 0x1d5) = 1
    sub_56d520(&edi[0x58])
    void* esi_2 = edi[0x6f]
    int32_t ebx
    
    if (esi_2 != 0)
        ebx.b = *(esi_2 + 0x18) != 0
        
        if (ebx.b != 0)
            sub_58a120(esi_2)
    else
        ebx.b = 0
    
    if (sub_5682f0(edi).b == 0)
        arg1.b = 0
        return arg1
    
    *(edi + 0x2a1) = 0
    sub_5684e0(edi)
    sub_567f90(edi, 0)
    
    if (ebx.b != 0)
        arg1 = edi[0x6f]
        
        if (arg1 != 0 && sub_58a1b0(arg1).b == 0)
            arg1.b = 0
            return arg1
    
    *(edi + 0x1d5) = 0
    edi[0xa8].b = 1
    *(edi + 0xf1) = 0

arg1.b = 1
return arg1
