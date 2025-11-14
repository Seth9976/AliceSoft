// 函数: sub_4b9250
// 地址: 0x4b9250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711ca8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = arg8
int32_t* esi = arg7
int32_t var_4 = 0
int32_t* var_4c
void* const var_48
int32_t var_20

if (esi * 2 s<= edx)
    int32_t eax_9
    
    do
        int32_t var_38_1 = arg9
        int32_t* edx_1 = &arg3[esi]
        int32_t* edi_1 = &edx_1[esi]
        arg7 = &var_4c
        var_4c = nullptr
        var_48 = nullptr
        int32_t var_44_1 = 0
        int32_t var_40_1 = 0
        int32_t var_3c_1 = arg6
        arg6 = sub_4b9550(&var_4c, &var_20, arg3, &var_20, edx_1, edx_1, edi_1, var_4c, var_48)[4]
        int32_t eax_8 = var_20
        
        if (eax_8 != 0)
            int32_t var_38_2 = eax_8
            sub_6b4d5b()
        
        eax_9 = esi * 2
        edx = arg8 - eax_9
        arg3 = edi_1
        arg8 = edx
    while (edx s>= eax_9)

if (edx s> esi)
    int32_t var_38_4 = arg9
    var_4c = nullptr
    var_48 = nullptr
    int32_t var_44_3 = 0
    int32_t var_40_3 = 0
    int32_t var_3c_3 = arg6
    arg8 = &var_4c
    void* esi_1 = &arg3[esi]
    sub_4b9550(arg4, &var_20, arg3, &var_20, esi_1, esi_1, arg4, var_4c, var_48)
else
    var_48 = nullptr
    int32_t var_44_2 = 0
    int32_t var_40_2 = 0
    int32_t var_3c_2 = 0
    int32_t var_38_3 = arg6
    arg8 = &var_48
    var_4c = arg3
    sub_4dd2c0(&var_20, arg4, arg3, var_4c)

int32_t eax_13 = var_20

if (eax_13 != 0)
    int32_t var_38_5 = eax_13
    sub_6b4d5b()

int32_t result = arg5

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
