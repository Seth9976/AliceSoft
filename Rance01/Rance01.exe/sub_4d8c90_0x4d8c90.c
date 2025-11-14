// 函数: sub_4d8c90
// 地址: 0x4d8c90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx
uint32_t var_18 = ebx
int32_t ebp = *arg3
int32_t edi = *arg1

if (edi s< ebp)
    char ebx_1 = arg1[4].b
    arg2 = arg1[1]
    float var_8_1 = fconvert.s(fconvert.t(arg1[3]))
    *arg1 = ebp
    arg1[1] = arg3[1]
    arg1[3] = fconvert.s(fconvert.t(arg3[3]))
    arg1[4].b = arg3[4].b
    arg3[1] = arg2
    arg2.b = ebx_1
    *arg3 = edi
    arg3[3] = fconvert.s(fconvert.t(var_8_1))
    arg3[4].b = arg2.b

int32_t edi_1 = *arg4
int32_t ebp_1 = *arg1

if (edi_1 s< ebp_1)
    char ebx_3 = arg4[4].b
    arg2 = arg4[1]
    float var_8_2 = fconvert.s(fconvert.t(arg4[3]))
    *arg4 = ebp_1
    arg4[1] = arg1[1]
    arg4[3] = fconvert.s(fconvert.t(arg1[3]))
    arg4[4].b = arg1[4].b
    arg1[1] = arg2
    arg2.b = ebx_3
    *arg1 = edi_1
    arg1[3] = fconvert.s(fconvert.t(var_8_2))
    arg1[4].b = arg2.b

int32_t esi_1 = *arg1
int32_t edi_2 = *arg3

if (esi_1 s>= edi_2)
    return 

int32_t ebp_2 = arg1[1]
arg2.b = arg1[4].b
float var_8_3 = fconvert.s(fconvert.t(arg1[3]))
*arg1 = edi_2
arg1[1] = arg3[1]
arg1[3] = fconvert.s(fconvert.t(arg3[3]))
ebx.b = arg3[4].b
arg1[4].b = ebx.b
*arg3 = esi_1
arg3[1] = ebp_2
arg3[3] = fconvert.s(fconvert.t(var_8_3))
arg3[4].b = arg2.b
