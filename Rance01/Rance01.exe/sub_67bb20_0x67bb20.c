// 函数: sub_67bb20
// 地址: 0x67bb20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** var_4 = nullptr
int32_t var_8 = 0
sub_67c770(&var_4, &var_8, &arg1[0xd], &arg1[0x4c])
void* edi_1 = *(arg2 + 0x14)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(edi_1)
int32_t* ecx_3 = *(edi_1 + 0x38)
var_4 = eax_2

if (ecx_3 != 0 && eax_2[2] == 0)
    eax_2[8] = ecx_3
    eax_2[2] = (**ecx_3)(1)

eax_2[3] = *(edi_1 + 0x30)
eax_2[4] = edi_1
int32_t eax_7 = (*(*arg1 + 0x28))()
int32_t eax_9
int32_t edx_5
edx_5:eax_9 = sx.q(var_8)
int32_t ebx_2 = eax_7 + ((eax_9 - edx_5) s>> 1)
int32_t eax_13 = (*(*arg1 + 0x24))()
int32_t vFunc_1 = eax_2[2]->vFunc_1
void* ecx_7 = *data_797da0
var_8 = eax_13
void* eax_14 = sub_5f7370(ecx_7, vFunc_1)

if (eax_14 != 0)
    void* eax_15 = *(eax_14 + 0xc)
    int32_t ecx_8 = var_8
    
    if (*(eax_15 + 0x14) != ecx_8 || *(eax_15 + 0x18) != ebx_2)
        *(eax_15 + 0x14) = ecx_8
        *(eax_15 + 0x18) = ebx_2
        *(eax_15 + 0xc) = 1

int32_t eax_17 = (*(*arg1 + 0x2c))()
void* eax_19 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_19 != 0)
    void* eax_20 = *(eax_19 + 0xc)
    
    if (*(eax_20 + 0x1c) != eax_17)
        *(eax_20 + 0x1c) = eax_17
        *(eax_20 + 0xc) = 1

int32_t ebx_3
ebx_3.b = arg1[9].b
void* eax_22 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_22 != 0)
    void* eax_23 = *(eax_22 + 0xc)
    
    if (*(eax_23 + 0x24) != ebx_3.b)
        *(eax_23 + 0x24) = ebx_3.b
        *(eax_23 + 0xc) = 1

ebx_3.b = *(arg1 + 0x25)
void* eax_24 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_24 != 0)
    *(*(eax_24 + 0xc) + 0x4e) = ebx_3.b

void* eax_26 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_26 != 0)
    *(*(eax_26 + 0xc) + 0x4c) = 1

void* eax_28 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_28 != 0)
    void* eax_29 = *(eax_28 + 0xc)
    
    if (*(eax_29 + 0x48) != 4)
        *(eax_29 + 0x48) = 4
        *(eax_29 + 0xc) = 1

int32_t eax_31 = sub_699840(&arg1[0x22])
int32_t edi_7

if (eax_31 != 0)
    edi_7 = eax_31
else
    edi_7 = arg1[7]

void* ebp_2 = *(arg2 + 0x18)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_33 = sub_414e30(ebp_2)
int32_t* ecx_20 = *(ebp_2 + 0x38)

if (ecx_20 != 0 && eax_33[2] == 0)
    eax_33[8] = ecx_20
    eax_33[2] = (**ecx_20)(1)

eax_33[3] = *(ebp_2 + 0x30)
eax_33[4] = ebp_2
int32_t eax_37 = (*(*arg1 + 0x28))()
void* edx_15 = *arg1
var_8 = eax_37
int32_t ebp_5 = (*(edx_15 + 0x24))() + *(arg2 + 0x10) + edi_7
void* eax_41 = sub_5f7370(*data_797da0, eax_33[2]->vFunc_1)

if (eax_41 != 0)
    void* eax_42 = *(eax_41 + 0xc)
    
    if (*(eax_42 + 0x14) != ebp_5 || *(eax_42 + 0x18) != var_8)
        int32_t edx_17 = var_8
        *(eax_42 + 0x14) = ebp_5
        *(eax_42 + 0x18) = edx_17
        *(eax_42 + 0xc) = 1

int32_t eax_44 = (*(*arg1 + 0x2c))()
void* eax_46 = sub_5f7370(*data_797da0, eax_33[2]->vFunc_1)

if (eax_46 != 0)
    void* eax_47 = *(eax_46 + 0xc)
    
    if (*(eax_47 + 0x1c) != eax_44)
        *(eax_47 + 0x1c) = eax_44
        *(eax_47 + 0xc) = 1

arg2.b = arg1[9].b
void* eax_49 = sub_5f7370(*data_797da0, eax_33[2]->vFunc_1)

if (eax_49 != 0)
    void* eax_50 = *(eax_49 + 0xc)
    char ecx_32 = arg2.b
    
    if (*(eax_50 + 0x24) != ecx_32)
        *(eax_50 + 0x24) = ecx_32
        *(eax_50 + 0xc) = 1

arg2.b = *(arg1 + 0x25)
void* eax_52 = sub_5f7370(*data_797da0, eax_33[2]->vFunc_1)

if (eax_52 != 0)
    void* edx_21 = *(eax_52 + 0xc)
    eax_52.b = arg2.b
    *(edx_21 + 0x4e) = eax_52.b

void* eax_53 = sub_5f7370(*data_797da0, eax_33[2]->vFunc_1)

if (eax_53 != 0)
    *(*(eax_53 + 0xc) + 0x4c) = 1

void* ebp_7 = arg1[0x19]
void* eax_56 = sub_5f7370(*data_797da0, var_4[2]->vFunc_1)

if (eax_56 != 0)
    void* ecx_39 = *(*(eax_56 + 0xc) + 0x21c)
    
    if (*(ecx_39 + 8) != ebp_7)
        if (*(ecx_39 + 8) != ebp_7)
            *(ecx_39 + 8) = ebp_7
        
        int32_t* ecx_40 = *(eax_56 + 0x2c)
        
        if (ecx_40 != 0)
            (*(*ecx_40 + 4))()
            *(eax_56 + 0x2c) = 0
        
        if (ebp_7 != 0)
            int32_t* ecx_41 = *(eax_56 + 0x2c)
            
            if (ecx_41 != 0)
                (*(*ecx_41 + 4))()
                *(eax_56 + 0x2c) = 0
            
            *(eax_56 + 0x2c) = sub_5f9ae0(*(eax_56 + 0x28), ebp_7)

void* esi_1 = arg1[0x1a]
int32_t* ebx_6 = sub_5f7370(*data_797da0, var_4[2]->vFunc_1)

if (ebx_6 == 0)
    return 

int32_t* ecx_44 = ebx_6[3][0x87]

if (ecx_44[3] == esi_1)
    return 

if (ecx_44[3] != esi_1)
    ecx_44[3] = esi_1

int32_t* ecx_45 = ebx_6[0xc]

if (ecx_45 != 0)
    (*(*ecx_45 + 4))()
    ebx_6[0xc] = 0

if (esi_1 == 0)
    return 

int32_t* ecx_46 = ebx_6[0xc]

if (ecx_46 != 0)
    (*(*ecx_46 + 4))()
    ebx_6[0xc] = 0

ebx_6[0xc] = sub_5f9ae0(ebx_6[0xa], esi_1)
