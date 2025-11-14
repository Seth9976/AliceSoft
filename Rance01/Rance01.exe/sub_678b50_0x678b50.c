// 函数: sub_678b50
// 地址: 0x678b50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2

if (ebp == 0)
    return 

void* edi_1 = *(arg1 + 0x18)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(edi_1)
int32_t* ecx_1 = *(edi_1 + 0x38)

if (ecx_1 != 0 && eax_2[2] == 0)
    eax_2[8] = ecx_1
    eax_2[2] = (**ecx_1)(1)

void* ecx_2 = eax_2[2]
int32_t* edx_2 = data_797da0
eax_2[3] = *(edi_1 + 0x30)
eax_2[4] = edi_1
void* eax_6 = sub_5f7370(*edx_2, *(ecx_2 + 4))

if (eax_6 != 0)
    void* eax_7 = *(eax_6 + 0xc)
    
    if (*(eax_7 + 0x48) != 1)
        *(eax_7 + 0x48) = 1
        *(eax_7 + 0xc) = 1

long double x87_r7_1 = float.t(1)
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
arg2 = fconvert.s(x87_r7_1)
float var_c_1 = fconvert.s(x87_r7_1)
int32_t var_8_1 = ebp[7]
int32_t var_4_1 = ebp[8]

if (ebp[0x10] != 0)
    var_8_1 = sub_699840(&ebp[0xc])
    var_4_1 = sub_699900(&ebp[0xc])

int32_t eax_11 = ebp[0xa]

if (eax_11 == 2)
    arg2 = fconvert.s(float.t(ebp[7]) / float.t(var_8_1))
    var_c_1 = fconvert.s(float.t(ebp[8]) / float.t(var_4_1))
else if (eax_11 == 1)
    void* eax_13 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)
    
    if (eax_13 != 0)
        void* eax_14 = *(eax_13 + 0xc)
        
        if (*(eax_14 + 0x48) != 5)
            *(eax_14 + 0x48) = 5
            *(eax_14 + 0xc) = 1
    
    int32_t eax_16
    int32_t edx_4
    edx_4:eax_16 = sx.q(ebp[7])
    *(arg1 + 0x10) = (eax_16 - edx_4) s>> 1
    int32_t eax_20
    int32_t edx_5
    edx_5:eax_20 = sx.q(ebp[8])
    *(arg1 + 0x14) = (eax_20 - edx_5) s>> 1
    long double x87_r7_10 = fconvert.t(fconvert.s(float.t(ebp[8]) / float.t(var_4_1)))
    long double x87_r6_1 = fconvert.t(fconvert.s(float.t(ebp[7]) / float.t(var_8_1)))
    x87_r6_1 - x87_r7_10
    int32_t eax_22
    eax_22.w = (x87_r6_1 < x87_r7_10 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_10) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_10 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_22:1.b & 0x41) == 0)
        x87_r7_10 = x87_r6_1
    
    long double x87_r7_5 = fconvert.t(fconvert.s(x87_r7_10))
    arg2 = fconvert.s(x87_r7_5)
    var_c_1 = fconvert.s(x87_r7_5)

void* eax_24 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_24 != 0)
    void* ecx_7 = *(eax_24 + 0xc)
    long double x87_r7_11 = fconvert.t(*(ecx_7 + 0x1a0))
    long double x87_r6_2 = fconvert.t(arg2)
    x87_r6_2 - x87_r7_11
    eax_24.w = (x87_r6_2 < x87_r7_11 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_2, x87_r7_11) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_11 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        *(ecx_7 + 0x1a0) = fconvert.s(x87_r7_11)
        *(ecx_7 + 0xc) = 1

void* eax_25 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_25 != 0)
    void* ecx_10 = *(eax_25 + 0xc)
    long double x87_r7_12 = fconvert.t(*(ecx_10 + 0x1a4))
    long double x87_r6_3 = fconvert.t(var_c_1)
    x87_r6_3 - x87_r7_12
    eax_25.w = (x87_r6_3 < x87_r7_12 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_3, x87_r7_12) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_12 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        *(ecx_10 + 0x1a4) = fconvert.s(x87_r7_12)
        *(ecx_10 + 0xc) = 1

void* eax_27 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_27 != 0)
    *(*(eax_27 + 0xc) + 0x4c) = 1

float eax_30 = (*(*ebp + 0x28))() + *(arg1 + 0x14)
int32_t esi_3 = (*(*ebp + 0x24))() + *(arg1 + 0x10)
void* eax_34 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_34 != 0)
    void* eax_35 = *(eax_34 + 0xc)
    
    if (*(eax_35 + 0x14) != esi_3 || *(eax_35 + 0x18) != eax_30)
        *(eax_35 + 0x14) = esi_3
        *(eax_35 + 0x18) = eax_30
        *(eax_35 + 0xc) = 1

int32_t eax_37 = (*(*ebp + 0x2c))()
void* eax_39 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_39 != 0)
    void* eax_40 = *(eax_39 + 0xc)
    
    if (*(eax_40 + 0x1c) != eax_37)
        *(eax_40 + 0x1c) = eax_37
        *(eax_40 + 0xc) = 1

sub_41b810(eax_2, ebp[9])
arg1.b = ebp[0xb].b
void* eax_43 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_43 != 0)
    void* eax_44 = *(eax_43 + 0xc)
    char ecx_23 = arg1.b
    
    if (*(eax_44 + 0x24) != ecx_23)
        *(eax_44 + 0x24) = ecx_23
        *(eax_44 + 0xc) = 1

arg1.b = *(ebp + 0x2d)
void* eax_46 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_46 != 0)
    void* edx_16 = *(eax_46 + 0xc)
    eax_46.b = arg1.b
    *(edx_16 + 0x4e) = eax_46.b

void* ecx_26 = ebp[0x14]
float edx_17 = ebp[0x13]
int32_t esi_6 = ebp[0x15]
void* eax_48 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_48 != 0)
    int32_t var_20_3 = esi_6
    void* var_24_1 = ecx_26
    float var_28_1 = edx_17
    sub_432750(*(eax_48 + 0xc))

void* edx_19 = ebp[0x17]
int32_t esi_7 = ebp[0x18]
int32_t ebp_1 = ebp[0x16]
void* eax_50 = sub_5f7370(*data_797da0, eax_2[2]->vFunc_1)

if (eax_50 == 0)
    return 

int32_t var_20_4 = esi_7
void* var_24_2 = edx_19
int32_t var_28_2 = ebp_1
sub_4327f0(*(eax_50 + 0xc))
