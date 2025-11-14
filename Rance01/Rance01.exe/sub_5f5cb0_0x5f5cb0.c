// 函数: sub_5f5cb0
// 地址: 0x5f5cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx = arg2

if (sub_434210(arg1, *(ebx + 0xc)) != 0 && sub_5ee210(arg1, ebx + 0x54) != 0
        && sub_5ec0e0(ebx + 0x64, arg1) != 0 && sub_5ec0e0(ebx + 0x74, arg1) != 0
        && sub_5ec0e0(ebx + 0x84, arg1) != 0 && sub_5ec0e0(ebx + 0x94, arg1) != 0
        && sub_5ee210(arg1, ebx + 0xa4) != 0 && sub_5546f0(arg1, ebx + 0x4c) != 0
        && sub_5546f0(arg1, ebx + 0x50) != 0 && sub_5546f0(arg1, &arg2) != 0)
    uint32_t ebp = arg2
    struct partsengine::CSprite::partsengine::CCGDetectionSprite::VTable** edi_1 = nullptr
    
    if (ebp s> 0)
        do
            uint32_t* eax_4
            
            if (sub_5546f0(arg1, &arg2).b == 0)
                eax_4.b = 0
                return eax_4
            
            eax_4 = sub_5f2f00(arg2, ebx, edi_1)
            
            if (eax_4 == 0)
                eax_4.b = 0
                return eax_4
            
            if ((*(*eax_4 + 0x68))(arg1).b == 0)
                eax_4.b = 0
                return eax_4
            
            edi_1 += 1
        while (edi_1 s< ebp)
    
    int32_t* ecx_10 = *(ebx + 0x2c)
    void* esi_1 = *(*(*(ebx + 0xc) + 0x21c) + 8)
    
    if (ecx_10 != 0)
        (*(*ecx_10 + 4))()
        *(ebx + 0x2c) = 0
    
    if (esi_1 != 0)
        *(ebx + 0x2c) = sub_5f9ae0(*(ebx + 0x28), esi_1)
    
    void* esi_2 = *(*(*(ebx + 0xc) + 0x21c) + 0xc)
    int32_t* ecx_12 = *(ebx + 0x30)
    
    if (ecx_12 != 0)
        (*(*ecx_12 + 4))()
        *(ebx + 0x30) = 0
    
    if (esi_2 != 0)
        *(ebx + 0x30) = sub_5f9ae0(*(ebx + 0x28), esi_2)
    
    *(ebx + 0x10) = 1
    void* eax_9
    eax_9.b = 1
    return eax_9

return 0
