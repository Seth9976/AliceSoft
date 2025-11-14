// 函数: sub_682540
// 地址: 0x682540
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
        result = sub_5f3790(result, arg6)
        
        if (result != 0)
            if (arg4 s>= 0 && arg5 s>= 0 && arg2 s>= 0 && arg3 s>= 0)
                result[0xe] = arg2
                result[0xf] = arg3
                result[0x10] = arg4
                result[0x11] = arg5
                result[0x12].b = 1
            
            result.b = 1
            return result

result.b = 0
return result
