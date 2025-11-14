// 函数: sub_4ecc20
// 地址: 0x4ecc20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2[1]
int32_t ebp = *arg2
int32_t eax_3 = (ebx - ebp) s/ 0x18
int32_t var_4

if (eax_3 u> arg1)
    sub_4ecda0(arg2, &var_4, ebp + arg1 * 0x18, ebx)
    return 

if (eax_3 u>= arg1)
    return 

sub_4ece10(arg2, arg1 - eax_3)
void* ebx_1 = arg2[1]
int32_t var_18_3 = var_4
int32_t eax_7
int32_t edx_4
edx_4:eax_7 = muls.dp.d(0x2aaaaaab, ebx_1 - *arg2)
int32_t edx_5 = edx_4 s>> 2
int32_t edx_6 = edx_5 + (edx_5 u>> 0x1f)
sub_4ed100(ebx_1, edx_6, arg1 - edx_6)
int32_t ebx_2 = arg2[1]
int32_t eax_9
int32_t edx_7
edx_7:eax_9 = muls.dp.d(0x2aaaaaab, ebx_2 - *arg2)
int32_t edx_8 = edx_7 s>> 2
arg2[1] = ebx_2 + (arg1 - ((edx_8 u>> 0x1f) + edx_8)) * 0x18
