// 函数: sub_55cbd0
// 地址: 0x55cbd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = *arg2
void* edi = arg2[1]
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, edi - ebp)
int32_t eax_3 = (edi - ebp) s/ 0x2c

if (eax_3 u> arg1)
    void* ecx_2 = ebp + arg1 * 0x2c
    
    if (ecx_2 != edi)
        int32_t* var_14_1 = arg2
        void* eax_6 = sub_52fc30(edi, edx s>> 3, ecx_2, edi)
        int32_t eax_7 = sub_52f330(eax_6, arg2[1])
        arg2[1] = eax_6
        return eax_7
else if (eax_3 u< arg1)
    sub_55cc90(arg2, arg1 - eax_3)
    void* ecx_6 = arg2[1]
    int32_t* var_14_3 = arg2
    int32_t eax_8
    int32_t edx_5
    edx_5:eax_8 = muls.dp.d(0x2e8ba2e9, ecx_6 - *arg2)
    int32_t edx_6 = edx_5 s>> 3
    int32_t eax_11 = (edx_6 u>> 0x1f) + edx_6
    int32_t edx_8 = arg1 - eax_11
    sub_55ce10(eax_11, edx_8, ecx_6, edx_8)
    int32_t edi_2 = arg2[1]
    int32_t eax_12
    int32_t edx_9
    edx_9:eax_12 = muls.dp.d(0x2e8ba2e9, edi_2 - *arg2)
    int32_t edx_10 = edx_9 s>> 3
    eax_3 = (edx_10 u>> 0x1f) + edx_10
    arg2[1] = (arg1 - eax_3) * 0x2c + edi_2

return eax_3
