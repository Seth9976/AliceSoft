// 函数: sub_4b0de0
// 地址: 0x4b0de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg4[1]
int32_t ebp = *arg4
void* ecx_1 = ebx - ebp
int32_t eax
void* edx
edx:eax = muls.dp.d(0x88888889, ecx_1)
int32_t ecx_4 = ecx_1 s/ 0x3c

if (ecx_4 u> arg1)
    void* ecx_5 = ebp + arg1 * 0x3c
    
    if (ecx_5 != ebx)
        int32_t var_14_1 = arg3
        void* eax_5 = sub_4b11c0(ebx, arg3, ecx_5, ebx)
        sub_4b1040(eax_5, arg4[1])
        arg4[1] = eax_5
else if (ecx_4 u< arg1)
    sub_4b0eb0(arg1 - ecx_4, (edx + ecx_1) s>> 5, arg4)
    void* ecx_8 = arg4[1]
    int32_t var_14_2 = arg3
    int32_t eax_12 = (ecx_8 - *arg4) s/ 0x3c
    int32_t edx_8 = arg1 - eax_12
    sub_4b1080(eax_12, edx_8, ecx_8, edx_8)
    int32_t ebx_4 = arg4[1]
    arg4[1] = ebx_4 + (arg1 - (ebx_4 - *arg4) s/ 0x3c) * 0x3c
