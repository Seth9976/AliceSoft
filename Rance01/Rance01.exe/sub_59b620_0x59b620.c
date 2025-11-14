// 函数: sub_59b620
// 地址: 0x59b620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7136b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_c_1 = 0
int32_t ecx
int32_t edx
sub_59b9a0(&var_28, edx, ecx)
int32_t var_2c = arg1[1]
int32_t edx_1 = sub_416780(&var_2c, &var_28)
int32_t* eax_6 = *arg1
void** esi = *eax_6
int32_t eax_9

if (esi == eax_6)
label_59b6aa:
    int32_t edi_1 = var_28
    int32_t edx_3 = *(*arg2 + 0x18)
    int32_t var_30 = (var_24 - edi_1) s>> 2
    
    if (edx_3(&var_30, 1).b != 0)
        int32_t esi_1 = 0
        
        if (var_30 s> 0)
            do
                if ((*(*arg2 + 0x14))(esi_1, edi_1).b == 0)
                    goto label_59b6f2
                
                esi_1 += 1
                edi_1 += 4
            while (esi_1 s< var_30)
            
            edi_1 = var_28
        
        if (edi_1 != 0)
            int32_t var_48_4 = edi_1
            sub_6b4d5b()
        
        eax_9.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
    if (edi_1 != 0)
        int32_t var_48_1 = edi_1
        sub_6b4d5b()
        int32_t eax_10
        eax_10.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10
else
    while (true)
        char eax_8
        eax_8, edx_1 = sub_59a910(&var_28, edx_1, esi[2])
        
        if (eax_8 == 0)
        label_59b6f2:
            eax_9 = var_28
            
            if (eax_9 != 0)
                int32_t var_48_2 = eax_9
                sub_6b4d5b()
            
            break
        
        esi = *esi
        
        if (esi == *arg1)
            goto label_59b6aa

eax_9.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
