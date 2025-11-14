// 函数: sub_413db0
// 地址: 0x413db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_4 = arg1
int32_t* ecx = *(arg3 + 0x28)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg3 + 0x28) = 0

void* ecx_1 = *arg2
int32_t edx_2 = arg2[1]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = ecx_1 + 1

if (eax_2 u> edx_2)
    eax_2.b = 0
    return eax_2

ecx_1.b = *ecx_1 == 1
*arg2 = eax_2

if (&eax_2[1] u<= edx_2)
    *(arg3 + 0x10) = ((zx.d(*(eax_2 + 3)) << 8 | zx.d(*(eax_2 + 2))) << 8 | zx.d(*(eax_2 + 1))) << 8
        | zx.d(*eax_2)
    *arg2 += 4
    
    if (ecx_1.b == 0)
        uint32_t eax_3
        eax_3.b = 1
        return eax_3
    
    var_4 = 0
    int32_t edx_10
    eax_2, edx_10 = sub_5546f0(arg2, &var_4)
    
    if (eax_2.b != 0)
        eax_2 = sub_4135c0(var_4, edx_10, arg3)
        
        if (eax_2 != 0)
            return (*eax_2)->vFunc_14(arg2) != 0

eax_2.b = 0
return eax_2
