// 函数: sub_4f55f0
// 地址: 0x4f55f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
int32_t ebx = arg4[1]
int32_t ebp = *arg4
int32_t eax_3 = (ebx - ebp) s/ 0x6c

if (eax_3 u> arg1)
    sub_4f5aa0(arg4, &var_4, arg1 * 0x6c + ebp, ebx)
    return 

if (eax_3 u>= arg1)
    return 

sub_4f5af0(arg4, arg1 - eax_3)
int32_t ebx_1 = arg4[1]
int32_t var_14_3 = var_4
int32_t ecx_7 = ebx_1 - *arg4
int32_t eax_8 = ecx_7 s/ 0x6c
int32_t var_18_2 = ebx_1
sub_4f6720(eax_8, arg1 - eax_8, ecx_7)
int32_t ebx_2 = arg4[1]
int32_t eax_9
int32_t edx_7
edx_7:eax_9 = muls.dp.d(0x4bda12f7, ebx_2 - *arg4)
int32_t edx_8 = edx_7 s>> 5
arg4[1] = (arg1 - ((edx_8 u>> 0x1f) + edx_8)) * 0x6c + ebx_2
