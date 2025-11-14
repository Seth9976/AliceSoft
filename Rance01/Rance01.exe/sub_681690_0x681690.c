// 函数: sub_681690
// 地址: 0x681690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = sub_418bd0(data_797ddc + 0xa8, arg1)

if (result == 0)
    result.b = 0
    return result

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_1 = sub_414e30(result)
int32_t* ecx = result[0xe]

if (ecx != 0 && eax_1[2] == 0)
    eax_1[8] = ecx
    eax_1[2] = (**ecx)(1)

eax_1[3] = result[0xc]
eax_1[4] = result
return sub_6986d0(eax_1[2]->vFunc_1, arg2, arg3)
