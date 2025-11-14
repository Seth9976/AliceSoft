// 函数: sub_4ea570
// 地址: 0x4ea570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2

if (arg1 == ebx)
    return 

int32_t ecx_2 = ebx[1] - *ebx
int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x92492493, ecx_2)
int32_t* ecx_3 = *arg1
int32_t edx_3 = (edx_1 + ecx_2) s>> 4
int32_t edi_3 = ecx_2 s/ 0x1c

if (edx_3 u>> 0x1f == neg.d(edx_3))
    sub_405410(arg1, &arg2, ecx_3, arg1[1])
    return 

void* ebp_2 = arg1[1] - ecx_3
int32_t eax_3
void* edx_4
edx_4:eax_3 = muls.dp.d(0x92492493, ebp_2)
int32_t ebp_5 = ebp_2 s/ 0x1c

if (edi_3 u<= ebp_5)
    sub_405780(sub_4eb0a0(*ebx, (edx_4 + ebp_2) s>> 4, ecx_3, ebx[1]), arg1[1])
    arg1[1] = *arg1 + (ebx[1] - *ebx) s/ 0x1c * 0x1c
    return 

void* edx_12 = arg1[2] - ecx_3
arg2 = edx_12
int32_t eax_13
int32_t edx_13
edx_13:eax_13 = muls.dp.d(0x92492493, edx_12)
int32_t edx_15 = (edx_13 + arg2) s>> 4

if (edi_3 u<= (edx_15 u>> 0x1f) + edx_15)
    int32_t* eax_17 = *ebx
    int32_t edx_17 = ebp_5 * 7
    void* edi_5 = &eax_17[edx_17]
    int32_t edx_18 = sub_4eb0a0(eax_17, edx_17, ecx_3, edi_5)
    char* eax_18 = arg1[1]
    void* var_18_2 = arg2
    arg1[1] = sub_4eb270(eax_18, edx_18, edi_5, ebx[1], eax_18)
    return 

if (ecx_3 != 0)
    sub_405780(ecx_3, arg1[1])
    int32_t var_14_4 = *arg1
    sub_6b4d5b()

if (sub_4eae60(arg1, (ebx[1] - *ebx) s/ 0x1c) == 0)
    return 

char* eax_24 = *arg1
int32_t edx_23 = ebx[1]
void* var_14_5 = arg2
arg1[1] = sub_4eb270(eax_24, edx_23, *ebx, edx_23, eax_24)
