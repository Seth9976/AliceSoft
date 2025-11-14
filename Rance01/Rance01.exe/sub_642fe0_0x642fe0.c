// 函数: sub_642fe0
// 地址: 0x642fe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg1[8]
int32_t esi = arg2[8]
void var_98

if (ecx s< esi)
label_64300f:
    __builtin_memcpy(&var_98, arg1, 0x8c)
    __builtin_memcpy(arg1, arg2, 0x8c)
    __builtin_memcpy(arg2, &var_98, 0x8c)
else if (ecx s<= esi && *arg1 s< *arg2)
    goto label_64300f

int32_t ecx_2 = arg3[8]
int32_t esi_3 = arg1[8]

if (ecx_2 s< esi_3)
label_643046:
    __builtin_memcpy(&var_98, arg3, 0x8c)
    __builtin_memcpy(arg3, arg1, 0x8c)
    __builtin_memcpy(arg1, &var_98, 0x8c)
else if (ecx_2 s<= esi_3 && *arg3 s< *arg1)
    goto label_643046

int32_t ecx_4 = arg1[8]
int32_t esi_6 = arg2[8]

if (ecx_4 s< esi_6)
label_64307d:
    __builtin_memcpy(&var_98, arg1, 0x8c)
    __builtin_memcpy(arg1, arg2, 0x8c)
    __builtin_memcpy(arg2, &var_98, 0x8c)
else if (ecx_4 s<= esi_6 && *arg1 s< *arg2)
    goto label_64307d
