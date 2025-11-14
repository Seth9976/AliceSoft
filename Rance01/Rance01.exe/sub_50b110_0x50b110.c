// 函数: sub_50b110
// 地址: 0x50b110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723da9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_e8
int32_t eax_2 = data_78c474 ^ &var_e8
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
char var_80
char var_48
char* eax_8
int32_t* ecx_1
eax_8, ecx_1 = sub_4c1d70(arg3, &var_48, sub_401800(arg1, arg1, &var_80), &var_48)
char* var_100_1 = eax_8
var_4.b = 1
int32_t var_9c
int32_t* ecx_2 = sub_402c60(&var_9c, ".mot", ecx_1)
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_100_2 = var_48.d
    ecx_2 = sub_6b4d5b()

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
var_4.b = 4
int32_t var_6c

if (var_6c u>= 0x10)
    int32_t var_100_3 = var_80.d
    ecx_2 = sub_6b4d5b()

int32_t var_6c_1 = 0xf
int32_t var_70 = 0
var_80 = 0
var_4.b = 5
char var_64
char var_2c
char* eax_13
int32_t* ecx_5
eax_13, ecx_5 = sub_4c1d70(arg3, &var_64, sub_401800(ecx_2, arg1, &var_2c), &var_64)
char* var_100_5 = eax_13
var_4.b = 6
char var_b8
sub_402c60(&var_b8, ".mpr", ecx_5)
int32_t var_50

if (var_50 u>= 0x10)
    int32_t var_100_6 = var_64.d
    sub_6b4d5b()

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_100_7 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t* var_e0 = nullptr
int32_t var_dc = 0
int32_t var_d8 = 0
int32_t var_d4 = 0
var_4.b = 0xa
char eax_17 = sub_50c290(&var_9c, arg2, &var_e0)
int32_t* ecx_7 = var_e0
int32_t eax_18 = var_dc
int32_t* result
int32_t var_a4
int32_t var_88

if (eax_17 == 0 || (ecx_7 == 0 && eax_18 == var_d8))
    var_4.b = 0xb
    
    if (ecx_7 != 0)
        (*(*ecx_7 + 4))(eax_4)
        eax_18 = var_dc
    
    if (eax_18 != 0)
        int32_t var_100_21 = eax_18
        sub_6b4d5b()
    
    int32_t var_dc_1 = 0
    int32_t var_d8_1 = 0
    int32_t var_d4_1 = 0
    
    if (var_a4 u>= 0x10)
        int32_t var_100_22 = var_b8.d
        sub_6b4d5b()
    
    int32_t var_a4_2 = 0xf
    int32_t var_a8_2 = 0
    var_b8 = 0
    
    if (var_88 u< 0x10)
        result = nullptr
    else
        int32_t var_100_23 = var_9c
        sub_6b4d5b()
        result = nullptr
else
    int32_t* var_cc = nullptr
    int32_t var_c8_1 = 0
    int32_t var_c4_1 = 0
    int32_t var_c0_1 = 0
    var_4.b = 0xc
    
    if (sub_50c290(&var_b8, arg2, &var_cc) != 0)
        int32_t* eax_22 = operator new(0x8c)
        int32_t* var_e4_1 = eax_22
        var_4.b = 0xd
        int32_t* result_1
        
        if (eax_22 == 0)
            result_1 = nullptr
        else
            result_1 = sub_4d0a10(eax_22)
        
        var_4.b = 0xc
        int32_t* var_100_16
        
        if (result_1 != 0)
            int32_t* ecx_11 = var_cc
            int32_t* esi_2
            int32_t edi_2
            int32_t eax_28
            
            if (ecx_11 == 0)
                eax_28 = var_c8_1
                esi_2 = var_c4_1 - eax_28
            label_50b427:
                int32_t edi_4 = eax_28 - var_c4_1
                int32_t edi_5 = neg.d(edi_4)
                edi_2 = sbb.d(edi_5, edi_5, edi_4 != 0) & eax_28
            else
                int32_t* eax_25 = (*(*ecx_11 + 0x14))(eax_4)
                int32_t* ecx_12 = var_cc
                esi_2 = eax_25
                
                if (ecx_12 == 0)
                    eax_28 = var_c8_1
                    goto label_50b427
                
                edi_2 = (*(*ecx_12 + 0x18))()
            int32_t* ecx_13 = var_e0
            void* eax_32
            int32_t ebp_1
            int32_t ecx_15
            
            if (ecx_13 == 0)
                ecx_15 = var_dc
                ebp_1 = var_d8 - ecx_15
            label_50b465:
                int32_t eax_34 = ecx_15 - var_d8
                int32_t eax_35 = neg.d(eax_34)
                eax_32 = sbb.d(eax_35, eax_35, eax_34 != 0) & ecx_15
            else
                int32_t eax_30 = (*(*ecx_13 + 0x14))(eax_4)
                int32_t* ecx_14 = var_e0
                ebp_1 = eax_30
                
                if (ecx_14 == 0)
                    ecx_15 = var_dc
                    goto label_50b465
                
                eax_32 = (*(*ecx_14 + 0x18))()
            
            if (sub_4d0f00(result_1, eax_32, ebp_1, edi_2, esi_2) == 0)
                sub_4d0e60(result_1)
                var_4.b = 0xa
                sub_50a970(&var_cc)
                var_100_16 = &var_e0
                goto label_50b3cd
            
            var_4.b = 0xa
            sub_50a970(&var_cc)
            var_4.b = 9
            sub_50a970(&var_e0)
            sub_401110(&var_b8)
            sub_401110(&var_9c)
            result = result_1
        else
            var_4.b = 0xa
            sub_50a970(&var_cc)
            var_100_16 = &var_e0
        label_50b3cd:
            var_4.b = 9
            sub_50a970(var_100_16)
            sub_401110(&var_b8)
            sub_401110(&var_9c)
            result = nullptr
    else
        var_4.b = 0xa
        sub_50a970(&var_cc)
        var_4.b = 9
        sub_50a970(&var_e0)
        
        if (var_a4 u>= 0x10)
            int32_t var_100_12 = var_b8.d
            sub_6b4d5b()
        
        int32_t var_a4_1 = 0xf
        int32_t var_a8_1 = 0
        var_b8 = 0
        
        if (var_88 u< 0x10)
            result = nullptr
        else
            int32_t var_100_13 = var_9c
            sub_6b4d5b()
            result = nullptr
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_e8)
return result
