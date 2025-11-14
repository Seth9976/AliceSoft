// 函数: sub_4cfbd0
// 地址: 0x4cfbd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2[1]
void* ebp = *arg2
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x4ec4ec4f, ebx - ebp)
int32_t eax_3 = (ebx - ebp) s/ 0x34
int32_t ecx

if (eax_3 u> arg1)
    void* ecx_3 = ebp + arg1 * 0x34
    
    if (ecx_3 != ebx)
        int32_t var_14_1 = ecx
        void* eax_6 = sub_4d01f0(ebx, edx s>> 4, ecx_3, ebx)
        int32_t var_1c = ecx
        struct _EXCEPTION_REGISTRATION_RECORD** eax_7 = sub_4d0240(eax_6, arg2[1])
        arg2[1] = eax_6
        return eax_7
else if (eax_3 u< arg1)
    sub_4cfd60(arg2, arg1 - eax_3)
    void* ecx_9 = arg2[1]
    int32_t var_14_3 = ecx
    int32_t eax_8
    int32_t edx_6
    edx_6:eax_8 = muls.dp.d(0x4ec4ec4f, ecx_9 - *arg2)
    int32_t edx_7 = edx_6 s>> 4
    int32_t eax_11 = (edx_7 u>> 0x1f) + edx_7
    int32_t edx_9 = arg1 - eax_11
    sub_4d00b0(eax_11, edx_9, ecx_9, edx_9)
    int32_t ebx_1 = arg2[1]
    int32_t eax_12
    int32_t edx_10
    edx_10:eax_12 = muls.dp.d(0x4ec4ec4f, ebx_1 - *arg2)
    int32_t edx_11 = edx_10 s>> 4
    eax_3 = (edx_11 u>> 0x1f) + edx_11
    arg2[1] = (arg1 - eax_3) * 0x34 + ebx_1
return eax_3
