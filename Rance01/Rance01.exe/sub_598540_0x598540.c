// 函数: sub_598540
// 地址: 0x598540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7136b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = 0
int32_t* var_24 = nullptr
int32_t var_20 = 0
int32_t var_c_1 = 0
int32_t ecx
int32_t edx
sub_598ac0(&var_28, edx, ecx)
int32_t* ebx = arg1
int32_t var_30 = ebx[1]
sub_416780(&var_30, &var_28)
int32_t* eax_6 = *ebx
int32_t* esi = *eax_6
int32_t eax_9

if (esi == eax_6)
label_5985bd:
    int32_t* eax_12 = var_24
    int32_t esi_1 = var_28
    int32_t edx_1
    edx_1.b = ebx[5].b != 0
    var_30 = edx_1
    int32_t ecx_2
    
    if (&var_30 u>= eax_12 || esi_1 u> &var_30)
        ecx_2 = var_20
        
        if (eax_12 == ecx_2)
            int32_t edx_9 = (eax_12 - esi_1) s>> 2
            
            if (edx_9 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t edi_7 = (ecx_2 - esi_1) s>> 2
            
            if (edx_9 + 1 u> edi_7)
                uint32_t eax_14 = edi_7 u>> 1
                int32_t edi_8
                
                if (0x3fffffff - eax_14 u>= edi_7)
                    edi_8 = edi_7 + eax_14
                else
                    edi_8 = 0
                
                if (edi_8 u< edx_9 + 1)
                    edi_8 = edx_9 + 1
                
                sub_6b0560(&var_28, edi_8)
                ecx_2 = var_20
                eax_12 = var_24
                esi_1 = var_28
        
        if (eax_12 != 0)
            *eax_12 = var_30
    else
        ecx_2 = var_20
        int32_t ebx_2 = (&var_30 - esi_1) s>> 2
        
        if (eax_12 == ecx_2)
            int32_t edx_4 = (eax_12 - esi_1) s>> 2
            
            if (edx_4 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t edi_3 = (ecx_2 - esi_1) s>> 2
            
            if (edx_4 + 1 u> edi_3)
                uint32_t eax_11 = edi_3 u>> 1
                int32_t edi_4
                
                if (0x3fffffff - eax_11 u>= edi_3)
                    edi_4 = edi_3 + eax_11
                else
                    edi_4 = 0
                
                if (edi_4 u< edx_4 + 1)
                    edi_4 = edx_4 + 1
                
                sub_6b0560(&var_28, edi_4)
                ecx_2 = var_20
                eax_12 = var_24
                esi_1 = var_28
        
        if (eax_12 != 0)
            *eax_12 = *(esi_1 + (ebx_2 << 2))
        
        ebx = arg1
    
    void* eax_17 = &eax_12[1]
    
    if (&ebx[6] u>= eax_17 || esi_1 u> &ebx[6])
        if (eax_17 == ecx_2)
            int32_t edx_18 = (eax_17 - esi_1) s>> 2
            
            if (edx_18 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_12 = (ecx_2 - esi_1) s>> 2
            
            if (edx_18 + 1 u> ecx_12)
                uint32_t ecx_13 = ecx_12 u>> 1
                int32_t eax_19
                
                if (0x3fffffff - ecx_13 u>= ecx_12)
                    eax_19 = ecx_12 + ecx_13
                else
                    eax_19 = 0
                
                if (eax_19 u< edx_18 + 1)
                    eax_19 = edx_18 + 1
                
                sub_6b0560(&var_28, eax_19)
                esi_1 = var_28
        
        if (eax_17 != 0)
            *eax_17 = ebx[6]
    else
        int32_t edi_11 = (&ebx[6] - esi_1) s>> 2
        
        if (eax_17 == ecx_2)
            int32_t edx_14 = (eax_17 - esi_1) s>> 2
            
            if (edx_14 u> 0x3ffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            int32_t ecx_8 = (ecx_2 - esi_1) s>> 2
            
            if (edx_14 + 1 u> ecx_8)
                uint32_t ecx_9 = ecx_8 u>> 1
                int32_t eax_16
                
                if (0x3fffffff - ecx_9 u>= ecx_8)
                    eax_16 = ecx_8 + ecx_9
                else
                    eax_16 = 0
                
                if (eax_16 u< edx_14 + 1)
                    eax_16 = edx_14 + 1
                
                sub_6b0560(&var_28, eax_16)
                esi_1 = var_28
        
        if (eax_17 != 0)
            *eax_17 = *(esi_1 + (edi_11 << 2))
    
    void* var_24_2 = eax_17 + 4
    int32_t var_2c = (eax_17 + 4 - esi_1) s>> 2
    
    if ((*(*arg2 + 0x18))(&var_2c, 1).b != 0)
        int32_t edi_12 = 0
        
        if (var_2c s> 0)
            int32_t ebx_3 = esi_1
            
            do
                if ((*(*arg2 + 0x14))(edi_12, ebx_3).b == 0)
                    goto label_5987e1
                
                edi_12 += 1
                ebx_3 += 4
            while (edi_12 s< var_2c)
        
        if (esi_1 != 0)
            int32_t var_48_9 = esi_1
            sub_6b4d5b()
        
        eax_9.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
label_5987e1:
    
    if (esi_1 != 0)
        int32_t var_48_7 = esi_1
        sub_6b4d5b()
        int32_t eax_25
        eax_25.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_25
else
    while (true)
        if (sub_597f50(&esi[2], &var_28, &esi[2]) == 0)
            eax_9 = var_28
            
            if (eax_9 != 0)
                int32_t var_48_2 = eax_9
                sub_6b4d5b()
            
            break
        
        esi = *esi
        
        if (esi == *ebx)
            goto label_5985bd

eax_9.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
