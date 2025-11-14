// 函数: sub_4fc6a0
// 地址: 0x4fc6a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg4[1]
void* ebx = *arg4
int32_t eax_3 = (ecx - ebx) s/ 0x2c

if (eax_3 u> arg1)
    int32_t* eax_4 = ebx + arg1 * 0x2c
    
    if (eax_4 != ecx)
        int32_t var_10_1 = arg3
        void* eax_5
        int32_t edx_5
        eax_5, edx_5 = sub_4feba0(eax_4, arg3, ecx, ecx)
        int32_t var_18 = arg3
        int32_t var_1c = arg4[1]
        sub_4fec80(eax_5, edx_5)
        arg4[1] = eax_5
else if (eax_3 u< arg1)
    sub_4fce40(arg4, arg1 - eax_3)
    float* ebx_1 = arg4[1]
    int32_t var_10_3 = arg3
    int32_t eax_9
    int32_t edx_8
    edx_8:eax_9 = muls.dp.d(0x2e8ba2e9, ebx_1 - *arg4)
    int32_t edx_9 = edx_8 s>> 3
    int32_t edx_10 = edx_9 + (edx_9 u>> 0x1f)
    sub_4fe8e0(eax_9, edx_10, arg1 - edx_10, ebx_1)
    int32_t ebx_2 = arg4[1]
    int32_t eax_10
    int32_t edx_11
    edx_11:eax_10 = muls.dp.d(0x2e8ba2e9, ebx_2 - *arg4)
    int32_t edx_12 = edx_11 s>> 3
    arg4[1] = (arg1 - ((edx_12 u>> 0x1f) + edx_12)) * 0x2c + ebx_2
