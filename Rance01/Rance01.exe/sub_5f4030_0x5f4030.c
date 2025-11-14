// 函数: sub_5f4030
// 地址: 0x5f4030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7273aa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t var_94 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_84 = arg1
int32_t var_74 = 0
int32_t* eax_5 = sub_416b10(1)
*eax_5 = eax_5
eax_5[1] = eax_5
eax_5[2] = eax_5
eax_5[4].b = 1
*(eax_5 + 0x11) = 1
int32_t var_c_1 = 0
int32_t* var_80 = *(*(arg2 + 0xc) + 4)
void var_7c
void* var_64
sub_416b60(&var_64, &var_7c, sub_416d20(&var_7c, &var_80))
int32_t var_98_2 = *(*(arg2 + 0xc) + 4)
sub_4104a0(0x7355f0)
var_c_1.b = 1
void* ebx_1 = sub_5f7370(*(arg2 + 0x48), arg1)
char var_54
int32_t var_40

if (ebx_1 == 0)
label_5f4256:
    void* eax_24 = *(arg2 + 0xc)
    int32_t ecx_8 = var_84
    
    if (*(eax_24 + 0x50) != ecx_8)
        *(eax_24 + 0x50) = ecx_8
        *(eax_24 + 0xc) = 1
    
    *(arg2 + 0x10) = 1
    
    if (var_40 u>= 0x10)
        int32_t var_98_10 = var_54.d
        sub_6b4d5b()
    
    int32_t var_40_2 = 0xf
    int32_t var_44_1 = 0
    var_54 = 0
    int32_t var_c_3 = 4
    sub_58bc40(&var_7c, &var_84, *eax_5, eax_5)
    int32_t* var_98_12 = eax_5
else
    while (true)
        void* edi_1 = *(*(ebx_1 + 0xc) + 4)
        void* var_98_3 = edi_1
        var_64 = edi_1
        var_c_1.b = 2
        sub_402000(&var_54, sub_4104a0(" -> %d"), 0, 0xffffffff)
        var_c_1.b = 1
        int32_t var_24
        
        if (var_24 u>= 0x10)
            int32_t var_38
            int32_t var_98_4 = var_38
            sub_6b4d5b()
        
        void** eax_15 = eax_5[1]
        int32_t* ecx_3 = eax_5
        
        while (*(eax_15 + 0x11) == 0)
            if (eax_15[3] s>= edi_1)
                ecx_3 = eax_15
                eax_15 = *eax_15
            else
                eax_15 = eax_15[2]
        
        var_80 = ecx_3
        void** eax_16
        
        if (ecx_3 == eax_5 || edi_1 s< ecx_3[3])
            int32_t* var_68 = eax_5
            eax_16 = &var_68
        else
            eax_16 = &var_80
        
        if (*eax_16 != eax_5)
            sub_402cb0(&var_54, 0x735600, 3)
            char* eax_20 = var_54.d
            
            if (var_40 u< 0x10)
                eax_20 = &var_54
            
            char* var_98_6 = eax_20
            sub_604c90(0x735608)
            
            if (var_40 u>= 0x10)
                int32_t var_98_7 = var_54.d
                sub_6b4d5b()
            
            int32_t var_40_1 = 0xf
            int32_t var_44 = 0
            var_54 = 0
            int32_t var_c_2 = 3
            sub_58bc40(&var_7c, &var_84, *eax_5, eax_5)
            int32_t* var_98_9 = eax_5
            break
        
        int32_t* var_5c
        sub_416880(&var_7c, &var_64, &var_5c)
        int32_t edi_2 = *(*(ebx_1 + 0xc) + 0x50)
        
        if (edi_2 == 0)
            goto label_5f4256
        
        ebx_1 = sub_5f7370(*(ebx_1 + 0x48), edi_2)
        
        if (ebx_1 == 0)
            goto label_5f4256
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return result
