// 函数: sub_5e55d0
// 地址: 0x5e55d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724568
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 0x18) == 0xffffffff)
    result.b = 0
else
    int32_t edx_1 = arg2[7]
    int32_t ebp_1 = arg2[3]
    int32_t edi_1 = arg2[4]
    int32_t esi_1 = arg2[5]
    int32_t ebx_1 = arg2[6]
    int32_t edx_2 = arg2[8]
    int32_t edx_3 = arg2[0xb]
    int32_t* edx_4 = arg2[0xc]
    int32_t edx_5 = arg2[2]
    int32_t edx_6 = *(arg1 + 0x10)
    int32_t edx_7 = *(arg1 + 0xc)
    int32_t ecx = *(arg1 + 8)
    int32_t var_20 = ebp_1
    int32_t var_1c_1 = edi_1
    int32_t var_18_1 = esi_1
    int32_t var_14_1 = ebx_1
    int32_t var_30 = 0xffffffff
    int32_t var_28_1 = edx_7
    int32_t var_24_1 = edx_6
    int32_t var_4 = 0
    int32_t var_84_1
    
    if (sub_5e7a90(&var_20, &var_30, &arg2[0x29]) != 0)
        if (edx_3 != esi_1 || edx_4 != ebx_1)
            if (edx_5 == 1)
                if (sub_5e7d90(edx_4, &var_30, edx_3) != 0)
                    goto label_5e574a
                
                int32_t* var_64_4 = edx_4
                int32_t var_68_4 = edx_3
                int32_t var_6c_2 = edx_2
                int32_t var_70_2 = edx_1
                int32_t var_74_2 = ebx_1
                int32_t var_78_2 = esi_1
                int32_t var_7c_2 = edi_1
                int32_t var_80_2 = ebp_1
                var_84_1 = 0x735d20
                goto label_5e56ad
            
            if (edx_5 != 2)
                goto label_5e574a
            
            if (sub_5e7ee0(edx_4, &var_30, edx_3) != 0)
                goto label_5e574a
            
            int32_t* var_64_6 = edx_4
            int32_t var_68_6 = edx_3
            int32_t var_6c_3 = edx_2
            int32_t var_70_3 = edx_1
            int32_t var_74_3 = ebx_1
            int32_t var_78_3 = esi_1
            int32_t var_7c_3 = edi_1
            int32_t var_80_3 = ebp_1
            var_84_1 = 0x735dc8
            goto label_5e56ad
        
    label_5e574a:
        int32_t eax_15 = 0
        int32_t var_3c_2
        
        if (ecx != 0)
            int32_t ecx_5 = var_30
            
            if (ecx_5 != 0xffffffff)
                var_3c_2 = sub_5f9f90(ecx_5)
                eax_15 = sub_5f9f40(var_30)
            else
                var_3c_2 = 0
        else
            var_3c_2 = 0
        
        int32_t var_64_7 = var_3c_2
        int32_t var_68_7 = eax_15
        int32_t var_6c_4 = sub_5f9dd0(var_30)
        int32_t var_70_4 = edx_2
        
        if (sub_5e8f80(arg1 + 0x18, edx_1).b == 0)
            int32_t* var_64_8 = edx_4
            int32_t var_68_8 = edx_3
            int32_t var_6c_5 = edx_2
            int32_t var_70_5 = edx_1
            int32_t var_74_5 = ebx_1
            int32_t var_78_4 = esi_1
            int32_t var_7c_4 = edi_1
            int32_t var_80_4 = ebp_1
            var_84_1 = 0x735e70
            goto label_5e56ad
        
        int32_t var_4_2 = 0xffffffff
        int32_t edi_3 = var_30
        
        if (edi_3 != 0xffffffff)
            sub_409390(edi_3)
        
        result.b = 1
    else
        int32_t* var_64_2 = edx_4
        int32_t var_68_2 = edx_3
        int32_t var_6c_1 = edx_2
        int32_t var_70_1 = edx_1
        int32_t var_74_1 = ebx_1
        int32_t var_78_1 = esi_1
        int32_t var_7c_1 = edi_1
        int32_t var_80_1 = ebp_1
        var_84_1 = 0x735c78
    label_5e56ad:
        sub_40da60(var_84_1)
        int32_t var_4_1 = 0xffffffff
        int32_t edi_2 = var_30
        
        if (edi_2 != 0xffffffff)
            sub_409390(edi_2)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
