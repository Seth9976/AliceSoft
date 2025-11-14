// 函数: sub_681f80
// 地址: 0x681f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = sub_418bd0(data_797ddc + 0xa8, arg1)

if (result != 0)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_1 = sub_414e30(result)
    int32_t* ecx = result[0xe]
    
    if (ecx != 0 && eax_1[2] == 0)
        eax_1[8] = ecx
        eax_1[2] = (**ecx)(1)
    
    int32_t* eax_4 = data_797da0
    eax_1[3] = result[0xc]
    eax_1[4] = result
    result = sub_5f7370(*eax_4, eax_1[2]->vFunc_1)
    
    if (result != 0)
        result = sub_5f3790(result, arg9)
        
        if (result != 0)
            return sub_5e3740(result, arg2, arg3, arg4, arg5, arg6, arg7, arg8)

result.b = 0
return result
