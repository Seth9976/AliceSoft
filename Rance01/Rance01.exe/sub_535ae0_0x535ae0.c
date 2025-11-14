// 函数: sub_535ae0
// 地址: 0x535ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = *arg2
void* edi = arg2[1]
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, edi - ebp)
int32_t eax_3 = (edi - ebp) s/ 0x2c

if (eax_3 u> arg1)
    int32_t* ecx_2 = ebp + arg1 * 0x2c
    
    if (ecx_2 != edi)
        int32_t* var_14_1 = arg2
        int32_t* eax_6 = sub_535e30(edi, edx s>> 3, ecx_2, edi)
        int32_t* var_1c = arg2
        sub_535e80(eax_6, arg2[1])
        arg2[1] = eax_6
else if (eax_3 u< arg1)
    sub_535bb0(arg2, arg1 - eax_3)
    void* ecx_5 = arg2[1]
    int32_t* var_14_3 = arg2
    int32_t eax_8
    int32_t edx_6
    edx_6:eax_8 = muls.dp.d(0x2e8ba2e9, ecx_5 - *arg2)
    int32_t edx_7 = edx_6 s>> 3
    int32_t eax_11 = (edx_7 u>> 0x1f) + edx_7
    int32_t edx_9 = arg1 - eax_11
    sub_535d30(eax_11, edx_9, ecx_5, edx_9)
    int32_t edi_2 = arg2[1]
    int32_t eax_12
    int32_t edx_10
    edx_10:eax_12 = muls.dp.d(0x2e8ba2e9, edi_2 - *arg2)
    int32_t edx_11 = edx_10 s>> 3
    arg2[1] = (arg1 - ((edx_11 u>> 0x1f) + edx_11)) * 0x2c + edi_2
