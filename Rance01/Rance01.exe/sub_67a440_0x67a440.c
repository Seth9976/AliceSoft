// 函数: sub_67a440
// 地址: 0x67a440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x28) == 0)
    return 

void* edi_1 = *(arg1 + 0x14)

if (arg2 != *(edi_1 + 8))
    return 

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(edi_1)
int32_t* ecx = *(edi_1 + 0x38)

if (ecx != 0 && eax_2[2] == 0)
    eax_2[8] = ecx
    eax_2[2] = (**ecx)(1)

void* (__fastcall* const vFunc_9)(void* arg1) = (*eax_2)->vFunc_9
eax_2[3] = *(edi_1 + 0x30)
eax_2[4] = edi_1
int32_t eax_5 = vFunc_9()
int32_t eax_7 = (*eax_2)->vFunc_10()
void* ecx_4 = *(arg1 + 0x28)

if (*(ecx_4 + 0x10) != eax_5 || *(ecx_4 + 0x14) != eax_7)
    *(ecx_4 + 0x10) = eax_5
    *(ecx_4 + 0x14) = eax_7
    *(ecx_4 + 0x14c) = 1

sub_41d6b0(arg1 + 0x34, arg3, arg4)
