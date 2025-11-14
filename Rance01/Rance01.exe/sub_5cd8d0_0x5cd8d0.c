// 函数: sub_5cd8d0
// 地址: 0x5cd8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719bc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_8c = nullptr
void** eax_6 = *(data_797d60 + 4)
void** esi = eax_6[1]
void** edi = eax_6

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x7374cc) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

void** esi_1 = *(data_797d60 + 4)
void** var_88 = edi
char eax_8

if (edi != esi_1)
    eax_8 = sub_40f4a0(0x7374cc, &edi[3])

void*** eax_9

if (edi == esi_1 || eax_8 != 0)
    var_8c = esi_1
    eax_9 = &var_8c
else
    eax_9 = &var_88

void** eax_10 = *eax_9

if (eax_10 == esi_1)
label_5cd98f:
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
else
    int32_t* edi_1 = eax_10[7]
    
    if (edi_1 == 0)
        goto label_5cd98f
    
    int32_t* eax_12 = (**edi_1)(0x7374dc)
    
    if (eax_12 == 0)
        goto label_5cd98f
    
    int32_t* eax_14 = (**edi_1)(0x7374ec)
    
    if (eax_14 == 0)
        goto label_5cd98f
    
    int32_t var_4 = 0
    char var_64
    int32_t var_2c
    int32_t* eax_18 = sub_401800(sub_402be0(&var_2c, (*(*eax_14 + 0x24))(eax_4)), &var_2c, &var_64)
    var_4.b = 1
    char var_48
    int32_t* eax_21 = &var_48
    var_4.b = 2
    char var_80
    int32_t* eax_22
    int32_t edx_10
    eax_22, edx_10 = sub_4b3c20(eax_21, sub_402be0(eax_21, (*(*eax_12 + 8))()), eax_18, &var_80)
    var_4.b = 3
    sub_4c1d70(arg1, edx_10, eax_22, arg2)
    int32_t var_6c
    
    if (var_6c u>= 0x10)
        int32_t var_a4_2 = var_80.d
        sub_6b4d5b()
    
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    var_80 = 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_a4_3 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_a4_4 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_a4_5 = var_2c
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return arg2
