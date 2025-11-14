// 函数: sub_423550
// 地址: 0x423550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b72d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
bool var_c0
int32_t eax_2 = data_78c474 ^ &var_c0
int32_t __saved_edi
int32_t var_d4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0xf
void* var_54 = nullptr
char var_64 = 0
sub_401270(&var_64, 7, "http://")
int32_t var_4 = 0
int32_t var_6c = 0xf
void* var_70 = nullptr
int32_t var_80[0x4]
__builtin_memset(&var_80, 0, 1)
sub_401270(&var_80, 8, "https://")
int32_t var_88 = 0xf
int32_t var_8c = 0
char var_9c = 0
var_4.b = 2
int32_t var_b8
char* eax_6 = sub_401ec0(arg2, &var_b8, 0, var_54)
char* ecx_2 = var_64.d

if (var_50 u< 0x10)
    ecx_2 = &var_64

void* esi_3 = *(eax_6 + 0x10)
void* edi = var_54
void* edx = esi_3

if (esi_3 u>= edi)
    edx = edi

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

int32_t eax_7 = sub_402320(eax_6, eax_6, ecx_2, edx)
bool cond:1 = eax_7 == 0

if (eax_7 == 0)
    int32_t eax_8
    
    if (esi_3 u>= edi)
        eax_8.b = esi_3 != edi
    else
        eax_8 = 0xffffffff
    
    cond:1 = eax_8 == 0

var_c0 = cond:1
var_4.b = 2
int32_t var_a4

if (var_a4 u>= 0x10)
    int32_t var_d8_2 = var_b8
    sub_6b4d5b()
    edi = var_54

char* esi_4 = &var_b8

if (var_c0 == 0)
    var_4.b = 5
    var_4.b = 2
    var_c0 = sub_405d70(&var_80, sub_401ec0(arg2, esi_4, 0, var_70))
    
    if (var_a4 u>= 0x10)
        int32_t var_d8_5 = var_b8
        sub_6b4d5b()
    
    if (var_c0 == 0)
        sub_401180(&var_9c, 0xffffffff, arg2, 0)
    else
        var_4.b = 6
        sub_401ef0(&var_9c, sub_401ec0(arg2, &var_b8, var_70, 0xffffffff))
        
        if (var_a4 u>= 0x10)
            int32_t var_d8_6 = var_b8
            sub_6b4d5b()
else
    var_4.b = 4
    sub_401ef0(&var_9c, sub_401ec0(arg2, esi_4, edi, 0xffffffff))
    
    if (var_a4 u>= 0x10)
        int32_t var_d8_3 = var_b8
        sub_6b4d5b()

int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_4.b = 8
var_c0 = true
void* eax_16 = sub_405360(&var_9c, &var_c0, 1)

if (eax_16 == 0xffffffff)
    sub_401180(&var_48, 0xffffffff, &var_9c, 0)
    sub_401270(&var_2c, nullptr, 0x72db37)
else
    var_4.b = 9
    sub_401ef0(&var_48, sub_401ec0(&var_9c, &var_b8, 0, eax_16))
    var_4.b = 8
    
    if (var_a4 u>= 0x10)
        int32_t var_d8_8 = var_b8
        sub_6b4d5b()
    
    var_4.b = 0xa
    sub_401ef0(&var_2c, sub_401ec0(&var_9c, &var_b8, eax_16 + 1, 0xffffffff))
    var_4.b = 8
    
    if (var_a4 u>= 0x10)
        int32_t var_d8_9 = var_b8
        sub_6b4d5b()

sub_401180(arg1 + 8, 0xffffffff, &var_48, 0)
int32_t* result = sub_401180(arg1 + 0x24, 0xffffffff, &var_2c, 0)

if (var_18 u>= 0x10)
    int32_t var_d8_10 = var_2c.d
    result = sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (var_34 u>= 0x10)
    int32_t var_d8_11 = var_48.d
    result = sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0

if (var_88 u>= 0x10)
    int32_t var_d8_12 = var_9c.d
    result = sub_6b4d5b()

int32_t var_88_1 = 0xf
int32_t var_8c_1 = 0
var_9c = 0

if (var_6c u>= 0x10)
    int32_t var_d8_13 = var_80[0]
    result = sub_6b4d5b()

int32_t var_6c_1 = 0xf
int32_t var_70_1 = 0
__builtin_memset(&var_80, 0, 1)

if (var_50 u>= 0x10)
    int32_t var_d8_14 = var_64.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c0)
return result
