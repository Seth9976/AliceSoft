// 函数: sub_64a590
// 地址: 0x64a590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_3 = (arg5 - arg3) s/ 0x28

if (eax_3 s<= 0x28)
    int32_t var_1c_1 = arg6
    int32_t var_20_1 = arg5
    sub_64be20(arg4, arg3, arg3)
    return arg4

int32_t eax_5
int32_t edx_4
edx_4:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_4 & 7)) s>> 3
int32_t var_1c = arg6
int32_t esi_3 = eax_7 * 0x28
int32_t* eax_8 = &arg3[eax_7 * 0xa]
void* var_20 = &arg3[eax_7 * 0x14]
sub_64be20(eax_8, arg3, arg3)
int32_t var_24 = arg6
int32_t* ecx = &arg4[eax_7 * 0xa]
int32_t* var_28 = ecx
int32_t* ebp_1 = arg5 - esi_3
int32_t var_2c = arg6
int32_t var_30 = arg5
int32_t var_34 = arg6
int32_t* var_38 = ebp_1
sub_64be20(arg4, eax_8, sub_64be20(ebp_1, arg5 - eax_7 * 0x50, sub_64be20(arg4, arg4 - esi_3, ecx)))
return arg4
