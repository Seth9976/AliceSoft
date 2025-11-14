// 函数: sub_4b23d0
// 地址: 0x4b23d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
int32_t ebx = arg4[1]
int32_t ebp = *arg4
int32_t ecx_1 = ebx - ebp
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x92492493, ecx_1)
int32_t ecx_4 = ecx_1 s/ 0x1c

if (ecx_4 u> arg1)
    sub_4b25d0(arg4, &var_4, ebp + arg1 * 0x1c, ebx)
    return 

if (ecx_4 u>= arg1)
    return 

sub_4b2620(arg1 - ecx_4, (edx + ecx_1) s>> 4, arg4)
int32_t ebx_1 = arg4[1]
int32_t var_14_2 = var_4
sub_4b2830(ebx_1, arg1 - (ebx_1 - *arg4) s/ 0x1c)
int32_t ebx_2 = arg4[1]
arg4[1] = ebx_2 + (arg1 - (ebx_2 - *arg4) s/ 0x1c) * 0x1c
