// 函数: sub_697220
// 地址: 0x697220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

void* ebp_1 = arg2
int32_t eax = sub_697810(arg1, ebp_1)
int32_t ecx_2 = arg1[0xd]
int32_t edx_2 = arg1[0xc]
int32_t ebx_1 = eax
int32_t eax_2 = edx_2 + ecx_2 + ebx_1
int32_t var_10_1 = ebx_1

if (arg1[0xb] s< eax_2)
    arg1[0xb] = eax_2
    arg1[0x36].b = 1

void* ecx_3 = *(ebp_1 + 0x40)
long double x87_r7_1 = float.t(arg1[0xb] - edx_2 - ecx_2)
float eax_7 = *(ecx_3 + 0x38) - *(ecx_3 + 0x3c)
float var_4 = 0f
float var_c = eax_7
float var_8_2 = fconvert.s(x87_r7_1)
int32_t* eax_8 = &var_c

if (eax_7 s<= 0)
    eax_8 = &var_4

bool cond:1_1 = *eax_8 != 0
var_4 = fconvert.s(fconvert.t(var_8_2) - float.t(var_10_1))
int32_t eax_9 = sub_70c710(fconvert.t(var_4) * fconvert.t(arg1[0x11]))
var_c = eax_9
var_4 = 0f
float* eax_10 = &var_c

if (eax_9 s<= 0)
    eax_10 = &var_4

var_c = *eax_10
struct guiengine::CGUIModel::guiengine::CGUIButtonModel::VTable** eax_11 =
    sub_414610(*(ebp_1 + 0x14))

if (eax_11 != 0)
    int32_t eax_12 = arg1[0xa]
    
    if (eax_11[7] != eax_12)
        eax_11[7] = eax_12
        eax_11[0x49].b = 1
    
    int32_t eax_13 = arg1[0xc]
    
    if (eax_11[8] != eax_13)
        eax_11[8] = eax_13
        eax_11[0x49].b = 1
    
    int32_t eax_15 = (*(*arg1 + 0x28))()
    int32_t eax_17 = (*(*arg1 + 0x24))()
    
    if (eax_11[4] != eax_17 || eax_11[5] != eax_15)
        eax_11[4] = eax_17
        eax_11[5] = eax_15
        eax_11[0x49].b = 1
    
    int32_t eax_19 = (*(*arg1 + 0x2c))()
    
    if (eax_11[6] != eax_19)
        eax_11[6] = eax_19
        eax_11[0x49].b = 1
    
    eax_19.b = arg1[7].b
    
    if (eax_11[9].b != eax_19.b)
        eax_11[9].b = eax_19.b
        eax_11[0x49].b = 1
    
    int32_t eax_20 = arg1[8]
    
    if (eax_11[0x19] != eax_20)
        eax_11[0x19] = eax_20
        eax_11[0x49].b = 1
    
    int32_t eax_21 = arg1[9]
    
    if (eax_11[0x1a] != eax_21)
        eax_11[0x1a] = eax_21
        eax_11[0x49].b = 1
    
    if (*(eax_11 + 0x25) != 0)
        *(eax_11 + 0x25) = 0
        eax_11[0x49].b = 1
    
    eax_21.b = cond:1_1
    
    if (*(eax_11 + 0x26) != eax_21.b)
        *(eax_11 + 0x26) = eax_21.b
        eax_11[0x49].b = 1
    
    sub_675df0(eax_11, &arg1[0x1a])
    ebx_1 = var_10_1
    eax_11[0x45] = ebp_1 + 0x48
    eax_11[0x46] = ebp_1 + 0x54
    eax_11[0x47] = ebp_1 + 0x60
    eax_11[0x48] = ebp_1 + 0x6c

struct guiengine::CGUIModel::guiengine::CGUIButtonModel::VTable** eax_23 =
    sub_414610(*(ebp_1 + 0x18))

if (eax_23 != 0)
    int32_t eax_24 = arg1[0xa]
    
    if (eax_23[7] != eax_24)
        eax_23[7] = eax_24
        eax_23[0x49].b = 1
    
    int32_t eax_25 = arg1[0xd]
    
    if (eax_23[8] != eax_25)
        eax_23[8] = eax_25
        eax_23[0x49].b = 1
    
    void* edx_8 = *arg1
    int32_t ebx_3 = arg1[0xb]
    var_4 = arg1[0xd]
    int32_t eax_28 = (*(edx_8 + 0x28))()
    int32_t ebx_5 = ebx_3 i- var_4 + eax_28
    int32_t eax_30 = (*(*arg1 + 0x24))()
    
    if (eax_23[4] != eax_30 || eax_23[5] != ebx_5)
        eax_23[4] = eax_30
        eax_23[5] = ebx_5
        eax_23[0x49].b = 1
    
    int32_t eax_32 = (*(*arg1 + 0x2c))()
    
    if (eax_23[6] != eax_32)
        eax_23[6] = eax_32
        eax_23[0x49].b = 1
    
    eax_32.b = arg1[7].b
    
    if (eax_23[9].b != eax_32.b)
        eax_23[9].b = eax_32.b
        eax_23[0x49].b = 1
    
    int32_t eax_33 = arg1[8]
    
    if (eax_23[0x19] != eax_33)
        eax_23[0x19] = eax_33
        eax_23[0x49].b = 1
    
    int32_t eax_34 = arg1[9]
    
    if (eax_23[0x1a] != eax_34)
        eax_23[0x1a] = eax_34
        eax_23[0x49].b = 1
    
    if (*(eax_23 + 0x25) != 0)
        *(eax_23 + 0x25) = 0
        eax_23[0x49].b = 1
    
    eax_34.b = cond:1_1
    
    if (*(eax_23 + 0x26) != eax_34.b)
        *(eax_23 + 0x26) = eax_34.b
        eax_23[0x49].b = 1
    
    sub_675df0(eax_23, &arg1[0x21])
    ebx_1 = var_10_1
    eax_23[0x45] = ebp_1 + 0x78
    eax_23[0x46] = ebp_1 + 0x84
    eax_23[0x47] = ebp_1 + 0x90
    eax_23[0x48] = ebp_1 + 0x9c

struct guiengine::CGUIModel::guiengine::CGUIButtonModel::VTable** eax_37 =
    sub_414610(*(ebp_1 + 0x1c))

if (eax_37 != 0)
    int32_t eax_38 = arg1[0xa]
    
    if (eax_37[7] != eax_38)
        eax_37[7] = eax_38
        eax_37[0x49].b = 1
    
    if (eax_37[8] != ebx_1)
        eax_37[8] = ebx_1
        eax_37[0x49].b = 1
    
    int32_t ebp_4 = arg1[0xc] + (*(*arg1 + 0x28))() i+ var_c
    int32_t eax_42 = (*(*arg1 + 0x24))()
    
    if (eax_37[4] != eax_42 || eax_37[5] != ebp_4)
        eax_37[4] = eax_42
        eax_37[5] = ebp_4
        eax_37[0x49].b = 1
    
    int32_t eax_45 = (*(*arg1 + 0x2c))() + 1
    
    if (eax_37[6] != eax_45)
        eax_37[6] = eax_45
        eax_37[0x49].b = 1
    
    if (cond:1_1 == 0 || arg1[7].b == 0)
        eax_45.b = 0
    else
        eax_45.b = 1
    
    if (eax_37[9].b != eax_45.b)
        eax_37[9].b = eax_45.b
        eax_37[0x49].b = 1
    
    int32_t eax_46 = arg1[8]
    
    if (eax_37[0x19] != eax_46)
        eax_37[0x19] = eax_46
        eax_37[0x49].b = 1
    
    sub_675df0(eax_37, &arg1[0x28])
    ebp_1 = arg2
    
    if (*(eax_37 + 0x25) != 1)
        *(eax_37 + 0x25) = 1
        eax_37[0x49].b = 1

int32_t* edi_4 = sub_4146d0(*(ebp_1 + 0x20))

if (edi_4 == 0)
    return 

int32_t eax_48 = arg1[0xa]

if (edi_4[7] != eax_48)
    edi_4[7] = eax_48
    edi_4[0x19].b = 1

int32_t eax_49 = sub_70c710(fconvert.t(var_8_2))

if (edi_4[8] != eax_49)
    edi_4[8] = eax_49
    edi_4[0x19].b = 1

int32_t ebx_7 = arg1[0xc] + (*(*arg1 + 0x28))()
int32_t eax_53 = (*(*arg1 + 0x24))()

if (edi_4[4] != eax_53 || edi_4[5] != ebx_7)
    edi_4[4] = eax_53
    edi_4[5] = ebx_7
    edi_4[0x19].b = 1

int32_t eax_55 = (*(*arg1 + 0x2c))()

if (edi_4[6] != eax_55)
    edi_4[6] = eax_55
    edi_4[0x19].b = 1

eax_55.b = arg1[7].b

if (edi_4[0xb].b != eax_55.b)
    edi_4[0xb].b = eax_55.b
    edi_4[0x19].b = 1

if (*(edi_4 + 0x2d) != 0)
    *(edi_4 + 0x2d) = 0
    edi_4[0x19].b = 1

if (sub_699780(&arg1[0x2f]) != 0)
    if (sub_405d70(&arg1[0x2f], &edi_4[0xc]).b == 0)
        sub_401180(&edi_4[0xc], 0xffffffff, &arg1[0x2f], 0)
        edi_4[0x19].b = 1
    
    return 

if (edi_4[0x16] != 0xc8)
    edi_4[0x16] = 0xc8
    edi_4[0x19].b = 1

if (edi_4[0x17] != 0xc8)
    edi_4[0x17] = 0xc8
    edi_4[0x19].b = 1

if (edi_4[0x18] != 0xc8)
    edi_4[0x18] = 0xc8
    edi_4[0x19].b = 1
