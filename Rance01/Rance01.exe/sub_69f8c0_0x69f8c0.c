// 函数: sub_69f8c0
// 地址: 0x69f8c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_38
int32_t* eax_2 = sub_5e0090(arg4, arg5, arg6, arg8, &var_38, arg2, arg3, 
    fconvert.s(fconvert.t(arg7)), fconvert.s(fconvert.t(arg11)), arg9, arg10)
struct guiengine::CGUIModel::guiengine::CGUITextBoxModel::VTable** result =
    sub_418bd0(data_797ddc + 0xa8, arg1)

if (result != 0)
    result = sub_414a90(result)
    struct guiengine::CGUIModel::guiengine::CGUITextBoxModel::VTable** result_1 = result
    
    if (result_1 != 0)
        result = sub_5e0140(eax_2, &result_1[0xa])
        
        if (result.b == 0)
            __builtin_memcpy(&result_1[0xa], eax_2, 0x30)
            result_1[0x28].b = 1

return result
