// 函数: sub_670110
// 地址: 0x670110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c0f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a8
int32_t eax_2 = data_78c474 ^ &var_a8
int32_t __saved_edi
int32_t var_bc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_9c = nullptr
int32_t var_98 = 0
int32_t var_94 = 0
int32_t var_4 = 0
sub_670490(arg2, &var_9c)
int32_t var_74 = 0xf
int32_t var_78 = 0
char var_88 = 0
sub_401270(&var_88, 4, "#EOF")
var_4.b = 1
sub_405220(&var_88, &var_9c)
var_4.b = 0

if (var_74 u>= 0x10)
    int32_t var_c0_1 = var_88.d
    sub_6b4d5b()

int32_t edi_1 = var_98
struct _EXCEPTION_REGISTRATION_RECORD** ebp = var_9c
int32_t result = (edi_1 - ebp) s/ 0x1c
int32_t var_a4 = 1

if (result s> 0)
    int32_t var_a0_1 = result
    int32_t i
    
    do
        int32_t var_74_1 = 0xf
        int32_t var_78_1 = 0
        var_88 = 0
        sub_401180(&var_88, 0xffffffff, ebp, 0)
        var_4.b = 2
        int32_t eax_10 = var_78_1
        
        if (var_78_1 u>= 1)
            eax_10 = 1
        
        char* edx_5 = var_88.d
        
        if (var_74_1 u< 0x10)
            edx_5 = &var_88
        
        int32_t ecx_4
        int32_t edx_6
        result, ecx_4, edx_6 = sub_402320(eax_10, edx_5, 0x7300c0, eax_10)
        bool cond:0_1 = result == 0
        
        if (result == 0)
            if (var_78_1 u>= 1)
                result.b = var_78_1 != 1
            else
                result = 0xffffffff
            
            cond:0_1 = result == 0
        
        result.b = cond:0_1
        bool cond:1_1
        
        if (result.b == 0)
            if (var_78_1 != 0)
                int32_t eax_12 = sub_670bf0(ebp, edx_6, ecx_4)
                int32_t var_58_1 = 0xf
                int32_t var_5c_1 = 0
                char var_6c = 0
                sub_401180(&var_6c, 0xffffffff, ebp, 0)
                int32_t var_50_1 = eax_12
                int32_t var_4c_1 = var_a4
                var_4.b = 3
                
                if (eax_12 == 0x11)
                    int32_t var_2c
                    sub_66fc20(&var_2c, &var_6c)
                    var_4.b = 4
                    char var_48
                    char* esi_4 = &var_48
                    void* var_1c
                    int32_t var_34
                    
                    if (var_1c != 2)
                        var_4.b = 6
                        sub_401180(&var_6c, 0xffffffff, sub_401ec0(&var_2c, esi_4, 1, var_1c - 2), 
                            0)
                        
                        if (var_34 u>= 0x10)
                            int32_t var_c0_7 = var_48.d
                            sub_6b4d5b()
                    else
                        var_34 = 0xf
                        int32_t var_38_1 = 0
                        var_48 = 0
                        sub_401270(esi_4, nullptr, 0x72d382)
                        var_4.b = 5
                        sub_401180(&var_6c, 0xffffffff, &var_48, 0)
                        
                        if (var_34 u>= 0x10)
                            int32_t var_c0_5 = var_48.d
                            sub_6b4d5b()
                    var_4.b = 3
                    int32_t var_18
                    
                    if (var_18 u>= 0x10)
                        int32_t var_c0_8 = var_2c
                        sub_6b4d5b()
                
                result = sub_668940(&var_6c, arg1 + 0x1c)
                
                if (var_58_1 u>= 0x10)
                    int32_t var_c0_9 = var_6c.d
                    result = sub_6b4d5b()
                
                var_4.b = 0
                cond:1_1 = var_74_1 u< 0x10
                int32_t var_58_2 = 0xf
                int32_t var_5c_2 = 0
                var_6c = 0
                goto label_6703fd
            
            var_4.b = 0
            
            if (var_74_1 u>= 0x10)
                int32_t var_c0_3 = var_88.d
                result = sub_6b4d5b()
        else
            var_a4 += 1
            var_4.b = 0
            cond:1_1 = var_74_1 u< 0x10
        label_6703fd:
            
            if (not(cond:1_1))
                int32_t var_c0_10 = var_88.d
                result = sub_6b4d5b()
        ebp = &ebp[7]
        i = var_a0_1
        var_a0_1 -= 1
    while (i != 1)
    edi_1 = var_98
    ebp = var_9c

if (ebp != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_5 = ebp
    
    if (ebp != edi_1)
        do
            if (esi_5[5] u>= 0x10)
                struct _EXCEPTION_REGISTRATION_RECORD* var_c0_11 = *esi_5
                sub_6b4d5b()
            
            esi_5[5] = 0xf
            esi_5[4] = 0
            *esi_5 = nullptr
            esi_5 = &esi_5[7]
        while (esi_5 != edi_1)
    
    struct _EXCEPTION_REGISTRATION_RECORD** var_c0_12 = ebp
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a8)
return result
