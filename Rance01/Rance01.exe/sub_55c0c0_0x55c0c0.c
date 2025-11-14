// 函数: sub_55c0c0
// 地址: 0x55c0c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2[1]
int32_t ebp = *arg2
int32_t eax_3 = (ebx - ebp) s/ 0x28
int32_t var_4

if (eax_3 u> arg1)
    eax_3 = ebp + arg1 * 0x28
    
    if (eax_3 != ebx)
        int32_t var_18_1 = var_4
        int32_t* eax_5 = sub_55c440(ebx, ebx, eax_3)
        int32_t var_28 = var_4
        struct _EXCEPTION_REGISTRATION_RECORD** eax_7 = sub_539c30(eax_5, arg2[1])
        arg2[1] = eax_5
        return eax_7
else if (eax_3 u< arg1)
    sub_55c190(arg2, arg1 - eax_3)
    void* ebx_1 = arg2[1]
    int32_t var_18_3 = var_4
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = muls.dp.d(0x66666667, ebx_1 - *arg2)
    int32_t edx_5 = edx_4 s>> 4
    sub_55c320(ebx_1, arg1 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t ebx_2 = arg2[1]
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 = muls.dp.d(0x66666667, ebx_2 - *arg2)
    int32_t edx_7 = edx_6 s>> 4
    eax_3 = (edx_7 u>> 0x1f) + edx_7
    arg2[1] = ebx_2 + (arg1 - eax_3) * 0x28
return eax_3
