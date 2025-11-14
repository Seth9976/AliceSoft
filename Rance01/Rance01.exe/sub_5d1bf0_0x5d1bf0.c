// 函数: sub_5d1bf0
// 地址: 0x5d1bf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e051
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_80 = 0
int32_t result

if (*(arg1 + 0x28) == *(arg1 + 0x2c) || *(arg1 + 0x14) == 0)
    result.b = 1
else
    void* esi_1 = arg1 + 4
    
    if (sub_602830(esi_1).b == 0)
        result.b = 1
    else
        int32_t var_7c = 0
        int32_t var_78_1 = 0
        int32_t var_74_1 = 0
        int32_t var_4 = 0
        int32_t var_6c = 0xffffffff
        int32_t var_68_1 = 0
        int32_t var_64_1 = 0
        int32_t* var_9c_2 = &var_7c
        var_4.b = 1
        var_80 = 1
        char eax_5 = sub_601f80(esi_1)
        int32_t edx_1 = var_7c
        
        if (eax_5 == 0 || edx_1 == var_78_1)
            eax_5 = 1
        else
            eax_5 = 0
        
        int32_t var_4_1 = 0
        
        if (eax_5 == 0)
            var_6c = edx_1
            int32_t var_68_2 = var_78_1
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            char var_4c = 0
            var_4_1.b = 2
            
            if (sub_410070(&var_6c, &var_4c) == 0)
                goto label_5d1e5e
            
            if (sub_402680(0x7372a8, &var_4c) == 0)
                goto label_5d1e5e
            
            if (sub_5546f0(&var_6c, &var_80) == 0 || var_80 != 0)
                goto label_5d1e5e
            
            int32_t var_1c_1 = 0xf
            int32_t var_20_1 = 0
            char var_30 = 0
            var_4_1.b = 3
            char* ecx_4 = &var_30
            
            if (sub_410070(&var_6c, &var_30) == 0)
                goto label_5d1e55
            
            sub_401180(arg1 + 0x38, 0xffffffff, &var_30, 0)
            int32_t* ecx_6 = &var_6c
            uint32_t var_60
            
            if (sub_5546f0(ecx_6, &var_60) == 0)
                goto label_5d1e51
            
            if (sub_40ff00(ecx_6, &var_6c, &var_80) == 0)
                goto label_5d1e51
            
            uint32_t eax_12 = var_80
            
            if (eax_12 == 0)
                goto label_5d1e51
            
            int128_t* var_5c
            int32_t* ecx_7 = sub_413150(&var_5c, eax_12)
            int128_t* edx_3 = var_5c
            int32_t var_58
            void* edi_3 = var_58 - edx_3
            char eax_14 = sub_410150(ecx_7, edx_3, &var_6c, edi_3)
            void* eax_20
            int128_t* ecx_11
            
            if (eax_14 != 0)
                int128_t* eax_15 = *(arg1 + 0x28)
                sub_6bc670(eax_15, 0, *(arg1 + 0x2c) - eax_15)
                uint32_t eax_16 = *(arg1 + 0x20)
                uint32_t ecx_10 = var_60
                
                if (ecx_10 s< eax_16)
                    eax_16 = ecx_10
                
                ecx_11 = *(arg1 + 0x28)
                int32_t eax_18
                int32_t edx_4
                edx_4:eax_18 = sx.q(eax_16 + 7)
                eax_20 = (eax_18 + (edx_4 & 7)) s>> 3
            
            if (eax_14 == 0 || eax_20 u> *(arg1 + 0x2c) - ecx_11 || eax_20 u< edi_3)
                sub_65ab60(&var_5c)
            label_5d1e51:
                ecx_4 = &var_30
            label_5d1e55:
                sub_401110(ecx_4)
            label_5d1e5e:
                sub_401110(&var_4c)
                sub_65ab60(&var_7c)
                result.b = 0
            else
                sub_6c02a0(ecx_11, var_5c, eax_20, eax_4)
                sub_65ab60(&var_5c)
                sub_401110(&var_30)
                sub_401110(&var_4c)
                sub_65ab60(&var_7c)
                result.b = 1
        else
            if (*(esi_1 + 0x14) u>= 0x10)
                esi_1 = *esi_1
            
            void* var_9c_3 = esi_1
            sub_604c90(0x737278)
            sub_65ab60(&var_7c)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return result
