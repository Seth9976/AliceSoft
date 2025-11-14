// 函数: sub_5724d0
// 地址: 0x5724d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2

if (arg1 == ebx)
    return 

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x66666667, ebx[1] - *ebx)
int32_t edx_2 = edx_1 s>> 3
uint32_t ecx_4 = edx_2 u>> 0x1f
int32_t ecx_5 = ecx_4 + edx_2

if (ecx_4 == neg.d(edx_2))
    sub_571500(arg1, &arg2, *arg1, arg1[1])
    return 

int32_t* ebp_1 = *arg1
int32_t eax_3
int32_t edx_5
edx_5:eax_3 = muls.dp.d(0x66666667, arg1[1] - ebp_1)
int32_t edx_6 = edx_5 s>> 3
int32_t edi_3 = (edx_6 u>> 0x1f) + edx_6

if (ecx_5 u<= edi_3)
    void* eax_6
    int32_t edx_7
    eax_6, edx_7 = sub_5726e0(ebp_1, edx_6, *ebx, ebx[1])
    int32_t var_18_2 = arg1[1]
    sub_5325a0(eax_6, edx_7)
    int32_t eax_7
    int32_t edx_8
    edx_8:eax_7 = muls.dp.d(0x66666667, ebx[1] - *ebx)
    int32_t edx_9 = edx_8 s>> 3
    arg1[1] = *arg1 + ((edx_9 u>> 0x1f) + edx_9) * 0x14
    return 

int32_t eax_13
int32_t edx_13
edx_13:eax_13 = muls.dp.d(0x66666667, arg1[2] - ebp_1)
int32_t edx_14 = edx_13 s>> 3

if (ecx_5 u<= (edx_14 u>> 0x1f) + edx_14)
    int32_t* ecx_12 = *ebx
    int32_t edx_15 = edi_3 * 5
    void* edi_4 = &ecx_12[edx_15]
    int32_t edx_16 = sub_5726e0(ebp_1, edx_15, ecx_12, edi_4)
    int32_t* eax_18 = arg1[1]
    int32_t* var_18_3 = arg2
    arg1[1] = sub_5727f0(eax_18, edx_16, edi_4, ebx[1], eax_18)
    return 

if (ebp_1 != 0)
    int32_t var_14_4 = arg1[1]
    sub_5325a0(ebp_1, edx_14)
    int32_t var_18_4 = *arg1
    sub_6b4d5b()

int32_t eax_23
int32_t edx_18
edx_18:eax_23 = muls.dp.d(0x66666667, ebx[1] - *ebx)
int32_t edx_19 = edx_18 s>> 3

if (sub_4d5090(arg1, (edx_19 u>> 0x1f) + edx_19) == 0)
    return 

int32_t* eax_25 = *arg1
int32_t edx_20 = ebx[1]
int32_t* var_14_5 = arg2
arg1[1] = sub_5727f0(eax_25, edx_20, *ebx, edx_20, eax_25)
