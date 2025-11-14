// 函数: sub_642cd0
// 地址: 0x642cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_1 = arg1[4] * arg1[5]
int32_t esi_1 = arg2[5] * arg2[4]
void var_98

if (ecx_1 s< esi_1)
label_642d07:
    __builtin_memcpy(&var_98, arg1, 0x8c)
    __builtin_memcpy(arg1, arg2, 0x8c)
    __builtin_memcpy(arg2, &var_98, 0x8c)
else if (ecx_1 s<= esi_1 && *arg1 s< *arg2)
    goto label_642d07

int32_t ecx_4 = arg3[5] * arg3[4]
int32_t esi_5 = arg1[4] * arg1[5]

if (ecx_4 s< esi_5)
label_642d46:
    __builtin_memcpy(&var_98, arg3, 0x8c)
    __builtin_memcpy(arg3, arg1, 0x8c)
    __builtin_memcpy(arg1, &var_98, 0x8c)
else if (ecx_4 s<= esi_5 && *arg3 s< *arg1)
    goto label_642d46

int32_t ecx_7 = arg1[4] * arg1[5]
int32_t esi_9 = arg2[5] * arg2[4]

if (ecx_7 s< esi_9)
label_642d85:
    __builtin_memcpy(&var_98, arg1, 0x8c)
    __builtin_memcpy(arg1, arg2, 0x8c)
    __builtin_memcpy(arg2, &var_98, 0x8c)
else if (ecx_7 s<= esi_9 && *arg1 s< *arg2)
    goto label_642d85
