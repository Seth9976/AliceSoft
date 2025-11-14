// 函数: sub_4b1850
// 地址: 0x4b1850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_60
int32_t eax_2 = data_78c474 ^ &var_60
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (sub_4b1c80(arg2, arg1) == 0)
    sub_4b1420(arg2)
    int32_t i = (arg1[1] - *arg1) s/ 0x3c
    int32_t* var_5c = nullptr
    
    if (i s> 0)
        int32_t var_58_1 = 0
        int32_t* esi_2
        
        do
            int32_t* edi_1 = var_5c
            struct _EXCEPTION_REGISTRATION_RECORD* var_48
            sub_4b01c0(arg1, &var_48, edi_1)
            esi_2 = edi_1
            int32_t var_4 = 0
            int32_t edx_6
            int32_t edi_2
            
            if (esi_2 s>= 0)
                edi_2 = *arg1
                int32_t ecx_3 = arg1[1] - edi_2
                int32_t eax_11
                int32_t edx_4
                edx_4:eax_11 = muls.dp.d(0x88888889, ecx_3)
                edx_6 = (edx_4 + ecx_3) s>> 5
            
            int32_t* edi_3
            
            if (esi_2 s< 0 || esi_2 s>= (edx_6 u>> 0x1f) + edx_6)
                edi_3 = 0xffffffff
            else
                edi_3 = *(edi_2 + var_58_1 + 0x1c)
            
            var_60 = edi_3
            int32_t var_34
            char var_2c
            int32_t var_18
            
            if (edi_3 != 0xffffffff)
                int32_t* eax_12 = sub_4c19c0(arg2[0x1c], edi_3)
                var_5c = eax_12
                
                if (eax_12 == 0)
                    int32_t* var_78_9 = edi_3
                    sub_51ddc0(0x756734)
                    
                    if (var_34 u>= 0x10)
                        struct _EXCEPTION_REGISTRATION_RECORD* var_78_10 = var_48
                        sub_6b4d5b()
                    
                    result = false
                    goto label_4b1ad1
                
                sub_61b5a0(&var_5c, arg2)
                var_18 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
                var_4.b = 1
                sub_405150(&var_2c, &arg2[4])
                var_4.b = 0
                
                if (var_18 u>= 0x10)
                    int32_t var_78_3 = var_2c.d
                    sub_6b4d5b()
                
                sub_416780(&var_60, &arg2[8])
                goto label_4b1a7d
            
            int32_t var_38
            
            if (var_38 == 0)
                var_60 = nullptr
                sub_61b5a0(&var_60, arg2)
                var_18 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                var_4.b = 2
                sub_405150(&var_2c, &arg2[4])
                var_4.b = 0
                
                if (var_18 u>= 0x10)
                    int32_t var_78_5 = var_2c.d
                    sub_6b4d5b()
                
                var_60 = 0xffffffff
                sub_416780(&var_60, &arg2[8])
                goto label_4b1a7d
            
            int32_t* eax_19 = sub_405c90(&var_2c, &var_48, ".bmp")
            var_4.b = 3
            int32_t* eax_20 = sub_4c0fd0(arg2[0x1c], eax_19, 0)
            var_4.b = 0
            var_60 = eax_20
            
            if (var_18 u>= 0x10)
                int32_t var_78_6 = var_2c.d
                sub_6b4d5b()
            
            if (eax_20 == 0)
                struct _EXCEPTION_REGISTRATION_RECORD** eax_24 = var_48
                
                if (var_34 u< 0x10)
                    eax_24 = &var_48
                
                struct _EXCEPTION_REGISTRATION_RECORD** var_78_11 = eax_24
                sub_51ddc0(0x756760)
                
                if (var_34 u< 0x10)
                    result = false
                    goto label_4b1ad1
                
                struct _EXCEPTION_REGISTRATION_RECORD* var_78_12 = var_48
                sub_6b4d5b()
                result = false
                goto label_4b1ad1
            
            sub_61b5a0(&var_60, arg2)
            sub_405220(&var_48, &arg2[4])
            var_60 = 0xffffffff
            sub_416780(&var_60, &arg2[8])
            esi_2 = var_5c
        label_4b1a7d:
            int32_t var_4_1 = 0xffffffff
            
            if (var_34 u>= 0x10)
                struct _EXCEPTION_REGISTRATION_RECORD* var_78_7 = var_48
                sub_6b4d5b()
            
            var_58_1 += 0x3c
            var_34 = 0xf
            var_38 = 0
            var_48.b = 0
            var_5c = esi_2 + 1
        while (esi_2 + 1 s< i)
    
    result = sub_4b1b50(arg2, arg3) != 0
else
    result = true

label_4b1ad1:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_60)
return result
