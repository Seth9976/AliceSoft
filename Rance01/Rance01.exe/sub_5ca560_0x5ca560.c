// 函数: sub_5ca560
// 地址: 0x5ca560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e2f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = data_78c474 ^ &var_60
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = data_797d7c
bool result

if (sub_5ca700(ebp) == 0)
    result = false
else
    int128_t* esi_1 = (**arg1)(eax_4)
    char* ecx_1 = esi_1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int128_t* eax_6
    
    do
        eax_6.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_6.b != 0)
    sub_401270(&var_2c, ecx_1 - &ecx_1[1], esi_1)
    int32_t var_4 = 0
    int32_t var_54_1 = 0xffffffff
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    int32_t* var_78_2 = &ebp[1]
    var_4.b = 1
    bool var_5d_1 = sub_601f80(&var_2c) == 0
    int32_t var_4_1 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        int32_t var_78_3 = var_2c.d
        sub_6b4d5b()
    
    if (var_5d_1 != 0)
        result = false
    else if (ebp[1] == ebp[2])
        result = true
    else
        int32_t* eax_8 = operator new(8)
        
        if (eax_8 == 0)
            eax_8 = nullptr
        else
            int32_t edx_2 = ebp[1]
            int32_t ecx_6 = ebp[2] - edx_2
            *eax_8 = edx_2
            eax_8[1] = edx_2 + ecx_6
        
        ebp[5] = eax_8
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        int32_t var_4_2 = 2
        
        if (sub_410070(eax_8, &var_48) != 0)
            uint32_t var_58
            
            if (sub_402680(0x7379f0, &var_48) == 0)
                sub_401110(&var_48)
                result = false
            else if (sub_5546f0(ebp[5], &var_58) == 0 || var_58 != 0)
                sub_401110(&var_48)
                result = false
            else
                sub_401140((&ebp[7]).b, (**arg1)(), &ebp[7])
                *(ebp + 0x19) = 1
                sub_401110(&var_48)
                result = true
        else
            sub_401110(&var_48)
            result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_60)
return result
