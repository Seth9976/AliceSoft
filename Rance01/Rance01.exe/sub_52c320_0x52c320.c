// 函数: sub_52c320
// 地址: 0x52c320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
sub_52c800(ecx, arg1)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, *(arg2 + 0x70) - *(arg2 + 0x6c))
int32_t edx_1 = edx s>> 5
sub_52c430(arg1, (edx_1 u>> 0x1f) + edx_1, arg2)
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x2aaaaaab, *(arg2 + 0xb0) - *(arg2 + 0xac))
int32_t* ecx_6 = arg1[5]
int32_t* eax_5 = arg1[4]
int32_t edx_3 = edx_2 s>> 3

if (eax_5 != ecx_6)
    int32_t* var_18_1 = arg1
    int32_t* eax_6
    int32_t edx_5
    eax_6, edx_5 = sub_52d750(eax_5, arg1, ecx_6, ecx_6)
    int32_t* var_20_1 = arg1
    int32_t var_24_1 = arg1[5]
    sub_52d870(eax_6, edx_5)
    arg1[5] = eax_6

sub_52cda0((edx_3 u>> 0x1f) + edx_3, &arg1[4])
int32_t ebp_3 = *(arg2 + 0xac)
int32_t ecx_9 = *(arg2 + 0xb0) - ebp_3
int32_t eax_10
int32_t edx_6
edx_6:eax_10 = muls.dp.d(0x2aaaaaab, ecx_9)
int32_t edx_7 = edx_6 s>> 3
int32_t edi_1 = 0
int32_t result = ecx_9 s/ 0x30

if (edx_7 u>> 0x1f == neg.d(edx_7))
    return result

int32_t esi_2 = 0
int32_t eax_13

if (0 u>= result)
    eax_13 = 0
    goto label_52c3f4

do
    ecx_9 = *(esi_2 + ebp_3 + 0x20) - *(esi_2 + ebp_3 + 0x1c)
    eax_13 = ecx_9 s/ 0x38
label_52c3f4:
    sub_52c550(ecx_9, arg1, edi_1, eax_13, arg2)
    ebp_3 = *(arg2 + 0xac)
    int32_t eax_17
    int32_t edx_12
    edx_12:eax_17 = muls.dp.d(0x2aaaaaab, *(arg2 + 0xb0) - ebp_3)
    int32_t edx_13 = edx_12 s>> 3
    edi_1 += 1
    result = (edx_13 u>> 0x1f) + edx_13
    esi_2 += 0x30
while (edi_1 u< result)

return result
