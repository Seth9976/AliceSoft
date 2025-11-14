// 函数: sub_501ae0
// 地址: 0x501ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711602
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t* eax_3 = sub_416b10(1)
*eax_3 = eax_3
eax_3[1] = eax_3
eax_3[2] = eax_3
eax_3[4].b = 1
*(eax_3 + 0x11) = 1
int32_t var_4 = 0
void* arg_4
void* ecx_1 = arg_4
void* i = *(ecx_1 + 0x28)
void var_1c

if (i != *(ecx_1 + 0x2c))
    void* eax_10
    
    do
        int32_t* ebp_1 = i + 4
        int32_t j_1 = 3
        int32_t j
        
        do
            int32_t eax_8 = *ebp_1 * 0x2c
            int32_t ecx_2 = *arg1
            
            for (int32_t* k = *(eax_8 + ecx_2 + 0xc); k != *(eax_8 + ecx_2 + 0x10); k = &k[1])
                int32_t* var_24
                sub_416880(&var_1c, k, &var_24)
            
            ebp_1 = &ebp_1[0xf]
            j = j_1
            j_1 -= 1
        while (j != 1)
        eax_10 = arg_4
        i += 0xb4
    while (i != *(eax_10 + 0x2c))
    
    ecx_1 = eax_10

sub_501c00(ecx_1, &var_1c)
int32_t var_4_1 = 1
int32_t*** eax_11 = eax_3
sub_58bc40(&var_1c, &arg_4, *eax_11, eax_11)
int32_t* var_40_4 = eax_3
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
