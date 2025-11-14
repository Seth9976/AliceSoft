// 函数: sub_688510
// 地址: 0x688510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2

if (ebx == 0)
    return 

void* esi_1 = *(arg1 + 0x10)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_1 = sub_414e30(esi_1)
int32_t* ecx_1 = *(esi_1 + 0x38)

if (ecx_1 != 0 && eax_1[2] == 0)
    eax_1[8] = ecx_1
    eax_1[2] = (**ecx_1)(1)

void* edx_2 = eax_1[2]
int32_t* eax_4 = data_797da0
eax_1[3] = *(esi_1 + 0x30)
eax_1[4] = esi_1
void* eax_5 = sub_5f7370(*eax_4, *(edx_2 + 4))

if (eax_5 != 0)
    *(*(eax_5 + 0xc) + 0x4c) = 1

int32_t* eax_7 = (*(*ebx + 0x28))()
int32_t eax_9 = (*(*ebx + 0x24))()
void* eax_10 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (eax_10 != 0)
    void* eax_11 = *(eax_10 + 0xc)
    
    if (*(eax_11 + 0x14) != eax_9 || *(eax_11 + 0x18) != eax_7)
        *(eax_11 + 0x14) = eax_9
        *(eax_11 + 0x18) = eax_7
        *(eax_11 + 0xc) = 1

int32_t eax_13 = (*(*ebx + 0x2c))()
void* eax_15 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (eax_15 != 0)
    void* eax_16 = *(eax_15 + 0xc)
    
    if (*(eax_16 + 0x1c) != eax_13)
        *(eax_16 + 0x1c) = eax_13
        *(eax_16 + 0xc) = 1

sub_41b810(eax_1, ebx[9])
arg2.b = ebx[0xa].b
void* eax_19 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (eax_19 != 0)
    void* eax_20 = *(eax_19 + 0xc)
    char ecx_15 = arg2.b
    
    if (*(eax_20 + 0x24) != ecx_15)
        *(eax_20 + 0x24) = ecx_15
        *(eax_20 + 0xc) = 1

ebx.b = *(ebx + 0x29)
arg1 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (arg1 != 0)
    *(*(arg1 + 0xc) + 0x4e) = ebx.b
