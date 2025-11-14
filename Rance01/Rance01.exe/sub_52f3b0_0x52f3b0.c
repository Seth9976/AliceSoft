// 函数: sub_52f3b0
// 地址: 0x52f3b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2[1]
int32_t ebp = *arg2
int32_t* ecx_2 = ebx - ebp
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, ecx_2)
int32_t eax_3 = ecx_2 s/ 0x4c
int32_t ecx

if (eax_3 u> arg1)
    int32_t esi_2 = arg1 * 0x4c + ebp
    
    if (esi_2 != ebx)
        int32_t var_14_1 = ecx
        int32_t var_18_1 = esi_2
        void* var_1c = ebx
        int32_t* eax_6 = sub_52f710(ebx, edx s>> 5, ecx_2)
        int32_t edx_2 = arg2[1]
        int32_t var_20 = ecx
        int32_t var_24 = edx_2
        int32_t eax_7 = sub_52f790(eax_6, edx_2)
        arg2[1] = eax_6
        return eax_7
else if (eax_3 u< arg1)
    sub_52f470(arg2, arg1 - eax_3)
    int32_t* ecx_8 = arg2[1]
    int32_t var_14_3 = ecx
    int32_t eax_8
    int32_t edx_6
    edx_6:eax_8 = muls.dp.d(0x6bca1af3, ecx_8 - *arg2)
    int32_t edx_7 = edx_6 s>> 5
    int32_t eax_11 = (edx_7 u>> 0x1f) + edx_7
    int32_t edx_9 = arg1 - eax_11
    sub_52f5f0(eax_11, edx_9, ecx_8, edx_9)
    int32_t ebx_1 = arg2[1]
    int32_t eax_12
    int32_t edx_10
    edx_10:eax_12 = muls.dp.d(0x6bca1af3, ebx_1 - *arg2)
    int32_t edx_11 = edx_10 s>> 5
    eax_3 = (edx_11 u>> 0x1f) + edx_11
    arg2[1] = (arg1 - eax_3) * 0x4c + ebx_1
return eax_3
