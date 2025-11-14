// 函数: sub_6834f0
// 地址: 0x6834f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* result = sub_418bd0(data_797ddc + 0xa8, arg1)

if (result != 0)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(result)
    int32_t* ecx = result[0xe]
    
    if (ecx != 0 && eax_2[2] == 0)
        eax_2[8] = ecx
        eax_2[2] = (**ecx)(1)
    
    int32_t* eax_5 = data_797da0
    eax_2[3] = result[0xc]
    eax_2[4] = result
    result = sub_5f7370(*eax_5, eax_2[2]->vFunc_1)
    
    if (result != 0)
        result.b = *(result[3] + 0x24)
        return result

result.b = 0
return result
