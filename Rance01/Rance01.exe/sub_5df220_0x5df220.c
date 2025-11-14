// 函数: sub_5df220
// 地址: 0x5df220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = arg1[2]
*arg2 = 0
arg2[1] = 0
arg2[2] = arg3
arg2[3] = arg4

if (esi s<= 0)
    return 

int32_t edi_1 = arg1[3]

if (edi_1 s<= 0)
    return 

int32_t edx = *arg1
int32_t ecx = arg1[1]

if (edx s< 0)
    edx = 0

if (esi + edx s> arg3)
    esi = arg3 - edx

if (ecx s< 0)
    ecx = 0

if (edi_1 + ecx s> arg4)
    edi_1 = arg4 - ecx

*arg2 = edx
arg2[1] = ecx
arg2[2] = esi
arg2[3] = edi_1
