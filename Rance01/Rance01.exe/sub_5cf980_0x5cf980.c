// 函数: sub_5cf980
// 地址: 0x5cf980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719af0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = **arg1
void* ebx = data_797d88
var_54 = arg1
int128_t* eax_6 = edx(eax_4)
char* ecx = eax_6
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
sub_401270(&var_48, ecx - &ecx[1], eax_6)
int32_t var_4 = 0
void** eax_8 = sub_5d0560(ebx + 0x20, &var_48)
void** esi_2 = *(ebx + 0x24)
void** var_50 = eax_8
int32_t eax_10

if (eax_8 != esi_2)
    int32_t edi_1 = eax_8[7]
    void* eax_9 = &eax_8[3]
    
    if (*(eax_9 + 0x14) u>= 0x10)
        eax_9 = *eax_9
    
    int32_t ecx_2 = var_38
    
    if (ecx_2 u>= edi_1)
        ecx_2 = edi_1
    
    char* edx_1 = var_48.d
    
    if (var_34 u< 0x10)
        edx_1 = &var_48
    
    eax_10 = sub_402320(eax_9, edx_1, eax_9, ecx_2)
    bool cond:1_1 = eax_10 s< 0
    
    if (eax_10 == 0)
        if (var_38 u>= edi_1)
            int32_t ecx_4
            ecx_4.b = var_38 != edi_1
            eax_10 = ecx_4
        else
            eax_10 = 0xffffffff
        
        cond:1_1 = eax_10 s< 0
    
    eax_10.b = cond:1_1

void*** eax_12

if (eax_8 == esi_2 || eax_10.b != 0)
    void** var_4c = esi_2
    eax_12 = &var_4c
else
    eax_12 = &var_50

void** result = *eax_12

if (result != *(ebx + 0x24))
    result.b = result[0xb] == 4
else
    result.b = 1

void* ebx_1
ebx_1.b = result.b == 0
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_6c_3 = var_48.d
    sub_6b4d5b()

if (ebx_1.b == 0)
    int128_t* eax_14 = (**var_54)()
    char* ecx_6 = eax_14
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i_1
    
    do
        i_1 = *ecx_6
        ecx_6 = &ecx_6[1]
    while (i_1 != 0)
    sub_401270(&var_2c, ecx_6 - &ecx_6[1], eax_14)
    int32_t var_4_2 = 1
    result = sub_5d0120(&var_2c, ebx + 0x20)
    result[1] = 4
    result[0xb].b = arg2
    
    if (var_18_1 u>= 0x10)
        int32_t var_6c_6 = var_2c.d
        sub_6b4d5b()
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
