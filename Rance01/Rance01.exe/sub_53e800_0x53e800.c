// 函数: sub_53e800
// 地址: 0x53e800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726e58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = data_78c474 ^ &var_44
int32_t __saved_edi
int32_t var_58 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2b0) -= 4
int32_t eax_6 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_8 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ecx_1 = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
int32_t var_3c = edx
char** ecx_6

if (eax_8 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    edx = *(arg1 + 0x1e4)
    ecx_6 = *(edx + (eax_8 << 2))

int32_t* result

if (eax_8 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2 && ecx_6 != 0)
    char* esi_1
    
    if (ecx_6[1] != 0)
        esi_1 = *ecx_6
    else
        esi_1 = nullptr
    
    char* eax_9 = esi_1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    
    do
        ecx_6.b = *eax_9
        eax_9 = &eax_9[1]
    while (ecx_6.b != 0)
    
    sub_401270(&var_2c, eax_9 - &eax_9[1], esi_1)
    int32_t var_30
    int32_t* var_5c_2 = &var_30
    int32_t var_4 = 0
    char eax_11 = sub_537dc0(arg1 + 0x4c, &var_2c, arg1 + 0x4c)
    int32_t var_4_1 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        int32_t var_5c_3 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    char eax_13
    int32_t edi_3
    
    if (eax_11 != 0)
        edi_3 = var_30
        eax_13 = sub_53fb70(eax_6, arg1, edi_3)
    
    if (eax_11 == 0 || eax_13 == 0)
        edi_3 = 0
    
    int32_t* eax_14 = sub_554320(var_3c, ecx_1, arg1 + 0x1dc, edi_3)
    
    if (eax_14.b != 0)
        **(arg1 + 0x2b0) = eax_8
        *(arg1 + 0x2b0) += 4
        result.b = 1
    else
        int32_t var_5c_6 = ecx_1
        int32_t var_60_3 = var_3c
        int32_t var_64_1 = 0x74d484
        result = sub_53d1c0(eax_14, ecx_1, arg1, "FT_ASSIGNS")
else
    int32_t var_5c = eax_8
    result = sub_53d1c0(eax_8, edx, arg1, 0x74d448)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
return result
