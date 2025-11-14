// 函数: sub_4e6010
// 地址: 0x4e6010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ff68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if ((*(arg2 + 0x110) - *(arg2 + 0x10c)) s/ 0x1c s<= 0)
    result.b = 1
else
    int32_t var_34_1 = 0xf
    void* var_38_1 = nullptr
    char var_48 = 0
    sub_401270(&var_48, 0xf, 0x7559b8)
    int32_t var_4 = 0
    char* eax_8 = var_48.d
    char* edx_3 = eax_8
    
    if (var_34_1 u< 0x10)
        edx_3 = &var_48
        eax_8 = &var_48
    
    void* var_70_1 = arg1 + 4
    sub_4102d0(arg1 + 4, *(arg1 + 8), eax_8, var_38_1 + edx_3)
    int32_t var_4_1 = 0xffffffff
    
    if (var_34_1 u>= 0x10)
        int32_t var_70_2 = var_48.d
        sub_6b4d5b()
    
    int32_t esi_4 = 0
    int32_t var_4c_1 = 0
    
    if ((*(arg2 + 0x110) - *(arg2 + 0x10c)) s/ 0x1c s<= 0)
    label_4e6216:
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_401270(&var_2c, 4, "\r\n\r\n")
        int32_t var_4_4 = 2
        int128_t* eax_19 = var_2c.d
        int128_t* edx_16 = eax_19
        
        if (var_18_1 u< 0x10)
            edx_16 = &var_2c
            eax_19 = &var_2c
        
        void* var_70_6 = arg1 + 4
        sub_4102d0(arg1 + 4, *(arg1 + 8), eax_19, edx_16 + var_1c_1)
        
        if (var_18_1 u>= 0x10)
            int32_t var_70_7 = var_2c.d
            sub_6b4d5b()
        
        result.b = 1
    else
        int32_t var_50_1 = 0
        
        while (true)
            if (sub_4e62a0(arg1, *(arg2 + 0x10c) + var_50_1).b == 0)
                result.b = 0
                break
            
            if (esi_4 s< (*(arg2 + 0x110) - *(arg2 + 0x10c)) s/ 0x1c - 1)
                int32_t var_34_2 = 0xf
                int32_t var_38_2 = 0
                var_48 = 0
                sub_401270(&var_48, 3, 0x7559c8)
                int32_t var_4_2 = 1
                int128_t* ecx_10 = var_48.d
                int128_t* esi_6 = ecx_10
                
                if (var_34_2 u< 0x10)
                    esi_6 = &var_48
                    ecx_10 = &var_48
                
                void* var_70_4 = arg1 + 4
                sub_4102d0(arg1 + 4, *(arg1 + 8), ecx_10, esi_6 + var_38_2)
                int32_t var_4_3 = 0xffffffff
                
                if (var_34_2 u>= 0x10)
                    int32_t var_70_5 = var_48.d
                    sub_6b4d5b()
            
            var_50_1 += 0x1c
            esi_4 = var_4c_1 + 1
            var_4c_1 = esi_4
            
            if (esi_4 s>= (*(arg2 + 0x110) - *(arg2 + 0x10c)) s/ 0x1c)
                goto label_4e6216

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
