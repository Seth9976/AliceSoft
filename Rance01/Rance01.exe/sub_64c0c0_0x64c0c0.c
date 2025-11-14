// 函数: sub_64c0c0
// 地址: 0x64c0c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_5 = arg1[6]
int32_t esi = arg2[6]
void var_2c

if (ecx_5 s< esi)
label_64c0e7:
    __builtin_memcpy(&var_2c, arg1, 0x28)
    __builtin_memcpy(arg1, arg2, 0x28)
    __builtin_memcpy(arg2, &var_2c, 0x28)
else if (ecx_5 s<= esi && *arg1 s< *arg2)
    goto label_64c0e7

int32_t ecx_1 = arg3[6]
int32_t esi_3 = arg1[6]

if (ecx_1 s< esi_3)
label_64c11e:
    __builtin_memcpy(&var_2c, arg3, 0x28)
    __builtin_memcpy(arg3, arg1, 0x28)
    __builtin_memcpy(arg1, &var_2c, 0x28)
else if (ecx_1 s<= esi_3 && *arg3 s< *arg1)
    goto label_64c11e

int32_t ecx_3 = arg1[6]
int32_t esi_6 = arg2[6]

if (ecx_3 s< esi_6)
label_64c155:
    __builtin_memcpy(&var_2c, arg1, 0x28)
    __builtin_memcpy(arg1, arg2, 0x28)
    __builtin_memcpy(arg2, &var_2c, 0x28)
else if (ecx_3 s<= esi_6 && *arg1 s< *arg2)
    goto label_64c155
