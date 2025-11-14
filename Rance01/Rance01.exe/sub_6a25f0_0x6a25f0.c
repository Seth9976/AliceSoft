// 函数: sub_6a25f0
// 地址: 0x6a25f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = sub_418bd0(data_797ddc + 0xa8, arg1)

if (result == 0)
    result.b = 0
    return result

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_3 = sub_414e30(result)
int32_t* ecx = result[0xe]

if (ecx != 0 && eax_3[2] == 0)
    eax_3[8] = ecx
    eax_3[2] = (**ecx)(1)

int32_t ecx_1 = result[0xc]
eax_3[3] = ecx_1
eax_3[4] = result
return sub_5f6b30(ecx_1, eax_3[2]->vFunc_1, arg2)
