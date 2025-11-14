// 函数: sub_535540
// 地址: 0x535540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == arg2)
    return 

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
int32_t edx_2 = edx_1 s>> 2
uint32_t ecx_4 = edx_2 u>> 0x1f
int32_t ecx_5 = ecx_4 + edx_2

if (ecx_4 == neg.d(edx_2))
    int32_t* ecx_6 = arg1[1]
    int32_t* eax_1 = *arg1
    
    if (eax_1 != ecx_6)
        void* eax_2
        int32_t edx_3
        eax_2, edx_3 = sub_532d20(eax_1, edx_2, ecx_6, ecx_6)
        int32_t var_14_1 = arg1[1]
        sub_6367f0(eax_2, edx_3)
        arg1[1] = eax_2
    
    return 

int32_t* ebp_1 = *arg1
int32_t eax_6
int32_t edx_6
edx_6:eax_6 = muls.dp.d(0x2aaaaaab, arg1[1] - ebp_1)
int32_t edx_7 = edx_6 s>> 2
int32_t edi_4 = (edx_7 u>> 0x1f) + edx_7

if (ecx_5 u<= edi_4)
    void* eax_9
    int32_t edx_8
    eax_9, edx_8 = sub_532d20(ebp_1, edx_7, *arg2, arg2[1])
    int32_t var_18_1 = arg1[1]
    sub_6367f0(eax_9, edx_8)
    int32_t eax_10
    int32_t edx_9
    edx_9:eax_10 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
    int32_t edx_10 = edx_9 s>> 2
    arg1[1] = &(*arg1)[((edx_10 u>> 0x1f) + edx_10) * 6]
    return 

int32_t eax_16
int32_t edx_14
edx_14:eax_16 = muls.dp.d(0x2aaaaaab, arg1[2] - ebp_1)
int32_t edx_15 = edx_14 s>> 2

if (ecx_5 u<= (edx_15 u>> 0x1f) + edx_15)
    int32_t* ecx_12 = *arg2
    int32_t edx_16 = edi_4 * 3
    void* edi_5 = &ecx_12[edx_16 * 2]
    int32_t edx_17 = sub_532d20(ebp_1, edx_16, ecx_12, edi_5)
    int32_t* eax_21 = arg1[1]
    int32_t* var_18_2 = arg2
    arg1[1] = sub_535710(eax_21, edx_17, edi_5, arg2[1], eax_21)
    return 

if (ebp_1 != 0)
    int32_t var_14_4 = arg1[1]
    sub_6367f0(ebp_1, edx_15)
    int32_t* var_18_3 = *arg1
    sub_6b4d5b()

int32_t eax_26
int32_t edx_19
edx_19:eax_26 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
int32_t edx_20 = edx_19 s>> 2

if (sub_5356a0(arg1, (edx_20 u>> 0x1f) + edx_20) == 0)
    return 

int32_t* eax_28 = *arg1
int32_t edx_21 = arg2[1]
int32_t* var_14_5 = arg2
arg1[1] = sub_535710(eax_28, edx_21, *arg2, edx_21, eax_28)
