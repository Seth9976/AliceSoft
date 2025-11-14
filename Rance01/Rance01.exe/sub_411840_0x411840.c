// 函数: sub_411840
// 地址: 0x411840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_40 = ebx
int32_t esi
int32_t var_44 = esi
int32_t edi
int32_t var_48 = edi
char* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int32_t var_1c = (*(*arg1 + 0x1c))() - (arg4 << 2)
int32_t var_20 = (*(*arg6 + 0x10))()
int32_t var_2c = (*(*arg6 + 0x14))()
int32_t eax_11 = (*(*arg6 + 8))(0, 0)
int32_t eax_13 = (*(*arg6 + 0x1c))()
long double x87_r7 = fconvert.t(arg8)
long double x87_r5 = fconvert.t(6755399441055744.0)
var_20.q = fconvert.d(x87_r7 + x87_r5)
long double x87_r5_3 = fconvert.t(-65536.0)
int32_t ebx_3 = (var_20 << 0x10) - sub_70c710((x87_r7 - float.t(var_20)) * x87_r5_3)
int32_t var_44_1 = ebx_3
long double x87_r5_7 = fconvert.t(fconvert.s(fconvert.t(arg9) / float.t(arg4)))
var_20.q = fconvert.d(x87_r5_7 + x87_r5)
int32_t edi_5 = (var_20 << 0x10) - sub_70c710((x87_r5_7 - float.t(var_20)) * x87_r5_3)
long double x87_r5_12 = fconvert.t(fconvert.s(fconvert.t(arg10) / float.t(arg5)))
var_20.q = fconvert.d(x87_r5_12 + x87_r5)
int32_t eax_16 = sub_70c710((x87_r5_12 - float.t(var_20)) * x87_r5_3)

if (arg5 s<= 0)
    return eax_16

long double x87_r5_15 = fconvert.t(arg7)
int32_t var_40_2
var_40_2.q = fconvert.d(x87_r5 + x87_r5_15)
int32_t edx_9 = (var_40_2 << 0x10) - sub_70c710(x87_r5_3 * (x87_r5_15 - float.t(var_40_2)))
int32_t var_48_1 = edx_9
int32_t i_1 = arg5
int32_t j_2
int32_t i

do
    int32_t ecx_12 = ebx_3 s>> 0x10
    int32_t var_34
    
    if (ecx_12 s>= var_34)
        ecx_12 = var_34 - 1
    
    j_2 = arg4
    int32_t ecx_14 = ecx_12 * eax_13 + eax_11
    
    if (j_2 s> 0)
        int32_t j_1 = j_2
        int32_t j
        
        do
            j_2 = edx_9 s>> 0x10
            int32_t var_28
            
            if (j_2 s>= var_28)
                j_2 = var_28 - 1
            
            *esi_1 = *(ecx_14 + (j_2 << 2))
            esi_1[1] = *(ecx_14 + (j_2 << 2) + 1)
            j_2.b = *(ecx_14 + (j_2 << 2) + 2)
            esi_1[2] = j_2.b
            esi_1 = &esi_1[4]
            edx_9 += edi_5
            j = j_1
            j_1 -= 1
        while (j != 1)
        ebx_3 = var_44_1
    
    ebx_3 += (var_20 << 0x10) - eax_16
    int32_t var_24
    esi_1 = &esi_1[var_24]
    i = i_1
    i_1 -= 1
    edx_9 = var_48_1
    var_44_1 = ebx_3
while (i != 1)
return j_2
