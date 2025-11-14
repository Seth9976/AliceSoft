// 函数: sub_676e80
// 地址: 0x676e80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2

if (ebp == 0)
    return 

void* edi_1 = *(arg1 + 0x10)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_1 = sub_414e30(edi_1)
int32_t* ecx_1 = *(edi_1 + 0x38)

if (ecx_1 != 0 && eax_1[2] == 0)
    eax_1[8] = ecx_1
    eax_1[2] = (**ecx_1)(1)

void* edx_2 = eax_1[2]
int32_t* eax_4 = data_797da0
eax_1[3] = *(edi_1 + 0x30)
eax_1[4] = edi_1
void* eax_5 = sub_5f7370(*eax_4, *(edx_2 + 4))

if (eax_5 != 0)
    *(*(eax_5 + 0xc) + 0x4c) = 1

void* eax_7 = (*(*ebp + 0x28))()
int32_t eax_9 = (*(*ebp + 0x24))()
void* eax_10 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (eax_10 != 0)
    void* eax_11 = *(eax_10 + 0xc)
    
    if (*(eax_11 + 0x14) != eax_9 || *(eax_11 + 0x18) != eax_7)
        *(eax_11 + 0x14) = eax_9
        *(eax_11 + 0x18) = eax_7
        *(eax_11 + 0xc) = 1

int32_t eax_13 = (*(*ebp + 0x2c))()
void* eax_15 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (eax_15 != 0)
    void* eax_16 = *(eax_15 + 0xc)
    
    if (*(eax_16 + 0x1c) != eax_13)
        *(eax_16 + 0x1c) = eax_13
        *(eax_16 + 0xc) = 1

int32_t ebx_2
ebx_2.b = ebp[9].b
void* eax_18 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (eax_18 != 0)
    void* eax_19 = *(eax_18 + 0xc)
    
    if (*(eax_19 + 0x24) != ebx_2.b)
        *(eax_19 + 0x24) = ebx_2.b
        *(eax_19 + 0xc) = 1

ebx_2.b = *(ebp + 0x25)
void* eax_20 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (eax_20 != 0)
    *(*(eax_20 + 0xc) + 0x4e) = ebx_2.b

void* ecx_16 = ebp[0x19]
void* eax_23 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (eax_23 != 0)
    void* ecx_18 = *(*(eax_23 + 0xc) + 0x21c)
    
    if (*(ecx_18 + 8) != ecx_16)
        if (*(ecx_18 + 8) != ecx_16)
            *(ecx_18 + 8) = ecx_16
        
        int32_t* ecx_19 = *(eax_23 + 0x2c)
        
        if (ecx_19 != 0)
            (*(*ecx_19 + 4))()
            *(eax_23 + 0x2c) = 0
        
        if (ecx_16 != 0)
            int32_t* ecx_20 = *(eax_23 + 0x2c)
            
            if (ecx_20 != 0)
                (*(*ecx_20 + 4))()
                *(eax_23 + 0x2c) = 0
            
            *(eax_23 + 0x2c) = sub_5f9ae0(*(eax_23 + 0x28), ecx_16)

void* ecx_21 = ebp[0x1a]
void* eax_30 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (eax_30 != 0)
    void* ecx_23 = *(*(eax_30 + 0xc) + 0x21c)
    
    if (*(ecx_23 + 0xc) != ecx_21)
        if (*(ecx_23 + 0xc) != ecx_21)
            *(ecx_23 + 0xc) = ecx_21
        
        int32_t* ecx_24 = *(eax_30 + 0x30)
        
        if (ecx_24 != 0)
            (*(*ecx_24 + 4))()
            *(eax_30 + 0x30) = 0
        
        if (ecx_21 != 0)
            int32_t* ecx_25 = *(eax_30 + 0x30)
            
            if (ecx_25 != 0)
                (*(*ecx_25 + 4))()
                *(eax_30 + 0x30) = 0
            
            *(eax_30 + 0x30) = sub_5f9ae0(*(eax_30 + 0x28), ecx_21)

void* ebx_4
ebx_4.b = *(ebp + 0x27)
arg1 = sub_5f7370(*data_797da0, eax_1[2]->vFunc_1)

if (arg1 != 0)
    *(*(arg1 + 0xc) + 0x218) = ebx_4.b
