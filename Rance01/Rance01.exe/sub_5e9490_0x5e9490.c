// 函数: sub_5e9490
// 地址: 0x5e9490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724538
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg1[1]
struct _EXCEPTION_REGISTRATION_RECORD** result

if (edi != 0 && arg1[3] != 0)
    int32_t ebp_1 = *arg1
    
    if (ebp_1 == 0xffffffff)
        result.b = 0
    else
        int32_t arg_4
        int32_t arg_8
        int32_t arg_c
        int32_t arg_10
        sub_5e87c0(arg1, &arg_4, &arg_8, &arg_c, &arg_10)
        
        if (sub_5e8700(arg1, arg_4, arg_8, arg_c, arg_10).b != 0)
            result.b = 0
        else
            int32_t var_24 = 0xff
            int32_t* eax_6 = &var_24
            int32_t arg_14
            
            if (arg_14 s<= 0xff)
                eax_6 = &arg_14
            
            int32_t ebx_1 = *eax_6
            arg_14 = ebx_1
            var_24 = 0xff
            int32_t* eax_7 = &var_24
            int32_t arg_18
            
            if (arg_18 s<= 0xff)
                eax_7 = &arg_18
            
            int32_t edx_2 = *eax_7
            arg_18 = edx_2
            var_24 = 0xff
            int32_t* eax_8 = &var_24
            int32_t arg_1c
            
            if (arg_1c s<= 0xff)
                eax_8 = &arg_1c
            
            int32_t ecx_2 = *eax_8
            arg_1c = ecx_2
            var_24 = 0
            int32_t* eax_9 = &var_24
            
            if (ebx_1 s>= 0)
                eax_9 = &arg_14
            
            arg_14 = *eax_9
            var_24 = 0
            int32_t* eax_11 = &var_24
            
            if (edx_2 s>= 0)
                eax_11 = &arg_18
            
            arg_18 = *eax_11
            var_24 = 0
            int32_t* eax_12 = &var_24
            
            if (ecx_2 s>= 0)
                eax_12 = &arg_1c
            
            arg_1c = *eax_12
            int32_t eax_15 = sub_5f9f40(ebp_1)
            int32_t eax_17 = sub_5f9f90(ebp_1)
            int32_t var_18_1 = arg1[2]
            int32_t eax_19 = arg1[3]
            int32_t var_20 = 0xffffffff
            int32_t var_1c_1 = edi
            int32_t var_14_1 = eax_19
            int32_t var_4 = 0
            sub_5e9160(&var_20, eax_15, eax_17)
            int32_t var_3c_4 = arg_1c
            int32_t var_40_4 = arg_18
            int32_t var_44_3 = arg_14
            int32_t var_48_3 = eax_17
            int32_t var_4c_1 = eax_15
            int32_t var_50_1 = 0
            int32_t var_54_1 = 0
            sub_5e8b50(&var_20)
            int32_t edi_2 = var_20
            int32_t eax_22 = sub_5f9dd0(edi_2)
            result = sub_5e81e0(arg1)
            void* esi_1 = arg1[3]
            
            if (*(esi_1 + 4) != 0)
                int32_t esi_2 = arg_4
                int32_t edx_7 = arg_8
                (*(**(esi_1 + 4) + 0x28))(result, esi_2, edx_7, eax_22, esi_2, edx_7, arg_c, arg_10)
            
            if (edi_2 != 0xffffffff)
                sub_409390(edi_2)
                edi_2 = 0xffffffff
            
            int32_t var_4_1 = 0xffffffff
            
            if (edi_2 != 0xffffffff)
                sub_409390(edi_2)
            
            result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
