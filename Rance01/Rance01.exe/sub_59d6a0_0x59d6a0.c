// 函数: sub_59d6a0
// 地址: 0x59d6a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7201c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
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
void** eax_8 = sub_429b30(arg1 + 0x24, &var_2c)
void** esi_2 = *(arg1 + 0x28)
void** var_30 = eax_8
void*** eax_11

if (eax_8 == esi_2)
    var_38 = esi_2
    eax_11 = &var_38
else
    int32_t ebp_1 = eax_8[7]
    void* eax_9 = &eax_8[3]
    
    if (*(eax_9 + 0x14) u>= 0x10)
        eax_9 = *eax_9
    
    int32_t edi_1 = var_1c
    
    if (var_1c u>= ebp_1)
        edi_1 = ebp_1
    
    int32_t* edx = var_2c.d
    
    if (var_18 u< 0x10)
        edx = &var_2c
    
    int32_t eax_10 = sub_402320(eax_9, edx, eax_9, edi_1)
    bool cond:0_1 = eax_10 s< 0
    
    if (eax_10 != 0)
        goto label_59d769
    
    if (var_1c u< ebp_1)
        var_38 = esi_2
        eax_11 = &var_38
    else
        eax_10.b = var_1c != ebp_1
        cond:0_1 = eax_10 s< 0
    label_59d769:
        
        if (cond:0_1)
            var_38 = esi_2
            eax_11 = &var_38
        else
            eax_11 = &var_30

void** esi_3 = *eax_11

if (var_18 u>= 0x10)
    int32_t var_50_3 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t result

if (esi_3 != *(arg1 + 0x28))
    result = esi_3[0xa]
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
