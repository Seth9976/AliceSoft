// 函数: sub_5b28c0
// 地址: 0x5b28c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71e338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_94
*arg3 = arg1
arg3[1] = arg2
int128_t* result_2 = nullptr
int128_t* var_3c = nullptr
int128_t* var_50 = nullptr
int32_t var_8_1 = 0
int128_t* result = sub_5a63d0(arg3)
result_2 = result

if (result == 0)
    result.b = 0
else
    int128_t* eax_4 = sub_5a41d0(result)
    var_3c = eax_4
    int32_t* var_9c_1
    int128_t* var_98_2
    
    if (eax_4 != 0)
        int128_t* eax_5
        int32_t edx
        eax_5, edx = sub_5a41d0(result)
        var_50 = eax_5
        
        if (eax_5 != 0)
            int128_t* var_98_5 = eax_4
            sub_5a6680(result, sub_5a75f0(sub_5b27e0, edx, arg3, result))
            uint32_t var_60
            uint32_t var_5c
            uint32_t var_58
            int32_t var_54
            uint32_t result_1
            int32_t var_48
            uint32_t var_44
            sub_5a6170(&var_48, &var_60, eax_4, &var_58, &var_54, result, &var_48, &var_5c, 
                &result_1, &var_44)
            
            switch (var_60)
                case 0, 3
                    if (var_58 == 8)
                        result_1.b = 1
                        goto label_5b29e5
                    
                    var_98_2 = &var_50
                    var_9c_1 = &var_3c
                    goto label_5b292f
                case 2, 6
                    result_1.b = 0
                label_5b29e5:
                    int32_t ebx_2 = *(var_3c + 0xc)
                    int32_t eax_10 = ebx_2 * var_54
                    var_5c.b = (var_60 u>> 2).b & 1
                    int32_t var_80 = 0
                    int32_t var_7c_1 = 0
                    int32_t var_78_1 = 0
                    uint32_t result_4 = sub_404f60(eax_10, &var_80)
                    int32_t esi_3 = 0
                    int32_t var_70 = 0
                    int32_t var_6c_1 = 0
                    int32_t var_68_1 = 0
                    var_8_1.b = 2
                    int32_t edi_3
                    
                    while (true)
                        edi_3 = var_80
                        
                        if (esi_3 s>= var_54)
                            break
                        
                        var_44 = esi_3 * ebx_2 + edi_3
                        result_4 = sub_61b5a0(&var_44, &var_70)
                        esi_3 += 1
                    
                    uint32_t result_3 = result_2
                    
                    if (result_3 != 0)
                        *(result_3 + 0x74) |= 1
                        sub_5afaf0(result_3)
                        result_4 = result_3
                        sub_5a8390(var_3c, result_4)
                    
                    int32_t var_98_7 = var_70
                    sub_5a6e60(result_3, result_4)
                    int128_t* edx_4 = var_50
                    int128_t* var_98_8 = edx_4
                    sub_5a6f20(result_3, edx_4)
                    sub_5a7260(&result_2, &var_3c, &var_50)
                    uint32_t ecx_9 = var_5c
                    
                    if (sub_5b2d60(ecx_9, var_48, var_54, arg4, ecx_9.b, result_1.b).b != 0)
                        uint32_t eax_20 = var_60
                        
                        if (eax_20 == 3)
                            if (var_58 == 8)
                                goto label_5b2b26
                            
                            goto label_5b2ad9
                        
                        if (eax_20 != 0 || var_58 != 8)
                        label_5b2ad9:
                            
                            if (var_58 != 0x10)
                                void* esi_8 = (*(*arg4 + 8))(0, 0)
                                int32_t eax_37 = (*(*arg4 + 0x1c))()
                                bool cond:0_1 = var_5c.b == 0
                                var_44 = eax_37 - var_48 * 4
                                
                                if (cond:0_1)
                                    result = nullptr
                                    
                                    while (true)
                                        result_1 = result
                                        
                                        if (result s>= var_54)
                                            break
                                        
                                        for (int32_t i = 0; i s< var_48; i += 1)
                                            void* eax_42 = result * ebx_2 + edi_3
                                            edi_3 = var_80
                                            char* eax_43 = eax_42 + i * 3
                                            *esi_8 = *eax_43
                                            *(esi_8 + 1) = eax_43[1]
                                            eax_43.b = eax_43[2]
                                            *(esi_8 + 2) = eax_43.b
                                            result = result_1
                                            *(esi_8 + 3) = 0xff
                                            esi_8 += 4
                                        
                                        esi_8 += var_44
                                        result += 1
                                else
                                    for (int32_t i_1 = 0; i_1 s< var_54; i_1 += 1)
                                        for (int32_t j = 0; j s< var_48; j += 1)
                                            int32_t eax_40 = i_1 * ebx_2 + edi_3
                                            edi_3 = var_80
                                            result = eax_40 + (j << 2)
                                            *esi_8 = *(eax_40 + (j << 2))
                                            *(esi_8 + 1) = *(result + 1)
                                            *(esi_8 + 2) = *(result + 2)
                                            result.b = *(result + 3)
                                            *(esi_8 + 3) = result.b
                                            esi_8 += 4
                                        
                                        esi_8 += var_44
                                
                                goto label_5b2cb2
                            
                            if (var_5c.b == 0)
                                char* esi_7 = (*(*arg4 + 8))(0, 0)
                                var_44 = (*(*arg4 + 0x1c))() - var_48 * 4
                                result = nullptr
                                
                                while (true)
                                    result_1 = result
                                    
                                    if (result s>= var_54)
                                        break
                                    
                                    for (int32_t i_2 = 0; i_2 s< var_48; i_2 += 1)
                                        int32_t eax_32 = result * ebx_2 + edi_3
                                        edi_3 = var_80
                                        char* eax_33 = eax_32 + i_2 * 6
                                        *esi_7 = *eax_33
                                        esi_7[1] = eax_33[2]
                                        eax_33.b = eax_33[4]
                                        esi_7[2] = eax_33.b
                                        result = result_1
                                        esi_7[3] = 0xff
                                        esi_7 = &esi_7[4]
                                    
                                    esi_7 = &esi_7[var_44]
                                    result += 1
                                
                                goto label_5b2cb2
                            
                            if (var_70 != 0)
                                int32_t var_98_13 = var_70
                                sub_6b4d5b()
                            
                            sub_65ab60(&var_80)
                            result.b = 0
                        else
                        label_5b2b26:
                            void* esi_6 = (*(*arg4 + 8))(0, 0)
                            int32_t eax_25
                            char* edx_9
                            eax_25, edx_9 = (*(*arg4 + 0x1c))()
                            var_44 = eax_25 - var_48 * 4
                            int32_t i_3 = 0
                            edx_9.b = 0xff
                            
                            for (; i_3 s< var_54; i_3 += 1)
                                result = nullptr
                                
                                while (result s< var_48)
                                    *esi_6 = edx_9.b
                                    *(esi_6 + 1) = edx_9.b
                                    *(esi_6 + 2) = edx_9.b
                                    edx_9.b = *(i_3 * ebx_2 + edi_3 + result)
                                    *(esi_6 + 3) = edx_9.b
                                    esi_6 += 4
                                    result += 1
                                    edx_9.b = 0xff
                                
                                esi_6 += var_44
                            
                        label_5b2cb2:
                            
                            if (var_70 != 0)
                                int32_t var_98_14 = var_70
                                sub_6b4d5b()
                            
                            if (edi_3 != 0)
                                int32_t var_98_15 = edi_3
                                sub_6b4d5b()
                            
                            result.b = 1
                    else
                        if (var_70 != 0)
                            int32_t var_98_11 = var_70
                            sub_6b4d5b()
                        
                        if (edi_3 != 0)
                            int32_t var_98_12 = edi_3
                            sub_6b4d5b()
                        
                        result.b = 0
                default
                    sub_5a7260(&result_2, &var_3c, &var_50)
                    result.b = 0
        else
            sub_5a7260(&result_2, &var_3c, eax_5)
            result.b = 0
    else
        var_98_2 = eax_4
        var_9c_1 = eax_4
    label_5b292f:
        sub_5a7260(&result_2, var_9c_1, var_98_2)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
