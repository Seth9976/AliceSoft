// 函数: sub_4bc7e0
// 地址: 0x4bc7e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
char* ebx = arg4[1]
int32_t ebp = *arg4
void* ecx_1 = ebx - ebp
int32_t result
void* edx
edx:result = muls.dp.d(0x92492493, ecx_1)
int32_t ecx_4 = ecx_1 s/ 0x1c

if (ecx_4 u> arg1)
    return sub_405410(arg4, &var_4, ebp + arg1 * 0x1c, ebx)

if (ecx_4 u< arg1)
    sub_405460(arg1 - ecx_4, (edx + ecx_1) s>> 4, arg4)
    int32_t* ecx_7 = arg4[1]
    int32_t var_14_2 = var_4
    int32_t eax_9 = (ecx_7 - *arg4) s/ 0x1c
    int32_t edx_8 = arg1 - eax_9
    PDB1::ResetGUID(eax_9, edx_8, ecx_7, edx_8)
    int32_t ebx_3 = arg4[1]
    result = (ebx_3 - *arg4) s/ 0x1c
    arg4[1] = ebx_3 + (arg1 - result) * 0x1c

return result
