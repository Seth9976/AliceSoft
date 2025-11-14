// 函数: sub_5fd800
// 地址: 0x5fd800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71dc20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1
uint32_t result

if (arg1[5] u< 0x10)
    result = arg1
    result_1 = arg1
else
    result = *arg1
    result_1 = result

char* ebx = nullptr
void* result_3 = arg1[4] + result
char* ebp = nullptr
uint32_t result_2 = result_3
char* var_44 = nullptr
char* var_40 = nullptr
void* result_5 = nullptr
int32_t var_4 = 0

if (result u< result_3)
    char var_49
    char var_2c
    
    do
        int32_t* result_4 = result_1
        result.b = *result_4
        int32_t edx
        
        if ((result.b u>= 0x81 && result.b u<= 0x9f) || result.b u>= 0xe0)
            if (result_4 u>= ebp || ebx u> result_4)
                result_3 = result_5
                
                if (ebp == result_3)
                    int32_t eax_10 = ebp - ebx
                    
                    if (eax_10 u> 0xfffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    edx = result_3 - ebx
                    
                    if (eax_10 + 1 u> edx)
                        uint32_t edx_4 = edx u>> 1
                        uint32_t ecx_4
                        
                        if (0xffffffff - edx_4 u>= edx)
                            ecx_4 = edx + edx_4
                        else
                            ecx_4 = 0
                        
                        if (ecx_4 u< eax_10 + 1)
                            ecx_4 = eax_10 + 1
                        
                        result, edx = sub_424860(&var_44, ecx_4)
                        result_3 = result_5
                        ebp = var_40
                        ebx = var_44
                        result_4 = result_1
                
                if (ebp != 0)
                    result.b = *result_4
                    *ebp = result.b
            else
                result_3 = result_5
                void* edi_2 = result_4 - ebx
                
                if (ebp == result_3)
                    void* eax_7 = ebp - ebx
                    
                    if (eax_7 u> 0xfffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    edx = result_3 - ebx
                    
                    if (eax_7 + 1 u> edx)
                        uint32_t edx_2 = edx u>> 1
                        void* ecx_2
                        
                        if (0xffffffff - edx_2 u>= edx)
                            ecx_2 = edx + edx_2
                        else
                            ecx_2 = nullptr
                        
                        if (ecx_2 u< eax_7 + 1)
                            ecx_2 = eax_7 + 1
                        
                        edx = sub_424860(&var_44, ecx_2)
                        result_3 = result_5
                        ebp = var_40
                        ebx = var_44
                        result_4 = result_1
                
                if (ebp != 0)
                    edx.b = *(ebx + edi_2)
                    *ebp = edx.b
            
            ebp = &ebp[1]
            result_4 += 1
            var_40 = ebp
            result_1 = result_4
            
            if (result_4 u>= ebp || ebx u> result_4)
                if (ebp != result_3)
                    goto label_5fdb6e
                
                int32_t eax_15 = ebp - ebx
                
                if (eax_15 u> 0xfffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                result_3 -= ebx
                
                if (eax_15 + 1 u<= result_3)
                    goto label_5fdb6e
                
                uint32_t edx_8 = result_3 u>> 1
                uint32_t ecx_6
                
                if (0xffffffff - edx_8 u>= result_3)
                    ecx_6 = result_3 + edx_8
                else
                    ecx_6 = 0
                
                if (ecx_6 u< eax_15 + 1)
                    ecx_6 = eax_15 + 1
                
                result_3, edx = sub_424860(&var_44, ecx_6)
                result_4 = result_1
                goto label_5fdb66
            
            void* edi_4 = result_4 - ebx
            
            if (ebp == result_3)
                int32_t eax_12 = ebp - ebx
                
                if (eax_12 u> 0xfffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                result_3 -= ebx
                
                if (eax_12 + 1 u> result_3)
                    uint32_t edx_6 = result_3 u>> 1
                    uint32_t ecx_5
                    
                    if (0xffffffff - edx_6 u>= result_3)
                        ecx_5 = result_3 + edx_6
                    else
                        ecx_5 = 0
                    
                    if (ecx_5 u< eax_12 + 1)
                        ecx_5 = eax_12 + 1
                    
                    result_3, edx = sub_424860(&var_44, ecx_5)
                    ebp = var_40
                    ebx = var_44
            
            if (ebp == 0)
                goto label_5fdb77
            
            result_3.b = *(edi_4 + ebx)
            *ebp = result_3.b
            goto label_5fdb77
        
        if (result.b != 0xa)
            if (result_4 u< ebp && ebx u<= result_4)
                char* esi_15 = result_1 - ebx
                
                if (ebp == result_5)
                    result_3, edx = sub_4247b0(&var_44, edx, 1)
                    ebp = var_40
                    ebx = var_44
                
                if (ebp != 0)
                    result_3.b = *(esi_15 + ebx)
                    *ebp = result_3.b
                
                goto label_5fdb77
            
            if (ebp != result_5)
                goto label_5fdb6e
            
            result_3, edx = sub_4247b0(&var_44, edx, 1)
        label_5fdb66:
            ebp = var_40
            ebx = var_44
        label_5fdb6e:
            
            if (ebp == 0)
                goto label_5fdb77
            
            edx.b = *result_4
            *ebp = edx.b
        label_5fdb77:
            ebp = &ebp[1]
            result_1 += 1
            var_40 = ebp
        else
            result_1 = result_4 + 1
            
            if (*(arg2 + 0x94) != 0)
                var_49 = 0x20
                sub_54e400(&var_49, &var_44)
                ebp = var_40
                ebx = var_44
            
            if (ebx != ebp)
                var_49 = 0
                sub_54e400(&var_49, &var_44)
                ebx = var_44
                char* eax_20 = ebx
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
                char i
                
                do
                    i = *eax_20
                    eax_20 = &eax_20[1]
                while (i != 0)
                sub_401270(&var_2c, eax_20 - &eax_20[1], ebx)
                var_4.b = 1
                sub_405150(&var_2c, arg3)
                var_4.b = 0
                
                if (var_18_1 u>= 0x10)
                    int32_t var_68_7 = var_2c.d
                    sub_6b4d5b()
                
                ebp = var_40
                
                if (ebx != ebp)
                    sub_6b49d0(ebx, ebp, nullptr, eax_4)
                    ebp = ebx
                    var_40 = ebp
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            sub_401270(&var_2c, 1, &(*U"\\n\n\n\n\n\n\n\n")[7])
            var_4.b = 2
            result_3, edx = sub_405220(&var_2c, arg3)
            var_4.b = 0
            
            if (var_18_2 u>= 0x10)
                int32_t var_68_8 = var_2c.d
                result_3, edx = sub_6b4d5b()
        
        result = result_2
    while (result_1 u< result)
    
    if (ebx != ebp)
        var_49 = 0
        sub_54e400(&var_49, &var_44)
        ebx = var_44
        char* eax_26 = ebx
        int32_t var_18_3 = 0xf
        int32_t var_1c_3 = 0
        var_2c = 0
        char i_1
        
        do
            i_1 = *eax_26
            eax_26 = &eax_26[1]
        while (i_1 != 0)
        sub_401270(&var_2c, eax_26 - &eax_26[1], ebx)
        var_4.b = 3
        result = sub_405150(&var_2c, arg3)
        
        if (var_18_3 u>= 0x10)
            int32_t var_68_11 = var_2c.d
            result = sub_6b4d5b()
    
    if (ebx != 0)
        char* var_68_12 = ebx
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
