// 函数: sub_50b570
// 地址: 0x50b570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f955
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_24 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_4 = 0
struct sealengine::CLightParamList::VTable** result

if (sub_50c290(arg2, arg1, &var_24) != 0)
    int32_t* ecx_1 = var_24
    int32_t eax_9
    
    if (ecx_1 != 0)
        eax_9 = (*(*ecx_1 + 0x14))(eax_2)
    label_50b622:
        
        if (eax_9 s> 0)
            int32_t* eax_10 = operator new(0x1c)
            arg2 = eax_10
            var_4.b = 3
            struct sealengine::CLightParamList::VTable** result_1
            
            if (eax_10 == 0)
                result_1 = nullptr
            else
                result_1 = sub_4cb5b0(eax_10)
            
            var_4.b = 0
            int32_t* ecx_3 = var_24
            int32_t eax_17
            int32_t ebp_1
            int32_t edi_1
            int32_t ecx_6
            
            if (ecx_3 == 0)
                ecx_6 = var_20
                int32_t edi_3 = ecx_6 - var_1c
                int32_t edi_4 = neg.d(edi_3)
                edi_1 = sbb.d(edi_4, edi_4, edi_3 != 0) & ecx_6
                ebp_1 = var_1c - ecx_6
            label_50b6c3:
                int32_t eax_19 = ecx_6 - var_1c
                int32_t eax_20 = neg.d(eax_19)
                eax_17 = sbb.d(eax_20, eax_20, eax_19 != 0) & ecx_6
            else
                int32_t eax_13 = (*(*ecx_3 + 0x18))(eax_2)
                int32_t* ecx_4 = var_24
                edi_1 = eax_13
                
                if (ecx_4 == 0)
                    ecx_6 = var_20
                    ebp_1 = var_1c - ecx_6
                    goto label_50b6c3
                
                int32_t eax_15 = (*(*ecx_4 + 0x14))()
                int32_t* ecx_5 = var_24
                ebp_1 = eax_15
                
                if (ecx_5 == 0)
                    ecx_6 = var_20
                    goto label_50b6c3
                
                eax_17 = (*(*ecx_5 + 0x18))()
            int32_t var_2c = eax_17
            int32_t var_28_1 = ebp_1 + edi_1
            
            if (sub_4cbcd0(result_1, &var_2c) != 0)
                int32_t var_4_4 = 0xffffffff
                sub_50a970(&var_24)
                result = result_1
            else
                sub_4cb6a0(result_1)
                int32_t var_4_3 = 0xffffffff
                sub_50a970(&var_24)
                result = nullptr
        else
            int32_t var_4_2 = 0xffffffff
            sub_50a970(&var_24)
            result = nullptr
    else
        if (var_20 != var_1c)
            eax_9 = var_1c - var_20
            goto label_50b622
        
        if (var_20 == 0)
            result = nullptr
        else
            int32_t var_44_2 = var_20
            sub_6b4d5b()
            result = nullptr
else
    int32_t var_4_1 = 1
    int32_t* ecx = var_24
    
    if (ecx != 0)
        (*(*ecx + 4))(eax_2)
    
    if (var_20 != 0)
        int32_t var_44_1 = var_20
        sub_6b4d5b()
    
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
