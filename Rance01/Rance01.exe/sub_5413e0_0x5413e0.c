// 函数: sub_5413e0
// 地址: 0x5413e0
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
int32_t* eax_5 = *(arg1 + 0x28c)
int32_t edx = *eax_5
*(arg1 + 0x28c) = &eax_5[1]
int32_t ecx = *(arg1 + 0x7c)
int32_t eax_7 = *(arg1 + 0x78)
int32_t ecx_2
int128_t* ecx_3

if (edx u< (ecx - eax_7) s>> 2 && eax_7 != ecx && *(arg1 + 0x88) != *(arg1 + 0x8c))
    ecx_2 = *(eax_7 + (edx << 2))
    ecx_3 = ecx_2 + *(arg1 + 0x88)

int32_t* result

if (edx u< (ecx - eax_7) s>> 2 && eax_7 != ecx && *(arg1 + 0x88) != *(arg1 + 0x8c)
        && ecx_2 != neg.d(*(arg1 + 0x88)))
    char* eax_8 = ecx_3
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    
    do
        edx.b = *eax_8
        eax_8 = &eax_8[1]
    while (edx.b != 0)
    
    sub_401270(&var_2c, eax_8 - &eax_8[1], ecx_3)
    int32_t var_4 = 0
    int32_t var_30
    int32_t* eax_10
    int32_t edx_1
    eax_10, edx_1 = sub_552d50(arg1 + 0x1dc, &var_2c, &var_30)
    bool var_31_1 = eax_10.b == 0
    int32_t var_4_1 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        int32_t var_4c_3 = var_2c.d
        eax_10, edx_1 = sub_6b4d5b()
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_31_1 == 0)
        **(arg1 + 0x2b0) = var_30
        *(arg1 + 0x2b0) += 4
        result.b = 1
    else
        sub_53d1c0(eax_10, edx_1, arg1, 0x74e004)
        result.b = 0
else
    int32_t var_4c = edx
    sub_53d1c0(eax_7, edx, arg1, 0x74dfd0)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
