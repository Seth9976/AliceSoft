// 函数: sub_6792c0
// 地址: 0x6792c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 0x18)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_1 = sub_414e30(edi)
int32_t* ecx = *(edi + 0x38)

if (ecx != 0 && eax_1[2] == 0)
    eax_1[8] = ecx
    eax_1[2] = (**ecx)(1)

void* ecx_1 = eax_1[2]
int32_t* edx_2 = data_797da0
eax_1[3] = *(edi + 0x30)
eax_1[4] = edi
void* result = sub_5f7370(*edx_2, *(ecx_1 + 4))

if (result != 0)
    result = *(result + 0xc)
    
    if (*(result + 0x24) != 0)
        return sub_4136b0(*(arg1 + 0x18), arg2)

return result
