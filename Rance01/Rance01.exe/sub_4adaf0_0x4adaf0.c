// 函数: sub_4adaf0
// 地址: 0x4adaf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == arg2)
    return 

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
int32_t edx_2 = edx_1 s>> 1
uint32_t ebp_2 = edx_2 u>> 0x1f
int32_t ebp_3 = ebp_2 + edx_2

if (ebp_2 == neg.d(edx_2))
    sub_4f6d70(arg1)
    return 

int32_t* ecx_3 = *arg1
int32_t eax_2
int32_t edx_5
edx_5:eax_2 = muls.dp.d(0x2aaaaaab, arg1[1] - ecx_3)
int32_t edx_6 = edx_5 s>> 1
int32_t edi_3 = (edx_6 u>> 0x1f) + edx_6

if (ebp_3 u<= edi_3)
    sub_4ae070(eax_2, arg2[1], *arg2, ecx_3)
    int32_t eax_3
    int32_t edx_8
    edx_8:eax_3 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
    int32_t edx_9 = edx_8 s>> 1
    arg1[1] = *arg1 + ((edx_9 u>> 0x1f) + edx_9) * 0xc
    return 

int32_t eax_9
int32_t edx_13
edx_13:eax_9 = muls.dp.d(0x2aaaaaab, arg1[2] - ecx_3)
int32_t edx_14 = edx_13 s>> 1

if (ebp_3 u<= (edx_14 u>> 0x1f) + edx_14)
    int32_t* eax_13 = *arg2
    void* edi_4 = &eax_13[edi_3 * 3]
    sub_4ae070(eax_13, edi_4, eax_13, ecx_3)
    int32_t* var_18_1 = arg2
    void* var_1c = edi_4
    arg1[1] = sub_64dc90(arg1[1], arg2[1], arg2)
    return 

if (ecx_3 != 0)
    int32_t* var_14_3 = ecx_3
    sub_6b4d5b()

int32_t eax_17
int32_t edx_18
edx_18:eax_17 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
int32_t edx_19 = edx_18 s>> 1

if (sub_4f6da0(arg1, (edx_19 u>> 0x1f) + edx_19) == 0)
    return 

int32_t* var_14_4 = arg2
int32_t var_18_2 = *arg2
arg1[1] = sub_64dc90(*arg1, arg2[1], arg2)
