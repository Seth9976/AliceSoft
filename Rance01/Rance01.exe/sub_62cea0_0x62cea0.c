// 函数: sub_62cea0
// 地址: 0x62cea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71cfc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int128_t* var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t var_98 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* edi = arg1
var_84 = edi
struct fileimage::CFileImageMaker::VTable* const var_78 = &fileimage::CFileImageMaker::`vftable'
int32_t result_3 = 0
int128_t* var_70 = nullptr
int32_t var_6c = 0
int32_t var_4 = 0
int32_t i_1 = 0
char var_64
int32_t var_50

if ((*(arg2 + 0x150) - *(arg2 + 0x14c)) s/ 0x1c s> 0)
    int32_t var_80_1 = 0
    int32_t i
    
    do
        void** eax_10 = *(arg2 + 0x14c) + var_80_1
        int32_t esi_1 = eax_10[5]
        int32_t edx_3 = eax_10[4]
        void** ecx_2
        
        if (esi_1 u< 0x10)
            ecx_2 = eax_10
        else
            ecx_2 = *eax_10
        
        if (esi_1 u>= 0x10)
            eax_10 = *eax_10
        
        int128_t* var_9c_1 = var_84
        sub_4102d0(&result_3, var_70, eax_10, ecx_2 + edx_3)
        var_50 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        sub_401270(&var_64, 2, 0x733c84)
        var_4.b = 1
        char* edx_4 = var_64.d
        char* ecx_5 = edx_4
        char* eax_12
        
        if (var_50 u>= 0x10)
            eax_12 = edx_4
        else
            ecx_5 = &var_64
            eax_12 = &var_64
        
        int128_t* var_9c_2 = var_84
        sub_4102d0(&result_3, var_70, eax_12, &ecx_5[var_54_1])
        var_4.b = 0
        
        if (var_50 u>= 0x10)
            int32_t var_9c_3 = var_64.d
            sub_6b4d5b()
        
        var_80_1 += 0x1c
        i = i_1 + 1
        i_1 = i
    while (i s< (*(arg2 + 0x150) - *(arg2 + 0x14c)) s/ 0x1c)
    edi = var_84

int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
var_4.b = 2

if (arg3 == 0)
    sub_604500(arg2 + 0x17c)
    int32_t var_2c
    int32_t* eax_20
    int32_t* ecx_9
    eax_20, ecx_9 = sub_405c90(&var_2c, arg2 + 0x17c, U"\\n\n\t ")
    int32_t* var_ac_1 = eax_20
    var_4.b = 3
    sub_402c60(&var_64, edi, ecx_9)
    var_4.b = 4
    sub_401ef0(&var_48, &var_64)
    
    if (var_50 u>= 0x10)
        int32_t var_9c_6 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_2 = 0
    var_64 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_9c_7 = var_2c
        sub_6b4d5b()
else
    char* eax_18 = edi
    int32_t ecx_1
    
    do
        ecx_1.b = *eax_18
        eax_18 = &eax_18[1]
    while (ecx_1.b != 0)
    sub_401270(&var_48, eax_18 - &eax_18[1], edi)

int32_t result

if (sub_602070(&var_48, &result_3) != 0)
    if (var_34 u>= 0x10)
        int32_t var_9c_10 = var_48.d
        sub_6b4d5b()
    
    result = result_3
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (result != 0)
        int32_t result_2 = result
        sub_6b4d5b()
    
    result.b = 1
else
    if (var_34 u>= 0x10)
        int32_t var_9c_9 = var_48.d
        sub_6b4d5b()
    
    result = result_3
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (result != 0)
        int32_t result_1 = result
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return result
