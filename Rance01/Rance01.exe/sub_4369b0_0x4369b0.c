// 函数: sub_4369b0
// 地址: 0x4369b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (arg1 - arg3) s>> 2

if (eax_1 s<= 0x28)
    int32_t** __saved_ebp = arg5
    int32_t __saved_edi = arg1
    int32_t* var_1c_1 = arg3
    return sub_436c60(arg4, arg5, arg3)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(eax_1 + 1)
int32_t eax_5 = (eax_3 + (edx & 7)) s>> 3
int32_t** var_1c = arg5
int32_t** edx_3 = &arg3[eax_5 * 2]
int32_t edi = eax_5 << 2
int32_t** var_20 = edx_3
int32_t** eax_6 = &arg3[eax_5]
int32_t* var_24 = arg3
sub_436c60(eax_6, edx_3, arg3)
int32_t** var_28 = arg5
int32_t* ecx = &arg4[eax_5]
int32_t* var_2c = ecx
int32_t** edx_5 = arg4 - edi
int32_t** var_30 = edx_5
int32_t* ecx_1
int32_t** edx_6
ecx_1, edx_6 = sub_436c60(arg4, edx_5, ecx)
int32_t** ebp_2 = arg1 - edi
int32_t** var_34 = arg5
int32_t var_38 = arg1
int32_t var_3c = arg1 - (eax_5 << 3)
int32_t* ecx_2
int32_t** edx_7
ecx_2, edx_7 = sub_436c60(ebp_2, edx_6, ecx_1)
int32_t** var_40 = arg5
int32_t** var_44 = ebp_2
int32_t** var_48 = eax_6
return sub_436c60(arg4, edx_7, ecx_2)
