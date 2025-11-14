// 函数: sub_617340
// 地址: 0x617340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = *arg1
int32_t* edi = arg1[1]
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, edi - ebx)
int32_t eax_3 = (edi - ebx) s/ 0x2c
int32_t ecx

if (eax_3 u<= 0xb)
    if (eax_3 u< 0xb)
        sub_617400(arg1, 0xb - eax_3)
        void* ecx_7 = arg1[1]
        int32_t var_10_3 = ecx
        int32_t eax_9
        int32_t edx_5
        edx_5:eax_9 = muls.dp.d(0x2e8ba2e9, ecx_7 - *arg1)
        int32_t edx_6 = edx_5 s>> 3
        int32_t eax_12 = (edx_6 u>> 0x1f) + edx_6
        sub_617580(eax_12, 0xb - eax_12, ecx_7, 0xb - eax_12)
        int32_t edi_2 = arg1[1]
        int32_t eax_13
        int32_t edx_8
        edx_8:eax_13 = muls.dp.d(0x2e8ba2e9, edi_2 - *arg1)
        int32_t edx_9 = edx_8 s>> 3
        eax_3 = (edx_9 u>> 0x1f) + edx_9
        arg1[1] = (0xb - eax_3) * 0x2c + edi_2
else if (ebx + 0x1e4 != edi)
    int32_t var_10_1 = ecx
    char* eax_6 = sub_617670(edi, edx s>> 3, ebx + 0x1e4, edi)
    int32_t var_18 = ecx
    int32_t eax_7 = sub_6176c0(eax_6, arg1[1])
    arg1[1] = eax_6
    return eax_7
return eax_3
