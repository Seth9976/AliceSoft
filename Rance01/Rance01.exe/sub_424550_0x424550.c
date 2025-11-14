// 函数: sub_424550
// 地址: 0x424550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7136b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_38 = ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t __saved_edi
char* result = (**esi)(data_78c474 ^ &__saved_edi)
char* result_1 = result
char i

do
    i = *result_1
    result_1 = &result_1[1]
while (i != 0)
void* ecx_1 = result_1 - &result_1[1]

if (ecx_1 s> 0)
    void* ecx_2 = ecx_1 & 0x80000001
    bool cond:0_1 = ecx_2 == 0
    
    if (ecx_2 s< 0)
        cond:0_1 = ((ecx_2 - 1) | 0xfffffffe) == 0xffffffff
    
    if (not(cond:0_1))
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    char* ecx_8 = nullptr
    char* edi_1 = nullptr
    char* var_28 = nullptr
    char* var_24_1 = nullptr
    int32_t var_20_1 = 0
    int32_t var_c_1 = 0
    char var_31
    
    if (ecx_1 s> 0)
        void* esi_1 = &result[1]
        void* var_30_1 = esi_1
        char* i_2 = ((ecx_1 - 1) u>> 1) + 1
        char* i_1
        
        do
            result.b = *(esi_1 - 1)
            result.b -= 0x41
            char* edx_4
            edx_4.b = 0x1a
            result.w = muls.dp.b(result.b, 0x1a)
            ebx.b = result.b
            ebx.b += *esi_1
            ebx.b -= 0x41
            var_31 = ebx.b
            
            if (&var_31 u< ecx_8)
                edx_4 = &var_31
            
            if (&var_31 u>= ecx_8 || edi_1 u> &var_31)
                if (ecx_8 == var_20_1)
                    result, edx_4 = sub_4247b0(&var_28, edx_4, 1)
                    ecx_8 = var_24_1
                    edi_1 = var_28
                
                if (ecx_8 != 0)
                    *ecx_8 = ebx.b
            else
                void* esi_2 = &var_31 - edi_1
                
                if (ecx_8 == var_20_1)
                    result, edx_4 = sub_4247b0(&var_28, edx_4, 1)
                    ecx_8 = var_24_1
                    edi_1 = var_28
                
                if (ecx_8 != 0)
                    result.b = *(edi_1 + esi_2)
                    *ecx_8 = result.b
                
                esi_1 = var_30_1
            
            ecx_8 = &ecx_8[1]
            esi_1 += 2
            i_1 = i_2
            i_2 -= 1
            var_24_1 = ecx_8
            var_30_1 = esi_1
        while (i_1 != 1)
        esi = arg1
    
    char* edx_5 = &var_31
    var_31 = 0
    
    if (&var_31 u>= ecx_8 || edi_1 u> &var_31)
        if (ecx_8 == var_20_1)
            sub_4247b0(&var_28, edx_5, 1)
            ecx_8 = var_24_1
            edi_1 = var_28
        
        if (ecx_8 != 0)
            *ecx_8 = 0
    else
        char* esi_3 = &var_31 - edi_1
        
        if (ecx_8 == var_20_1)
            sub_4247b0(&var_28, edx_5, 1)
            ecx_8 = var_24_1
            edi_1 = var_28
        
        if (ecx_8 != 0)
            edx_5.b = *(esi_3 + edi_1)
            *ecx_8 = edx_5.b
        
        esi = arg1
    
    void* var_24_2 = &ecx_8[1]
    (*(*esi + 4))(edi_1)
    
    if (edi_1 != 0)
        char* var_48_2 = edi_1
        sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
