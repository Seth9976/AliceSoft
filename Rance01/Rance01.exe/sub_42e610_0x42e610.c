// 函数: sub_42e610
// 地址: 0x42e610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71afe8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 != 0)
    sub_42e580(arg1)
    *(arg1 + 0x18) = arg3
    int32_t edx_1 = (**arg3)(eax_4)
    
    if (arg5 != 3)
        result = arg4
        
        if (result s> 0)
            *(arg1 + 0x2c) = result
            int32_t var_2c
            char* eax_11 = &var_2c
            *(arg1 + 0x30) = arg5
            int32_t var_4 = 0
            char var_48
            sub_401650(eax_11, sub_401940(eax_11, edx_1, arg2), arg2, &var_48)
            var_4.b = 1
            int32_t* eax_12 = sub_4294e0(*(arg1 + 0x18), arg2)
            
            if (eax_12 != 0)
                int32_t* eax_13 = operator new(0x10)
                int32_t* edi_3
                
                if (eax_13 == 0)
                    edi_3 = nullptr
                else
                    int32_t ecx_4 = *(arg1 + 0x10)
                    int32_t edx_5 = *(arg1 + 0xc)
                    eax_13[1] = *(arg1 + 8)
                    *eax_13 = 0xffffffff
                    eax_13[2] = edx_5
                    eax_13[3] = ecx_4
                    edi_3 = eax_13
                
                var_68 = edi_3
                sub_5e8210(edi_3, eax_12)
                
                if (edi_3[1] != 0)
                    int32_t edi_4 = *edi_3
                    
                    if (edi_4 != 0xffffffff)
                        sub_409760(edi_4, 0)
                
                sub_61b5a0(&var_68, arg1 + 0x1c)
            
            int32_t ebx_1 = 1
            int32_t var_80_7 = sub_401170(&var_48)
            int32_t var_84_5 = 1
            int32_t var_88_1 = sub_401170(&var_2c)
            sub_4104a0("%s_%02d.%s")
            var_4.b = 2
            int32_t var_64
            result = sub_4294e0(*(arg1 + 0x18), &var_64)
            int32_t var_50
            
            for (struct _EXCEPTION_REGISTRATION_RECORD** i = result; i != 0; i = result)
                int32_t* eax_20 = operator new(0x10)
                int32_t* ebp_6
                
                if (eax_20 == 0)
                    ebp_6 = nullptr
                else
                    int32_t ecx_6 = *(arg1 + 0x10)
                    int32_t edx_6 = *(arg1 + 0xc)
                    eax_20[1] = *(arg1 + 8)
                    *eax_20 = 0xffffffff
                    eax_20[2] = edx_6
                    eax_20[3] = ecx_6
                    ebp_6 = eax_20
                
                var_68 = ebp_6
                sub_5e8210(ebp_6, i)
                
                if (ebp_6[1] != 0)
                    int32_t ebp_7 = *ebp_6
                    
                    if (ebp_7 != 0xffffffff)
                        sub_409760(ebp_7, 0)
                
                sub_61b5a0(&var_68, arg1 + 0x1c)
                var_4.b = 1
                
                if (var_50 u>= 0x10)
                    int32_t var_80_10 = var_64
                    sub_6b4d5b()
                
                ebx_1 += 1
                int32_t var_80_11 = sub_401170(&var_48)
                int32_t var_84_8 = ebx_1
                int32_t var_88_2 = sub_401170(&var_2c)
                sub_4104a0("%s_%02d.%s")
                var_4.b = 2
                result = sub_4294e0(*(arg1 + 0x18), &var_64)
            
            if (var_50 u>= 0x10)
                int32_t var_80_13 = var_64
                result = sub_6b4d5b()
            
            int32_t var_34
            
            if (var_34 u>= 0x10)
                int32_t var_80_14 = var_48.d
                result = sub_6b4d5b()
            
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_80_15 = var_2c
                result = sub_6b4d5b()
    else
        int32_t* eax_6 = operator new(0x10)
        int32_t* ebp_2
        
        if (eax_6 == 0)
            ebp_2 = nullptr
        else
            int32_t ecx_1 = *(arg1 + 0x10)
            int32_t edx_2 = *(arg1 + 0xc)
            eax_6[1] = *(arg1 + 8)
            *eax_6 = 0xffffffff
            eax_6[2] = edx_2
            eax_6[3] = ecx_1
            ebp_2 = eax_6
        
        void* eax_7 = *(arg1 + 0x18)
        var_68 = ebp_2
        sub_5e8210(ebp_2, sub_4294e0(eax_7, arg2))
        
        if (ebp_2[1] != 0)
            int32_t ebp_3 = *ebp_2
            
            if (ebp_3 != 0xffffffff)
                sub_409760(ebp_3, 0)
        
        result = sub_61b5a0(&var_68, arg1 + 0x1c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
