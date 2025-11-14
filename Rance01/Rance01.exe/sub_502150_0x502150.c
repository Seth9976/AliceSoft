// 函数: sub_502150
// 地址: 0x502150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_712c30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* ebx = arg1
int32_t ecx_1 = arg4 - arg3
void* eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0xb60b60b7, ecx_1)
int32_t edx_2 = (edx + ecx_1) s>> 7
int32_t edi_2 = ecx_1 s/ 0xb4

if (edx_2 u>> 0x1f != neg.d(edx_2))
    int32_t esi_1 = *ebx
    int32_t eax_7 = (ebx[1] - esi_1) s/ 0xb4
    
    if (0x16c16c1 - eax_7 u< edi_2)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t eax_8 = eax_7 + edi_2
    
    if ((ebx[2] - esi_1) s/ 0xb4 u< eax_8)
        int32_t eax_14 = sub_4fd040(ebx, eax_8)
        int32_t eax_15 = sub_4fd700(eax_14)
        int32_t var_8_1 = 0
        int32_t var_30_1 = arg4
        arg1 = eax_15
        int32_t eax_16 = sub_4feee0(eax_15, arg2, *ebx, arg2)
        int32_t var_30_2 = arg4
        int32_t var_34_2 = arg4
        int32_t var_38_1 = arg3
        arg1 = eax_16
        int32_t eax_17 = sub_502380(eax_16, arg4, arg3)
        int32_t var_30_3 = arg4
        arg1 = eax_17
        sub_4feee0(eax_17, arg4, arg2, ebx[1])
        int32_t var_8_2 = 0xffffffff
        int32_t esi_3 = *ebx
        int32_t ecx_14 = ebx[1] - esi_3
        
        if (esi_3 != 0)
            sub_4fd6d0(esi_3, ebx[1])
            int32_t var_30_4 = *ebx
            sub_6b4d5b()
        
        int32_t eax_25 = eax_14 * 0xb4 + eax_15
        ebx[2] = eax_25
        ebx[1] = (edi_2 + ecx_14 s/ 0xb4) * 0xb4 + eax_15
        *ebx = eax_15
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_25
    
    int32_t var_30_5 = arg4
    int32_t var_34_4 = arg4
    int32_t var_38_2 = arg3
    int32_t edx_17 = sub_502380(ebx[1], arg4, arg3)
    int32_t edi_7 = edi_2 * 0xb4
    int32_t ecx_20 = ebx[1]
    eax_3 = sub_502330(edi_7 + ecx_20, edx_17, arg2, ecx_20)
    ebx[1] += edi_7

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
