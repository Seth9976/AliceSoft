// 函数: sub_4f5520
// 地址: 0x4f5520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg4[1]
int32_t ebp = *arg4
void* ebx_1 = ecx - ebp
int32_t eax
void* edx
edx:eax = muls.dp.d(0x92492493, ebx_1)
int32_t ebx_4 = ebx_1 s/ 0x1c

if (ebx_4 u> arg1)
    int32_t* eax_3 = ebp + arg1 * 0x1c
    
    if (eax_3 != ecx)
        int32_t var_14_1 = arg3
        void* eax_4
        int32_t edx_4
        eax_4, edx_4 = sub_4f6980(eax_3, arg3, ecx, ecx)
        int32_t var_1c = arg4[1]
        sub_4f6470(eax_4, edx_4)
        arg4[1] = eax_4
else if (ebx_4 u< arg1)
    sub_4f59f0(arg1 - ebx_4, (edx + ebx_1) s>> 4, arg4)
    float* ebx_5 = arg4[1]
    int32_t var_14_2 = arg3
    void* ecx_5 = ebx_5 - *arg4
    int32_t eax_9
    void* edx_5
    edx_5:eax_9 = muls.dp.d(0x92492493, ecx_5)
    int32_t eax_12 = ecx_5 s/ 0x1c
    sub_4f6660(eax_12, (edx_5 + ecx_5) s>> 4, arg1 - eax_12, ebx_5)
    int32_t ebx_6 = arg4[1]
    arg4[1] = ebx_6 + (arg1 - (ebx_6 - *arg4) s/ 0x1c) * 0x1c
