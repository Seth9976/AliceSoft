// 函数: sub_50a360
// 地址: 0x50a360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
int32_t ebx = *arg2
int32_t edi = arg2[1]
int32_t eax_3 = (edi - ebx) s/ 0xd4

if (eax_3 u> 3)
    sub_50a410(arg2, &var_4, ebx + 0x27c, edi)
    return 

if (eax_3 u>= 3)
    return 

sub_50a460(arg2, 3 - eax_3)
int32_t edi_1 = arg2[1]
int32_t var_10_3 = var_4
int32_t eax_6
int32_t edx_3
edx_3:eax_6 = muls.dp.d(0x4d4873ed, edi_1 - *arg2)
int32_t edx_4 = edx_3 s>> 6
int32_t eax_9 = (edx_4 u>> 0x1f) + edx_4
int32_t var_14_2 = 3 - eax_9
sub_50a640(eax_9, edi_1, 3 - eax_9)
int32_t edi_2 = arg2[1]
int32_t eax_10
int32_t edx_6
edx_6:eax_10 = muls.dp.d(0x4d4873ed, edi_2 - *arg2)
int32_t edx_7 = edx_6 s>> 6
arg2[1] = (3 - ((edx_7 u>> 0x1f) + edx_7)) * 0xd4 + edi_2
