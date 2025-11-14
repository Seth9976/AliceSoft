// 函数: sub_67f420
// 地址: 0x67f420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = data_797ddc
int32_t* eax_1 = sub_418bd0(ebx + 0xa8, arg1)

if (eax_1 != 0)
    struct guiengine::CGUIModel::guiengine::CGUIListBoxModel::VTable** eax_2 = sub_414b50(eax_1)
    
    if (eax_2 != 0)
        if ((eax_2[0x35] - eax_2[0x34]) s/ 0x1c s> arg2 && arg2 s>= 0)
            return eax_2[0x34] + arg2 * 0x1c
        
        return &eax_2[4]

return ebx + 0x110
