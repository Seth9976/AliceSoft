// 函数: sub_5c5380
// 地址: 0x5c5380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = arg1[0xf]
int32_t ecx = *eax
uint32_t edx = eax[1]
int32_t ebp = arg1[0x72]
int32_t* var_8 = 0xffffffff
int32_t var_4 = 0xffffffff
void* eax_1 = arg1[0x12]
int32_t var_14 = ebp
int32_t eax_2
int32_t edx_1
eax_2, edx_1 = sub_5c4b30(arg1, eax_1)
int32_t eax_3 = arg1[0xb1]

if (eax_3 == 0 || arg1[0xb3] == 0)
    arg1[4] = 0xffffffff
    arg1[5] = 0xffffffff
    arg1[2] = 0xffffffff
    arg1[3] = 0xffffffff
else
    eax_3(*arg1, 0, 0, 2)
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(arg1[0xb3](*arg1))
    arg1[4] = eax_6
    arg1[2] = eax_6
    arg1[5] = edx_3
    arg1[3] = edx_3

if ((arg1[4] & arg1[5]) == 0xffffffff)
    return 0xffffff7d

void* eax_8 = arg1[0x10]
int32_t result
int32_t edx_5
result, edx_5 = sub_5c44d0(arg1, eax_8 + 8, *(eax_8 + 4), &var_14, &var_8)

if (edx_5 s<= 0 && (edx_5 s< 0 || result u< 0))
    return result

void* eax_10 = arg1[0x10]
int32_t var_28_2 = 0
int32_t var_2c_2 = *(eax_10 + 4)
void* var_30_1 = eax_10 + 8

if (sub_5c4d70(arg1, 0, 0, ecx, edx, arg1[2], arg1[3], var_8, var_4, var_14) s< 0)
    return 0xffffff80

int32_t* eax_16 = arg1[0xe]
*eax_16 = 0
eax_16[1] = 0
*arg1[0x10] = ebp
int32_t* eax_18 = arg1[0xf]
*eax_18 = ecx
eax_18[1] = edx
int32_t* eax_19 = arg1[0x11]
*eax_19 = eax_2
eax_19[1] = edx_1
void* eax_20 = arg1[0x11]
int32_t temp1_1 = *(eax_20 + 8)
*(eax_20 + 8) -= eax_2
*(eax_20 + 0xc) = sbb.d(*(eax_20 + 0xc), edx_1, temp1_1 u< eax_2)
void* eax_21 = arg1[0x11]
int32_t temp2_1 = *(eax_21 + 0xc)

if (temp2_1 s<= 0 && (temp2_1 s< 0 || *(eax_21 + 8) u< 0))
    *(eax_21 + 8) = 0
    *(eax_21 + 0xc) = 0

return sub_5c5cc0(arg1, ecx, edx)
