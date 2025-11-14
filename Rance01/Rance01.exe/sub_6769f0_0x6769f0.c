// 函数: sub_6769f0
// 地址: 0x6769f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x10) == 0)
    return 

void* ebx_1 = *(arg1 + 0xc)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(ebx_1)
int32_t* ecx = *(ebx_1 + 0x38)

if (ecx != 0 && eax_2[2] == 0)
    eax_2[8] = ecx
    eax_2[2] = (**ecx)(1)

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable* edx_2 = *eax_2
eax_2[3] = *(ebx_1 + 0x30)
void* (__fastcall* const vFunc_9)(void* arg1) = edx_2->vFunc_9
eax_2[4] = ebx_1
int32_t eax_6 = vFunc_9()
void* ebx_2 = *(arg1 + 0xc)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_8 = sub_414e30(ebx_2)
int32_t* ecx_2 = *(ebx_2 + 0x38)

if (ecx_2 != 0 && eax_8[2] == 0)
    eax_8[8] = ecx_2
    eax_8[2] = (**ecx_2)(1)

void* (__fastcall* const vFunc_10)(void* arg1) = (*eax_8)->vFunc_10
eax_8[3] = *(ebx_2 + 0x30)
eax_8[4] = ebx_2
int32_t eax = vFunc_10()
void* ecx_5 = *(arg1 + 0x10)

if (*(ecx_5 + 0x10) != eax_6 || *(ecx_5 + 0x14) != eax)
    *(ecx_5 + 0x10) = eax_6
    *(ecx_5 + 0x14) = eax
    *(ecx_5 + 0x124) = 1

for (int32_t* i = *(arg1 + 0x18); i != *(arg1 + 0x1c); i = &i[1])
    (*(**i + 0x1c))(*(arg1 + 0x28), arg2, arg3)
