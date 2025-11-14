// 函数: sub_6c0759
// 地址: 0x6c0759
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0x20
int32_t var_8 = 0x771328
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_38 = ebx
int32_t esi
int32_t var_3c = esi
int32_t edi
int32_t var_40 = edi
int32_t eax_17 = data_78c474
int32_t var_8_3 = 0x771328 ^ eax_17
int32_t __saved_ebp
int32_t var_44 = eax_17 ^ &__saved_ebp
int32_t* var_1c = &var_44
void* const var_48_5 = &data_6c0765
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esp = &var_44
uint32_t* edi_1 = nullptr
int32_t var_20 = 0
int32_t var_2c = 0
int32_t result
int32_t eax_6
int32_t eax_8
void* esi_1

if (arg1 s<= 0xb)
    if (arg1 != 0xb)
        int32_t var_48 = 2
        esp = &var_44
        
        if (arg1 == 2)
            esi_1 = &data_797ab0
            eax_6 = data_797ab0
            goto label_6c0803
        
        if (arg1 == 4)
            goto label_6c078c
        
        if (arg1 == 6)
            goto label_6c07e1
        
        if (arg1 != 8)
            goto label_6c07d4
        
        goto label_6c078c
    
label_6c078c:
    uint32_t* eax_5
    void* ecx_1
    eax_5, ecx_1 = sub_6bb95f()
    edi_1 = eax_5
    uint32_t* var_2c_1 = edi_1
    
    if (edi_1 != 0)
        int32_t var_48_1 = edi_1[0x17]
        esp = &var_44
        esi_1 = sub_6c0715(eax_5, arg1, ecx_1) + 8
        eax_8 = *esi_1
        goto label_6c0814
    
    result = 0xffffffff
else if (arg1 == 0xf)
    esi_1 = &data_797abc
    eax_6 = data_797abc
label_6c0803:
    var_20 = 1
    eax_8 = DecodePointer(eax_6)
    esp = &var_44
label_6c0814:
    result = 0
    
    if (eax_8 != 1)
        if (eax_8 == 0)
            _quick_exit(3)
            noreturn
        
        if (var_20 != 0)
            sub_6bf5de(0)
        
        int32_t var_8_1 = 0
        
        if (arg1 != 8 && arg1 != 0xb && arg1 != 4)
            goto label_6c0867
        
        int32_t var_30 = edi_1[0x18]
        edi_1[0x18] = 0
        int32_t var_34
        
        if (arg1 != 8)
            *esi_1 = sub_6bb7eb()
        else
            var_34 = edi_1[0x19]
            edi_1[0x19] = 0x8c
        label_6c0867:
            
            if (arg1 != 8)
                *esi_1 = sub_6bb7eb()
            else
                for (int32_t i = 3; i s< 0xc; i += 1)
                    *(i * 0xc + edi_1[0x17] + 8) = 0
        
        int32_t var_8_2 = 0xfffffffe
        sub_6c08c0(&__saved_ebp)
        
        if (arg1 != 8)
            eax_8(arg1)
        else
            int32_t var_48_3 = edi_1[0x19]
            eax_8(arg1)
        
        esp = &var_40
        
        if (arg1 == 8 || arg1 == 0xb || arg1 == 4)
            edi_1[0x18] = var_30
            
            if (arg1 == 8)
                edi_1[0x19] = var_34
        
        result = 0
else
    if (arg1 == 0x15)
        esi_1 = &data_797ab4
        eax_6 = data_797ab4
        goto label_6c0803
    
    if (arg1 == 0x16)
    label_6c07e1:
        esi_1 = &data_797ab8
        eax_6 = data_797ab8
        goto label_6c0803
    
label_6c07d4:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
*(esp - 4) = &data_6c08fb
fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
esp[3]
int32_t __saved_ebp_2 = *(esp - 4)
return result
