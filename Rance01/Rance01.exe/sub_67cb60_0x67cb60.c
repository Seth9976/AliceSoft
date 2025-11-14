// 函数: sub_67cb60
// 地址: 0x67cb60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x2c)

if (result == 0)
    return result

void* eax_1 = sub_699900(result + 0x88)

if (eax_1 == 0)
    eax_1 = *(*(arg1 + 0x2c) + 0x20)

void* esi_1 = *(arg1 + 0x18)
void* var_4 = eax_1
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_4 = sub_414e30(esi_1)
int32_t* ecx = *(esi_1 + 0x38)

if (ecx != 0 && eax_4[2] == 0)
    eax_4[8] = ecx
    eax_4[2] = (**ecx)(1)

void* edx_2 = eax_4[2]
int32_t* eax_7 = data_797da0
eax_4[3] = *(esi_1 + 0x30)
eax_4[4] = esi_1
void* eax_8 = sub_5f7370(*eax_7, *(edx_2 + 4))

if (eax_8 != 0)
    if ((*(**(*(eax_8 + 0xb4) + 4) + 0x34))() != 0)
        eax_8 = (*(**(*(eax_8 + 0xb4) + 4) + 0x50))()
    else
        eax_8 = nullptr

void* var_8 = eax_8
void** eax_12 = &var_8

if (eax_1 s>= eax_8)
    eax_12 = &var_4

return *eax_12
