// 函数: sub_52e080
// 地址: 0x52e080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_3 = (arg1 - arg3) s/ 0x38

if (eax_3 s<= 0x28)
    int32_t var_20_1 = arg5
    return sub_52e700(arg3, arg4, arg1)

int32_t eax_5
int32_t edx_3
edx_3:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_3 & 7)) s>> 3
void* ebx_1 = eax_7 * 0x70
int32_t var_20 = arg5
int32_t esi_6 = eax_7 * 0x38
int32_t* eax_8 = &arg3[eax_7 * 0xe]
sub_52e700(arg3, eax_8, ebx_1 + arg3)
int32_t var_30 = arg5
sub_52e700(arg4 - esi_6, arg4, &arg4[eax_7 * 0xe])
int32_t var_40 = arg5
void* eax_11 = arg1 - esi_6
sub_52e700(arg1 - ebx_1, eax_11, arg1)
int32_t var_50 = arg5
return sub_52e700(eax_8, arg4, eax_11)
