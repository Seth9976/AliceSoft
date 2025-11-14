// 函数: sub_686aa0
// 地址: 0x686aa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

void* ebx_1 = arg2
int32_t eax = sub_687330(arg1, ebx_1)
int32_t ecx_1 = arg1[0xd]
int32_t edx_1 = arg1[0xc]
int32_t ebp_1 = eax
int32_t eax_2 = edx_1 + ecx_1 + ebp_1
int32_t var_10_1 = ebp_1

if (arg1[0xa] s< eax_2)
    arg1[0xa] = eax_2
    arg1[0x36].b = 1

void* ecx_2 = *(ebx_1 + 0x40)
long double x87_r7_1 = float.t(arg1[0xa] - edx_1 - ecx_1)
float eax_7 = *(ecx_2 + 0x38) - *(ecx_2 + 0x3c)
int32_t var_c = 0
float var_8 = eax_7
float var_4_2 = fconvert.s(x87_r7_1)
int32_t* eax_8 = &var_8

if (eax_7 s<= 0)
    eax_8 = &var_c

bool cond:1_1 = *eax_8 != 0
var_8 = fconvert.s(fconvert.t(var_4_2) - float.t(var_10_1))
int32_t eax_9 = sub_70c710(fconvert.t(var_8) * fconvert.t(arg1[0x11]))
var_c = eax_9
var_8 = 0f
int32_t* eax_10 = &var_c

if (eax_9 s<= 0)
    eax_10 = &var_8

var_c = *eax_10
struct guiengine::CGUIModel::guiengine::CGUIButtonModel::VTable** eax_11 =
    sub_414610(*(ebx_1 + 0x14))

if (eax_11 != 0)
    int32_t eax_12 = arg1[0xc]
    
    if (eax_11[7] != eax_12)
        eax_11[7] = eax_12
        eax_11[0x49].b = 1
    
    int32_t eax_13 = arg1[0xb]
    
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
    ebp_1 = var_10_1
    eax_11[0x45] = ebx_1 + 0x48
    eax_11[0x46] = ebx_1 + 0x54
    eax_11[0x47] = ebx_1 + 0x60
    eax_11[0x48] = ebx_1 + 0x6c

struct guiengine::CGUIModel::guiengine::CGUIButtonModel::VTable** eax_23 =
    sub_414610(*(ebx_1 + 0x18))

if (eax_23 != 0)
    int32_t eax_24 = arg1[0xd]
    
    if (eax_23[7] != eax_24)
        eax_23[7] = eax_24
        eax_23[0x49].b = 1
    
    int32_t eax_25 = arg1[0xb]
    
    if (eax_23[8] != eax_25)
        eax_23[8] = eax_25
        eax_23[0x49].b = 1
    
    int32_t ebp_3 = arg1[0xa]
    int32_t ebx_2 = arg1[0xd]
    var_8 = (*(*arg1 + 0x28))()
    int32_t eax_30 = (*(*arg1 + 0x24))() + ebp_3 - ebx_2
    
    if (eax_23[4] != eax_30 || eax_23[5] != var_8)
        float edx_9 = var_8
        eax_23[4] = eax_30
        eax_23[5] = edx_9
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
    ebx_1 = arg2
    ebp_1 = var_10_1
    eax_23[0x45] = arg2 + 0x78
    eax_23[0x46] = arg2 + 0x84
    eax_23[0x47] = arg2 + 0x90
    eax_23[0x48] = arg2 + 0x9c

struct guiengine::CGUIModel::guiengine::CGUIButtonModel::VTable** eax_38 =
    sub_414610(*(ebx_1 + 0x1c))

if (eax_38 != 0)
    if (eax_38[7] != ebp_1)
        eax_38[7] = ebp_1
        eax_38[0x49].b = 1
    
    int32_t eax_39 = arg1[0xb]
    
    if (eax_38[8] != eax_39)
        eax_38[8] = eax_39
        eax_38[0x49].b = 1
    
    int32_t ebp_5 = arg1[0xc]
    int32_t eax_41 = (*(*arg1 + 0x28))()
    int32_t eax_45 = (*(*arg1 + 0x24))() + ebp_5 + var_c
    
    if (eax_38[4] != eax_45 || eax_38[5] != eax_41)
        eax_38[4] = eax_45
        eax_38[5] = eax_41
        eax_38[0x49].b = 1
    
    int32_t eax_48 = (*(*arg1 + 0x2c))() + 1
    
    if (eax_38[6] != eax_48)
        eax_38[6] = eax_48
        eax_38[0x49].b = 1
    
    if (cond:1_1 == 0 || arg1[7].b == 0)
        eax_48.b = 0
    else
        eax_48.b = 1
    
    if (eax_38[9].b != eax_48.b)
        eax_38[9].b = eax_48.b
        eax_38[0x49].b = 1
    
    int32_t eax_49 = arg1[8]
    
    if (eax_38[0x19] != eax_49)
        eax_38[0x19] = eax_49
        eax_38[0x49].b = 1
    
    sub_675df0(eax_38, &arg1[0x28])
    ebx_1 = arg2
    
    if (*(eax_38 + 0x25) != 1)
        *(eax_38 + 0x25) = 1
        eax_38[0x49].b = 1

int32_t* edi_4 = sub_4146d0(*(ebx_1 + 0x20))

if (edi_4 == 0)
    return 

int32_t eax_50 = sub_70c710(fconvert.t(var_4_2))

if (edi_4[7] != eax_50)
    edi_4[7] = eax_50
    edi_4[0x19].b = 1

int32_t eax_51 = arg1[0xb]

if (edi_4[8] != eax_51)
    edi_4[8] = eax_51
    edi_4[0x19].b = 1

int32_t ebp_6 = arg1[0xc]
int32_t eax_53 = (*(*arg1 + 0x28))()
int32_t eax_56 = (*(*arg1 + 0x24))() + ebp_6

if (edi_4[4] != eax_56 || edi_4[5] != eax_53)
    edi_4[4] = eax_56
    edi_4[5] = eax_53
    edi_4[0x19].b = 1

int32_t eax_58 = (*(*arg1 + 0x2c))()

if (edi_4[6] != eax_58)
    edi_4[6] = eax_58
    edi_4[0x19].b = 1

eax_58.b = arg1[7].b

if (edi_4[0xb].b != eax_58.b)
    edi_4[0xb].b = eax_58.b
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
