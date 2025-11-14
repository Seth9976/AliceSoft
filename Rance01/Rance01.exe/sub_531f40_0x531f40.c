// 函数: sub_531f40
// 地址: 0x531f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg2[1]
void* ebp = *arg2
void* ecx_2 = ebx - ebp
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, ecx_2)
void* eax_3 = ecx_2 s/ 0x2c
int32_t ecx

if (eax_3 u> arg1)
    eax_3 = ebp + arg1 * 0x2c
    
    if (eax_3 != ebx)
        int32_t var_14_1 = ebx
        int32_t var_18_1 = ebx
        void* eax_4
        int32_t edx_2
        eax_4, edx_2 = sub_532550(eax_3, edx s>> 3, ecx_2)
        int32_t var_1c = ecx
        int32_t var_20 = arg2[1]
        int32_t eax_7 = sub_532810(eax_4, edx_2)
        arg2[1] = eax_4
        return eax_7
else if (eax_3 u< arg1)
    sub_532140(arg2, arg1 - eax_3)
    void* ecx_6 = arg2[1]
    int32_t var_14_3 = ecx
    int32_t eax_9
    int32_t edx_7
    edx_7:eax_9 = muls.dp.d(0x2e8ba2e9, ecx_6 - *arg2)
    int32_t edx_8 = edx_7 s>> 3
    int32_t eax_12 = (edx_8 u>> 0x1f) + edx_8
    int32_t edx_10 = arg1 - eax_12
    sub_5326b0(eax_12, edx_10, ecx_6, edx_10)
    int32_t ebx_1 = arg2[1]
    int32_t eax_13
    int32_t edx_11
    edx_11:eax_13 = muls.dp.d(0x2e8ba2e9, ebx_1 - *arg2)
    int32_t edx_12 = edx_11 s>> 3
    eax_3 = (edx_12 u>> 0x1f) + edx_12
    arg2[1] = (arg1 - eax_3) * 0x2c + ebx_1
return eax_3
