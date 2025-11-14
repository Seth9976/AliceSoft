// 函数: sub_692000
// 地址: 0x692000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 0x20)

if (ecx == 0 || *(arg1 + 0x24) == 0)
    return 

struct guiengine::CGUIModel::guiengine::CGUIVScrollbarModel::VTable** eax_1 = sub_414910(ecx)
struct guiengine::CGUIModel::guiengine::CGUIHScrollbarModel::VTable** eax_2 =
    sub_4149d0(*(arg1 + 0x24))
int32_t edx_1 = eax_2[0xb]
void* edi_1 = *(arg1 + 0x18)
int32_t ecx_2 = eax_1[0xa]
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_4 = sub_414e30(edi_1)
int32_t* ecx_3 = *(edi_1 + 0x38)

if (ecx_3 != 0 && eax_4[2] == 0)
    eax_4[8] = ecx_3
    eax_4[2] = (**ecx_3)(1)

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable* edx_3 = *eax_4
eax_4[3] = *(edi_1 + 0x30)
void* (__fastcall* const vFunc_9)(void* arg1) = edx_3->vFunc_9
eax_4[4] = edi_1
int32_t eax_8 = vFunc_9()
int32_t eax_10 = (*eax_4)->vFunc_10()
void* eax_11 = sub_5f7370(*data_797da0, eax_4[2]->vFunc_1)
void* const ebx_1

if (eax_11 != 0)
    void* const eax_15
    
    if ((*(**(*(eax_11 + 0xb4) + 4) + 0x34))() != 0)
        eax_15 = (*(**(*(eax_11 + 0xb4) + 4) + 0x4c))()
    else
        eax_15 = nullptr
    
    ebx_1 = eax_15
else
    ebx_1 = nullptr

void* eax_17 = sub_5f7370(*data_797da0, eax_4[2]->vFunc_1)
void* var_24_1

if (eax_17 != 0)
    void* eax_21
    
    if ((*(**(*(eax_17 + 0xb4) + 4) + 0x34))() != 0)
        eax_21 = (*(**(*(eax_17 + 0xb4) + 4) + 0x50))()
    else
        eax_21 = nullptr
    
    var_24_1 = eax_21
else
    var_24_1 = eax_17

void* eax_24 = var_24_1 + eax_10
void* edi_5 = *(arg1 + 0x10)
float* ebx_2 = ebx_1 + eax_8
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_26 = sub_414e30(edi_5)
int32_t* ecx_16 = *(edi_5 + 0x38)

if (ecx_16 != 0 && eax_26[2] == 0)
    eax_26[8] = ecx_16
    eax_26[2] = (**ecx_16)(1)

void* (__fastcall* const vFunc_9_1)(void* arg1) = (*eax_26)->vFunc_9
eax_26[3] = *(edi_5 + 0x30)
eax_26[4] = edi_5
int32_t ebx_4 = vFunc_9_1() + *(arg1 + 0x48)
void* ebp_2 = (*eax_26)->vFunc_10() + *(arg1 + 0x48)
void* eax_33 = sub_5f7370(*data_797da0, eax_26[2]->vFunc_1)

if (eax_33 != 0)
    if ((*(**(*(eax_33 + 0xb4) + 4) + 0x34))() != 0)
        eax_33 = (*(**(*(eax_33 + 0xb4) + 4) + 0x4c))()
    else
        eax_33 = nullptr

int32_t edx_17 = *(arg1 + 0x48)
void* eax_40 = sub_5f7370(*data_797da0, eax_26[2]->vFunc_1)

if (eax_40 != 0)
    if ((*(**(*(eax_40 + 0xb4) + 4) + 0x34))() != 0)
        eax_40 = (*(**(*(eax_40 + 0xb4) + 4) + 0x50))()
    else
        eax_40 = nullptr

void* ecx_32 = eax_33 - edx_17 * 2 - ecx_2 + ebx_4
void* esi_6 = ebp_2 + eax_40 - *(arg1 + 0x48) * 2 - edx_1
arg1.b = eax_10 s< ebp_2
int32_t eax_48
int32_t edx_23
edx_23:eax_48 = sx.q(var_24_1)
int32_t ecx_36 = (eax_48 - edx_23) s>> 1

if (var_24_1 == 0 || ecx_36 == 0)
    return 

if (eax_8 s< ebx_4)
    int32_t eax_51
    int32_t edx_24
    edx_24:eax_51 = sx.q(ebx_4 - eax_8)
    int32_t ebx_6
    ebx_6.b = mods.dp.d(edx_24:eax_51, ecx_36) != 0
    int32_t var_3c_1 = eax_2[0x10] - ebx_6 - divs.dp.d(edx_24:eax_51, ecx_36)
    sub_6856c0(eax_2)
else if (ecx_32 s< ebx_2)
    int32_t eax_54
    int32_t edx_30
    edx_30:eax_54 = sx.q(ebx_2 - ecx_32)
    int32_t ebx_7
    ebx_7.b = mods.dp.d(edx_30:eax_54, ecx_36) != 0
    int32_t var_3c_2 = ebx_7 + eax_2[0x10] + divs.dp.d(edx_30:eax_54, ecx_36)
    sub_6856c0(eax_2)

if (arg1.b != 0)
    int32_t eax_57
    int32_t edx_32
    edx_32:eax_57 = sx.q(ebp_2 - eax_10)
    int32_t ebx_10
    ebx_10.b = mods.dp.d(edx_32:eax_57, var_24_1) != 0
    arg1 = eax_1[0x10] - ebx_10 - divs.dp.d(edx_32:eax_57, var_24_1)
    return sub_6856c0(eax_1) __tailcall

if (esi_6 s>= eax_24)
    return 

int32_t eax_62
int32_t edx_38
edx_38:eax_62 = sx.q(eax_24 - esi_6)
int32_t ebx_11
ebx_11.b = mods.dp.d(edx_38:eax_62, var_24_1) != 0
int32_t var_3c_3 = ebx_11 + eax_1[0x10] + divs.dp.d(edx_38:eax_62, var_24_1)
sub_6856c0(eax_1)
