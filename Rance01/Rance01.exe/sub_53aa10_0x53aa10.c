// 函数: sub_53aa10
// 地址: 0x53aa10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728e33
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_a4
int32_t eax_2 = data_78c474 ^ &var_a4
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = *arg1
var_a4 = arg2
int32_t* result = (*edx)(0x74cacc)

if (result == 0)
    result.b = 0
else
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    char var_80 = 0
    int32_t var_4 = 0
    sub_401180(&var_80, 0xffffffff, &data_79341c, 0)
    sub_587150(&var_80)
    int128_t* esi_1 = (*(*result + 0x14))(eax_4)
    char* ecx_3 = esi_1
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    int128_t* eax_8
    
    do
        eax_8.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_8.b != 0)
    sub_401270(&var_64, ecx_3 - &ecx_3[1], esi_1)
    var_4.b = 1
    sub_5870d0(&var_80)
    sub_402000(&var_80, &var_64, 0, 0xffffffff)
    var_4.b = 0
    
    if (var_50_1 u>= 0x10)
        int32_t var_bc_2 = var_64.d
        sub_6b4d5b()
    
    if (sub_537fc0(var_a4 + 0x4c, &var_80) != 0)
        int32_t var_88_1 = 0xf
        int32_t var_8c_1 = 0
        char var_9c = 0
        var_4.b = 2
        sub_401180(&var_9c, 0xffffffff, &data_79341c, 0)
        sub_587150(&var_9c)
        int128_t* esi_4 = (*(*result + 0x14))()
        char* ecx_8 = esi_4
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
        int128_t* eax_15
        
        do
            eax_15.b = *ecx_8
            ecx_8 = &ecx_8[1]
        while (eax_15.b != 0)
        var_4.b = 3
        char var_2c
        sub_401940(&var_2c, sub_401270(&var_64, ecx_8 - &ecx_8[1], esi_4), &var_64)
        char* var_bc_7 = &var_2c
        var_4.b = 4
        char var_48
        sub_402c60(&var_48, ".DebugA", nullptr)
        var_4.b = 5
        sub_5870d0(&var_9c)
        sub_402000(&var_9c, &var_48, 0, 0xffffffff)
        int32_t var_34
        
        if (var_34 u>= 0x10)
            int32_t var_bc_8 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_bc_9 = var_2c.d
            sub_6b4d5b()
        
        var_4.b = 2
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (var_50_2 u>= 0x10)
            int32_t var_bc_10 = var_64.d
            sub_6b4d5b()
        
        void* esi_7 = var_a4
        
        if (sub_52ed10(&var_9c, esi_7 + 0x240) != 0)
            int32_t* eax_23 = (**arg1)(0x74cadc)
            
            if (eax_23 != 0)
                (**eax_23)(*(esi_7 + 0x1ac))
            
            if (*(esi_7 + 0x50) != 0)
                result = *(esi_7 + 0x4c)
            else
                result = nullptr
            
            *(esi_7 + 0x290) = result
            *(esi_7 + 0x294) = *(esi_7 + 0x50) + result
            *(esi_7 + 0x28c) = result
            *(esi_7 + 0x298) = 1
            
            if (var_88_1 u>= 0x10)
                int32_t var_bc_15 = var_9c.d
                sub_6b4d5b()
            
            int32_t var_88_3 = 0xf
            int32_t var_8c_3 = 0
            var_9c = 0
            
            if (var_6c_1 u>= 0x10)
                int32_t var_bc_16 = var_80.d
                sub_6b4d5b()
            
            result.b = 1
        else
            sub_604c90(0x74cd78)
            
            if (var_88_1 u>= 0x10)
                int32_t var_bc_12 = var_9c.d
                sub_6b4d5b()
            
            int32_t var_88_2 = 0xf
            int32_t var_8c_2 = 0
            var_9c = 0
            
            if (var_6c_1 u< 0x10)
                result.b = 0
            else
                int32_t var_bc_13 = var_80.d
                sub_6b4d5b()
                result.b = 0
    else
        char* eax_13 = var_80.d
        
        if (var_6c_1 u< 0x10)
            eax_13 = &var_80
        
        char* var_bc_4 = eax_13
        sub_604c90(0x74cd48)
        
        if (var_6c_1 u>= 0x10)
            int32_t var_bc_5 = var_80.d
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a4)
return result
