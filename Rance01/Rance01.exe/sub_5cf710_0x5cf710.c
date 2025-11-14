// 函数: sub_5cf710
// 地址: 0x5cf710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719b38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = data_78c474 ^ &var_7c
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_797d88
int32_t __saved_edi
int128_t* eax_7 = (**arg1)(data_78c474 ^ &__saved_edi)
char* ecx_2 = eax_7
int32_t var_50 = 0xf
void** var_54 = nullptr
char var_64 = 0
char i

do
    i = *ecx_2
    ecx_2 = &ecx_2[1]
while (i != 0)
sub_401270(&var_64, ecx_2 - &ecx_2[1], eax_7)
int32_t var_4 = 0
void** eax_9 = sub_5d0560(ecx + 0x20, &var_64)
void** esi_4 = *(ecx + 0x24)
void** var_6c = eax_9
void** var_78
int32_t eax_11

if (eax_9 != esi_4)
    void** edx_1 = eax_9[7]
    void* eax_10 = &eax_9[3]
    var_78 = edx_1
    
    if (*(eax_10 + 0x14) u>= 0x10)
        eax_10 = *eax_10
    
    void** edi_1 = var_54
    
    if (edi_1 u>= edx_1)
        edi_1 = edx_1
    
    int32_t* edx_2 = var_64.d
    
    if (var_50 u< 0x10)
        edx_2 = &var_64
    
    eax_11 = sub_402320(eax_10, edx_2, eax_10, edi_1)
    bool cond:0_1 = eax_11 s< 0
    
    if (eax_11 == 0)
        void** edi_2 = var_78
        
        if (var_54 u>= edi_2)
            int32_t edx_3
            edx_3.b = var_54 != edi_2
            eax_11 = edx_3
        else
            eax_11 = 0xffffffff
        
        cond:0_1 = eax_11 s< 0
    
    eax_11.b = cond:0_1

void*** eax_13

if (eax_9 == esi_4 || eax_11.b != 0)
    var_78 = esi_4
    eax_13 = &var_78
else
    eax_13 = &var_6c

void** result = *eax_13

if (result != *(ecx + 0x24))
    result.b = result[0xb] == 3
else
    result.b = 1

bool var_79 = result.b == 0
int32_t var_4_1 = 0xffffffff

if (var_50 u>= 0x10)
    int32_t var_94_3 = var_64.d
    sub_6b4d5b()

if (var_79 == 0)
    int128_t* eax_15 = (**arg2)()
    char* ecx_8 = eax_15
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i_1
    
    do
        i_1 = *ecx_8
        ecx_8 = &ecx_8[1]
    while (i_1 != 0)
    sub_401270(&var_2c, ecx_8 - &ecx_8[1], eax_15)
    int32_t var_4_2 = 1
    int128_t* eax_17 = (**arg1)()
    char* ecx_11 = eax_17
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    char i_2
    
    do
        i_2 = *ecx_11
        ecx_11 = &ecx_11[1]
    while (i_2 != 0)
    sub_401270(&var_48, ecx_11 - &ecx_11[1], eax_17)
    var_4_2.b = 2
    void* eax_19 = sub_5d0120(&var_48, ecx + 0x20)
    *(eax_19 + 4) = 3
    sub_401180(eax_19 + 0x10, 0xffffffff, &var_2c, 0)
    
    if (var_34_1 u>= 0x10)
        int32_t var_94_7 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (var_18_1 u>= 0x10)
        int32_t var_94_8 = var_2c.d
        sub_6b4d5b()
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7c)
return result
