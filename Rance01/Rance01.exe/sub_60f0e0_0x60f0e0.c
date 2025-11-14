// 函数: sub_60f0e0
// 地址: 0x60f0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2[1]
int32_t ebp = *arg2
void* ecx_1 = ebx - ebp
int32_t result
void* edx
edx:result = muls.dp.d(0x92492493, ecx_1)
int32_t ecx_4 = ecx_1 s/ 0x38
int32_t var_4

if (ecx_4 u> arg1)
    return sub_60f1a0(arg2, &var_4, ebp + arg1 * 0x38, ebx)

if (ecx_4 u< arg1)
    sub_60f200(arg1 - ecx_4, (edx + ecx_1) s>> 5, arg2)
    void* ecx_6 = arg2[1]
    int32_t var_18_2 = var_4
    int32_t eax_9 = (ecx_6 - *arg2) s/ 0x38
    int32_t edx_8 = arg1 - eax_9
    sub_60f280(eax_9, edx_8, ecx_6, edx_8)
    int32_t ebx_3 = arg2[1]
    result = (ebx_3 - *arg2) s/ 0x38
    arg2[1] = ebx_3 + (arg1 - result) * 0x38

return result
