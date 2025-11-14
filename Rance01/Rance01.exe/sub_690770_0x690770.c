// 函数: sub_690770
// 地址: 0x690770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg1
int32_t ebp = 0
arg1 = nullptr
int32_t var_14 = 0

if (*(ebx + 0x20) == 0)
    arg1 = sub_414910(nullptr)[0xa]

if (*(ebx + 0x24) == 0)
    var_14 = sub_4149d0(nullptr)[0xb]

void* edi = *(ebx + 0x18)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_5 = sub_414e30(edi)
int32_t* ecx_2 = *(edi + 0x38)

if (ecx_2 != 0 && eax_5[2] == 0)
    eax_5[8] = ecx_2
    eax_5[2] = (**ecx_2)(1)

void* (__fastcall* const vFunc_9)(void* arg1) = (*eax_5)->vFunc_9
eax_5[3] = *(edi + 0x30)
eax_5[4] = edi
int32_t eax_8 = vFunc_9()
int32_t eax_10 = (*eax_5)->vFunc_10()
void* eax_11 = sub_5f7370(*data_797da0, eax_5[2]->vFunc_1)

if (eax_11 != 0)
    int32_t eax_15
    
    if ((*(**(*(eax_11 + 0xb4) + 4) + 0x34))() != 0)
        eax_15 = (*(**(*(eax_11 + 0xb4) + 4) + 0x4c))()
    else
        eax_15 = 0
    
    ebp = eax_15

void* eax_17 = sub_5f7370(*data_797da0, eax_5[2]->vFunc_1)

if (eax_17 != 0)
    if ((*(**(*(eax_17 + 0xb4) + 4) + 0x34))() != 0)
        eax_17 = (*(**(*(eax_17 + 0xb4) + 4) + 0x50))()
    else
        eax_17 = nullptr

void* edi_4 = *(ebx + 0x10)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_24 = sub_414e30(edi_4)
int32_t* ecx_16 = *(edi_4 + 0x38)

if (ecx_16 != 0 && eax_24[2] == 0)
    eax_24[8] = ecx_16
    eax_24[2] = (**ecx_16)(1)

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable* edx_11 = *eax_24
eax_24[3] = *(edi_4 + 0x30)
void* (__fastcall* const vFunc_9_1)(void* arg1) = edx_11->vFunc_9
eax_24[4] = edi_4
int32_t ebp_3 = vFunc_9_1() + *(ebx + 0x48)
int32_t eax_31 = (*eax_24)->vFunc_10() + *(ebx + 0x48)
void* eax_32 = sub_5f7370(*data_797da0, eax_24[2]->vFunc_1)

if (eax_32 != 0)
    if ((*(**(*(eax_32 + 0xb4) + 4) + 0x34))() != 0)
        eax_32 = (*(**(*(eax_32 + 0xb4) + 4) + 0x4c))()
    else
        eax_32 = nullptr

void* eax_38 = eax_32 - *(ebx + 0x48) * 2 - arg1
void* result = sub_5f7370(*data_797da0, eax_24[2]->vFunc_1)

if (result != 0)
    if ((*(**(*(result + 0xb4) + 4) + 0x34))() != 0)
        result = (*(**(*(result + 0xb4) + 4) + 0x50))()
    else
        result = nullptr

if (eax_38 + ebp_3 s>= eax_8 && ebp + eax_8 s>= ebp_3
        && result - *(ebx + 0x48) * 2 - var_14 + eax_31 s>= eax_10 && eax_17 + eax_10 s>= eax_31)
    if (arg3 != 0 && arg2 s% 0x3e8 s< 0x1f4)
        return 1
    
    return 0

result.b = 0
return result
