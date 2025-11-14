// 函数: sub_4b7cb0
// 地址: 0x4b7cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7133b1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_24 = ebx
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebp = arg_4
int32_t* edi = ebp[2]
int32_t result

if (edi == ebp[3])
label_4b7d13:
    int32_t* edi_1 = operator new(0x2c)
    arg_4 = edi_1
    int32_t var_4 = 0
    
    if (edi_1 == 0)
        edi_1 = nullptr
    else
        int32_t eax_6 = ebp[1]
        int32_t ecx_1 = *ebp
        *edi_1 = ecx_1
        edi_1[1] = eax_6
        edi_1[2].w = 0
        edi_1[3] = 0
        edi_1[4] = 0
        edi_1[5] = 0
        edi_1[7] = 0
        edi_1[8] = 0
        edi_1[9] = 0
        var_4.b = 2
        int32_t eax_7 = edi_1[4]
        int32_t var_1c = 0
        int32_t var_18_1 = 0
        int32_t ecx_2
        
        if (&var_1c u< eax_7)
            ecx_2 = edi_1[3]
        
        if (&var_1c u>= eax_7 || ecx_2 u> &var_1c)
            if (eax_7 == edi_1[5])
                sub_4b7ab0(&edi_1[3])
            
            int32_t* eax_9 = edi_1[4]
            
            if (eax_9 != 0)
                *eax_9 = 0
                eax_9[1] = var_18_1
                eax_9[2] = ecx_1
                eax_9[3] = eax_6
            
            edi_1[4] += 0x10
        else
            if (eax_7 == edi_1[5])
                sub_4b7ab0(&edi_1[3])
            
            int32_t* eax_8 = edi_1[4]
            void* esi_4 = ((&var_1c - ecx_2) & 0xfffffff0) + edi_1[3]
            
            if (eax_8 == 0)
                edi_1[4] += 0x10
            else
                *eax_8 = *esi_4
                eax_8[1] = *(esi_4 + 4)
                eax_8[2] = *(esi_4 + 8)
                eax_8[3] = *(esi_4 + 0xc)
                edi_1[4] += 0x10
    
    int32_t var_4_1 = 0xffffffff
    int32_t* var_38_2 = edi_1
    arg_4 = edi_1
    
    if (sub_4b72c0(arg1).b != 0)
        int32_t eax_10 = ebp[3]
        int32_t ecx_9
        
        if (&arg_4 u< eax_10)
            ecx_9 = ebp[2]
        
        if (&arg_4 u>= eax_10 || ecx_9 u> &arg_4)
            if (eax_10 == ebp[4])
                sub_4307a0(&ebp[2])
            
            result = ebp[3]
            
            if (result != 0)
                *result = edi_1
        else
            if (eax_10 == ebp[4])
                sub_4307a0(&ebp[2])
            
            result = ebp[3]
            
            if (result != 0)
                *result = *(ebp[2] + ((&arg_4 - ecx_9) s>> 2 << 2))
        
        ebp[3] += 4
        result.b = 1
    else
        if (edi_1 != 0)
            sub_4b7210(edi_1)
            int32_t* var_38_4 = edi_1
            sub_6b4d5b()
        
        result.b = 0
else
    while (true)
        int32_t var_38_1 = *edi
        
        if (sub_4b72c0(arg1).b != 0)
            break
        
        edi = &edi[1]
        
        if (edi == ebp[3])
            goto label_4b7d13
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
