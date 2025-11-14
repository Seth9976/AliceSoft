// 函数: sub_688aa0
// 地址: 0x688aa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 0x10)
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

if (eax_5 != 0 && (*(**(*(eax_5 + 0xb4) + 4) + 0x34))() != 0)
    jump(*(**(*(eax_5 + 0xb4) + 4) + 0x50))

return 0
