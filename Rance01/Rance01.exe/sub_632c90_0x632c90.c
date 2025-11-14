// 函数: sub_632c90
// 地址: 0x632c90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_7c
int32_t eax_2 = data_78c474 ^ &var_7c
int32_t __saved_edi
int32_t var_8c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*arg1 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** var_78 = nullptr
    int32_t var_74_1 = 0
    int32_t var_70_1 = 0
    int32_t var_c_1 = 0
    int32_t var_40_1 = 0xf
    int32_t var_44_1 = 0
    char var_54 = 0
    sub_401270(&var_54, 3, 0x7339d0)
    var_c_1.b = 1
    sub_405220(&var_54, &var_78)
    var_c_1.b = 0
    
    if (var_40_1 u>= 0x10)
        int32_t var_90_1 = var_54.d
        sub_6b4d5b()
    
    int32_t var_40_2 = 0xf
    int32_t var_44_2 = 0
    var_54 = 0
    sub_401270(&var_54, 3, 0x7339d4)
    var_c_1.b = 2
    sub_405220(&var_54, &var_78)
    var_c_1.b = 0
    
    if (var_40_2 u>= 0x10)
        int32_t var_90_2 = var_54.d
        sub_6b4d5b()
    
    int32_t var_40_3 = 0xf
    int32_t var_44_3 = 0
    var_54 = 0
    sub_401270(&var_54, 3, 0x7339d8)
    var_c_1.b = 3
    sub_405220(&var_54, &var_78)
    var_c_1.b = 0
    
    if (var_40_3 u>= 0x10)
        int32_t var_90_3 = var_54.d
        sub_6b4d5b()
    
    struct _EXCEPTION_REGISTRATION_RECORD** esi_4 = var_78
    int32_t ecx_5 = *(arg1 + 8)
    struct _EXCEPTION_REGISTRATION_RECORD** edi_4 = esi_4
    var_7c = edi_4
    
    if (esi_4 != var_74_1)
        void* ebx_1 = arg1 + 4
        void* var_68_1 = ebx_1
        
        do
            struct _EXCEPTION_REGISTRATION_RECORD* eax_6
            
            if (edi_4[5] u< 0x10)
                eax_6 = edi_4
            else
                eax_6 = *edi_4
            
            struct _EXCEPTION_REGISTRATION_RECORD* var_90_4 = eax_6
            int32_t var_94_1 = sub_401170(arg2)
            var_c_1.b = 4
            sub_401c00(&var_54, sub_4104a0("%s.%s"))
            var_c_1.b = 6
            char var_38
            int32_t var_24
            
            if (var_24 u>= 0x10)
                int32_t var_90_5 = var_38.d
                sub_6b4d5b()
            
            var_24 = 0xf
            int32_t var_28_1 = 0
            var_38 = 0
            void** eax_12 = sub_5cdae0(ebx_1, &var_54)
            void** var_60 = eax_12
            struct _EXCEPTION_REGISTRATION_RECORD* var_64
            
            if (eax_12 == *(ebx_1 + 4))
                var_64 = *(ebx_1 + 4)
                result = &var_64
            else
                int32_t ebx_2 = eax_12[7]
                void* eax_13 = &eax_12[3]
                
                if (*(eax_13 + 0x14) u>= 0x10)
                    eax_13 = *eax_13
                
                int32_t esi_5 = var_44_3
                
                if (var_44_3 u>= ebx_2)
                    esi_5 = ebx_2
                
                int32_t* edx_2 = var_54.d
                
                if (var_40_3 u< 0x10)
                    edx_2 = &var_54
                
                int32_t eax_14 = sub_402320(eax_13, edx_2, eax_13, esi_5)
                bool cond:2_1 = eax_14 s< 0
                
                if (eax_14 == 0)
                    if (var_44_3 u>= ebx_2)
                        eax_14.b = var_44_3 != ebx_2
                    else
                        eax_14 = 0xffffffff
                    
                    cond:2_1 = eax_14 s< 0
                
                esi_4 = var_78
                ebx_1 = var_68_1
                edi_4 = var_7c
                eax_14.b = cond:2_1
                
                if (eax_14.b != 0)
                    var_64 = *(ebx_1 + 4)
                    result = &var_64
                else
                    result = &var_60
            
            if (*result != ecx_5)
                if (var_40_3 u>= 0x10)
                    int32_t var_90_10 = var_54.d
                    sub_6b4d5b()
                
                int32_t var_40_4 = 0xf
                int32_t var_44_4 = 0
                var_54 = 0
                
                if (esi_4 != 0)
                    sub_405780(esi_4, var_74_1)
                    struct _EXCEPTION_REGISTRATION_RECORD** var_90_11 = esi_4
                    sub_6b4d5b()
                
                result.b = 1
                goto label_632f52
            
            var_c_1.b = 0
            
            if (var_40_3 u>= 0x10)
                int32_t var_90_8 = var_54.d
                sub_6b4d5b()
            
            edi_4 = &edi_4[7]
            var_7c = edi_4
        while (edi_4 != var_74_1)
    
    if (esi_4 != 0)
        sub_405780(esi_4, var_74_1)
        struct _EXCEPTION_REGISTRATION_RECORD** var_90_9 = esi_4
        sub_6b4d5b()

result.b = 0
label_632f52:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7c)
return result
