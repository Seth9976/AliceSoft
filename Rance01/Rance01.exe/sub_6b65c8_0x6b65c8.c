// 函数: sub_6b65c8
// 地址: 0x6b65c8
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_2 = 0x14
int32_t var_8 = 0x771010
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_7 = data_78c474
int32_t var_8_5 = 0x771010 ^ eax_7
int32_t __saved_ebp
int32_t var_38 = eax_7 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_3 = &data_6b65d4
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t result_1 = 0
sub_6bf5de(1)
int32_t var_8_1 = 0
int32_t esi = 0

while (true)
    int32_t var_24_1 = esi
    
    if (esi s>= data_799240)
        break
    
    int32_t* eax_1 = data_798228 + (esi << 2)
    
    if (*eax_1 != 0)
        int32_t eax_2 = *eax_1
        
        if ((*(eax_2 + 0xc) & 0x83) != 0)
            sub_6b6050(esi, eax_2)
            int32_t var_8_2 = 1
            int32_t* eax_4 = *(data_798228 + (esi << 2))
            char ecx_1 = (eax_4[3]).b
            
            if ((ecx_1 & 0x83) != 0)
                if (arg1 == 1)
                    if (sub_6b6580(eax_4) != 0xffffffff)
                        result_2 += 1
                else if (arg1 == 0 && (ecx_1 & 2) != 0)
                    int32_t eax_6 = sub_6b6580(eax_4)
                    
                    if (eax_6 == 0xffffffff)
                        result_1 |= eax_6
            
            int32_t var_8_3 = 0
            sub_6b666a(esi)
    
    esi += 1

int32_t var_8_4 = 0xfffffffe
sub_6b6699()
int32_t result = result_2

if (arg1 != 1)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6b6698
return result
