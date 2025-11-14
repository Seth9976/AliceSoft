// 函数: sub_60e1d0
// 地址: 0x60e1d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721850
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_74
int32_t eax_2 = data_78c474 ^ &var_74
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_70 = ebp
int32_t __saved_edi
void* eax_6
int32_t ecx_1
int32_t edx_1
eax_6, edx_1, ecx_1 = (*(**(ebp + 4) + 0x2c))(data_78c474 ^ &__saved_edi)
void** result
void* var_6c

if (eax_6 - 1 s> 0)
    int32_t ecx_4
    int32_t edx_4
    ecx_4, edx_4 = sub_4bc7e0(eax_6 - 1, edx_1, ecx_1, ebp + 0xc)
    result = sub_4bc7e0(eax_6 - 1, edx_4, ecx_4, ebp + 0x1c)
    
    if (eax_6 - 1 s> 0)
        var_74 = 0
        void* var_68_1 = eax_6 - 2
        var_6c = eax_6 - 1
        
        while (true)
            int128_t* eax_17 =
                (***(ebp + 8))((*(**(ebp + 4) + 0x18))((*(**(ebp + 4) + 0x30))(var_68_1)))
            
            if (eax_17 != 0)
                char* eax_21 = eax_17
                char i
                
                do
                    i = *eax_21
                    eax_21 = &eax_21[1]
                while (i != 0)
                sub_401270(*(var_70 + 0xc) + var_74, eax_21 - &eax_21[1], eax_17)
                int128_t* eax_23 = eax_17
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                char var_48 = 0
                void* esi_9 = eax_23 + 1
                char i_1
                
                do
                    i_1 = *eax_23
                    eax_23 += 1
                while (i_1 != 0)
                sub_401270(&var_48, eax_23 - esi_9, eax_17)
                int32_t var_4_3 = 2
                char var_2c
                int32_t* eax_25 = sub_60e460(&var_48, &var_2c)
                var_4_3.b = 3
                sub_401ef0(*(var_70 + 0x1c) + var_74, eax_25)
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_8c_11 = var_2c.d
                    sub_6b4d5b()
                
                int32_t var_4_4 = 0xffffffff
                var_18 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
                
                if (var_34_1 u>= 0x10)
                    int32_t var_8c_12 = var_48.d
                    sub_6b4d5b()
                
                int32_t var_34_2 = 0xf
                int32_t var_38_2 = 0
                var_48 = 0
            else
                int32_t var_50_1 = 0xf
                int32_t var_54_1 = 0
                char var_64 = 0
                int32_t var_4 = 0
                sub_401ef0(*(var_70 + 0xc) + var_74, &var_64)
                
                if (var_50_1 u>= 0x10)
                    int32_t var_8c_6 = var_64.d
                    sub_6b4d5b()
                
                int32_t var_50_2 = 0xf
                int32_t var_54_2 = 0
                var_64 = 0
                int32_t var_4_1 = 1
                sub_401ef0(*(var_70 + 0x1c) + var_74, &var_64)
                int32_t var_4_2 = 0xffffffff
                
                if (var_50_2 u>= 0x10)
                    int32_t var_8c_7 = var_64.d
                    sub_6b4d5b()
            
            var_74 += 0x1c
            result = 1
            var_68_1 -= 1
            void* temp1_1 = var_6c
            var_6c -= 1
            
            if (temp1_1 == 1)
                break
            
            ebp = var_70
else
    sub_405410(ebp + 0xc, &var_6c, *(ebp + 0xc), *(ebp + 0x10))
    result = sub_405410(ebp + 0x1c, &var_6c, *(ebp + 0x1c), *(ebp + 0x20))
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_74)
return result
