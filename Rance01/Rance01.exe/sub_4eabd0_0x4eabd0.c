// 函数: sub_4eabd0
// 地址: 0x4eabd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2

if (arg1 == ebx)
    return 

int32_t ecx_2 = ebx[1] - *ebx
int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x92492493, ecx_2)
int32_t edx_3 = (edx_1 + ecx_2) s>> 4
int32_t ebp_3 = ecx_2 s/ 0x1c

if (edx_3 u>> 0x1f == neg.d(edx_3))
    sub_4eaf60(ecx_2, arg1)
    return 

int32_t* edi_1 = *arg1
void* ecx_4 = arg1[1] - edi_1
int32_t eax_2
void* edx_4
edx_4:eax_2 = muls.dp.d(0x92492493, ecx_4)
int32_t ecx_7 = ecx_4 s/ 0x1c

if (ebp_3 u<= ecx_7)
    void* var_14_1 = arg2
    int32_t* eax_5
    int32_t edx_7
    eax_5, edx_7 = sub_4eb170(*ebx, (edx_4 + ecx_4) s>> 4, edi_1, ebx[1])
    sub_4bd770(eax_5, edx_7, arg1[1])
    arg1[1] = *arg1 + (ebx[1] - *ebx) s/ 0x1c * 0x1c
    return 

void* edx_13 = arg1[2] - edi_1
int32_t eax_12
void* edx_14
edx_14:eax_12 = muls.dp.d(0x92492493, edx_13)

if (ebp_3 u<= edx_13 s/ 0x1c)
    void* eax_16 = *ebx
    int32_t edx_18 = ecx_7 * 7
    void* ebp_4 = eax_16 + (edx_18 << 2)
    void* var_14_2 = edx_13
    sub_4eb170(eax_16, edx_18, edi_1, ebp_4)
    void* var_18 = edx_13
    arg1[1] = sub_4eb050(ebp_4, edx_13, arg1[1], ebx[1])
    return 

if (edi_1 != 0)
    sub_4bd770(edi_1, (edx_14 + edx_13) s>> 4, arg1[1])
    int32_t var_14_3 = *arg1
    sub_6b4d5b()

if (sub_4eae60(arg1, (ebx[1] - *ebx) s/ 0x1c) != 0)
    void* var_14_4 = edx_13
    arg1[1] = sub_4eb050(*ebx, edx_13, *arg1, ebx[1])
