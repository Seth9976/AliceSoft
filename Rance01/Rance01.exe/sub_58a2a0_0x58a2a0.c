// 函数: sub_58a2a0
// 地址: 0x58a2a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_721e2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1b0
int32_t eax_2 = data_78c474 ^ &var_1b0
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 == 0)
    result.b = 0
else if (arg1 != 0)
label_58a319:
    int128_t var_150
    sub_6bc670(&var_150, 0, 0x130)
    int32_t* eax_6 = arg1
    
    if ((*(*eax_6 + 0x38))(eax_6, 0, 1, &var_150) s>= 0)
        struct _EXCEPTION_REGISTRATION_RECORD** var_1a4 = nullptr
        int32_t var_1a0_1 = 0
        int32_t var_19c_1 = 0
        int32_t var_c_1 = 0
        int32_t var_1ac
        int32_t var_134
        int32_t var_8c
        
        if ((var_134 & 0x10000) != 0 && var_8c u>= 0xfffe0101)
            if ((var_134 & 0x100000) != 0)
                var_1ac = 0x50
                sub_416780(&var_1ac, &var_1a4)
            
            var_1ac = 0x40
            sub_416780(&var_1ac, &var_1a4)
        
        var_1ac = 0x20
        sub_416780(&var_1ac, &var_1a4)
        int32_t i_1 = 0
        int32_t i
        
        do
            var_1ac = sub_5884c0(arg1, arg1)
            int32_t var_190 = 0
            int32_t edx_2 = *(*arg1 + 4)
            int32_t var_1a8 = 0x80000000
            edx_2(1, &var_190)
            
            if (var_190 == 1)
                var_1a8 = 0
            
            for (struct _EXCEPTION_REGISTRATION_RECORD** j = var_1a4; j != var_1a0_1; j = &j[1])
                void var_188
                sub_6bc670(&var_188, 0, 0x38)
                int32_t eax_16 = arg1
                int32_t var_154_1 = var_1a8
                int32_t var_168_1 = 1
                int32_t var_170_1 = 1
                int32_t var_164_1 = 1
                int32_t var_178_1 = var_1ac
                int32_t* ecx_5 = arg1
                int32_t var_16c_1 = eax_16
                int32_t var_180_1 = 0
                int32_t var_160_1 = 0x50
                
                if ((*(*ecx_5 + 0x40))(ecx_5, 0, 1, eax_16, *j, &var_188, &arg1[6]) s>= 0)
                    break
            
            if (arg1 != 0)
                goto label_58a51b
            
            int32_t* ecx_6 = arg1
            
            if (ecx_6 == 0)
                break
            
            var_1a8 = 0
            (*(*ecx_6 + 4))(0, &var_1a8)
            
            if (var_1a8 == 0)
                break
            
            (**arg1)(0, 0)
            i = i_1 + 1
            i_1 = i
        while (i s< 2)
        
        if (arg1 != 0)
        label_58a51b:
            
            if ((*(arg1->unused + 0x64))(eax_4) != 0)
                if (sub_58fc40(arg1, &arg1[0x5a], arg1) != 0)
                    if (var_1ac != 0)
                        int32_t* eax_26 = arg1
                        (*(*eax_26 + 0xe4))(eax_26, 0xa1, 1)
                    
                    result = var_1a4
                    
                    if (result != 0)
                        struct _EXCEPTION_REGISTRATION_RECORD** result_4 = result
                        sub_6b4d5b()
                    
                    result.b = 1
                else
                    sub_604c90(0x74b328)
                    result = var_1a4
                    
                    if (result == 0)
                        result.b = 0
                    else
                        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result
                        sub_6b4d5b()
                        result.b = 0
            else
                sub_604c90(0x74b2f8)
                result = var_1a4
                
                if (result == 0)
                    result.b = 0
                else
                    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
                    sub_6b4d5b()
                    result.b = 0
        else
            sub_604c90("Direct3DDevice9")
            result = var_1a4
            
            if (result == 0)
                result.b = 0
            else
                struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                sub_6b4d5b()
                result.b = 0
    else
        sub_604c90("Direct3D")
        result.b = 0
else
    struct IDirect3D9 eax_5 = Direct3DCreate9(0x20)
    arg1 = eax_5
    
    if (eax_5 != 0)
        goto label_58a319
    
    sub_604c90("IDirect3D9")
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1b0)
return result
