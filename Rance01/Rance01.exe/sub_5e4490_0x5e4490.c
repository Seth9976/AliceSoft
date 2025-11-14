// 函数: sub_5e4490
// 地址: 0x5e4490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x18)

if (eax == 0xffffffff)
    eax.b = 0
    return eax

if (*(arg1 + 0x1c) == 0)
label_5e44ca:
    int32_t var_10_1 = *(arg2 + 0x40)
    int32_t var_14_1 = *(arg2 + 0x3c)
    int32_t var_18_1 = *(arg2 + 0x38)
    int32_t var_1c_1 = *(arg2 + 0x34)
    int32_t var_20_1 = *(arg2 + 0x30)
    int32_t var_24_1 = *(arg2 + 0x2c)
    int32_t var_28_1 = *(arg2 + 0x20)
    int32_t var_2c_1 = *(arg2 + 0x1c)
    sub_40da60(0x735988)
    int32_t var_10_2 = *(arg2 + 0x3c)
    int32_t var_14_2 = *(arg2 + 0x38)
    int32_t var_18_2 = *(arg2 + 0x34)
    int32_t var_1c_2 = *(arg2 + 0x30)
    int32_t var_20_2 = *(arg2 + 0x2c)
    int32_t var_24_2 = *(arg2 + 0x20)
    int32_t var_28_2 = *(arg2 + 0x1c)
    
    if (sub_5e8b50(arg1 + 0x18) == 0)
        int32_t var_10_3 = *(arg2 + 0x40)
        int32_t var_14_3 = *(arg2 + 0x3c)
        int32_t var_18_3 = *(arg2 + 0x38)
        int32_t var_1c_3 = *(arg2 + 0x34)
        int32_t var_20_3 = *(arg2 + 0x30)
        int32_t var_24_3 = *(arg2 + 0x2c)
        int32_t var_28_3 = *(arg2 + 0x20)
        int32_t var_2c_3 = *(arg2 + 0x1c)
        sub_40da60(0x735a48)
        void* eax_13
        eax_13.b = 0
        return eax_13
else
    int32_t* eax_1 = sub_5f9dd0(eax)
    
    if (eax_1 == 0)
        goto label_5e44ca
    
    if ((*(*eax_1 + 0x28))() == 0)
        goto label_5e44ca

int32_t var_10_4 = *(arg2 + 0x40)
int32_t var_14_4 = *(arg2 + 0x3c)
int32_t var_18_4 = *(arg2 + 0x38)
int32_t var_1c_4 = *(arg2 + 0x34)
int32_t var_20_4 = *(arg2 + 0x30)
int32_t var_24_4 = *(arg2 + 0x2c)
int32_t var_28_4 = *(arg2 + 0x20)
int32_t var_2c_4 = *(arg2 + 0x1c)

if (sub_5e8e30(arg1 + 0x18) != 0)
    return 1

int32_t var_10_5 = *(arg2 + 0x40)
int32_t var_14_5 = *(arg2 + 0x3c)
int32_t var_18_5 = *(arg2 + 0x38)
int32_t var_1c_5 = *(arg2 + 0x34)
int32_t var_20_5 = *(arg2 + 0x30)
int32_t var_24_5 = *(arg2 + 0x2c)
int32_t var_28_5 = *(arg2 + 0x20)
int32_t var_2c_5 = *(arg2 + 0x1c)
sub_40da60(0x735ab8)
void* eax_22
eax_22.b = 0
return eax_22
