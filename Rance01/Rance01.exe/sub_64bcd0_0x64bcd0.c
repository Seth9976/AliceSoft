// 函数: sub_64bcd0
// 地址: 0x64bcd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_5 = arg1[3]
int32_t esi = arg2[3]
void var_2c

if (ecx_5 s< esi)
label_64bcf7:
    __builtin_memcpy(&var_2c, arg1, 0x28)
    __builtin_memcpy(arg1, arg2, 0x28)
    __builtin_memcpy(arg2, &var_2c, 0x28)
else if (ecx_5 s<= esi && *arg1 s< *arg2)
    goto label_64bcf7

int32_t ecx_1 = arg3[3]
int32_t esi_3 = arg1[3]

if (ecx_1 s< esi_3)
label_64bd2e:
    __builtin_memcpy(&var_2c, arg3, 0x28)
    __builtin_memcpy(arg3, arg1, 0x28)
    __builtin_memcpy(arg1, &var_2c, 0x28)
else if (ecx_1 s<= esi_3 && *arg3 s< *arg1)
    goto label_64bd2e

int32_t ecx_3 = arg1[3]
int32_t esi_6 = arg2[3]

if (ecx_3 s< esi_6)
label_64bd65:
    __builtin_memcpy(&var_2c, arg1, 0x28)
    __builtin_memcpy(arg1, arg2, 0x28)
    __builtin_memcpy(arg2, &var_2c, 0x28)
else if (ecx_3 s<= esi_6 && *arg1 s< *arg2)
    goto label_64bd65
