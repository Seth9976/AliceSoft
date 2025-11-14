// 函数: sub_6365c0
// 地址: 0x6365c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_1 = arg2[1]
int32_t ebx = *arg2
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, ecx_1 - ebx)
int32_t* eax_3 = (ecx_1 - ebx) s/ 0x18

if (eax_3 u> arg1)
    eax_3 = ebx + arg1 * 0x18
    
    if (eax_3 != ecx_1)
        void* eax_5
        int32_t edx_4
        eax_5, edx_4 = sub_532d20(eax_3, edx_2 s>> 2, ecx_1, ecx_1)
        int32_t var_10_2 = arg2[1]
        int32_t eax_6 = sub_6367f0(eax_5, edx_4)
        arg2[1] = eax_5
        return eax_6
else if (eax_3 u< arg1)
    sub_636670(arg2, arg1 - eax_3)
    int32_t* ebx_1 = arg2[1]
    int32_t ecx
    int32_t var_10_4 = ecx
    int32_t eax_8
    int32_t edx_7
    edx_7:eax_8 = muls.dp.d(0x2aaaaaab, ebx_1 - *arg2)
    int32_t edx_8 = edx_7 s>> 2
    int32_t edx_9 = edx_8 + (edx_8 u>> 0x1f)
    sub_636830(eax_8, edx_9, arg1 - edx_9, ebx_1)
    int32_t ebx_2 = arg2[1]
    int32_t eax_9
    int32_t edx_10
    edx_10:eax_9 = muls.dp.d(0x2aaaaaab, ebx_2 - *arg2)
    int32_t edx_11 = edx_10 s>> 2
    eax_3 = (edx_11 u>> 0x1f) + edx_11
    arg2[1] = ebx_2 + (arg1 - eax_3) * 0x18

return eax_3
