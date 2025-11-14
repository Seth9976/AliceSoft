// 函数: sub_4e6960
// 地址: 0x4e6960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ff28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0xf
void* var_54 = nullptr
char var_64 = 0
sub_401270(&var_64, 0xf, 0x755a44)
int32_t var_4 = 0
char* ecx = var_64.d
int128_t* eax_6 = *(arg1 + 8)
char* esi_1 = ecx

if (var_50 u< 0x10)
    esi_1 = &var_64
    ecx = &var_64

var_70 = arg1 + 4
void* var_88 = var_70
sub_4102d0(arg1 + 4, eax_6, ecx, var_54 + esi_1)
int32_t var_4_1 = 0xffffffff

if (var_50 u>= 0x10)
    int32_t var_88_1 = var_64.d
    sub_6b4d5b()

int32_t i_1 = 0

if ((*(arg2 + 0x98) - *(arg2 + 0x94)) s/ 0x1c s> 0)
    int32_t i
    
    do
        if (i_1 s> 0)
            var_50 = 0xf
            int32_t var_54_1 = 0
            var_64 = 0
            sub_401270(&var_64, 3, 0x755a54)
            int32_t var_4_2 = 1
            char* ecx_4 = var_64.d
            char* esi_4 = ecx_4
            
            if (var_50 u< 0x10)
                esi_4 = &var_64
                ecx_4 = &var_64
            
            void* var_88_2 = var_70
            sub_4102d0(var_70, *(arg1 + 8), ecx_4, &esi_4[var_54_1])
            int32_t var_4_3 = 0xffffffff
            
            if (var_50 u>= 0x10)
                int32_t var_88_3 = var_64.d
                sub_6b4d5b()
        
        int32_t var_2c
        char* eax_14 = sub_4ba920(&var_2c, i_1, arg2)
        int32_t var_4_4 = 2
        
        if (*(eax_14 + 0x14) u>= 0x10)
            eax_14 = *eax_14
        
        char* var_88_5 = eax_14
        int128_t* eax_15 = sub_4104a0("\t\t"%s"")
        var_4_4.b = 3
        int32_t ecx_6 = *(eax_15 + 0x14)
        int32_t esi_8 = eax_15[1].d
        int128_t* edi_4
        
        if (ecx_6 u< 0x10)
            edi_4 = eax_15
        else
            edi_4 = *eax_15
        
        if (ecx_6 u>= 0x10)
            eax_15 = *eax_15
        
        void* var_88_6 = var_70
        sub_4102d0(var_70, *(arg1 + 8), eax_15, edi_4 + esi_8)
        
        if (var_50 u>= 0x10)
            int32_t var_88_7 = var_64.d
            sub_6b4d5b()
        
        int32_t var_4_5 = 0xffffffff
        var_50 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_88_8 = var_2c
            sub_6b4d5b()
        
        i = i_1 + 1
        i_1 = i
    while (i s< (*(arg2 + 0x98) - *(arg2 + 0x94)) s/ 0x1c)

int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 2, 0x755a60)
int32_t var_4_6 = 4
int128_t* ecx_13 = var_48.d
int128_t* esi_12 = ecx_13

if (var_34 u< 0x10)
    esi_12 = &var_48
    ecx_13 = &var_48

void* var_88_9 = var_70
sub_4102d0(var_70, *(arg1 + 8), ecx_13, var_38 + esi_12)

if (var_34 u>= 0x10)
    int32_t var_88_10 = var_48.d
    sub_6b4d5b()

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
