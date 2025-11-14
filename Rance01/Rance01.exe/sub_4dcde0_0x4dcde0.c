// 函数: sub_4dcde0
// 地址: 0x4dcde0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg4 + arg5 == 2)
    int32_t* edi_1 = *arg1
    int32_t* esi = *arg2
    char result = sub_4dc1f0(esi, edi_1)
    
    if (result == 0)
        return result
    
    *arg1 = esi
    *arg2 = edi_1
    return result

int32_t* var_44
int32_t var_14

if (arg4 s<= arg5 && arg4 s<= sub_4dccc0(arg6))
    int32_t* eax_2 = *(arg6 + 0x10)
    int32_t ecx_1 = *eax_2
    int32_t** ebx_2 = arg1
    eax_2[1] = ecx_1
    var_44 = nullptr
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = *(arg6 + 0x10)
    arg4 = &var_44
    sub_4dd2c0(&var_14, arg2, ecx_1, ebx_2)
    int32_t eax_4 = var_14
    
    if (eax_4 != 0)
        int32_t var_34_2 = eax_4
        sub_6b4d5b()
    
    int32_t* esi_2 = *(arg6 + 0x10)
    int32_t* edx_3 = esi_2[1]
    int32_t var_34_3 = arg7
    int32_t* var_38_2 = arg3
    int32_t* var_3c_2 = arg2
    var_44 = *esi_2
    return sub_4dd320(ebx_2, edx_3, arg3, var_44, edx_3)

if (arg5 s<= sub_4dccc0(arg6))
    int32_t* eax_10 = *(arg6 + 0x10)
    int32_t ecx_3 = *eax_10
    eax_10[1] = ecx_3
    var_44 = nullptr
    int32_t var_40_3 = 0
    int32_t var_3c_3 = 0
    int32_t var_38_3 = 0
    int32_t var_34_4 = *(arg6 + 0x10)
    arg4 = &var_44
    sub_4dd2c0(&var_14, arg3, ecx_3, arg2)
    int32_t eax_12 = var_14
    
    if (eax_12 != 0)
        int32_t var_34_5 = eax_12
        sub_6b4d5b()
    
    int128_t** esi_3 = *(arg6 + 0x10)
    int128_t* ecx_4 = esi_3[1]
    int128_t* edx_6 = *esi_3
    int32_t var_34_6 = arg7
    int32_t* var_38_4 = arg3
    int128_t* var_3c_4 = ecx_4
    int32_t* var_40_4 = edx_6
    var_44 = arg1
    return sub_4dd3a0(arg2, edx_6, ecx_4, var_44, var_40_4)

int32_t* var_1c_1
int32_t* eax_22
int128_t* edx_10
int32_t ebx_5
int32_t* ebp_3
int32_t edi_4

if (arg5 s>= arg4)
    int32_t eax_24
    int32_t edx_11
    edx_11:eax_24 = sx.q(arg5)
    int32_t var_34_8 = arg7
    edi_4 = (eax_24 - edx_11) s>> 1
    int32_t* var_38_6 = arg2
    ebp_3 = &arg2[edi_4]
    int32_t* var_3c_6 = arg1
    eax_22, edx_10 = sub_4dd670(ebp_3, arg1, arg7)
    var_1c_1 = eax_22
    ebx_5 = (eax_22 - arg1) s>> 2
else
    int32_t eax_18
    int32_t edx_7
    edx_7:eax_18 = sx.q(arg4)
    ebx_5 = (eax_18 - edx_7) s>> 1
    int32_t* eax_20 = &arg1[ebx_5]
    int32_t var_34_7 = arg7
    int32_t* var_38_5 = arg3
    int32_t* var_3c_5 = arg2
    var_1c_1 = eax_20
    int32_t* eax_21
    eax_21, edx_10 = sub_4dd610(eax_20, arg2, arg3)
    ebp_3 = eax_21
    eax_22 = var_1c_1
    edi_4 = (ebp_3 - arg2) s>> 2

void* ecx_9 = arg4 - ebx_5
int32_t var_34_9 = edi_4
void* var_38_7 = ecx_9
var_44 = eax_22
void* eax_29 = sub_4ff8b0(arg6, edx_10, arg2, var_44, arg2, ebp_3)
var_44 = eax_29
sub_4dcde0(arg1, var_1c_1, var_44, ebx_5, edi_4, arg6, arg7)
var_44 = arg3
return sub_4dcde0(eax_29, ebp_3, var_44, ecx_9, arg5 - edi_4, arg6, arg7)
