// 函数: sub_56cde0
// 地址: 0x56cde0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = *arg1
void* edi = arg1[1]
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x66666667, edi - ebx)
int32_t eax_3 = (edi - ebx) s/ 0x28
int32_t ecx

if (eax_3 u<= 0x40)
    if (eax_3 u< 0x40)
        sub_56cea0(arg1, 0x40 - eax_3)
        void* ecx_7 = arg1[1]
        int32_t var_10_3 = ecx
        int32_t eax_9
        int32_t edx_5
        edx_5:eax_9 = muls.dp.d(0x66666667, ecx_7 - *arg1)
        int32_t edx_6 = edx_5 s>> 4
        int32_t eax_12 = (edx_6 u>> 0x1f) + edx_6
        sub_56d030(eax_12, 0x40 - eax_12, ecx_7, 0x40 - eax_12)
        int32_t edi_2 = arg1[1]
        int32_t eax_13
        int32_t edx_8
        edx_8:eax_13 = muls.dp.d(0x66666667, edi_2 - *arg1)
        int32_t edx_9 = edx_8 s>> 4
        eax_3 = edi_2 + (0x40 - ((edx_9 u>> 0x1f) + edx_9)) * 0x28
        arg1[1] = eax_3
else if (ebx + 0xa00 != edi)
    int32_t var_10_1 = ecx
    int32_t* eax_6 = sub_56d120(edi, (edx s>> 4).b, ebx + 0xa00, edi)
    int32_t var_18 = ecx
    int32_t eax_7 = sub_62a5b0(eax_6, arg1[1])
    arg1[1] = eax_6
    return eax_7
return eax_3
