// 函数: sub_61a1c0
// 地址: 0x61a1c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d660
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t i_1
int32_t eax_2 = data_78c474 ^ &i_1
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x20) == 0)
    switch (*(arg1 + 0x24))
        case 0
            sub_401140(arg1.b, "void ", arg2)
        case 0xa
            sub_401140(arg1.b, "int ", arg2)
        case 0xb
            sub_401140(arg1.b, "float ", arg2)
        case 0xc
            sub_401140(arg1.b, "string ", arg2)
        case 0xd
            sub_405e30(sub_401180(arg2, 0xffffffff, arg1 + 0x2c, 0), 0x734888, arg2)
        case 0x12
            sub_401140(arg1.b, "ref int ", arg2)
        case 0x13
            sub_401140(arg1.b, "ref float ", arg2)
        case 0x14
            sub_401140(arg1.b, "ref string ", arg2)
        case 0x15
            sub_401140(arg1.b, "ref ", arg2)
            sub_405e30(sub_402000(arg2, arg1 + 0x2c, 0, 0xffffffff), 0x7348c0, arg2)
        case 0x2f
            sub_401140(arg1.b, "bool ", arg2)
        case 0x33
            sub_401140(arg1.b, "ref bool ", arg2)

if (*(arg1 + 0x20) != 0 || *(arg1 + 0x20) != 0)
    sub_401270(arg3, 1, 0x7348d4)
    sub_402000(arg3, arg1 + 4, 0, 0xffffffff)
else
    sub_401180(arg3, 0xffffffff, arg1 + 4, 0)
    int32_t edx_2 = *(arg1 + 0x18)
    int128_t* var_50_1
    
    if (edx_2 u< 0x10)
        var_50_1 = arg1 + 4
    else
        var_50_1 = *(arg1 + 4)
    
    int32_t edi_1 = *(arg1 + 0x14)
    i_1 = 0
    int32_t i_2
    
    if (edi_1 s> 0)
        i_2 = i_1
        
        do
            char* eax_8
            
            if (edx_2 u< 0x10)
                eax_8 = arg1 + 4
            else
                eax_8 = *(arg1 + 4)
            
            char* eax_9
            
            if (eax_8[i_2] u>= 0x81)
                if (edx_2 u< 0x10)
                    eax_9 = arg1 + 4
                else
                    eax_9 = *(arg1 + 4)
            
            char* eax_10
            
            if (eax_8[i_2] u< 0x81 || eax_9[i_2] u> 0x9f)
                if (edx_2 u< 0x10)
                    eax_10 = arg1 + 4
                else
                    eax_10 = *(arg1 + 4)
            
            if ((eax_8[i_2] u< 0x81 || eax_9[i_2] u> 0x9f) && eax_10[i_2] u< 0xe0)
                void* eax_11
                
                if (edx_2 u< 0x10)
                    eax_11 = arg1 + 4
                else
                    eax_11 = *(arg1 + 4)
                
                if (*(eax_11 + i_2) == 0x40)
                    i_1 = i_2 + 1
                    void* eax_12
                    
                    if (edx_2 u< 0x10)
                        eax_12 = arg1 + 4
                    else
                        eax_12 = *(arg1 + 4)
                    
                    int32_t var_48
                    
                    if (*(eax_12 + i_2 + 1) != 0x30)
                        void* eax_14
                        
                        if (edx_2 u< 0x10)
                            eax_14 = arg1 + 4
                        else
                            eax_14 = *(arg1 + 4)
                        
                        if (*(eax_14 + i_2 + 1) != 0x31)
                            int32_t var_4_3 = 2
                            sub_401ef0(arg3, sub_401ec0(arg1 + 4, &var_48, i_1, 0xffffffff))
                        else
                            sub_401270(arg3, 1, 0x7348d0)
                            int32_t var_4_2 = 1
                            sub_402000(arg3, sub_401ec0(arg1 + 4, &var_48, 0, i_1 - 1), 0, 
                                0xffffffff)
                        
                        int32_t var_4_4 = 0xffffffff
                        sub_401110(&var_48)
                    else
                        int32_t var_4 = 0
                        sub_401ef0(arg3, sub_401ec0(arg1 + 4, &var_48, 0, i_1 - 1))
                        int32_t var_4_1 = 0xffffffff
                        int32_t var_34
                        
                        if (var_34 u>= 0x10)
                            int32_t var_70_6 = var_48
                            sub_6b4d5b()
                    break
                
                i_2 += 1
            else
                i_2 += 2
        while (i_2 s< edi_1)
    
    char* eax_19 = var_50_1
    
    do
        i_2.b = *eax_19
        eax_19 = &eax_19[1]
    while (i_2.b != 0)
    
    sub_401270(arg3, eax_19 - &eax_19[1], var_50_1)

sub_402cb0(arg3, 0x7348d8, 1)
int32_t edi_5 = *(arg1 + 0x4c)
int32_t eax_25
int32_t edx_5
edx_5:eax_25 = muls.dp.d(0x6bca1af3, *(arg1 + 0x50) - edi_5)
int32_t edx_6 = edx_5 s>> 5
i_1 = 0

if ((edx_6 u>> 0x1f) + edx_6 s> 0)
    int32_t ebx_2 = 0
    int32_t edx_15
    int32_t i
    
    do
        switch (*(ebx_2 + edi_5 + 4) - 0xa)
            case 0
                sub_402cb0(arg3, &data_7348dc, 3)
            case 1
                sub_402cb0(arg3, "float", 5)
            case 2
                sub_402cb0(arg3, "string", 6)
            case 3
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 4
                sub_402cb0(arg3, "array@int", 9)
            case 5
                sub_402cb0(arg3, "array@float", 0xb)
            case 6
                sub_402cb0(arg3, "array@string", 0xc)
            case 7
                sub_402cb0(arg3, "array@", 6)
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 8
                sub_402cb0(arg3, "ref int", 7)
            case 9
                sub_402cb0(arg3, "ref float", 9)
            case 0xa
                sub_402cb0(arg3, "ref string", 0xa)
            case 0xb
                sub_402cb0(arg3, "ref ", 4)
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 0xc
                sub_402cb0(arg3, "ref array@int", 0xd)
            case 0xd
                sub_402cb0(arg3, "ref array@float", 0xf)
            case 0xe
                sub_402cb0(arg3, "ref array@string", 0x10)
            case 0xf
                sub_402cb0(arg3, "ref array@", 0xa)
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 0x11
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 0x14
                sub_402cb0(arg3, "array@", 6)
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 0x15
                sub_402cb0(arg3, "ref ", 4)
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 0x16
                sub_402cb0(arg3, "ref array@", 0xa)
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 0x25
                sub_402cb0(arg3, "bool", 4)
            case 0x28
                sub_402cb0(arg3, "array@bool", 0xa)
            case 0x29
                sub_402cb0(arg3, "ref bool", 8)
            case 0x2a
                sub_402cb0(arg3, "ref array@bool", 0xe)
            case 0x35
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 0x38
                sub_402cb0(arg3, "array@", 6)
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 0x39
                sub_402cb0(arg3, "ref ", 4)
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            case 0x3a
                sub_402cb0(arg3, "ref array@", 0xa)
                sub_402000(arg3, ebx_2 + edi_5 + 0xc, 0, 0xffffffff)
            default
                sub_402cb0(arg3, &data_7349f0, 3)
        
        int32_t eax_39 = *(ebx_2 + edi_5 + 4)
        
        if ((eax_39 s>= 0xe && eax_39 s<= 0x11) || (eax_39 s>= 0x16 && eax_39 s<= 0x19)
                || eax_39 == 0x1e || eax_39 == 0x20 || eax_39 == 0x32 || eax_39 == 0x34)
            int32_t eax_40 = *(ebx_2 + edi_5 + 8)
            
            if (eax_40 s> 1)
                int32_t var_70_12 = eax_40
                int32_t var_4_5 = 3
                sub_402000(arg3, sub_4104a0(0x7349f4), 0, 0xffffffff)
                int32_t var_4_6 = 0xffffffff
                char var_2c
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_70_13 = var_2c.d
                    sub_6b4d5b()
                
                var_18 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
        
        sub_402cb0(arg3, 0x7349f8, 1)
        sub_402000(arg3, ebx_2 + edi_5 + 0x28, 0, 0xffffffff)
        int32_t eax_45
        int32_t edx_11
        edx_11:eax_45 = muls.dp.d(0x6bca1af3, *(arg1 + 0x50) - *(arg1 + 0x4c))
        int32_t edx_12 = edx_11 s>> 5
        
        if (i_1 s< edx_12 + (edx_12 u>> 0x1f) - 1)
            sub_402cb0(arg3, 0x7349fc, 2)
        
        edi_5 = *(arg1 + 0x4c)
        int32_t eax_48
        int32_t edx_14
        edx_14:eax_48 = muls.dp.d(0x6bca1af3, *(arg1 + 0x50) - edi_5)
        edx_15 = edx_14 s>> 5
        i = i_1 + 1
        ebx_2 += 0x4c
        i_1 = i
    while (i s< (edx_15 u>> 0x1f) + edx_15)

sub_402cb0(arg3, 0x734a00, 1)
int32_t* result = sub_402000(arg2, arg3, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &i_1)
return result
