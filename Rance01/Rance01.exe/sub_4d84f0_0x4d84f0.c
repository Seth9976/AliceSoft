// 函数: sub_4d84f0
// 地址: 0x4d84f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4_1 = arg3
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, arg5 - arg3)
int32_t eax_3 = (arg5 - arg3) s/ 0x14

if (eax_3 s<= 0x28)
    sub_4d8c90(arg4, edx_2 s>> 3, arg3, arg5)
    return arg4

int32_t eax_5
int32_t edx_4
edx_4:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_4 & 7)) s>> 3
int32_t esi_2 = eax_7 * 0x14
void* edx_6 = &arg3[eax_7 * 0xa]
int32_t* eax_8 = &arg3[eax_7 * 5]
void* ebp_1 = arg5 - esi_2
sub_4d8c90(arg4, 
    sub_4d8c90(ebp_1, 
        sub_4d8c90(arg4, sub_4d8c90(eax_8, edx_6, arg3, edx_6), arg4 - esi_2, &arg4[eax_7 * 5]), 
        arg5 - eax_7 * 0x28, arg5), 
    eax_8, ebp_1)
return arg4
