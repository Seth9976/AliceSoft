// 函数: sub_42d5e0
// 地址: 0x42d5e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg2

if (edi == 0 || arg3 == 0)
    return 

sub_42d570(arg1)
*(arg1 + 0x1c) = edi
(**edi)()
*(arg1 + 0x20) = arg3
(**arg3)()
int32_t* ebx_2 = *(arg1 + 0x20) + 0x28

if (sub_429120(*(arg1 + 0x1c), ebx_2) != 0)
    *(arg1 + 0x30) = 1
    struct IInterface::partsengine::CFlatSpriteView::VTable** eax_3 = operator new(0x34)
    
    if (eax_3 == 0)
        eax_3 = nullptr
    else
        sub_42e3a0(*(arg1 + 8), eax_3, *(arg1 + 0xc), *(arg1 + 0x10), *(arg1 + 0x14))
    
    int32_t* edx_4 = *(arg1 + 0x1c)
    *(arg1 + 0x24) = eax_3
    sub_42e610(eax_3, ebx_2, edx_4, nullptr, 3)
    return 

if (sub_429360(*(arg1 + 0x1c), ebx_2) != 0)
    void* eax_6 = *(arg1 + 0x1c)
    *(arg1 + 0x30) = 1
    arg2 = sub_429780(eax_6, ebx_2)
    
    if (arg2 != 0)
        struct IInterface::partsengine::CFlatSpriteView::VTable** eax_7 = operator new(0x34)
        
        if (eax_7 == 0)
            eax_7 = nullptr
        else
            sub_42e3a0(*(arg1 + 8), eax_7, *(arg1 + 0xc), *(arg1 + 0x10), *(arg1 + 0x14))
        
        *(arg1 + 0x24) = eax_7
        sub_42e610(eax_7, &arg2[2], *(arg1 + 0x1c), arg2[9], arg2[0xa])
    
    return 

if (sub_4292a0(*(arg1 + 0x1c), ebx_2) != 0)
    *(arg1 + 0x31) = 1
    struct IInterface::partsengine::CFlatLayerView::VTable** eax_10 = operator new(0x60)
    
    if (eax_10 == 0)
        eax_10 = nullptr
    else
        sub_42fa10(*(arg1 + 8), eax_10, *(arg1 + 0xc), *(arg1 + 0x10), *(arg1 + 0x14), 
            *(arg1 + 0x18))
    
    void* edx_11 = *(arg1 + 0x1c)
    *(arg1 + 0x28) = eax_10
    int32_t* eax_11 = sub_4296a0(edx_11, ebx_2)
    sub_42fe90(*(arg1 + 0x28), *(arg1 + 0x1c), eax_11)
    return 

if (sub_429420(*(arg1 + 0x1c), ebx_2).b == 0)
    return 

*(arg1 + 0x32) = 1
struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable** eax_14 =
    operator new(0x54)

if (eax_14 == 0)
    eax_14 = nullptr
else
    sub_42a8a0(*(arg1 + 8), eax_14, *(arg1 + 0xc), *(arg1 + 0x10), *(arg1 + 0x14), *(arg1 + 0x18))

*(arg1 + 0x2c) = eax_14
int32_t* eax_16 = sub_429860(*(arg1 + 0x1c), ebx_2)
sub_42ac00(*(arg1 + 0x2c), *(arg1 + 0x1c), eax_16)
