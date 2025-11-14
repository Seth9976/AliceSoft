// 函数: sub_53e250
// 地址: 0x53e250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_12 = arg1[0xa3]
int32_t edx = *ecx_12
arg1[0xa3] = &ecx_12[1]
int32_t edi = ecx_12[1]
arg1[0xa3] = &ecx_12[2]
int32_t esi = ecx_12[2]
arg1[0xa3] = &ecx_12[3]
int32_t* ecx_3 = arg1[0x4b2]
int32_t ecx_4

if (ecx_3[1] != 0)
    ecx_4 = *ecx_3
else
    ecx_4 = 0

int32_t* ecx_6 = *(arg1[0x79] + (*(ecx_4 + (edx << 2)) << 2))
int32_t ecx_7

if (ecx_6[1] != 0)
    ecx_7 = *ecx_6
else
    ecx_7 = 0

int32_t esi_1 = *(ecx_7 + (esi << 2))
int32_t* ecx_8 = arg1[0x4b1]
int32_t edx_2

if (ecx_8[1] != 0)
    edx_2 = *ecx_8
else
    edx_2 = 0

int32_t edx_3 = *(edx_2 + (edi << 2) + 4)
int32_t ecx_9

if (ecx_8[1] != 0)
    ecx_9 = *ecx_8
else
    ecx_9 = 0

int32_t ecx_10 = *(ecx_9 + (edi << 2))

if (ecx_10 u>= (arg1[0x7a] - arg1[0x79]) s>> 2)
    return 

arg1 = *(arg1[0x79] + (ecx_10 << 2))

if (arg1 == 0)
    return 

int32_t ecx_11 = arg1[1]

if (edx_3 u>= ecx_11 u>> 2)
    return 

if (ecx_11 == 0)
    *(edx_3 << 2) = esi_1
    return 

(*arg1)[edx_3] = esi_1
