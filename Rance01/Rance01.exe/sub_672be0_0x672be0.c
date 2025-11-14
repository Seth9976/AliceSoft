// 函数: sub_672be0
// 地址: 0x672be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7188d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* ebx = arg1
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x38e38e39, arg4 - arg3)
int32_t edx_1 = edx s>> 3
int32_t edi_2 = (arg4 - arg3) s/ 0x24

if (edx_1 u>> 0x1f != neg.d(edx_1))
    int32_t esi_1 = *ebx
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = muls.dp.d(0x38e38e39, ebx[1] - esi_1)
    int32_t edx_3 = edx_2 s>> 3
    int32_t eax_7 = (edx_3 u>> 0x1f) + edx_3
    
    if (0x71c71c7 - eax_7 u< edi_2)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t eax_8 = eax_7 + edi_2
    int32_t eax_9
    int32_t edx_4
    edx_4:eax_9 = muls.dp.d(0x38e38e39, ebx[2] - esi_1)
    int32_t edx_5 = edx_4 s>> 3
    
    if ((edx_5 u>> 0x1f) + edx_5 u< eax_8)
        int32_t eax_14 = sub_668be0(ebx, eax_8)
        int32_t eax_15 = sub_60de80(eax_14)
        int32_t var_8_1 = 0
        int32_t var_30_1 = arg4
        arg1 = eax_15
        char* eax_17 = sub_668c20(arg2, arg4, *ebx, arg2, eax_15)
        int32_t var_30_2 = arg4
        arg1 = eax_17
        char* eax_19 = sub_672f20(arg3, arg4, eax_17)
        int32_t var_30_3 = arg4
        arg1 = eax_19
        sub_668c20(eax_19, arg4, arg2, ebx[1], eax_19)
        int32_t* esi_3 = *ebx
        int32_t eax_20
        int32_t edx_9
        edx_9:eax_20 = muls.dp.d(0x38e38e39, ebx[1] - esi_3)
        int32_t edx_10 = edx_9 s>> 3
        
        if (esi_3 != 0)
            sub_668ba0(esi_3, ebx[1])
            int32_t var_30_4 = *ebx
            sub_6b4d5b()
        
        ebx[2] = eax_15 + eax_14 * 0x24
        ebx[1] = eax_15 + (edi_2 + (edx_10 u>> 0x1f) + edx_10) * 0x24
        *ebx = eax_15
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_15
    
    int32_t var_30_5 = arg4
    sub_672f20(arg3, arg4, ebx[1])
    int32_t edi_5 = ebx[1]
    int32_t esi_6 = edi_2 * 0x24
    int32_t* var_40_1 = arg2
    eax_3 = sub_672e50(esi_6 + edi_5, edi_5, arg2)
    ebx[1] += esi_6

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
