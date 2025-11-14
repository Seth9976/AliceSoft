// 函数: sub_40f500
// 地址: 0x40f500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** eax_1 = sub_40f630(arg3, arg1)

if (eax_1 != *(arg3 + 4) && sub_40f4a0(arg1, &eax_1[3]) == 0)
    return &eax_1[7]

int32_t ecx_1 = arg1[1]
int32_t edx_1 = arg1[2]
int32_t var_14 = *arg1
int32_t var_10 = ecx_1
int32_t var_c = edx_1
int32_t var_8 = arg1[3]
int32_t var_4 = 0
void* var_18
sub_40f950(arg3, &var_18, eax_1, sub_40fba0(&var_14, arg3))
return var_18 + 0x1c
