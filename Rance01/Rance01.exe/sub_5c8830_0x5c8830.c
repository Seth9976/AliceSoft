// 函数: sub_5c8830
// 地址: 0x5c8830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_716768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t var_1c = data_78c474 ^ &var_74
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg2 s<= 0 || arg2 s>= *(arg1 + 0x24))
    result.b = 0
else
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    int32_t eax_5 = arg2 << 4
    int32_t var_c_1 = 0
    int32_t edx_1 = *(arg1 + 0x14)
    uint32_t esi_1 = zx.d(*(eax_5 + edx_1))
    uint32_t var_70 = zx.d(*(eax_5 + edx_1 + 2))
    
    if (esi_1 != 0)
        result = sub_5c8a50(arg1, esi_1 - 1)
    
    if (esi_1 == 0 || result.b == 0)
        int32_t ebx_1 = *(arg1 + 0x14)
        *(ebx_1 + eax_5 + 8) = 0
        *(ebx_1 + eax_5 + 0xc) = 1
        
        if (var_2c_1 u>= 0x10)
            int32_t var_88_2 = var_40.d
            sub_6b4d5b()
        
        result.b = 0
    else
        void* esi_5 = (esi_1 - 1) * 0x30 + *(arg1 + 4)
        sub_401180(&var_40, 0xffffffff, esi_5 + 4, 0)
        int32_t ecx_4 = *(*(esi_5 + 0x20) + (var_70 << 2))
        void* eax_8 = *(arg1 + 0x14)
        uint32_t esi_6
        int32_t edi_2
        
        if (*(eax_5 + eax_8 + 0xc) == 0)
            int32_t var_6c = 0xffffffff
            int32_t var_68_1 = 0
            int32_t var_64_1 = 0
            int32_t* esi_8
            
            if (sub_601f00(&var_6c, &var_40) != 0)
                esi_8 = &var_6c
                
                if (sub_6026c0(ecx_4, &var_6c) == 0)
                    goto label_5c897f
                
                void var_24
                
                if (sub_6021f0(esi_8, 8, &var_24) == 0)
                    goto label_5c897b
                
                void* var_58 = &var_24
                int32_t* var_54_1 = &var_1c
                uint32_t var_4c
                sub_40ff00(sub_40ff00(&var_1c, &var_58, &var_4c), &var_58, &var_70)
                edi_2 = var_4c + ecx_4
                uint32_t edx_6 = var_70
                *(eax_5 + *(arg1 + 0x14) + 4) = edi_2
                int32_t ebx_2 = *(arg1 + 0x14)
                *(ebx_2 + eax_5 + 8) = edx_6
                *(ebx_2 + eax_5 + 0xc) = 1
                sub_601e80(esi_8)
                esi_6 = var_70
                goto label_5c8a12
            
        label_5c897b:
            esi_8 = &var_6c
        label_5c897f:
            sub_601e80(esi_8)
            sub_401110(&var_40)
            result.b = 0
        else
            esi_6 = *(eax_8 + eax_5 + 8)
            edi_2 = *(eax_8 + eax_5 + 4)
        label_5c8a12:
            char* eax_14 = var_40.d
            
            if (var_2c_1 u< 0x10)
                eax_14 = &var_40
            
            (*(*arg3 + 4))(eax_14)
            *arg4 = edi_2
            *arg5 = esi_6
            sub_401110(&var_40)
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(var_1c ^ &var_74)
return result
