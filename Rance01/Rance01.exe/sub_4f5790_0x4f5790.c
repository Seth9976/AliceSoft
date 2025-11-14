// 函数: sub_4f5790
// 地址: 0x4f5790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg4[1]
int32_t ebp = *arg4
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x78787879, ebx - ebp)
int32_t eax_3 = (ebx - ebp) s/ 0x44

if (eax_3 u> arg1)
    int32_t eax_7 = ebp + arg1 * 0x44
    
    if (eax_7 != ebx)
        void* var_14_1 = arg3
        int32_t var_18_1 = eax_7
        void* var_1c = ebx
        void* eax_9 = sub_4f69c0(ebx, edx s>> 5, arg3)
        void* var_20 = arg3
        sub_4f6a90(eax_9, arg4[1])
        arg4[1] = eax_9
else if (eax_3 u< arg1)
    sub_4f5c30(arg4, arg1 - eax_3)
    char* ecx_7 = arg4[1]
    void* var_14_3 = arg3
    int32_t eax_10
    int32_t edx_6
    edx_6:eax_10 = muls.dp.d(0x78787879, ecx_7 - *arg4)
    int32_t edx_7 = edx_6 s>> 5
    int32_t eax_13 = (edx_7 u>> 0x1f) + edx_7
    int32_t edx_9 = arg1 - eax_13
    sub_4f6790(eax_13, edx_9, ecx_7, edx_9)
    int32_t ebx_2 = arg4[1]
    int32_t eax_14
    int32_t edx_10
    edx_10:eax_14 = muls.dp.d(0x78787879, ebx_2 - *arg4)
    int32_t edx_11 = edx_10 s>> 5
    arg4[1] = ebx_2 + (arg1 - ((edx_11 u>> 0x1f) + edx_11)) * 0x44
