// 函数: sub_5368e0
// 地址: 0x5368e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = arg4[1]
int32_t ebx = *arg4
int32_t eax_3 = (ecx - ebx) s/ 0x30

if (eax_3 u> arg1)
    eax_3 = arg1 * 0x30 + ebx
    
    if (eax_3 != ecx)
        int32_t var_10_1 = arg3
        void* eax_6
        int32_t edx_5
        eax_6, edx_5 = sub_536c40(eax_3, arg3, ecx, ecx)
        int32_t var_18 = arg3
        int32_t var_1c = arg4[1]
        int32_t eax_9 = sub_536c80(eax_6, edx_5)
        arg4[1] = eax_6
        return eax_9
else if (eax_3 u< arg1)
    sub_5369a0(arg4, arg1 - eax_3)
    void* ecx_4 = arg4[1]
    int32_t var_10_3 = arg3
    int32_t eax_11
    int32_t edx_10
    edx_10:eax_11 = muls.dp.d(0x2aaaaaab, ecx_4 - *arg4)
    int32_t edx_11 = edx_10 s>> 3
    int32_t eax_14 = (edx_11 u>> 0x1f) + edx_11
    int32_t edx_13 = arg1 - eax_14
    sub_536b20(eax_14, edx_13, ecx_4, edx_13)
    int32_t ebx_1 = arg4[1]
    int32_t eax_15
    int32_t edx_14
    edx_14:eax_15 = muls.dp.d(0x2aaaaaab, ebx_1 - *arg4)
    int32_t edx_15 = edx_14 s>> 3
    eax_3 = (edx_15 u>> 0x1f) + edx_15
    arg4[1] = (arg1 - eax_3) * 0x30 + ebx_1

return eax_3
