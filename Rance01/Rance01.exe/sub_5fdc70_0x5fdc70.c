// 函数: sub_5fdc70
// 地址: 0x5fdc70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx_2 = *(arg1 + 0x50)
int32_t* eax = *(arg1 + 0x4c)

if (eax != edx_2)
    int32_t* var_28_1 = arg3
    int32_t var_2c_1 = edx_2
    *(arg1 + 0x50) = sub_4febf0(eax, edx_2, arg3)

void* var_14 = arg2 + arg3 - 1
int32_t var_c = arg4
*(arg1 + 0x95) = 1
int32_t var_18 = arg2
int32_t* var_10 = arg3
int32_t var_8 = arg5
int32_t var_4 = arg6
int32_t* result = sub_5fc0a0(&var_18, arg1 + 0x4c)
*(arg1 + 0x95) = 1
return result
