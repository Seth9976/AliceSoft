// 函数: sub_4d2b10
// 地址: 0x4d2b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2[1]
int32_t ebp = *arg2
void* ecx_2 = ebx - ebp
int32_t eax
void* edx
edx:eax = muls.dp.d(0xd20d20d3, ecx_2)
int32_t ecx_5 = ecx_2 s/ 0x9c
int32_t ecx

if (ecx_5 u> arg1)
    void* esi_2 = arg1 * 0x9c + ebp
    
    if (esi_2 != ebx)
        int32_t var_14_1 = ecx
        void* eax_2 = sub_4d6d40(ebx, ebx, esi_2)
        int32_t var_24 = ecx
        struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = sub_4d6e00(eax_2, arg2[1])
        arg2[1] = eax_2
        return eax_3
else if (ecx_5 u< arg1)
    sub_4d3170(arg1 - ecx_5, (edx + ecx_2) s>> 7, arg2)
    char* ebx_1 = arg2[1]
    int32_t var_14_2 = ecx
    sub_4d6510(ebx_1, arg1 - (ebx_1 - *arg2) s/ 0x9c)
    int32_t ebx_2 = arg2[1]
    eax = (ebx_2 - *arg2) s/ 0x9c
    arg2[1] = (arg1 - eax) * 0x9c + ebx_2
return eax
