// 函数: sub_642e70
// 地址: 0x642e70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg1[7]
int32_t esi = arg2[7]
void var_98

if (ecx s< esi)
label_642e9f:
    __builtin_memcpy(&var_98, arg1, 0x8c)
    __builtin_memcpy(arg1, arg2, 0x8c)
    __builtin_memcpy(arg2, &var_98, 0x8c)
else if (ecx s<= esi && *arg1 s< *arg2)
    goto label_642e9f

int32_t ecx_2 = arg3[7]
int32_t esi_3 = arg1[7]

if (ecx_2 s< esi_3)
label_642ed6:
    __builtin_memcpy(&var_98, arg3, 0x8c)
    __builtin_memcpy(arg3, arg1, 0x8c)
    __builtin_memcpy(arg1, &var_98, 0x8c)
else if (ecx_2 s<= esi_3 && *arg3 s< *arg1)
    goto label_642ed6

int32_t ecx_4 = arg1[7]
int32_t esi_6 = arg2[7]

if (ecx_4 s< esi_6)
label_642f0d:
    __builtin_memcpy(&var_98, arg1, 0x8c)
    __builtin_memcpy(arg1, arg2, 0x8c)
    __builtin_memcpy(arg2, &var_98, 0x8c)
else if (ecx_4 s<= esi_6 && *arg1 s< *arg2)
    goto label_642f0d
