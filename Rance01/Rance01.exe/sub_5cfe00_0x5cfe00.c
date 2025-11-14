// 函数: sub_5cfe00
// 地址: 0x5cfe00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719ab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = data_797d88
int32_t eax_6 = **arg1
var_58 = ebp
int128_t* eax_7 = eax_6(eax_4)
char* ecx = eax_7
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
sub_401270(&var_48, ecx - &ecx[1], eax_7)
int32_t var_4 = 0
void** eax_9 = sub_5d0560(ebp + 0x20, &var_48)
void** esi_2 = *(ebp + 0x24)
void** var_4c = eax_9
int32_t eax_11

if (eax_9 != esi_2)
    int32_t ebp_1 = eax_9[7]
    void* eax_10 = &eax_9[3]
    
    if (*(eax_10 + 0x14) u>= 0x10)
        eax_10 = *eax_10
    
    int32_t edi_1 = var_38
    
    if (edi_1 u>= ebp_1)
        edi_1 = ebp_1
    
    int32_t* edx_1 = var_48.d
    
    if (var_34 u< 0x10)
        edx_1 = &var_48
    
    eax_11 = sub_402320(eax_10, edx_1, eax_10, edi_1)
    bool cond:0_1 = eax_11 s< 0
    
    if (eax_11 == 0)
        if (var_38 u>= ebp_1)
            int32_t edx_2
            edx_2.b = var_38 != ebp_1
            eax_11 = edx_2
        else
            eax_11 = 0xffffffff
        
        cond:0_1 = eax_11 s< 0
    
    eax_11.b = cond:0_1

void*** eax_13

if (eax_9 == esi_2 || eax_11.b != 0)
    void** var_50 = esi_2
    eax_13 = &var_50
else
    eax_13 = &var_4c

void** esi_3 = *eax_13
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_70_3 = var_48.d
    sub_6b4d5b()

void* ecx_3 = var_58
int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0
char var_2c
int32_t var_18_1

if (esi_3 != *(ecx_3 + 0x24))
    var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_4_2 = 1

int32_t result

if (esi_3 == *(ecx_3 + 0x24) || esi_3[0xb] != 3)
    result.b = 0
else
    sub_401180(&var_2c, 0xffffffff, &esi_3[0xe], 0)
    char* eax_15 = var_2c.d
    
    if (var_18_1 u< 0x10)
        eax_15 = &var_2c
    
    (*(*arg2 + 4))(eax_15)
    
    if (var_18_1 u>= 0x10)
        int32_t var_70_5 = var_2c.d
        sub_6b4d5b()
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
