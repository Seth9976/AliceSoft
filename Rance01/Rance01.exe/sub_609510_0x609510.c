// 函数: sub_609510
// 地址: 0x609510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_429ad0(*(*(arg2 + 4) + 4))
void* eax_6 = *(arg2 + 4)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg2 + 4)
*eax_7 = eax_7
int128_t* i = *(arg2 + 4)
int32_t ebx = 0
*(i + 8) = i
*(arg2 + 8) = 0
int32_t* ecx_2 = *(arg1 + 0xa84)

if (ecx_2 != 0)
    int32_t edx_3
    
    for (i = (*(*ecx_2 + 4))(0); i != 0; i = edx_3(ebx))
        int128_t* i_1 = i
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        void* esi_1 = i_1 + 1
        char j
        
        do
            j = *i_1
            i_1 += 1
        while (j != 0)
        sub_401270(&var_2c, i_1 - esi_1, i)
        int32_t var_4 = 0
        *sub_513fa0(arg2, &var_2c) = ebx
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_4c_3 = var_2c.d
            sub_6b4d5b()
        
        edx_3 = *(*ecx_2 + 4)
        ebx += 1
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return i
