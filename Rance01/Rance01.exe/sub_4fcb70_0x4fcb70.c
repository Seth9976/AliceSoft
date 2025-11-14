// 函数: sub_4fcb70
// 地址: 0x4fcb70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_wcrtomb_s_l@@YAHQAHQADI_WQAU_Mbstatet@@QAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = data_78c474 ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34

if (arg1 != 0)
    int32_t* ecx = arg2[1]
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = muls.dp.d(0x2aaaaaab, ecx - *arg2)
    int32_t edx_4 = edx_3 s>> 1
    int32_t eax_7 = (edx_4 u>> 0x1f) + edx_4
    
    if (0x15555555 - eax_7 u< arg1)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t esi_1 = eax_7 + arg1
    int32_t eax_8
    int32_t edx_8
    edx_8:eax_8 = muls.dp.d(0x2aaaaaab, arg2[2] - *arg2)
    int32_t edx_9 = edx_8 s>> 1
    
    if ((edx_9 u>> 0x1f) + edx_9 u< esi_1)
        int32_t eax_13 = sub_4adf20(arg2, esi_1)
        int32_t* eax_14 = sub_64dc30(eax_13)
        int32_t eax_15
        int32_t edx_12
        edx_12:eax_15 = muls.dp.d(0x2aaaaaab, arg3 - *arg2)
        int32_t edx_13 = edx_12 s>> 1
        int32_t esi_4 = (edx_13 u>> 0x1f) + edx_13
        int32_t* eax_16 = &eax_14[esi_4 * 3]
        int32_t var_8_1 = 0
        int32_t* var_38_1 = arg3
        int32_t* ecx_5 = sub_4c8ac0(eax_16, arg4, arg1, eax_16)
        int32_t* var_38_2 = arg3
        int32_t var_3c_2 = *arg2
        sub_64dc90(eax_14, arg3, ecx_5)
        int32_t* var_38_3 = arg3
        int32_t* var_3c_3 = arg3
        sub_64dc90(&eax_14[(esi_4 + arg1) * 3], arg2[1], arg3)
        int32_t esi_6 = *arg2
        int32_t eax_22
        int32_t edx_19
        edx_19:eax_22 = muls.dp.d(0x2aaaaaab, arg2[1] - esi_6)
        int32_t edx_20 = edx_19 s>> 1
        
        if (esi_6 != 0)
            int32_t var_38_4 = esi_6
            sub_6b4d5b()
        
        arg2[2] = &eax_14[eax_13 * 3]
        arg2[1] = &eax_14[(arg1 + (edx_20 u>> 0x1f) + edx_20) * 3]
        *arg2 = eax_14
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_14
    
    int32_t var_24 = *arg4
    int32_t var_20_1 = arg4[1]
    int32_t var_1c_1 = arg4[2]
    int32_t* var_38_5 = arg3
    int32_t* var_38_6
    int32_t* eax_40
    void* edx_36
    
    if ((ecx - arg3) s/ 0xc u>= arg1)
        void* edi_5 = arg1 * 0xc
        int32_t* esi_11 = ecx - edi_5
        int32_t* var_3c_5 = esi_11
        arg2[1] = sub_64dc90(ecx, ecx, ecx)
        eax_40 = esi_11
        int32_t* esi_12 = arg3
        
        if (esi_12 != eax_40)
            void* ecx_18 = edi_5 + eax_40
            
            do
                int32_t edx_38 = eax_40[-3]
                eax_40 -= 0xc
                ecx_18 -= 0xc
                *ecx_18 = edx_38
                *(ecx_18 + 4) = eax_40[1]
                *(ecx_18 + 8) = eax_40[2]
                esi_12 = arg3
            while (esi_12 != eax_40)
        
        edx_36 = edi_5 + esi_12
        var_38_6 = esi_12
    else
        void* esi_9 = arg1 * 0xc
        int32_t* var_3c_4 = arg3
        sub_64dc90(esi_9 + arg3, ecx, ecx)
        int32_t var_8_2 = 2
        int32_t eax_35
        int32_t edx_32
        edx_32:eax_35 = muls.dp.d(0x2aaaaaab, arg2[1] - arg3)
        int32_t edx_33 = edx_32 s>> 1
        int32_t* eax_39 = arg2[1]
        int32_t* var_40_1 = arg3
        sub_4c8ac0(eax_39, &var_24, arg1 - ((edx_33 u>> 0x1f) + edx_33), eax_39)
        arg2[1] += esi_9
        eax_40 = arg3
        edx_36 = arg2[1] - esi_9
        var_38_6 = eax_40
    
    eax_3 = sub_4fddc0(eax_40, edx_36, &var_24, var_38_6)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
