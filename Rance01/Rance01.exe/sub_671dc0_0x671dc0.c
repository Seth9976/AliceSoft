// 函数: sub_671dc0
// 地址: 0x671dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7250e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_b8
int32_t eax_2 = data_78c474 ^ &var_b8
int32_t __saved_edi
int32_t var_cc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_5 = arg3

if (eax_5[5] u>= 0x10)
    eax_5 = *eax_5

void* result = sub_40da60(eax_5)

if (arg1 != 0)
    int32_t var_48
    int32_t eax_6
    int32_t* ecx
    eax_6, ecx = sub_66fc50(arg1, &var_48)
    int32_t var_d0_2 = eax_6
    int32_t var_4 = 0
    char var_80
    sub_567130(&var_80, 0x7302c8, ecx)
    char* var_d4_2 = &var_80
    int32_t* var_64
    int32_t* eax_8 = &var_64
    var_4.b = 1
    sub_402c60(eax_8, 0x7302c4, nullptr)
    var_4.b = 2
    int32_t var_50
    
    if (var_50 u>= 0x10)
        eax_8 = var_64
    
    result = sub_40da60(eax_8)
    
    if (var_50 u>= 0x10)
        int32_t* var_d0_4 = var_64
        result = sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64.b = 0
    int32_t var_6c
    
    if (var_6c u>= 0x10)
        int32_t var_d0_5 = var_80.d
        result = sub_6b4d5b()
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    var_80 = 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_d0_6 = var_48
        result = sub_6b4d5b()
    
    if (*(arg2 + 0x34) != 0)
        int32_t var_2c
        int32_t eax_10
        int32_t* ecx_2
        eax_10, ecx_2 = sub_66fc50(arg1, &var_2c)
        int32_t var_d0_8 = eax_10
        int32_t var_4_2 = 3
        char var_9c
        sub_567130(&var_9c, 0x7302d0, ecx_2)
        char* var_d4_4 = &var_9c
        var_4_2.b = 4
        sub_402c60(&var_b8, 0x7302cc, nullptr)
        var_4_2.b = 5
        result = sub_402000(*(arg2 + 0x34), &var_b8, 0, 0xffffffff)
        int32_t var_a4
        
        if (var_a4 u>= 0x10)
            int32_t var_d0_9 = var_b8.d
            result = sub_6b4d5b()
        
        int32_t var_a4_1 = 0xf
        int32_t var_a8_1 = 0
        var_b8 = 0
        int32_t var_88
        
        if (var_88 u>= 0x10)
            int32_t var_d0_10 = var_9c.d
            result = sub_6b4d5b()
        
        int32_t var_88_1 = 0xf
        int32_t var_8c_1 = 0
        var_9c = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_d0_11 = var_2c
            result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_b8)
return result
