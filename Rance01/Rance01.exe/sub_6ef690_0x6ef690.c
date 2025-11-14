// 函数: sub_6ef690
// 地址: 0x6ef690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *(arg1 + 0x3c)
int32_t var_4c = data_79ba28
char* edi = *(arg1 + 0x4834)
int32_t var_48 = data_79ba2c
int32_t var_44 = data_79ba30
int32_t var_40 = data_79ba34
void var_3c
int32_t eax_6 = sub_6e0940(arg1 + 4, 8, 8, arg2, arg3, *(arg1 + 0x30), esi, *(arg1 + 0x20), 
    *(arg1 + 0x24), *(arg1 + 0x28), arg1 + 0x3814, &var_3c)

if (eax_6 != 0)
    return eax_6

void* ebx_1 = *(arg1 + 0x3814)

if (zx.d(sub_6e0c40(&var_3c, &var_4c)) != 0)
    return sub_6ef590(edi, &edi[0x80], &edi[0x100], ebx_1, esi)

int32_t var_2c
sub_6e0b10(&var_2c, &var_3c, 0x79b938)
int32_t var_1c = var_2c
int32_t var_28
int32_t var_18 = var_28
int32_t var_24
int32_t var_14 = var_24
int32_t var_20
int32_t var_10 = var_20
int32_t* eax_14 = zx.d(sub_6e0c70(&var_1c, &data_79b8e0))

if (eax_14 == 0)
    return eax_14

return sub_6ef4d0(edi, &edi[0x80], &edi[0x100], ebx_1, &var_1c, esi)
