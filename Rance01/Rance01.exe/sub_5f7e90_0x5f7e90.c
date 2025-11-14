// 函数: sub_5f7e90
// 地址: 0x5f7e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg1[2]
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
arg2[3] = 0

if (edi s<= 0 && arg1[3] s<= 0)
    arg2[3] = arg4
    *arg2 = 0
    arg2[1] = 0
    arg2[2] = arg3
    return 

int32_t edx = *arg1
int32_t esi = arg1[1]
int32_t ecx_1 = arg1[3]

if (edx s< 0)
    edx = 0

if (edi + edx s> arg3)
    edi = arg3 - edx

if (esi s< 0)
    esi = 0

if (ecx_1 + esi s> arg4)
    ecx_1 = arg4 - esi

arg2[1] = esi
arg2[2] = edi
*arg2 = edx
arg2[3] = ecx_1
