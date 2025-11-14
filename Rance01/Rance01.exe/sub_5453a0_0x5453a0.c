// 函数: sub_5453a0
// 地址: 0x5453a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_3 = *(arg1 + 0x28c)
int32_t ebx = *eax_3
*(arg1 + 0x28c) = &eax_3[1]
*(arg1 + 0x2b0) -= 4
int32_t ebp = **(arg1 + 0x2b0)
int32_t var_4
int32_t* result
int32_t edx
result, edx = sub_553850(ebx, arg1 + 0x1dc, ebp, &var_4)

if (result.b == 0)
    int32_t var_18_1 = ebx
    int32_t var_1c_1 = ebp
    return sub_53d1c0(result, edx, arg1, 0x74f1f0)

**(arg1 + 0x2b0) = var_4
*(arg1 + 0x2b0) += 4
result.b = 1
return result
