// 函数: sub_64c360
// 地址: 0x64c360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
ebx.b = arg2[9].b
void var_2c

if (arg1[9].b != 0)
    if (ebx.b != 0 && *arg1 s< *arg2)
        goto label_64c392
else if (ebx.b != 0 || *arg1 s< *arg2)
label_64c392:
    __builtin_memcpy(&var_2c, arg1, 0x28)
    __builtin_memcpy(arg1, arg2, 0x28)
    __builtin_memcpy(arg2, &var_2c, 0x28)

ebx.b = arg1[9].b

if (arg3[9].b != 0)
    if (ebx.b != 0 && *arg3 s< *arg1)
        goto label_64c3d4
else if (ebx.b != 0 || *arg3 s< *arg1)
label_64c3d4:
    __builtin_memcpy(&var_2c, arg3, 0x28)
    __builtin_memcpy(arg3, arg1, 0x28)
    __builtin_memcpy(arg1, &var_2c, 0x28)

ebx.b = arg2[9].b

if (arg1[9].b != 0)
    if (ebx.b != 0 && *arg1 s< *arg2)
        goto label_64c415
else if (ebx.b != 0 || *arg1 s< *arg2)
label_64c415:
    __builtin_memcpy(&var_2c, arg1, 0x28)
    __builtin_memcpy(arg1, arg2, 0x28)
    __builtin_memcpy(arg2, &var_2c, 0x28)
