// 函数: sub_62d750
// 地址: 0x62d750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71cf78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = nullptr
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
int32_t var_4 = 0

if (arg1[0x6e] != arg1[0x70] || arg1[0x6f] != arg1[0x71])
    sub_62da60(arg1, &var_64)

BOOL result
char var_65

if ((arg1[0x6e] != arg1[0x70] || arg1[0x6f] != arg1[0x71]) && var_54 != 0)
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    int32_t edi_2 = 0
    var_4.b = 2
    
    if (var_54 s> 0)
        do
            char* edx_8 = var_64.d
            char* eax_17 = edx_8
            
            if (var_50 u< 0x10)
                eax_17 = &var_64
            
            if (eax_17[edi_2] == 0xa)
                char* eax_18
                
                if (edi_2 != 0)
                    eax_18 = edx_8
                    
                    if (var_50 u< 0x10)
                        eax_18 = &var_64
                
                if (edi_2 == 0 || eax_18[edi_2 - 1] != 0xd)
                    sub_401f60(&var_48, 0xd)
            
            char* eax_19 = var_64.d
            
            if (var_50 u< 0x10)
                eax_19 = &var_64
            
            sub_401f60(&var_48, eax_19[edi_2])
            edi_2 += 1
        while (edi_2 s< var_54)
    
    var_65 = 0
    result = sub_6b2660(&var_48, &var_65)
    
    if (var_34_1 u>= 0x10)
        int32_t var_80_7 = var_48.d
        result = sub_6b4d5b()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (var_50 u>= 0x10)
        int32_t var_80_8 = var_64.d
        result = sub_6b4d5b()
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_4.b = 1
    int32_t esi_2 = arg1[0x53]
    int32_t i = 0
    
    if ((arg1[0x54] - esi_2) s/ 0x1c s> 0)
        do
            sub_402000(&var_2c, ebx + esi_2, 0, 0xffffffff)
            sub_402cb0(&var_2c, 0x733c9c, 2)
            esi_2 = arg1[0x53]
            i += 1
            ebx += 0x1c
        while (i s< (arg1[0x54] - esi_2) s/ 0x1c)
    
    var_65 = 0
    result = sub_6b2660(&var_2c, &var_65)
    
    if (var_18_1 u>= 0x10)
        int32_t var_80_3 = var_2c.d
        result = sub_6b4d5b()
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_50 u>= 0x10)
        int32_t var_80_4 = var_64.d
        result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
