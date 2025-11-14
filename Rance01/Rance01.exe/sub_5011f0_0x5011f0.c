// 函数: sub_5011f0
// 地址: 0x5011f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_8

for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
    if (*i != 0)
        sub_4c33d0(arg2, i, &var_8)

if (*(arg1 + 0x40) != 0)
    sub_4c33d0(arg2, arg1 + 0x40, &var_8)

void* result = arg1 + 0x44

if (*(arg1 + 0x44) != 0)
    result = sub_4c33d0(arg2, result, &var_8)

for (int32_t* i_1 = *(arg1 + 0x4c); i_1 != *(arg1 + 0x50); i_1 = &i_1[1])
    if (*i_1 != 0)
        result = sub_5011f0(arg2)

return result
