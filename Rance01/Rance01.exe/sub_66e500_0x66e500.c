// 函数: sub_66e500
// 地址: 0x66e500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_722e40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int128_t* var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_54 = arg4
int128_t* result

if (arg2 == 0 || arg4 == 0)
    result.b = 0
else
    int128_t* esi_1 = (**arg2)(eax_4)
    char* ecx_1 = esi_1
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38 = 0
    int128_t* eax_7
    
    do
        eax_7.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_7.b != 0)
    sub_401270(&var_38, ecx_1 - &ecx_1[1], esi_1)
    int32_t var_c_1 = 0
    int32_t* var_4c = nullptr
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    var_c_1.b = 1
    result = sub_66b050(&var_4c, arg1 + 8, &var_38)
    int32_t* esi_3 = var_4c
    int32_t edx_7
    
    if (result.b != 0 && arg3 s>= 0)
        void* ecx_5 = var_48_1 - esi_3
        int32_t eax_8
        void* edx_5
        edx_5:eax_8 = muls.dp.d(0x92492493, ecx_5)
        edx_7 = (edx_5 + ecx_5) s>> 4
    
    if (result.b == 0 || arg3 s< 0 || arg3 s>= (edx_7 u>> 0x1f) + edx_7)
        if (esi_3 != 0)
            sub_405780(esi_3, var_48_1)
            int32_t* var_68_4 = esi_3
            sub_6b4d5b()
        
        if (var_24_1 u< 0x10)
            result.b = 0
        else
            int32_t var_68_5 = var_38.d
            sub_6b4d5b()
            result.b = 0
    else
        int32_t ecx_7 = arg3 * 7
        int32_t* eax_11 = &esi_3[ecx_7]
        
        if (esi_3[ecx_7 + 5] u>= 0x10)
            eax_11 = *eax_11
        
        (*(*var_54 + 4))(eax_11)
        sub_4054e0(&var_4c)
        sub_401110(&var_38)
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
