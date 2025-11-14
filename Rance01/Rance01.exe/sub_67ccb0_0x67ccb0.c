// 函数: sub_67ccb0
// 地址: 0x67ccb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 0x14)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_1 = sub_414e30(edi)
int32_t* ecx = *(edi + 0x38)

if (ecx != 0 && eax_1[2] == 0)
    eax_1[8] = ecx
    eax_1[2] = (**ecx)(1)

void* ecx_1 = eax_1[2]
int32_t* edx_2 = data_797da0
eax_1[3] = *(edi + 0x30)
eax_1[4] = edi
void* eax_5 = sub_5f7370(*edx_2, *(ecx_1 + 4))

if (eax_5 != 0 && *(*(eax_5 + 0xc) + 0x24) != 0)
    sub_4136b0(*(arg1 + 0x14), arg2)

void* edi_2 = *(arg1 + 0x18)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_8 = sub_414e30(edi_2)
int32_t* ecx_4 = *(edi_2 + 0x38)

if (ecx_4 != 0 && eax_8[2] == 0)
    eax_8[8] = ecx_4
    eax_8[2] = (**ecx_4)(1)

void* edx_4 = eax_8[2]
int32_t* eax_11 = data_797da0
eax_8[3] = *(edi_2 + 0x30)
eax_8[4] = edi_2
void* result = sub_5f7370(*eax_11, *(edx_4 + 4))

if (result != 0 && *(*(result + 0xc) + 0x24) != 0)
    return sub_4136b0(*(arg1 + 0x18), arg2)

return result
