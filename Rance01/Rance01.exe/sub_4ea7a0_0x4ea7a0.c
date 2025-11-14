// 函数: sub_4ea7a0
// 地址: 0x4ea7a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == arg2)
    return 

int32_t ecx_2 = arg2[1] - *arg2
int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x38e38e39, ecx_2)
int32_t edx_2 = edx_1 s>> 3
int32_t ebp_3 = ecx_2 s/ 0x24

if (edx_2 u>> 0x1f == neg.d(edx_2))
    sub_4eaeb0(ecx_2, arg1)
    return 

int32_t* edi_1 = *arg1
int32_t eax_2
int32_t edx_3
edx_3:eax_2 = muls.dp.d(0x38e38e39, arg1[1] - edi_1)
int32_t edx_4 = edx_3 s>> 3
int32_t ecx_7 = (edx_4 u>> 0x1f) + edx_4

if (ebp_3 u<= ecx_7)
    int32_t* var_14_1 = arg2
    int32_t* eax_5
    int32_t edx_5
    eax_5, edx_5 = sub_4eb110(*arg2, edx_4, edi_1, arg2[1])
    sub_4bd500(eax_5, edx_5, arg1[1])
    int32_t eax_6
    int32_t edx_6
    edx_6:eax_6 = muls.dp.d(0x38e38e39, arg2[1] - *arg2)
    int32_t edx_7 = edx_6 s>> 3
    arg1[1] = *arg1 + ((edx_7 u>> 0x1f) + edx_7) * 0x24
    return 

int32_t eax_12
int32_t edx_11
edx_11:eax_12 = muls.dp.d(0x38e38e39, arg1[2] - edi_1)
int32_t edx_12 = edx_11 s>> 3

if (ebp_3 u<= (edx_12 u>> 0x1f) + edx_12)
    void* eax_16 = *arg2
    void* ebp_4 = eax_16 + ecx_7 * 0x24
    int32_t* var_14_2 = arg2
    int32_t* var_18 = arg2
    arg1[1] = sub_4eb380(ebp_4, sub_4eb110(eax_16, arg2, edi_1, ebp_4), arg1[1], arg2[1])
    return 

if (edi_1 != 0)
    sub_4bd500(edi_1, edx_12, arg1[1])
    int32_t var_14_3 = *arg1
    sub_6b4d5b()

int32_t eax_22
int32_t edx_15
edx_15:eax_22 = muls.dp.d(0x38e38e39, arg2[1] - *arg2)
int32_t edx_16 = edx_15 s>> 3

if (sub_4eaef0(arg1, (edx_16 u>> 0x1f) + edx_16) != 0)
    int32_t* var_14_4 = arg2
    arg1[1] = sub_4eb380(*arg2, arg2, *arg1, arg2[1])
