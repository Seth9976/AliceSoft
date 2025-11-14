// 函数: sub_414e30
// 地址: 0x414e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x28)

if (ecx != 0 && (*(*ecx + 8))() == 0xb)
    return *(arg1 + 0x28)

int32_t* ecx_1 = *(arg1 + 0x28)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x28) = 0

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** result_1 = operator new(0x30)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** result

if (result_1 == 0)
    result = nullptr
else
    int32_t ecx_2 = *(arg1 + 8)
    *result_1 = &guiengine::CGUIPartsModel::`vftable'{for `guiengine::CGUIModel'}
    result_1[1] = 1
    result_1[2] = 0
    result_1[3] = 0
    result_1[4] = 0
    result_1[5] = ecx_2
    result_1[6] = 0xffffffff
    result_1[7].b = 0
    result_1[8] = 0
    result_1[9] = 0
    result_1[0xa] = 0
    result_1[0xb] = 0
    result = result_1

*(arg1 + 0x28) = result

if (result != 0)
    (*result)->vFunc_4(*(arg1 + 0x10))

return result
