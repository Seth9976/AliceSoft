// 函数: sub_4e7ae0
// 地址: 0x4e7ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fe80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
void* var_38 = nullptr
char var_48 = 0
sub_401270(&var_48, 0x11, 0x755b74)
int32_t var_4 = 0
char* ecx = var_48.d
int128_t* eax_5 = *(arg1 + 8)
char* esi_1 = ecx

if (var_34 u< 0x10)
    esi_1 = &var_48
    ecx = &var_48

var_50 = arg1 + 4
void* var_68 = var_50
sub_4102d0(arg1 + 4, eax_5, ecx, var_38 + esi_1)
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_68_1 = var_48.d
    sub_6b4d5b()

int32_t i_1 = 0

if (((*(arg2 + 0x190) - *(arg2 + 0x18c)) & 0xfffffffc) s> 0)
    int32_t i
    
    do
        if (i_1 s> 0)
            var_34 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            sub_401270(&var_48, 3, 0x755b88)
            int32_t var_4_2 = 1
            char* ecx_3 = var_48.d
            char* esi_4 = ecx_3
            
            if (var_34 u< 0x10)
                esi_4 = &var_48
                ecx_3 = &var_48
            
            void* var_68_2 = var_50
            sub_4102d0(var_50, *(arg1 + 8), ecx_3, &esi_4[var_38_1])
            int32_t var_4_3 = 0xffffffff
            
            if (var_34 u>= 0x10)
                int32_t var_68_3 = var_48.d
                sub_6b4d5b()
        
        void* var_6c
        var_6c.q = fconvert.d(fconvert.t(*(*(arg2 + 0x18c) + (i_1 << 2))))
        int128_t* eax_10 = sub_4104a0("\t\t%f")
        int32_t var_4_4 = 2
        int32_t ecx_5 = *(eax_10 + 0x14)
        int32_t esi_7 = eax_10[1].d
        int128_t* edi_3
        
        if (ecx_5 u< 0x10)
            edi_3 = eax_10
        else
            edi_3 = *eax_10
        
        if (ecx_5 u>= 0x10)
            eax_10 = *eax_10
        
        void* var_68_4 = var_50
        sub_4102d0(var_50, *(arg1 + 8), eax_10, edi_3 + esi_7)
        int32_t var_4_5 = 0xffffffff
        
        if (var_34 u>= 0x10)
            int32_t var_68_5 = var_48.d
            sub_6b4d5b()
        
        i = i_1 + 1
        i_1 = i
    while (i s< (*(arg2 + 0x190) - *(arg2 + 0x18c)) s>> 2)

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 2, 0x755b94)
int32_t var_4_6 = 3
int128_t* edx_7 = var_2c.d
int128_t* ecx_10 = edx_7
int128_t* eax_13

if (var_18 u>= 0x10)
    eax_13 = edx_7
else
    ecx_10 = &var_2c
    eax_13 = &var_2c

void* var_68_6 = var_50
sub_4102d0(var_50, *(arg1 + 8), eax_13, ecx_10 + var_1c)

if (var_18 u>= 0x10)
    int32_t var_68_7 = var_2c.d
    sub_6b4d5b()

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
