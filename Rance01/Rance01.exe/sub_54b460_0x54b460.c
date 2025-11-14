// 函数: sub_54b460
// 地址: 0x54b460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2b0) -= 4
int128_t** eax_6 = **(arg1 + 0x2b0)
int32_t ecx_2 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
int128_t** var_30 = eax_6
char result
int128_t* edx

if (eax_6 u>= ecx_2)
    result = sub_53d1c0(eax_6, edx, arg1, 0x7508e8)
else
    eax_6 = *(*(arg1 + 0x1e4) + (eax_6 << 2))
    edx = nullptr
    
    if (eax_6 != 0)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_4 = 0
        
        if (eax_6[1] != 0)
            edx = *eax_6
        
        char* eax_7 = edx
        
        do
            ecx_2.b = *eax_7
            eax_7 = &eax_7[1]
        while (ecx_2.b != 0)
        
        void* eax_8 = eax_7 - &eax_7[1]
        int32_t* esi_2 = &var_2c
        sub_401270(esi_2, eax_8, edx)
        int32_t eax_10
        int32_t edx_2
        eax_10, edx_2 = sub_552880(arg1 + 0x1dc, var_30)
        void* ebx
        
        if (eax_10.b != 0)
            while (true)
                int32_t eax_12 = sub_53f5a0(arg1, arg1, esi_2, eax_8, 1)
                
                if (eax_12 == 1)
                    *(arg1 + 0x6b4) = arg1 + 0x2b4
                    int128_t*** var_4c_5 = &var_30
                    *(arg1 + 0x2b4) = 0xffffffff
                    *(arg1 + 0x6b4) += 4
                    char eax_15
                    int32_t edx_4
                    eax_15, edx_4 = sub_537dc0(arg1 + 0x2b4, &var_2c, arg1 + 0x4c)
                    
                    if (eax_15 != 0)
                        int128_t** edi_3 = var_30
                        void* eax_18
                        int32_t edx_5
                        eax_18, edx_5 = sub_537d90(arg1 + 0x4c, edi_3)
                        
                        if (eax_18 == 0)
                            char* eax_19 = var_2c.d
                            
                            if (var_18_1 u< 0x10)
                                eax_19 = &var_2c
                            
                            char* var_4c_7 = eax_19
                            ebx.b = sub_53d1c0(eax_19, edx_5, arg1, 0x750988)
                            sub_401110(&var_2c)
                            result = ebx.b
                        else if (*(eax_18 + 0x34) == 1)
                            sub_53fbf0(edi_3, arg1)
                            sub_401110(&var_2c)
                            result = 1
                        else
                            char* eax_21 = var_2c.d
                            
                            if (var_18_1 u< 0x10)
                                eax_21 = &var_2c
                            
                            char* var_4c_8 = eax_21
                            ebx.b = sub_53d1c0(eax_21, edx_5, arg1, 0x7509b0)
                            sub_401110(&var_2c)
                            result = ebx.b
                    else
                        char* eax_16 = var_2c.d
                        
                        if (var_18_1 u< 0x10)
                            eax_16 = &var_2c
                        
                        char* var_4c_6 = eax_16
                        ebx.b = sub_53d1c0(eax_16, edx_4, arg1, 0x75096c)
                        sub_401110(&var_2c)
                        result = ebx.b
                    
                    break
                
                if (eax_12 == 2)
                    if (var_18_1 u>= 0x10)
                        int32_t var_4c_4 = var_2c.d
                        sub_6b4d5b()
                    
                    result = 0
                    break
        else
            ebx.b = sub_53d1c0(eax_10, edx_2, arg1, 0x750920)
            
            if (var_18_1 u>= 0x10)
                int32_t var_4c_3 = var_2c.d
                sub_6b4d5b()
            
            result = ebx.b
    else
        result = sub_53d1c0(eax_6, edx, arg1, 0x7508e8)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
