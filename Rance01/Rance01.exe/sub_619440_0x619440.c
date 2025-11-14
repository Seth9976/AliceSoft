// 函数: sub_619440
// 地址: 0x619440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d6e2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_b0
int32_t eax_2 = data_78c474 ^ &var_b0
int32_t __saved_edi
int32_t var_c4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = *(arg2 + 0x14)
void* esi = arg1
int32_t** result = nullptr
void* var_ac = esi

if (ebx s> 0)
    int32_t edi_1 = *(arg2 + 0x18)
    
    do
        char* ecx
        
        if (edi_1 u< 0x10)
            ecx = arg2 + 4
        else
            ecx = *(arg2 + 4)
        
        char* ecx_1
        
        if (*(ecx + result) u>= 0x81)
            if (edi_1 u< 0x10)
                ecx_1 = arg2 + 4
            else
                ecx_1 = *(arg2 + 4)
        
        char* ecx_2
        
        if (*(ecx + result) u< 0x81 || *(ecx_1 + result) u> 0x9f)
            if (edi_1 u< 0x10)
                ecx_2 = arg2 + 4
            else
                ecx_2 = *(arg2 + 4)
        
        if ((*(ecx + result) u< 0x81 || *(ecx_1 + result) u> 0x9f) && *(ecx_2 + result) u< 0xe0)
            void* ecx_3
            
            if (edi_1 u< 0x10)
                ecx_3 = arg2 + 4
            else
                ecx_3 = *(arg2 + 4)
            
            if (*(ecx_3 + result) == 0x40)
                goto label_6197bd
            
            result += 1
        else
            result += 2
    while (result s< ebx)

if (sub_402680("NULL", arg2 + 4).b == 0 && sub_402680(0x734850, arg2 + 4).b == 0)
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    int32_t var_4 = 0
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    char var_80 = 0
    var_4.b = 1
    char var_64
    int32_t edx_3 = sub_401a00(&var_64, sub_61a1c0(arg2, &var_48, &var_80), arg2 + 0x5c)
    var_4.b = 2
    void* ecx_6
    ecx_6.b = *(arg2 + 0x20) != 0
    int32_t* ebp_1 = esi + 0x34
    var_b0 = ecx_6 + 6
    int32_t var_9c
    int32_t edx_4 = sub_401b60(&var_9c, edx_3, &var_64)
    var_4.b = 3
    int32_t* var_a8
    int32_t i
    int32_t var_88
    
    if (i != 0)
        do
            int32_t* eax_7
            int32_t edx_5
            eax_7, edx_5 = sub_61b4d0(ebp_1, &var_9c)
            
            if (eax_7 != 0)
                ebp_1 = eax_7
            else
                int32_t* eax_8 = operator new(0x40)
                var_a8 = eax_8
                var_4.b = 4
                int32_t* edi_3
                
                if (eax_8 == 0)
                    edi_3 = nullptr
                else
                    edi_3 = sub_61af60(&var_9c, &var_9c, eax_8, 0, &var_9c, 0)
                
                var_4.b = 3
                ebp_1 = sub_61b450(ebp_1, 5, edi_3)
                var_a8 = ebp_1[1]
                void* eax_13
                eax_13, edx_5 = sub_50fa20(var_ac + 4, &var_a8)
                *eax_13 = edi_3
            
            int32_t var_2c
            sub_401a00(&var_2c, edx_5, &var_64)
            var_4.b = 5
            int32_t edx_9 = sub_401ef0(&var_64, &var_2c)
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_c8_4 = var_2c
                edx_9 = sub_6b4d5b()
            
            var_4.b = 2
            
            if (var_88 u>= 0x10)
                int32_t var_c8_5 = var_9c
                edx_9 = sub_6b4d5b()
            
            edx_4 = sub_401b60(&var_9c, edx_9, &var_64)
            var_4.b = 3
        while (i != 0)
        
        esi = var_ac
    
    var_4.b = 2
    
    if (var_88 u>= 0x10)
        int32_t var_c8_6 = var_9c
        edx_4 = sub_6b4d5b()
    
    sub_401a00(&var_9c, edx_4, arg2 + 0x5c)
    var_4.b = 6
    result = sub_6197f0(esi, &var_9c)
    
    if (result != 0)
        int32_t* eax_18 = operator new(0x40)
        var_a8 = eax_18
        var_4.b = 7
        int32_t* edi_5
        
        if (eax_18 == 0)
            edi_5 = nullptr
        else
            edi_5 = sub_61af60(arg2, arg2 + 4, eax_18, 4, arg2 + 0x5c, *(arg2 + 0x78))
        
        var_4.b = 6
        int32_t* var_c8_9 = edi_5
        var_b0 = sub_61b3b0(&var_80, result)
        *sub_50fa20(var_ac + 4, &var_b0) = edi_5
    
    if (var_88 u>= 0x10)
        int32_t var_c8_10 = var_9c
        sub_6b4d5b()
    
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_c8_11 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    
    if (var_6c_1 u>= 0x10)
        int32_t var_c8_12 = var_80.d
        sub_6b4d5b()
    
    int32_t var_6c_2 = 0xf
    int32_t var_70_2 = 0
    var_80 = 0
    
    if (var_34_1 u>= 0x10)
        int32_t var_c8_13 = var_48.d
        sub_6b4d5b()

label_6197bd:
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_b0)
return result
