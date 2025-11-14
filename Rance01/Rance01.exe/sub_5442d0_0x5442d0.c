// 函数: sub_5442d0
// 地址: 0x5442d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7265e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t* eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4 = 0
*(arg1 + 0x2b0) -= 4
char const* const var_80_1
char var_64
bool eax_11
char result
char* ecx
char* ecx_9
int32_t entry_ebx
char result_1
int32_t ebp

switch (**(arg1 + 0x2b0) - 2)
    case 0
        *(arg1 + 0x2b0) -= 4
        ebp = **(arg1 + 0x2b0)
        int32_t var_50_1 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        var_4.b = 1
        var_80_1 = "S_MOD"
    label_544372:
        ecx = &var_64
        
        if (sub_54d120(ebp, 0xf, arg1, arg1, &var_64, var_80_1) == 0)
            goto label_544416
        
        eax_11 = sub_554840(ebp, &var_48, eax_4)
        goto label_544395
    case 1
        *(arg1 + 0x2b0) -= 4
        int32_t var_50_3 = 0xf
        var_68 = fconvert.s(fconvert.t(**(arg1 + 0x2b0)))
        int32_t var_54_3 = 0
        var_64 = 0
        var_4.b = 3
        char eax_14
        int32_t ecx_2
        eax_14, ecx_2 = sub_54d120(arg2, 0xf, arg1, arg1, &var_64, "S_MOD")
        
        if (eax_14 != 0)
            int32_t var_84_5 = ecx_2
            eax_11 = sub_555340(fconvert.s(fconvert.t(var_68)), &var_48, eax_4)
        label_544395:
            
            if (eax_11 == 0)
                sub_401180(&var_48, 0xffffffff, &var_64, 0)
            
            ecx_9 = &var_64
        label_5444f2:
            var_4.b = 0
            sub_401110(ecx_9)
            
            if (sub_552d50(arg1 + 0x1dc, &var_48, &var_68) != 0)
                **(arg1 + 0x2b0) = var_68
                *(arg1 + 0x2b0) += 4
                sub_401110(&var_48)
                result = 1
            else
                result_1 = sub_53d0e0(arg1, 0x74ec08, eax_4, arg4, arg3, arg2, entry_ebx)
                sub_401110(&var_48)
                result = result_1
        else
            ecx = &var_64
        label_544416:
            sub_401110(ecx)
            sub_401110(&var_48)
            result = 0
    case 2
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        var_4.b = 4
        
        if (sub_54d120(arg2, 0xf, arg1, arg1, &var_2c, "S_MOD") == 0)
            goto label_5444a3
        
        int32_t var_50_4 = 0xf
        int32_t var_54_4 = 0
        var_64 = 0
        var_4.b = 5
        
        if (sub_54d120(arg2, 0xf, arg1, arg1, &var_64, "S_MOD") != 0)
            int32_t* eax_17
            eax_17.b = sub_555b70(&var_2c).b == 0
            
            if (eax_17.b != 0)
                sub_401180(&var_48, eax_17 | 0xffffffff, &var_64, 0)
            
            sub_401110(&var_64)
            ecx_9 = &var_2c
            goto label_5444f2
        
        sub_401110(&var_64)
    label_5444a3:
        sub_401110(&var_2c)
        sub_401110(&var_48)
        result = 0
    case 0x2e
        *(arg1 + 0x2b0) -= 4
        ebp = **(arg1 + 0x2b0)
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
        var_4.b = 2
        var_80_1 = "S_MOD"
        goto label_544372
    default
        result_1 = sub_53d0e0(arg1, 0x74ebe8, eax_4, arg4, arg3, arg2, entry_ebx)
        
        if (var_34 u>= 0x10)
            int32_t var_80_6 = var_48.d
            sub_6b4d5b()
        
        result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
