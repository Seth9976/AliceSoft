// 函数: sub_674cf0
// 地址: 0x674cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720efc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_c0
int32_t eax_2 = data_78c474 ^ &var_c0
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = (**arg1)(0x72fe20)

if (result != 0)
    int32_t* eax_7 = (**arg1)(0x72fe30)
    char var_bc_1 = 0
    
    if (eax_7 != 0)
        var_bc_1 = (**eax_7)(eax_4)
    
    int128_t* esi_1 = (*(*result + 0x14))(eax_4)
    char* ecx_3 = esi_1
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    int128_t* eax_11
    
    do
        eax_11.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_11.b != 0)
    sub_401270(&var_48, ecx_3 - &ecx_3[1], esi_1)
    int32_t var_4 = 0
    int32_t var_a4_1 = 0xf
    int32_t var_a8_1 = 0
    char var_b8 = 0
    var_4.b = 1
    sub_401180(&var_b8, 0xffffffff, &data_79341c, 0)
    int32_t var_2c
    sub_401940(&var_2c, sub_587150(&var_b8), &var_48)
    int32_t* var_d8_2 = &var_2c
    var_4.b = 2
    char var_9c
    sub_402c60(&var_9c, 0x730014, nullptr)
    var_4.b = 3
    sub_5870d0(&var_b8)
    sub_402000(&var_b8, &var_9c, 0, 0xffffffff)
    int32_t var_88
    
    if (var_88 u>= 0x10)
        int32_t var_d8_3 = var_9c.d
        sub_6b4d5b()
    
    var_4.b = 1
    int32_t var_88_1 = 0xf
    int32_t var_8c_1 = 0
    var_9c = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_d8_4 = var_2c
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    sub_401180(&var_64, 0xffffffff, &var_b8, 0)
    var_4.b = 4
    sub_401180(&var_b8, 0xffffffff, &data_79341c, 0)
    sub_587150(&var_b8)
    int32_t var_88_2 = 0xf
    int32_t var_8c_2 = 0
    var_9c = 0
    sub_401270(&var_9c, 4, "Data")
    var_4.b = 5
    sub_5870d0(&var_b8)
    sub_402000(&var_b8, &var_9c, 0, 0xffffffff)
    var_4.b = 4
    
    if (var_88_2 u>= 0x10)
        int32_t var_d8_5 = var_9c.d
        sub_6b4d5b()
    
    int32_t var_88_3 = 0xf
    int32_t var_8c_3 = 0
    var_9c = 0
    sub_401270(&var_9c, 2, 0x730020)
    var_4.b = 6
    sub_5870d0(&var_b8)
    sub_402000(&var_b8, &var_9c, 0, 0xffffffff)
    var_4.b = 4
    
    if (var_88_3 u>= 0x10)
        int32_t var_d8_6 = var_9c.d
        sub_6b4d5b()
    
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    char var_80 = 0
    sub_401180(&var_80, 0xffffffff, &var_b8, 0)
    var_4.b = 7
    char* edx_7 = var_80.d
    
    if (var_6c_1 u< 0x10)
        edx_7 = &var_80
    
    char* eax_17 = var_64.d
    
    if (var_50_1 u< 0x10)
        eax_17 = &var_64
    
    char var_bd_1 = (*(*data_797dd8 + 0xcc))(var_bc_1.d, eax_17, edx_7).b
    
    if (var_6c_1 u>= 0x10)
        int32_t var_d8_8 = var_80.d
        sub_6b4d5b()
    
    int32_t var_6c_2 = 0xf
    int32_t var_70_2 = 0
    var_80 = 0
    
    if (var_50_1 u>= 0x10)
        int32_t var_d8_9 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_2 = 0xf
    int32_t var_54_2 = 0
    var_64 = 0
    
    if (var_a4_1 u>= 0x10)
        int32_t var_d8_10 = var_b8.d
        sub_6b4d5b()
    
    int32_t var_a4_2 = 0xf
    int32_t var_a8_2 = 0
    var_b8 = 0
    
    if (var_34_1 u>= 0x10)
        int32_t var_d8_11 = var_48.d
        sub_6b4d5b()
    
    result.b = var_bd_1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c0)
return result
