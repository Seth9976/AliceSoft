// 函数: sub_599260
// 地址: 0x599260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = *arg2
void* edi = arg2[1]
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x4ec4ec4f, edi - ebp)
int32_t eax_3 = (edi - ebp) s/ 0x68

if (eax_3 u> arg1)
    int32_t* ecx_2 = ebp + arg1 * 0x68
    
    if (ecx_2 != edi)
        int32_t* var_14_1 = arg2
        int32_t* eax_6 = sub_59b2d0(edi, edx s>> 5, ecx_2, edi)
        int32_t* var_1c = arg2
        int32_t eax_7 = sub_599660(eax_6, arg2[1])
        arg2[1] = eax_6
        return eax_7
else if (eax_3 u< arg1)
    sub_599370(arg2, arg1 - eax_3)
    int32_t* ecx_5 = arg2[1]
    int32_t* var_14_3 = arg2
    int32_t eax_9
    int32_t edx_6
    edx_6:eax_9 = muls.dp.d(0x4ec4ec4f, ecx_5 - *arg2)
    int32_t edx_7 = edx_6 s>> 5
    int32_t eax_12 = (edx_7 u>> 0x1f) + edx_7
    int32_t edx_9 = arg1 - eax_12
    sub_599550(eax_12, edx_9, ecx_5, edx_9)
    int32_t edi_2 = arg2[1]
    int32_t eax_13
    int32_t edx_10
    edx_10:eax_13 = muls.dp.d(0x4ec4ec4f, edi_2 - *arg2)
    int32_t edx_11 = edx_10 s>> 5
    eax_3 = (edx_11 u>> 0x1f) + edx_11
    arg2[1] = (arg1 - eax_3) * 0x68 + edi_2

return eax_3
