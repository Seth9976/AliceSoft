// 函数: sub_66b790
// 地址: 0x66b790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_60 = nullptr
int32_t var_5c = 0
int32_t var_58 = 0
int32_t var_4 = 0
sub_602980(arg3, &var_60)
int32_t edi = var_5c
void* ecx_2 = edi - var_60
int32_t esi_2 = ecx_2 s/ 0x1c
int32_t* result_1 = nullptr
int32_t* result

if (esi_2 s<= 0)
label_66b8c4:
    void** ebp_1 = var_60
    
    if (ebp_1 != 0)
        void** esi_3 = ebp_1
        
        if (ebp_1 != edi)
            do
                if (esi_3[5] u>= 0x10)
                    void* var_80_5 = *esi_3
                    sub_6b4d5b()
                
                esi_3[5] = 0xf
                esi_3[4] = 0
                *esi_3 = nullptr
                esi_3 = &esi_3[7]
            while (esi_3 != edi)
        
        void** var_80_6 = ebp_1
        sub_6b4d5b()
    
    result.b = 1
else
    void** ebx_1 = var_60
    
    while (true)
        var_4.b = 1
        var_4.b = 2
        char var_48
        int32_t var_2c
        char eax_9
        eax_9, ecx_2 = sub_66b980(arg1, arg2, 
            sub_4c1d70(ebx_1, &var_48, sub_66b6e0(ecx_2, arg3, &var_2c), &var_48))
        bool var_65_1 = eax_9 == 0
        int32_t var_34
        
        if (var_34 u>= 0x10)
            int32_t var_80_3 = var_48.d
            ecx_2 = sub_6b4d5b()
        
        var_4.b = 0
        var_34 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_80_4 = var_2c
            ecx_2 = sub_6b4d5b()
        
        if (var_65_1 != 0)
            if (ebx_1[5] u>= 0x10)
                ebx_1 = *ebx_1
            
            void** var_80_7 = ebx_1
            var_4.b = 3
            sub_66b600(sub_4104a0(0x730648), arg2)
            
            if (var_18 u>= 0x10)
                int32_t var_80_8 = var_2c
                sub_6b4d5b()
            
            void** esi_4 = var_60
            
            if (esi_4 != 0)
                sub_405780(esi_4, var_5c)
                void** var_80_9 = esi_4
                sub_6b4d5b()
            
            result.b = 0
            break
        
        result = result_1 + 1
        ebx_1 = &ebx_1[7]
        result_1 = result
        
        if (result s>= esi_2)
            edi = var_5c
            goto label_66b8c4

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
