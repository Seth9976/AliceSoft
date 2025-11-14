// 函数: sub_4d8df0
// 地址: 0x4d8df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = *arg3
int32_t edi = *arg1

if (edi s< ebp)
    int32_t ebx_1 = arg1[3]
    int32_t edx = arg1[1]
    char ebx_2 = arg1[4].b
    *arg1 = ebp
    arg1[1] = arg3[1]
    arg1[3] = arg3[3]
    arg1[4].b = arg3[4].b
    arg3[1] = edx
    *arg3 = edi
    arg3[3] = ebx_1
    int32_t edx_1
    edx_1.b = ebx_2
    arg3[4].b = edx_1.b

int32_t edi_1 = *arg4
int32_t ebp_1 = *arg1

if (edi_1 s< ebp_1)
    int32_t ebx_6 = arg4[3]
    int32_t edx_2 = arg4[1]
    char ebx_7 = arg4[4].b
    *arg4 = ebp_1
    arg4[1] = arg1[1]
    arg4[3] = arg1[3]
    arg4[4].b = arg1[4].b
    arg1[1] = edx_2
    *arg1 = edi_1
    arg1[3] = ebx_6
    int32_t edx_3
    edx_3.b = ebx_7
    arg1[4].b = edx_3.b

int32_t esi_1 = *arg1
int32_t edi_2 = *arg3

if (esi_1 s>= edi_2)
    return 

char ebx_11 = arg1[4].b
int32_t ebp_2 = arg1[1]
int32_t edx_4 = arg1[3]
*arg1 = edi_2
arg1[1] = arg3[1]
arg1[3] = arg3[3]
arg1[4].b = arg3[4].b
arg1.b = ebx_11
*arg3 = esi_1
arg3[1] = ebp_2
arg3[3] = edx_4
arg3[4].b = arg1.b
