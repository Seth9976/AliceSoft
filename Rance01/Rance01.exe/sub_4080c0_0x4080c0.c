// 函数: sub_4080c0
// 地址: 0x4080c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_722ca0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = data_78c474 ^ &var_7c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int128_t* esi = (**arg1)(data_78c474 ^ &__saved_edi)
char* ecx_1 = esi
int32_t var_40 = 0xf
int32_t var_44 = 0
char var_54 = 0
int128_t* eax_6

do
    eax_6.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax_6.b != 0)
sub_401270(&var_54, ecx_1 - &ecx_1[1], esi)
int32_t esi_2 = 0
int32_t var_c_1 = 0
void var_6c
char eax_8 = sub_40bfe0(&var_54, &var_6c)
int32_t var_c_2 = 0xffffffff

if (var_40 u>= 0x10)
    int32_t var_90_1 = var_54.d
    sub_6b4d5b()

int32_t result

if (eax_8 == 0)
    result = 0
else if ((*(*arg2 + 4))() s>= 7)
    while (true)
        if ((*(*arg2 + 8))(esi_2) != 0xa)
            int32_t var_90_10 = esi_2
            char* eax_20 = sub_4104a0("CG_GetMetrics")
            int32_t var_c_3 = 1
            
            if (*(eax_20 + 0x14) u>= 0x10)
                eax_20 = *eax_20
            
            sub_408e50(eax_20)
            int32_t var_24
            
            if (var_24 u>= 0x10)
                int32_t var_38
                int32_t var_90_11 = var_38
                sub_6b4d5b()
            
            result = 0
            break
        
        esi_2 += 1
        
        if (esi_2 s>= 7)
            (*(*arg2 + 0x10))(0, &var_6c)
            void var_68
            (*(*arg2 + 0x10))(1, &var_68)
            void var_64
            (*(*arg2 + 0x10))(2, &var_64)
            void var_60
            (*(*arg2 + 0x10))(3, &var_60)
            void var_5c
            (*(*arg2 + 0x10))(4, &var_5c)
            int32_t edx_11 = *(*arg2 + 0x10)
            char var_58
            uint32_t var_70 = zx.d(var_58)
            edx_11(5, &var_70)
            int32_t edx_13 = *(*arg2 + 0x10)
            char var_57
            uint32_t var_74 = zx.d(var_57)
            edx_13(6, &var_74)
            result = 1
            break
else
    sub_408e50("CG_GetMetrics")
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7c)
return result
