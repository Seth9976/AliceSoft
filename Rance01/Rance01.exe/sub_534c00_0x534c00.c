// 函数: sub_534c00
// 地址: 0x534c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
void* ebx = *arg2
int32_t* edi = arg2[1]
int32_t result = (edi - ebx) s/ 0x14

if (result u> 1)
    return sub_534f70(arg2, &var_4, ebx + 0x14, edi)

if (result u< 1)
    sub_534fd0(arg2, 1 - result)
    int32_t* edi_1 = arg2[1]
    int32_t var_10_3 = var_4
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = muls.dp.d(0x66666667, edi_1 - *arg2)
    int32_t edx_4 = edx_3 s>> 3
    int32_t eax_8 = (edx_4 u>> 0x1f) + edx_4
    sub_5352c0(eax_8, edx_4, 1 - eax_8, edi_1)
    int32_t edi_2 = arg2[1]
    int32_t eax_9
    int32_t edx_5
    edx_5:eax_9 = muls.dp.d(0x66666667, edi_2 - *arg2)
    int32_t edx_6 = edx_5 s>> 3
    result = edi_2 + (1 - ((edx_6 u>> 0x1f) + edx_6)) * 0x14
    arg2[1] = result

return result
