// 函数: sub_4b8e60
// 地址: 0x4b8e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg6 + arg7 == 2)
    int32_t* ebx_1 = arg4
    int32_t* esi = *arg3
    (*(**ebx_1 + 4))()
    double var_20_1 = fconvert.d(arg1)
    (*(*esi + 4))()
    long double temp0_1 = fconvert.t(var_20_1)
    arg2 - temp0_1
    int16_t eax_3 = (arg2 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(arg2, temp0_1) ? 1 : 0) << 0xa
        | (arg2 == temp0_1 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_3:1.b & 0x41) != 0)
        return eax_3
    
    int32_t eax_4 = *arg3
    *arg3 = *ebx_1
    *ebx_1 = eax_4
    return eax_4

int32_t* var_4c
int32_t var_14

if (arg6 s<= arg7 && arg6 s<= sub_4dccc0(arg8))
    int32_t* eax_6 = *(arg8 + 0x10)
    eax_6[1] = *eax_6
    var_4c = nullptr
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    int32_t ecx_3 = *(arg8 + 0x10)
    int32_t var_3c_1 = ecx_3
    arg6 = &var_4c
    sub_4dd2c0(&var_14, arg4, ecx_3, arg3)
    int32_t eax_8 = var_14
    
    if (eax_8 != 0)
        int32_t var_3c_2 = eax_8
        sub_6b4d5b()
    
    int32_t** esi_2 = *(arg8 + 0x10)
    int32_t* var_3c_3 = arg9
    return sub_4b9410(arg3, arg9, *esi_2, esi_2[1], arg4, arg5)

if (arg7 s<= sub_4dccc0(arg8))
    int32_t* eax_13 = *(arg8 + 0x10)
    eax_13[1] = *eax_13
    var_4c = nullptr
    int32_t var_48_3 = 0
    int32_t var_44_3 = 0
    int32_t var_40_3 = 0
    int32_t ecx_6 = *(arg8 + 0x10)
    int32_t var_3c_4 = ecx_6
    arg6 = &var_4c
    sub_4dd2c0(&var_14, arg5, ecx_6, arg4)
    int32_t eax_15 = var_14
    
    if (eax_15 != 0)
        int32_t var_3c_5 = eax_15
        sub_6b4d5b()
    
    int32_t* esi_3 = *(arg8 + 0x10)
    int32_t* var_3c_6 = arg9
    return sub_4b94b0(esi_3[1], arg9, arg4, arg3, *esi_3, arg5)

int32_t* var_3c_7 = arg9
void* var_24_1
void* eax_25
int128_t* edx_11
int32_t ebx_5
int32_t* ebp_3
int32_t edi_4

if (arg7 s>= arg6)
    int32_t eax_27
    int32_t edx_12
    edx_12:eax_27 = sx.q(arg7)
    edi_4 = (eax_27 - edx_12) s>> 1
    ebp_3 = arg4 + (edi_4 << 2)
    int32_t* var_40_6 = ebp_3
    int32_t* var_44_6 = arg3
    eax_25, edx_11 = sub_4b9750(arg4, arg3, arg9)
    var_24_1 = eax_25
    ebx_5 = (eax_25 - arg3) s>> 2
else
    int32_t eax_20
    int32_t edx_8
    edx_8:eax_20 = sx.q(arg6)
    ebx_5 = (eax_20 - edx_8) s>> 1
    void* eax_22 = &arg3[ebx_5]
    void* var_40_5 = eax_22
    var_24_1 = eax_22
    void* var_44_5 = arg4
    int32_t* eax_24
    eax_24, edx_11 = sub_4b96d0(arg5, arg4, arg9)
    ebp_3 = eax_24
    eax_25 = var_24_1
    edi_4 = (ebp_3 - arg4) s>> 2

void* ecx_11 = arg6 - ebx_5
int32_t var_3c_8 = edi_4
void* var_40_7 = ecx_11
int32_t* ecx_12 = arg4
var_4c = eax_25
void* eax_31 = sub_4ff8b0(arg8, edx_11, ecx_12, var_4c, ecx_12, ebp_3)
var_4c = eax_31
sub_4b8e60(arg3, var_24_1, var_4c, ebx_5, edi_4, arg8, arg9)
var_4c = arg5
return sub_4b8e60(eax_31, ebp_3, var_4c, ecx_11, arg7 - edi_4, arg8, arg9)
