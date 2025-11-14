// 函数: sub_403090
// 地址: 0x403090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72507b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_a4
int32_t eax_2 = data_78c474 ^ &var_a4
int32_t __saved_edi
int32_t var_b8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_5 = arg2
var_a4 = arg1
int32_t var_6c = 0xf
int32_t var_70 = 0
char var_80 = 0
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
int32_t edx = sub_401270(&var_80, eax_5 - &eax_5[1], arg2)
int32_t* esi_2 = var_a4
int32_t var_4 = 0
int32_t* ecx = esi_2[0x22]
char* var_bc_1 = &var_80
int32_t* var_c0 = ecx
struct _EXCEPTION_REGISTRATION_RECORD** result
bool cond:0_1

if (sub_406330(esi_2[0x21], edx, ecx) == esi_2[0x22])
    int32_t var_88_1 = 0xf
    int32_t var_8c_1 = 0
    char var_9c = 0
    var_4.b = 1
    sub_401180(&var_9c, 0xffffffff, &data_79341c, 0)
    sub_587150(&var_9c)
    int128_t* eax_9 = arg2
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    void* esi_3 = eax_9 + 1
    char i_1
    
    do
        i_1 = *eax_9
        eax_9 += 1
    while (i_1 != 0)
    var_4.b = 2
    char var_2c
    sub_401940(&var_2c, sub_401270(&var_64, eax_9 - esi_3, arg2), &var_64)
    char* var_bc_3 = &var_2c
    var_4.b = 3
    char var_48
    sub_402c60(&var_48, ".afa", nullptr)
    var_4.b = 4
    sub_5870d0(&var_9c)
    sub_402000(&var_9c, &var_48, 0, 0xffffffff)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_bc_4 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_bc_5 = var_2c.d
        sub_6b4d5b()
    
    var_4.b = 1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_50_1 u>= 0x10)
        int32_t var_bc_6 = var_64.d
        sub_6b4d5b()
    
    if (sub_403850(&var_9c, var_a4, arg3).b != 0)
        sub_405220(&var_80, &esi_2[0x21])
        
        if (var_88_1 u>= 0x10)
            int32_t var_bc_10 = var_9c.d
            sub_6b4d5b()
        
        cond:0_1 = var_6c u< 0x10
        int32_t var_88_3 = 0xf
        int32_t var_8c_3 = 0
        var_9c = 0
        goto label_4032e7
    
    if (var_88_1 u>= 0x10)
        int32_t var_bc_8 = var_9c.d
        sub_6b4d5b()
    
    int32_t var_88_2 = 0xf
    int32_t var_8c_2 = 0
    var_9c = 0
    
    if (var_6c u>= 0x10)
        int32_t var_bc_9 = var_80.d
        sub_6b4d5b()
    
    result.b = 0
else
    cond:0_1 = var_6c u< 0x10
label_4032e7:
    
    if (not(cond:0_1))
        int32_t var_bc_11 = var_80.d
        sub_6b4d5b()
    
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a4)
return result
