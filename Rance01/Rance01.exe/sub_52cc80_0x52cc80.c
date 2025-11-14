// 函数: sub_52cc80
// 地址: 0x52cc80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2[1]
int32_t ebp = *arg2
void* ecx_1 = ebx - ebp
int32_t eax
void* edx
edx:eax = muls.dp.d(0x92492493, ecx_1)
int32_t ecx_4 = ecx_1 s/ 0x38
int32_t var_4

if (ecx_4 u> arg1)
    eax = arg1 * 7
    void* ecx_5 = ebp + (eax << 3)
    
    if (ecx_5 != ebx)
        int32_t var_18_1 = var_4
        void* eax_3 = sub_52d700(ebx, var_4, ecx_5, ebx)
        int32_t var_20 = var_4
        struct _EXCEPTION_REGISTRATION_RECORD** eax_5 = sub_52d7c0(eax_3, arg2[1])
        arg2[1] = eax_3
        return eax_5
else if (ecx_4 u< arg1)
    sub_52ce30(arg1 - ecx_4, (edx + ecx_1) s>> 5, arg2)
    void* ecx_8 = arg2[1]
    int32_t var_18_2 = var_4
    int32_t eax_11 = (ecx_8 - *arg2) s/ 0x38
    int32_t edx_9 = arg1 - eax_11
    sub_52d540(eax_11, edx_9, ecx_8, edx_9)
    int32_t ebx_3 = arg2[1]
    eax = (ebx_3 - *arg2) s/ 0x38
    arg2[1] = ebx_3 + (arg1 - eax) * 0x38
return eax
