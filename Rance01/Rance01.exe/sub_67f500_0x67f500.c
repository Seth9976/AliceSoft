// 函数: sub_67f500
// 地址: 0x67f500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = data_797ddc
int32_t* eax_1 = sub_418bd0(esi + 0xa8, arg1)

if (eax_1 != 0)
    struct guiengine::CGUIModel::guiengine::CGUIListBoxModel::VTable** eax_2 = sub_414b50(eax_1)
    
    if (eax_2 != 0)
        return &eax_2[0x28]

return esi + 0xe0
