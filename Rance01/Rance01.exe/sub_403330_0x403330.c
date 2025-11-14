// 函数: sub_403330
// 地址: 0x403330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_5 = arg2
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
sub_401270(&var_2c, eax_5 - &eax_5[1], arg2)
int32_t var_4 = 0
int32_t* var_48
sub_4042e0(&var_2c, &var_48)
var_4.b = 1
void** eax_8 = sub_4055d0(&arg1[0x1d], &var_48)
void** esi_2 = arg1[0x1e]
void** var_4c = eax_8
int32_t var_34
void*** eax_13

if (eax_8 == esi_2)
    var_50 = esi_2
    eax_13 = &var_50
else
    int32_t ebx_1 = eax_8[7]
    void* eax_9 = &eax_8[3]
    
    if (*(eax_9 + 0x14) u>= 0x10)
        eax_9 = *eax_9
    
    int32_t var_38
    int32_t edi_1 = var_38
    
    if (edi_1 u>= ebx_1)
        edi_1 = ebx_1
    
    int32_t* edx_1 = var_48
    
    if (var_34 u< 0x10)
        edx_1 = &var_48
    
    int32_t eax_10 = sub_402320(eax_9, edx_1, eax_9, edi_1)
    bool cond:0_1 = eax_10 s< 0
    
    if (eax_10 != 0)
        goto label_40340d
    
    if (var_38 u< ebx_1)
        var_50 = esi_2
        eax_13 = &var_50
    else
        int32_t ecx_3
        ecx_3.b = var_38 != ebx_1
        cond:0_1 = ecx_3 s< 0
    label_40340d:
        
        if (cond:0_1)
            var_50 = esi_2
            eax_13 = &var_50
        else
            eax_13 = &var_4c

void** eax_14 = *eax_13
int32_t result

if (eax_14 != esi_2)
    int32_t result_1 = (*(*arg1 + 0x34))(&eax_14[0xa])
    
    if (var_34 u>= 0x10)
        int32_t* var_68_6 = var_48
        sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48.b = 0
    
    if (var_18 u>= 0x10)
        int32_t var_68_7 = var_2c.d
        sub_6b4d5b()
    
    result = result_1
else
    if (var_34 u>= 0x10)
        int32_t* var_68_3 = var_48
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48.b = 0
    
    if (var_18 u>= 0x10)
        int32_t var_68_4 = var_2c.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
