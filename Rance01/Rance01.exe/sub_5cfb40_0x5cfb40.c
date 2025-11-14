// 函数: sub_5cfb40
// 地址: 0x5cfb40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_2 = data_797d88
int32_t eax_6 = **arg1
result_1 = result_2
int128_t* eax_7 = eax_6(eax_4)
char* ecx = eax_7
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
sub_401270(&var_2c, ecx - &ecx[1], eax_7)
int32_t var_4 = 0
void** eax_9 = sub_5d0560(result_2 + 0x20, &var_2c)
void** esi_2 = *(result_2 + 0x24)
void** var_38 = eax_9
void*** eax_12
void** var_30

if (eax_9 == esi_2)
    var_30 = esi_2
    eax_12 = &var_30
else
    int32_t ebp_1 = eax_9[7]
    void* eax_10 = &eax_9[3]
    
    if (*(eax_10 + 0x14) u>= 0x10)
        eax_10 = *eax_10
    
    int32_t edi_1 = var_1c
    
    if (var_1c u>= ebp_1)
        edi_1 = ebp_1
    
    int32_t* edx_1 = var_2c.d
    
    if (var_18 u< 0x10)
        edx_1 = &var_2c
    
    int32_t eax_11 = sub_402320(eax_10, edx_1, eax_10, edi_1)
    bool cond:0_1 = eax_11 s< 0
    
    if (eax_11 != 0)
        goto label_5cfc17
    
    if (var_1c u< ebp_1)
        var_30 = esi_2
        eax_12 = &var_30
    else
        eax_11.b = var_1c != ebp_1
        cond:0_1 = eax_11 s< 0
    label_5cfc17:
        
        if (cond:0_1)
            var_30 = esi_2
            eax_12 = &var_30
        else
            eax_12 = &var_38
void** esi_3 = *eax_12

if (var_18 u>= 0x10)
    int32_t var_54_3 = var_2c.d
    sub_6b4d5b()

void* const result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (esi_3 == *(result + 0x24))
    result.b = 0
else
    result = 1
    
    if (esi_3[0xb] != 1)
        result.b = 0
    else
        *arg2 = esi_3[0xc]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
