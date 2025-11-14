// 函数: sub_64bf70
// 地址: 0x64bf70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_5 = arg1[5]
int32_t esi = arg2[5]
void var_2c

if (ecx_5 s< esi)
label_64bf97:
    __builtin_memcpy(&var_2c, arg1, 0x28)
    __builtin_memcpy(arg1, arg2, 0x28)
    __builtin_memcpy(arg2, &var_2c, 0x28)
else if (ecx_5 s<= esi && *arg1 s< *arg2)
    goto label_64bf97

int32_t ecx_1 = arg3[5]
int32_t esi_3 = arg1[5]

if (ecx_1 s< esi_3)
label_64bfce:
    __builtin_memcpy(&var_2c, arg3, 0x28)
    __builtin_memcpy(arg3, arg1, 0x28)
    __builtin_memcpy(arg1, &var_2c, 0x28)
else if (ecx_1 s<= esi_3 && *arg3 s< *arg1)
    goto label_64bfce

int32_t ecx_3 = arg1[5]
int32_t esi_6 = arg2[5]

if (ecx_3 s< esi_6)
label_64c005:
    __builtin_memcpy(&var_2c, arg1, 0x28)
    __builtin_memcpy(arg1, arg2, 0x28)
    __builtin_memcpy(arg2, &var_2c, 0x28)
else if (ecx_3 s<= esi_6 && *arg1 s< *arg2)
    goto label_64c005
