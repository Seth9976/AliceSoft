// 函数: sub_4c95b0
// 地址: 0x4c95b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x274) == *(arg1 + 0x278))
    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** esi_1 = *(arg2 + 0x64)
    
    if (esi_1 != 0)
        sub_4c9360(esi_1)
        *(arg2 + 0x64) = 0
    
    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** result
    result.b = 1
    return result

if (*(arg2 + 0x64) == 0)
    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** eax_1 = operator new(0x10)
    
    if (eax_1 == 0)
        eax_1 = nullptr
    else
        *eax_1 = &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}
        eax_1[1] = 0
        eax_1[2] = 0
        eax_1[3].w = 0x101
    
    *(arg2 + 0x64) = eax_1

int32_t edx = 1
int32_t eax_4 = (*(arg1 + 0xbc) - *(arg1 + 0xb8)) s>> 2
int32_t ecx = 1

if (eax_4 s> 0)
    edx = **(arg1 + 0xb8)

if (eax_4 s> 1)
    ecx = *(*(arg1 + 0xb8) + 4)

ecx.b = ecx != 0
uint32_t var_c = zx.d(ecx.b)
edx.b = edx != 0
return sub_4cc120(arg3, *(arg2 + 0x64), arg1 + 0x274, arg1.b + 0x78, edx.b) != 0
