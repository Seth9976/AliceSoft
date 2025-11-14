// 函数: sub_67e060
// 地址: 0x67e060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71bf78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_9c
int32_t eax_2 = data_78c474 ^ &var_9c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    struct guiengine::CGUIModel::guiengine::CGUICGBoxModel::VTable** eax_5 = sub_4146d0(arg1[4])
    struct guiengine::CGUIModel::guiengine::CGUILabelModel::VTable** eax_6 = sub_414850(arg1[5])
    struct guiengine::CGUIModel::guiengine::CGUIButtonModel::VTable** eax_7 = sub_414610(arg1[6])
    int32_t eax_9 = (*(*arg2 + 0x24))(eax_4)
    int32_t var_98 = (*(*arg2 + 0x28))()
    int32_t eax_13 = (*(*arg2 + 0x2c))()
    char ecx_6 = arg2[0x1e].b
    int32_t edx_4 = arg2[0x1d]
    int32_t eax_14 = arg2[0x1a]
    int32_t ecx_7 = arg2[0x1c]
    int32_t eax_15 = arg2[0x1b]
    int32_t eax_16 = eax_15 - edx_4 * 2
    int32_t var_68
    __builtin_memcpy(&var_68, &arg2[0x2d], 0x30)
    int32_t var_64_1 = eax_16
    uint32_t eax_19 = zx.d((*(*arg1 + 0x10))())
    int32_t eax_20 = neg.d(eax_19)
    
    if (eax_5[0x16] != (sbb.d(eax_20, eax_20, eax_19 != 0) & 0xffffffc9) + 0xff)
        eax_5[0x16] = (sbb.d(eax_20, eax_20, eax_19 != 0) & 0xffffffc9) + 0xff
        eax_5[0x19].b = 1
    
    uint32_t eax_26 = zx.d((*(*arg1 + 0x10))())
    int32_t eax_27 = neg.d(eax_26)
    
    if (eax_5[0x17] != (sbb.d(eax_27, eax_27, eax_26 != 0) & 0xffffffc9) + 0xff)
        eax_5[0x17] = (sbb.d(eax_27, eax_27, eax_26 != 0) & 0xffffffc9) + 0xff
        eax_5[0x19].b = 1
    
    if (eax_5[4] != eax_9 || eax_5[5] != var_98)
        int32_t edx_8 = var_98
        eax_5[4] = eax_9
        eax_5[5] = edx_8
        eax_5[0x19].b = 1
    
    int32_t eax_31
    eax_31.b = ecx_6
    
    if (eax_5[0xb].b != eax_31.b)
        eax_5[0xb].b = eax_31.b
        eax_5[0x19].b = 1
    
    if (eax_5[7] != eax_14 - 0x10)
        eax_5[7] = eax_14 - 0x10
        eax_5[0x19].b = 1
    
    if (eax_5[8] != eax_15)
        eax_5[8] = eax_15
        eax_5[0x19].b = 1
    
    if (eax_5[6] != eax_13)
        eax_5[6] = eax_13
        eax_5[0x19].b = 1
    
    if (*(eax_5 + 0x2d) != 0)
        *(eax_5 + 0x2d) = 0
        eax_5[0x19].b = 1
    
    if (sub_405d70(&arg2[0x1f], &eax_5[0xc]) == 0)
        sub_401180(&eax_5[0xc], 0xffffffff, &arg2[0x1f], 0)
        eax_5[0x19].b = 1
    
    struct guiengine::CGUIModel::guiengine::CGUILabelModel::VTable** esi_3 = eax_6
    
    if (sub_5e0140(&var_68, &esi_3[0x12]) == 0)
        __builtin_memcpy(&esi_3[0x12], &var_68, 0x30)
        eax_6[0x1e].b = 1
        esi_3 = eax_6
    
    if (*(esi_3 + 0x2a) != 1)
        *(esi_3 + 0x2a) = 1
        esi_3[0x1e].b = 1
    
    int32_t eax_42 = ecx_7 + eax_9
    int32_t ecx_14 = edx_4 + var_98
    
    if (esi_3[4] != eax_42 || esi_3[5] != ecx_14)
        esi_3[4] = eax_42
        esi_3[5] = ecx_14
        esi_3[0x1e].b = 1
    
    eax_42.b = ecx_6
    
    if (esi_3[0xa].b != eax_42.b)
        esi_3[0xa].b = eax_42.b
        esi_3[0x1e].b = 1
    
    if (esi_3[7] != eax_14 - 0x10)
        esi_3[7] = eax_14 - 0x10
        esi_3[0x1e].b = 1
    
    if (esi_3[8] != eax_16)
        esi_3[8] = eax_16
        esi_3[0x1e].b = 1
    
    if (esi_3[6] != eax_13 + 1)
        esi_3[6] = eax_13 + 1
        esi_3[0x1e].b = 1
    
    if (sub_405d70(&arg2[0x26], &esi_3[0xb]) == 0)
        sub_401180(&esi_3[0xb], 0xffffffff, &arg2[0x26], 0)
        esi_3[0x1e].b = 1
    
    if (*(esi_3 + 0x29) != 0)
        *(esi_3 + 0x29) = 0
        esi_3[0x1e].b = 1
    
    if (eax_7[4] != eax_14 + eax_9 - 0x10 || eax_7[5] != var_98)
        eax_7[4] = eax_14 + eax_9 - 0x10
        eax_7[5] = var_98
        eax_7[0x49].b = 1
    
    if (eax_7[7] != 0x10)
        eax_7[7] = 0x10
        eax_7[0x49].b = 1
    
    if (eax_7[8] != eax_15)
        eax_7[8] = eax_15
        eax_7[0x49].b = 1
    
    int32_t eax_53
    eax_53.b = ecx_6
    
    if (eax_7[9].b != eax_53.b)
        eax_7[9].b = eax_53.b
        eax_7[0x49].b = 1
    
    if (eax_7[6] != eax_13 + 2)
        eax_7[6] = eax_13 + 2
        eax_7[0x49].b = 1
    
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38 = 0
    sub_401270(&var_38, nullptr, 0x72d14f)
    int32_t var_c_1 = 0
    int32_t* ecx_17 = var_38.d
    
    if (var_24_1 u< 0x10)
        ecx_17 = &var_38
    
    int32_t edi_3 = eax_7[0x42]
    int32_t eax_56 = var_28_1
    
    if (edi_3 u< eax_56)
        eax_56 = edi_3
    
    void* edx_13
    
    if (eax_7[0x43] u< 0x10)
        edx_13 = &eax_7[0x3e]
    else
        edx_13 = eax_7[0x3e]
    
    int32_t eax_57 = sub_402320(eax_56, edx_13, ecx_17, eax_56)
    int32_t ecx_18
    
    if (eax_57 == 0 && edi_3 u>= var_28_1)
        ecx_18.b = edi_3 != var_28_1
    
    if (eax_57 != 0 || edi_3 u< var_28_1 || ecx_18 != 0)
        sub_401180(&eax_7[0x3e], 0xffffffff, &var_38, 0)
        eax_7[0x49].b = 1
    
    if (var_24_1 u>= 0x10)
        int32_t var_b0_2 = var_38.d
        sub_6b4d5b()
    
    if (*(eax_7 + 0x25) != 0)
        *(eax_7 + 0x25) = 0
        eax_7[0x49].b = 1
    
    result = &arg1[0x14]
    eax_7[0x45] = &arg1[0xe]
    eax_7[0x46] = &arg1[0x11]
    eax_7[0x47] = result

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_9c)
return result
