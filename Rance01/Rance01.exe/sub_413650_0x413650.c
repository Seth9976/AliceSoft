// 函数: sub_413650
// 地址: 0x413650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** result = sub_414e30(arg1)
int32_t* ecx = *(arg1 + 0x38)

if (ecx != 0 && result[2] == 0)
    result[8] = ecx
    result[2] = (**ecx)(1)

result[3] = *(arg1 + 0x30)
result[4] = arg1
return result
