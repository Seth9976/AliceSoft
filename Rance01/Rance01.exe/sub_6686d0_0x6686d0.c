// 函数: sub_6686d0
// 地址: 0x6686d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725306
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_bc
int32_t eax_2 = data_78c474 ^ &var_bc
int32_t __saved_edi
int32_t var_d0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_bc = arg2
int32_t* eax_6

if (arg3[5] u< 0x10)
    eax_6 = arg3
else
    eax_6 = *arg3

int32_t* result = sub_40da60(eax_6)

if (arg1 != 0)
    int32_t var_48
    int32_t eax_7
    int32_t* ecx
    eax_7, ecx = sub_66fc50(arg1, &var_48)
    int32_t var_d4_2 = eax_7
    int32_t var_4 = 0
    char var_80
    sub_567130(&var_80, 0x7315b8, ecx)
    char* var_d8_2 = &var_80
    int32_t* var_64
    int32_t* eax_9 = &var_64
    var_4.b = 1
    sub_402c60(eax_9, 0x7315b4, nullptr)
    var_4.b = 2
    int32_t var_50
    
    if (var_50 u>= 0x10)
        eax_9 = var_64
    
    result = sub_40da60(eax_9)
    
    if (var_50 u>= 0x10)
        int32_t* var_d4_4 = var_64
        result = sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64.b = 0
    int32_t var_6c
    
    if (var_6c u>= 0x10)
        int32_t var_d4_5 = var_80.d
        result = sub_6b4d5b()
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    var_80 = 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_d4_6 = var_48
        result = sub_6b4d5b()

int32_t* esi = *(var_bc + 4)

if (esi != 0)
    result = sub_402000(esi, arg3, 0, 0xffffffff)
    
    if (arg1 != 0)
        int32_t var_2c
        int32_t eax_11
        int32_t* ecx_2
        eax_11, ecx_2 = sub_66fc50(arg1, &var_2c)
        int32_t var_d4_8 = eax_11
        int32_t var_4_2 = 3
        char var_9c
        sub_567130(&var_9c, 0x7315c0, ecx_2)
        char* var_d8_4 = &var_9c
        var_4_2.b = 4
        char var_b8
        sub_402c60(&var_b8, 0x7315bc, nullptr)
        var_4_2.b = 5
        result = sub_402000(*(var_bc + 4), &var_b8, 0, 0xffffffff)
        int32_t var_a4
        
        if (var_a4 u>= 0x10)
            int32_t var_d4_9 = var_b8.d
            result = sub_6b4d5b()
        
        int32_t var_a4_1 = 0xf
        int32_t var_a8_1 = 0
        var_b8 = 0
        int32_t var_88
        
        if (var_88 u>= 0x10)
            int32_t var_d4_10 = var_9c.d
            result = sub_6b4d5b()
        
        int32_t var_88_1 = 0xf
        int32_t var_8c_1 = 0
        var_9c = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_d4_11 = var_2c
            result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_bc)
return result
