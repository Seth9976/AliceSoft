// 函数: sub_61edc0
// 地址: 0x61edc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7190f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HWND var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_5 = zx.d(arg3)
HWND edi = arg2
var_4c = edi
int32_t result

if (eax_5 s> 0x9cd2)
    if (eax_5 == 0x9cd4)
    label_61f158:
        sub_61f250(arg1)
        EndDialog(edi, 0xffffffff)
        result = 1
    else
        result = 0
else
    char var_48
    char var_2c
    
    if (eax_5 == 0x9cd2)
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_4_1 = 2
        sub_61e250()
        
        if (var_1c_2 != 0)
            void* eax_22 = *(arg1 + 0xc)
            int32_t ebp_2 = *(*(arg1 + 0x10) + 0x134) + 1
            
            if (ebp_2 s>= (*(eax_22 + 0x38) - *(eax_22 + 0x34)) s>> 2)
            label_61f0c2:
                MessageBoxA(edi, 0x7341e0, 0x7341d8, MB_OK)
                
                if (var_18_2 u>= 0x10)
                    int32_t var_64_11 = var_2c.d
                    sub_6b4d5b()
            else
                while (true)
                    int32_t var_34_2 = 0xf
                    int32_t var_38_2 = 0
                    var_48 = 0
                    var_4_1.b = 3
                    int32_t ecx_16
                    
                    if (ebp_2 s< 0 || ebp_2 s>= (*(eax_22 + 0x38) - *(eax_22 + 0x34)) s>> 2)
                        ecx_16 = 0xffffffff
                    else
                        ecx_16 = *(*(eax_22 + 0x34) + (ebp_2 << 2))
                    
                    int128_t* eax_25 = (*(**(eax_22 + 8) + 0x1c))(ecx_16)
                    
                    if (eax_25 == 0)
                        var_4_1.b = 2
                        
                        if (var_34_2 u>= 0x10)
                            int32_t var_64_12 = var_48.d
                            sub_6b4d5b()
                    else
                        int128_t* ecx_18 = eax_25
                        void* esi_2 = ecx_18 + 1
                        char i
                        
                        do
                            i = *ecx_18
                            ecx_18 += 1
                        while (i != 0)
                        sub_401270(&var_48, ecx_18 - esi_2, eax_25)
                        char* ecx_20 = var_2c.d
                        
                        if (var_18_2 u< 0x10)
                            ecx_20 = &var_2c
                        
                        char* eax_26 = var_48.d
                        
                        if (var_34_2 u< 0x10)
                            eax_26 = &var_48
                        
                        if (__execvp(eax_26, ecx_20) != 0)
                            LPARAM eax_28 = var_2c.d
                            
                            if (var_18_2 u< 0x10)
                                eax_28 = &var_2c
                            
                            sub_61f190(arg1, eax_28, ebp_2)
                            
                            if (var_34_2 u>= 0x10)
                                int32_t var_64_14 = var_48.d
                                sub_6b4d5b()
                            
                            int32_t var_34_3 = 0xf
                            int32_t var_38_3 = 0
                            var_48 = 0
                            
                            if (var_18_2 u>= 0x10)
                                int32_t var_64_15 = var_2c.d
                                sub_6b4d5b()
                            
                            break
                        
                        var_4_1.b = 2
                        
                        if (var_34_2 u>= 0x10)
                            int32_t var_64_10 = var_48.d
                            sub_6b4d5b()
                    
                    eax_22 = *(arg1 + 0xc)
                    ebp_2 += 1
                    
                    if (ebp_2 s>= (*(eax_22 + 0x38) - *(eax_22 + 0x34)) s>> 2)
                        edi = var_4c
                        goto label_61f0c2
        else if (var_18_2 u>= 0x10)
            int32_t var_64_6 = var_2c.d
            sub_6b4d5b()
        
        result = 1
    else
        if (eax_5 == 2)
            goto label_61f158
        
        if (eax_5 != 0x9cd0)
            result = 0
        else
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            int32_t var_4 = 0
            sub_61e250()
            
            if (var_38_1 == 0)
                sub_401110(&var_48)
            else
                int32_t eax_10 = *(*(arg1 + 0x10) + 0x134) - 1
                
                if (eax_10 s< 0)
                    void* ecx_1 = *(arg1 + 0xc)
                    eax_10 = ((*(ecx_1 + 0x38) - *(ecx_1 + 0x34)) s>> 2) - 1
                
                int32_t esi_1 = eax_10
                
                if (eax_10 s< 0)
                label_61ef32:
                    MessageBoxA(edi, 0x7341c4, 0x7341bc, MB_OK)
                    
                    if (var_34_1 u>= 0x10)
                        int32_t var_64_4 = var_48.d
                        sub_6b4d5b()
                else
                    while (true)
                        int32_t var_18_1 = 0xf
                        int32_t var_1c_1 = 0
                        var_2c = 0
                        var_4.b = 1
                        void* eax_14 = *(arg1 + 0xc)
                        int32_t ecx_5
                        
                        if (esi_1 s< 0 || esi_1 s>= (*(eax_14 + 0x38) - *(eax_14 + 0x34)) s>> 2)
                            ecx_5 = 0xffffffff
                        else
                            ecx_5 = *(*(eax_14 + 0x34) + (esi_1 << 2))
                        
                        char eax_15 = sub_623120(eax_14, ecx_5, &var_2c)
                        
                        if (eax_15 != 0)
                            char* ecx_6 = var_48.d
                            
                            if (var_34_1 u< 0x10)
                                ecx_6 = &var_48
                            
                            char* eax_17 = var_2c.d
                            
                            if (var_18_1 u< 0x10)
                                eax_17 = &var_2c
                            
                            if (__execvp(eax_17, ecx_6) != 0)
                                LPARAM eax_19 = var_48.d
                                
                                if (var_34_1 u< 0x10)
                                    eax_19 = &var_48
                                
                                sub_61f190(arg1, eax_19, esi_1)
                                sub_401110(&var_2c)
                                break
                            
                            var_4.b = 0
                            sub_401110(&var_2c)
                        else
                            var_4.b = eax_15
                            
                            if (var_18_1 u>= 0x10)
                                int32_t var_64_2 = var_2c.d
                                sub_6b4d5b()
                        
                        int32_t temp3_1 = esi_1
                        esi_1 -= 1
                        
                        if (temp3_1 - 1 s< 0)
                            edi = var_4c
                            goto label_61ef32
                    
                    sub_401110(&var_48)
            
            result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
