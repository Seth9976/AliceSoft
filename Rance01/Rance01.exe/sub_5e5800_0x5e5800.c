// 函数: sub_5e5800
// 地址: 0x5e5800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724568
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 0x18) == 0xffffffff)
    result.b = 0
else
    int32_t edx_1 = arg2[0xb]
    int32_t* edx_2 = arg2[0xc]
    int32_t esi_1 = arg2[5]
    int32_t ebx_1 = arg2[6]
    int32_t ebp_1 = arg2[7]
    int32_t edi_1 = arg2[8]
    int32_t edx_3 = arg2[3]
    int32_t edx_4 = arg2[4]
    int32_t edx_5 = arg2[2]
    int32_t var_20 = edx_3
    int32_t var_1c_1 = edx_4
    int32_t edx_8 = *(arg1 + 0x10)
    int32_t edx_9 = *(arg1 + 0xc)
    int32_t ecx = *(arg1 + 8)
    int32_t var_18_1 = esi_1
    int32_t var_14_1 = ebx_1
    int32_t var_30 = 0xffffffff
    int32_t var_28_1 = edx_9
    int32_t var_24_1 = edx_8
    int32_t var_4 = 0
    int32_t var_84_1
    
    if (sub_5e7a90(&var_20, &var_30, &arg2[0x29]) != 0)
        if (edx_1 != esi_1 || edx_2 != ebx_1)
            if (edx_5 != 1)
                if (edx_5 != 2)
                    goto label_5e5986
                
                if (sub_5e7ee0(edx_2, &var_30, edx_1) == 0)
                    int32_t* var_64_6 = edx_2
                    int32_t var_68_6 = edx_1
                    int32_t var_6c_3 = edi_1
                    int32_t var_70_3 = ebp_1
                    int32_t var_74_3 = ebx_1
                    int32_t var_78_3 = esi_1
                    int32_t var_7c_3 = edx_4
                    int32_t var_80_3 = edx_3
                    var_84_1 = 0x736068
                    goto label_5e58e5
            else if (sub_5e7d90(edx_2, &var_30, edx_1) == 0)
                int32_t* var_64_4 = edx_2
                int32_t var_68_4 = edx_1
                int32_t var_6c_2 = edi_1
                int32_t var_70_2 = ebp_1
                int32_t var_74_2 = ebx_1
                int32_t var_78_2 = esi_1
                int32_t var_7c_2 = edx_4
                int32_t var_80_2 = edx_3
                var_84_1 = 0x735fc0
                goto label_5e58e5
        
    label_5e5986:
        
        if (*(arg1 + 0x1c) != 0)
            int32_t eax_13 = *(arg1 + 0x18)
            
            if (eax_13 == 0xffffffff)
                goto label_5e5a31
            
            int32_t* eax_14 = sub_5f9dd0(eax_13)
            
            if (eax_14 == 0)
                goto label_5e5a31
            
            if ((*(*eax_14 + 0x28))(eax_2) == 0)
                goto label_5e5a31
            
            int32_t eax_17 = 0
            int32_t var_3c_2
            
            if (ecx != 0)
                int32_t ecx_6 = var_30
                
                if (ecx_6 != 0xffffffff)
                    var_3c_2 = sub_5f9f90(ecx_6)
                    eax_17 = sub_5f9f40(var_30)
                else
                    var_3c_2 = 0
            else
                var_3c_2 = 0
            
            int32_t var_64_7 = var_3c_2
            int32_t var_68_7 = eax_17
            int32_t var_6c_4 = sub_5f9dd0(var_30)
            int32_t var_70_4 = edi_1
            
            if (sub_5e9020(arg1 + 0x18, ebp_1).b != 0)
                goto label_5e5a97
            
            int32_t* var_64_8 = edx_2
            int32_t var_68_8 = edx_1
            int32_t var_6c_5 = edi_1
            int32_t var_70_5 = ebp_1
            int32_t var_74_5 = ebx_1
            int32_t var_78_4 = esi_1
            int32_t var_7c_4 = edx_4
            int32_t var_80_4 = edx_3
            var_84_1 = 0x736110
            goto label_5e58e5
        
    label_5e5a31:
        int32_t eax_25
        
        if (ecx != 0)
            eax_25 = var_30
        
        int32_t var_3c_3
        int32_t eax_28
        
        if (ecx == 0 || eax_25 == 0xffffffff)
            var_3c_3 = 0
            eax_28 = 0
        else
            var_3c_3 = sub_5f9f90(eax_25)
            eax_28 = sub_5f9f40(var_30)
        
        int32_t var_64_9 = var_3c_3
        int32_t var_68_9 = eax_28
        int32_t var_6c_6 = sub_5f9dd0(var_30)
        int32_t var_70_6 = edi_1
        
        if (sub_5e90c0(arg1 + 0x18, ebp_1).b == 0)
            int32_t* var_64_10 = edx_2
            int32_t var_68_10 = edx_1
            int32_t var_6c_7 = edi_1
            int32_t var_70_7 = ebp_1
            int32_t var_74_7 = ebx_1
            int32_t var_78_5 = esi_1
            int32_t var_7c_5 = edx_4
            int32_t var_80_5 = edx_3
            var_84_1 = 0x7361b8
            goto label_5e58e5
        
    label_5e5a97:
        int32_t var_4_2 = 0xffffffff
        int32_t edi_3 = var_30
        
        if (edi_3 != 0xffffffff)
            sub_409390(edi_3)
        
        result.b = 1
    else
        int32_t* var_64_2 = edx_2
        int32_t var_68_2 = edx_1
        int32_t var_6c_1 = edi_1
        int32_t var_70_1 = ebp_1
        int32_t var_74_1 = ebx_1
        int32_t var_78_1 = esi_1
        int32_t var_7c_1 = edx_4
        int32_t var_80_1 = edx_3
        var_84_1 = 0x735f18
    label_5e58e5:
        sub_40da60(var_84_1)
        int32_t var_4_1 = 0xffffffff
        int32_t edi_2 = var_30
        
        if (edi_2 != 0xffffffff)
            sub_409390(edi_2)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
