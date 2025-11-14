// 函数: sub_52d1f0
// 地址: 0x52d1f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71f180
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ebx = arg1
void* ecx_1 = arg4 - arg3
int32_t eax_3
void* edx
edx:eax_3 = muls.dp.d(0x92492493, ecx_1)
int32_t edx_2 = (edx + ecx_1) s>> 5
int32_t edi_2 = ecx_1 s/ 0x38

if (edx_2 u>> 0x1f != neg.d(edx_2))
    int32_t esi_1 = *ebx
    int32_t eax_7 = (ebx[1] - esi_1) s/ 0x38
    
    if (0x4924924 - eax_7 u< edi_2)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t eax_8 = eax_7 + edi_2
    
    if ((ebx[2] - esi_1) s/ 0x38 u< eax_8)
        int32_t eax_14 = sub_52d070(ebx, eax_8)
        int32_t var_1c = eax_14
        
        if (eax_14 != 0)
            eax_14 = sub_52d190(eax_14)
        
        int32_t var_8_1 = 0
        int32_t var_34_1 = arg4
        int32_t var_18 = eax_14
        char* eax_16 = sub_52dec0(arg2, arg4, *ebx, arg2, eax_14)
        int32_t var_34_2 = arg4
        char* var_18_1 = eax_16
        char* eax_18 = sub_52dd70(arg3, arg4, eax_16)
        int32_t var_34_3 = arg4
        char* var_18_2 = eax_18
        sub_52dec0(eax_18, arg4, arg2, ebx[1], eax_18)
        int32_t var_8_2 = 0xffffffff
        int32_t* esi_3 = *ebx
        void* ecx_12 = ebx[1] - esi_3
        
        if (esi_3 != 0)
            int32_t var_34_4 = arg4
            sub_52d7c0(esi_3, ebx[1])
            int32_t var_34_5 = *ebx
            sub_6b4d5b()
        
        ebx[2] = eax_14 + var_1c * 0x38
        ebx[1] = eax_14 + (edi_2 + ecx_12 s/ 0x38) * 0x38
        *ebx = eax_14
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_14
    
    int32_t var_34_6 = arg4
    sub_52dd70(arg3, arg4, ebx[1])
    int32_t edi_4 = ebx[1]
    int32_t esi_8 = edi_2 * 0x38
    int32_t* var_44_1 = arg2
    eax_3 = sub_52d9d0(esi_8 + edi_4, edi_4, arg2)
    ebx[1] += esi_8

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
