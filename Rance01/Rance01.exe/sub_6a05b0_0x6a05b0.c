// 函数: sub_6a05b0
// 地址: 0x6a05b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_38
int32_t* eax_2 = sub_5e0090(arg4, arg5, arg6, arg8, &var_38, arg2, arg3, 
    fconvert.s(fconvert.t(arg7)), fconvert.s(fconvert.t(arg11)), arg9, arg10)
struct guiengine::CGUIModel::guiengine::CGUIListBoxModel::VTable** result =
    sub_418bd0(data_797ddc + 0xa8, arg1)

if (result != 0)
    result = sub_414b50(result)
    struct guiengine::CGUIModel::guiengine::CGUIListBoxModel::VTable** result_1 = result
    
    if (result_1 != 0)
        result = sub_5e0140(eax_2, &result_1[0x28])
        
        if (result.b == 0)
            __builtin_memcpy(&result_1[0x28], eax_2, 0x30)
            result_1[0x39].b = 1

return result
