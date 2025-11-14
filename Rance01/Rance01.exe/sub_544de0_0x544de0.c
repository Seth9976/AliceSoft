// 函数: sub_544de0
// 地址: 0x544de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg1[0xa3] + 4
int32_t edi = ecx[-1]
arg1[0xa3] = ecx
int32_t edx = *ecx
arg1[0xa3] = &ecx[1]
int32_t* ecx_2 = arg1[0x4b2]
int32_t ecx_3

if (ecx_2[1] != 0)
    ecx_3 = *ecx_2
else
    ecx_3 = 0

int32_t edx_1 = *(ecx_3 + (edx << 2))
int32_t* ecx_4 = arg1[0x4b1]
int32_t esi

if (ecx_4[1] != 0)
    esi = *ecx_4
else
    esi = 0

int32_t esi_1 = *(esi + (edi << 2) + 4)
int32_t ecx_5

if (ecx_4[1] != 0)
    ecx_5 = *ecx_4
else
    ecx_5 = 0

int32_t ecx_6 = *(ecx_5 + (edi << 2))

if (ecx_6 u>= (arg1[0x7a] - arg1[0x79]) s>> 2)
    return 

arg1 = *(arg1[0x79] + (ecx_6 << 2))

if (arg1 == 0)
    return 

int32_t ecx_7 = arg1[1]

if (esi_1 u>= ecx_7 u>> 2)
    return 

if (ecx_7 == 0)
    *(esi_1 << 2) = edx_1
    return 

(*arg1)[esi_1] = edx_1
